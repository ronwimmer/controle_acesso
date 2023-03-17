#include <hmg.ch>

declare window tela_login

function mostra_tela_login()
    if IsWindowActive(tela_login)
        doMethod("tela_login","MINIMIZE")
        doMethod("tela_login","RESTORE")
        doMethod("tela_login","SETFOCUS")
    else
        load window tela_login
        activate window tela_login
    end if
return NIL
