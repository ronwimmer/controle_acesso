#include "hmg.ch"

declare window tela_login

Function tela_login_btncancelar_action

    pcUserLogin := ""
    pcUserCode  := 0

    doMethod("tela_login","RELEASE")

Return Nil
