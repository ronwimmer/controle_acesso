#include <hmg.ch>

Function MostraUsuarios()

    local cConsulta := "SELECT codusuario, nome, administrador, bloqueado, excluido FROM usuario"
    local aItens    := {}
    local nI        := 0

    aItens := MySQL_ExecQuery( oServer, cConsulta )

    doMethod("listausuarios", "gridListaUsuarios", "DeleteAllItems")
    if len(aItens) > 0
        for nI := 1 to len(aItens)
            doMethod("listausuarios", "gridListaUsuarios", "AddItem", aClone(aItens[nI]))
        next
    endif

return NIL

function ValidaUsuario(cUserName, cPassword, cUserCode, lAdmin)

    local lResult   := .F.
    local cConsulta := "SELECT codusuario, administrador, bloqueado, excluido FROM usuario WHERE nome = '" + cUserName + "' AND senha = '" + cPassword + "'"
    local aItens    := {}

    if ConectaBanco()
        aItens := MySQL_ExecQuery(oServer, cConsulta)
    endif

    if len( aItens ) > 0
        if (aItens[1][3] == "S")
            MsgStop("Usuário teve seu acesso bloqueado! Contate o administrador do sistema!", "Identificação de Usuário")
        elseif (aItens[1][4] == "S")
            MsgStop("Usuário/Senha incorreto!", "Identificação de Usuário")
        else
            lResult   := .T.
            cUserCode := aItens[1][1]
            lAdmin    := (aItens[1][2] == "S")
        endif
    else
        MsgStop("Usuário/Senha incorreto!", "Identificação de Usuário")
    endif

return lResult

function BloqueiaUsuario(cUserName)

    local cConsulta := "UPDATE usuario SET bloqueado = 'S' WHERE nome = '" + cUserName + "'"
    local lResult   := .F.

    if ConectaBanco()
        lResult := MySQL_Exec(oServer, cConsulta)
    endif

return lResult
