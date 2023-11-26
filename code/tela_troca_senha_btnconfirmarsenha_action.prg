#include "hmg.ch"

declare window tela_troca_senha

Function tela_troca_senha_btnconfirmarsenha_action

    local cSenhaAtual := ""
    local cNovaSenha1 := ""
    local cNovaSenha2 := ""
    local aResultado  := {}
    local lResultado  := .F.

    cSenhaAtual := GetProperty("tela_troca_senha", "tbSenhaAtual", "Value")
    cNovaSenha1 := GetProperty("tela_troca_senha", "tbNovaSenha", "Value")
    cNovaSenha2 := GetProperty("tela_troca_senha", "tbNovaSenha2", "Value")

    if ConectaBanco()
        // verifica se digitou a senha atual corretamente
        aResultado := leDadosUsuario(str(pcUserCode))
        if cSenhaAtual != aResultado[3]
            MsgStop("Senha atual digitada não corresponde à senha atual do usuário!", "Alteração de Senha")
        else
            // verificar se a segunda senha nova digitada é igual à primeira senha nova digitada
            if cNovaSenha1 == cNovaSenha2
                if MsgYesNo("Confirma alteração de senha?", "Alteração de Senha")
                    alteraSenha(cNovaSenha1)
                end if
                lResultado := .T.
            else
                MsgStop("Segunda nova senha digitada não corresponde à primeira nova senha digitada!", "Alteração de Senha")
            end if
        end if

        MySQL_Destroy()
    end if

    if lResultado
        doMethod("tela_troca_senha", "RELEASE")
    end if
Return Nil
