#include <hmg.ch>

declare window listausuarios

function mostra_lista_usuarios()
    if IsWindowActive(listausuarios)
        doMethod("listausuarios","MINIMIZE")
        doMethod("listausuarios","RESTORE")
        doMethod("listausuarios","SETFOCUS")
    else
        load window listausuarios
        activate window listausuarios
    end if
return NIL
