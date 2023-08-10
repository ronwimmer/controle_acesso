#include <hmg.ch>

declare window tela_usuario

function mostraTelaUsuario(cAcao)

    local nItem           := 0
    local aSelecionado    := {}
    local aDados          := {}
    local aAcessos        := {}
    local aAcessosItem    := {}
    local aAcessosDetalhe := {}
    local lAbreTela       := .F.
    local nI
    local cCodRotina
    local cNomeRotina
    local cAcessos

    if cAcao == "I"
        lAbreTela := .T.
    else
        nItem := getProperty("listausuarios","gridListaUsuarios","Value")

        if nItem > 0
            aSelecionado := getProperty("listausuarios","gridListaUsuarios","Item",nItem)
            aDados       := leDadosUsuario(aSelecionado[1])
            aAcessos     := leRotinasPorUsuario(aSelecionado[1])

            for nI := 1 to len(aAcessos)
                aAcessosItem := aAcessos[nI]
                cCodRotina   := aAcessosItem[1]
                cNomeRotina  := aAcessosItem[2]
                cAcessos     := aAcessosItem[3]
                if cAcessos == ""
                    cAcessos := "NNNNN"
                end if

                aadd( aAcessosDetalhe, {cCodRotina, cNomeRotina, substr(cAcessos,1,1), substr(cAcessos,2,1), substr(cAcessos,3,1), substr(cAcessos,4,1), substr(cAcessos,5,1)})
            next

            lAbreTela    := .T.
        else
            MsgStop("Favor selecionar um usuário da lista","Atenção")
        end if
    end if

    if lAbreTela
        if IsWindowActive(tela_usuario)
            doMethod("tela_usuario","MINIMIZE")
            doMethod("tela_usuario","RESTORE")
            doMethod("tela_usuario","SETFOCUS")
        else
            load window tela_usuario

            if cAcao == "C"
                setProperty("tela_usuario","Title","Cadastro de Usuários - Consulta")
                setProperty("tela_usuario","btnCancelar","Caption","Voltar")
                setProperty("tela_usuario","btnSalvar","Visible",.F.)
            elseif cAcao == "E"
                setProperty("tela_usuario","Title","Cadastro de Usuários - Exclusão")
                setProperty("tela_usuario","btnSalvar","Caption","Excluir")
            elseif cAcao == "I"
                setProperty("tela_usuario","Title","Cadastro de Usuários - Inclusão")
            elseif cAcao == "A"
                setProperty("tela_usuario","Title","Cadastro de Usuários - Alteração")
            end if

            if cAcao != "I"
                setProperty("tela_usuario","tbCodigoUsuario","Value",str(aDados[1]))
                setProperty("tela_usuario","tbNomeUsuario","Value",aDados[2])
                setProperty("tela_usuario","tbSenhaUsuario","Value",aDados[3])
                setProperty("tela_usuario","cbAdministrador","Value",(aDados[4]=="S"))
                setProperty("tela_usuario","cbBloqueado","Value",(aDados[5]=="S"))
                setProperty("tela_usuario","cbExcluido","Value",(aDados[6]=="S"))
                setProperty("tela_usuario","tbDataCadastro","Value",aDados[7])
                setProperty("tela_usuario","tbUltimaAlteracao","Value",aDados[8])

                doMethod("tela_usuario", "gAcessosRotinas", "DeleteAllItems")
                for nI := 1 to len(aAcessosDetalhe)
                    doMethod("tela_usuario", "gAcessosRotinas", "AddItem", aClone(aAcessosDetalhe[nI]))
                next
            end if

            activate window tela_usuario
        end if
    end if

return NIL
