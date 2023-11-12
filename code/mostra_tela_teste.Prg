#include <hmg.ch>

declare window tela_teste

function mostra_tela_teste()

    local cAcesso
    local lConsulta, lInclusao, lAlteracao, lExclusao, lRelatorio

    cAcesso := leAcessoRotinaUsuario("101")

    lConsulta  := (substr(cAcesso,1,1)=="S")
    lInclusao  := (substr(cAcesso,2,1)=="S")
    lAlteracao := (substr(cAcesso,3,1)=="S")
    lExclusao  := (substr(cAcesso,4,1)=="S")
    lRelatorio := (substr(cAcesso,5,1)=="S")

    if plAdmin .OR. lConsulta
        if IsWindowActive(tela_teste)
            doMethod("tela_teste","MINIMIZE")
            doMethod("tela_teste","RESTORE")
            doMethod("tela_teste","SETFOCUS")
        else
            load window tela_teste

            SetProperty("tela_teste", "lblUsuario", "Value", pcUserLogin)
            SetProperty("tela_teste", "lblConsulta", "Value", iif(lConsulta,"Sim","Não"))
            SetProperty("tela_teste", "lblInclusao", "Value", iif(lInclusao,"Sim","Não"))
            SetProperty("tela_teste", "lblAlteracao", "Value", iif(lAlteracao,"Sim","Não"))
            SetProperty("tela_teste", "lblExclusao", "Value", iif(lExclusao,"Sim","Não"))
            SetProperty("tela_teste", "lblRelatorio", "Value", iif(lRelatorio,"Sim","Não"))

            activate window tela_teste
        end if
    else
        MsgStop("Acesso não permitido!", "Controle de Acesso")
    end if
return NIL
