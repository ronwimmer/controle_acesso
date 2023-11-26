#include <hmg.ch>

declare window tela_troca_senha

function mostra_tela_troca_senha()
    if IsWindowActive(tela_troca_senha)
        doMethod("tela_troca_senha","MINIMIZE")
        doMethod("tela_troca_senha","RESTORE")
        doMethod("tela_troca_senha","SETFOCUS")
    else
        load window tela_troca_senha
        activate window tela_troca_senha
    end if
return NIL
