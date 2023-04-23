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

        doMethod("tela_login","RELEASE")
    else
        pnTry++
    end if

    // quantidade máxima de erros = 2
    // portanto quantidade máxima de tentativas = 3
    if pnTry >= 3
        BloqueiaUsuario(cUserName)
        MsgStop("Quantidade de tentativas excedida! Usuário bloqueado! Contate o administrador do sistema!", "Identificação de Usuário")
        doMethod("tela_login","RELEASE")
    endif

Return Nil
