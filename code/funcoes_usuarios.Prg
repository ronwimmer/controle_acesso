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

function ValidaUsuario(cUserName, cPassword, cUserCode)

    local lResult := .F.
    local cQuery  := "SELECT codusuario FROM usuario WHERE nome = '" + cUserName + "' AND senha = '" + cPassword + "'"
    local aItems  := {}

    if ConectaBanco()
        aItems := MySQL_ExecQuery(oServer, cQuery)
    endif

    if len( aItems ) > 0
        lResult   := .T.
        cUserCode := aItems[1][1]
    endif

return lResult
