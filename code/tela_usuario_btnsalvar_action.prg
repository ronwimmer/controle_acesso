#include "hmg.ch"

declare window tela_usuario

Function tela_usuario_btnsalvar_action

    local cBotaoAcao
    local cCodUsuario
    local cAcao := "X"

    cBotaoAcao  := getProperty("tela_usuario", "btnSalvar", "Caption")
    cCodUsuario := getProperty("tela_usuario", "tbCodigoUsuario", "Value")

    if cBotaoAcao == "Excluir"
        cAcao := "E"
    elseif cBotaoAcao == "Salvar"
        cAcao := iif(cCodUsuario == "", "I", "A")
    end if

    MsgStop("Ação: "+cAcao, "Identificação de Ação")
    
Return Nil
