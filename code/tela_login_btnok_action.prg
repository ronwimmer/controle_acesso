#include <hmg.ch>

declare window tela_login

Function tela_login_btnok_action

    local cUserName := ""
    local cPassword := ""
    local cUserCode := 0
    local lAdmin    := .F.

    cUserName := getProperty("tela_login","lblUsuario","value")
    cPassword := getProperty("tela_login","lblSenha","value")

    if ValidaUsuario(cUserName, cPassword, @cUserCode, @lAdmin)
        pcUserLogin := cUserName
        pcUserCode  := cUserCode
        plAdmin     := lAdmin
    end if

    doMethod("tela_login","RELEASE")

Return Nil
