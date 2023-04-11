#include <hmg.ch>

Function MostraUsuarios()

    local cQuery := "SELECT codusuario, nome, administrador, bloqueado, excluido FROM usuario"
    local aItems := {}
    local nI := 0

    aItems := MySQL_ExecQuery( oServer, cQuery )

    doMethod("listausuarios", "gridListaUsuarios", "DeleteAllItems")
    if len(aItems) > 0
        for nI := 1 to len(aItems)
            doMethod("listausuarios", "gridListaUsuarios", "AddItem", aClone(aItems[nI]))
        next
    endif

return NIL

function ValidaUsuario(cUserName, cPassword, cUserCode, lAdmin)

    local lResult := .F.
    local cQuery  := "SELECT codusuario, administrador, bloqueado, excluido FROM usuario WHERE nome = '" + cUserName + "' AND senha = '" + cPassword + "'"
    local aItems  := {}

    if ConectaBanco()
        aItems := MySQL_ExecQuery(oServer, cQuery)
    endif

    if len( aItems ) > 0
        if (aItems[1][3] == "S")
            MsgStop("Usuário teve seu acesso bloqueado! Contate o administrador do sistema!", "Identificação de Usuário")
        elseif (aItems[1][4] == "S")
            MsgStop("Usuário/Senha incorreto!", "Identificação de Usuário")
        else
            lResult   := .T.
            cUserCode := aItems[1][1]
            lAdmin := (aItems[1][2] == "S")
        endif
    else
        MsgStop("Usuário/Senha incorreto!", "Identificação de Usuário")
    endif

return lResult
