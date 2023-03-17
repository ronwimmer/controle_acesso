#include "hmg.ch"

declare window tela_login

Function tela_login_btnok_action

    local cUserName := ""
    local cPassword := ""
    local cUserCode := 0

    cUserName := getProperty("tela_login","lblUsuario","value")
    cPassword := getProperty("tela_login","lblSenha","value")

    if ValidaUsuario(cUserName, cPassword, @cUserCode)
        pcUserLogin := cUserName
        pcUserCode  := cUserCode
    else
        MsgStop("Usuário/Senha incorreto!", "Identificação de Usuário")
    end if

    doMethod("tela_login","RELEASE")

Return Nil
