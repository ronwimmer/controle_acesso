#include <hmg.ch>

declare window tela_usuario

function mostraTelaUsuario(cAcao)

    local nItem        := 0
    local aSelecionado := {}
    local aDados       := {}
    local lAbreTela    := .F.

    if cAcao == "I"
        lAbreTela := .T.
    else
        nItem := getProperty("listausuarios","gridListaUsuarios","Value")

        if nItem > 0
            aSelecionado := getProperty("listausuarios","gridListaUsuarios","Item",nItem)
            aDados       := leDadosUsuario(aSelecionado[1])
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

            setProperty("tela_usuario","tbCodigoUsuario","Value",str(aDados[1]))
            setProperty("tela_usuario","tbNomeUsuario","Value",aDados[2])
            setProperty("tela_usuario","tbSenhaUsuario","Value",aDados[3])
            setProperty("tela_usuario","cbAdministrador","Value",(aDados[4]=="S"))
            setProperty("tela_usuario","cbBloqueado","Value",(aDados[5]=="S"))
            setProperty("tela_usuario","cbExcluido","Value",(aDados[6]=="S"))

            activate window tela_usuario
        end if
    end if

return NIL
