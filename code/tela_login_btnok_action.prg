#include <hmg.ch>

declare window tela_login

Function tela_login_btnok_action

    local cNomeUsuario   := ""
    local cSenha         := ""
    local cCodigoUsuario := 0
    local lAdministrador := .F.

    cNomeUsuario := getProperty("tela_login","lblUsuario","value")
    cSenha       := getProperty("tela_login","lblSenha","value")

    if ValidaUsuario(cNomeUsuario, cSenha, @cCodigoUsuario, @lAdministrador)
        pcUserLogin := cNomeUsuario
        pcUserCode  := cCodigoUsuario
        plAdmin     := lAdministrador

        doMethod("tela_login","RELEASE")
    else
        pnTry++
    end if

    // quantidade máxima de erros = 2
    // portanto quantidade máxima de tentativas = 3
    if pnTry >= 3
        BloqueiaUsuario(cNomeUsuario)
        MsgStop("Quantidade de tentativas excedida! Usuário bloqueado! Contate o administrador do sistema!", "Identificação de Usuário")
        doMethod("tela_login","RELEASE")
    endif

Return Nil
