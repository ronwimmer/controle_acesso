#include <hmg.ch>

declare window tela_sobre

function mostra_tela_sobre()
    if IsWindowActive(tela_sobre)
        doMethod("tela_sobre","MINIMIZE")
        doMethod("tela_sobre","RESTORE")
        doMethod("tela_sobre","SETFOCUS")
    else
        load window tela_sobre
        activate window tela_sobre
    end if
return NIL
