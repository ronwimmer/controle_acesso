#include <hmg.ch>

Function MostraUsuarios()

    local cConsulta := "SELECT codusuario, nome, administrador, bloqueado, excluido FROM usuario"
    local aItens    := {}
    local nI        := 0

    aItens := MySQL_ExecQuery( oServer, cConsulta )

    doMethod("listausuarios", "gridListaUsuarios", "DeleteAllItems")
    if len(aItens) > 0
        for nI := 1 to len(aItens)
            doMethod("listausuarios", "gridListaUsuarios", "AddItem", aClone(aItens[nI]))
        next
    endif

return NIL

function ValidaUsuario(cUserName, cPassword, cUserCode, lAdmin)

    local lResult   := .F.
    local cConsulta := "SELECT codusuario, administrador, bloqueado, excluido FROM usuario WHERE nome = '" + cUserName + "' AND senha = '" + cPassword + "'"
    local aItens    := {}

    if ConectaBanco()
        aItens := MySQL_ExecQuery(oServer, cConsulta)
    endif

    if len( aItens ) > 0
        if (aItens[1][3] == "S")
            MsgStop("Usuário teve seu acesso bloqueado! Contate o administrador do sistema!", "Identificação de Usuário")
        elseif (aItens[1][4] == "S")
            MsgStop("Usuário/Senha incorreto!", "Identificação de Usuário")
        else
            lResult   := .T.
            cUserCode := aItens[1][1]
            lAdmin    := (aItens[1][2] == "S")
        endif
    else
        MsgStop("Usuário/Senha incorreto!", "Identificação de Usuário")
    endif

return lResult

function BloqueiaUsuario(cUserName)

    local cConsulta := "UPDATE usuario SET bloqueado = 'S' WHERE nome = '" + cUserName + "'"
    local lResult   := .F.

    if ConectaBanco()
        lResult := MySQL_Exec(oServer, cConsulta)
    endif

return lResult

function leDadosUsuario(cCodUsuario)

    local aResultado := {}
    local cConsulta  := "SELECT codusuario, nome, senha, administrador, bloqueado, excluido, datacadastro, dataatualizacao FROM usuario WHERE codusuario = " + alltrim(cCodUsuario)
    local aItems     := {}

    aItems := MySQL_ExecQuery(oServer, cConsulta)
    aResultado := aItems[1]
    
return aResultado

function leRotinasPorUsuario(cCodUsuario)

    local aResultado := {}
    local cConsulta  := ""
    local aItems     := {}

    cConsulta := "SELECT rotina.codrotina, rotina.rotina, "
    cConsulta += "(SELECT acesso.acesso FROM acesso "
    cConsulta += " WHERE rotina.codrotina = acesso.codrotina AND acesso.codusuario = " + alltrim(cCodUsuario) + ") AS acessousuario "
    cConsulta += "FROM rotina"

    aResultado := MySQL_ExecQuery(oServer, cConsulta)

return aResultado

function leRotinas()

    local aResultado := {}
    local cConsulta  := ""

    cConsulta  := "SELECT codrotina, rotina FROM rotina"
    aResultado := MySQL_ExecQuery(oServer, cConsulta)

return aResultado

function incluiUsuario( aDados, aAcessos )

    local lResultado := .F.
    local cConsulta  := ""
    local nAcessos   := 0
    local aAcesso    := {}
    local aResultado := {}
    local cCodUsuario
    local nI := 0

    // verificando se o usuário existe
    cConsulta  := "SELECT codusuario FROM usuario WHERE nome = '" + aDados[1] + "'"
    aResultado := MySQL_ExecQuery(oServer, cConsulta)

    if len(aResultado) > 0
        MsgStop("Usuário já existe!", "Inclusão de Usuário")
    else
        // gravando dados
        cConsulta  := "INSERT INTO usuario (nome, senha, administrador, bloqueado, excluido) "
        cConsulta  += "VALUES ('" + aDados[1] + "', '" + aDados[2] + "', '" + aDados[3] + "', '" + aDados[4] + "', '" + aDados[5] + "')"
        lResultado := MySQL_Exec(oServer, cConsulta)

        if lResultado
            cConsulta   := "SELECT codusuario FROM usuario WHERE nome = '" + aDados[1] + "'"
            aResultado  := MySQL_ExecQuery(oServer, cConsulta)
            cCodUsuario := aResultado[1][1]

            nAcessos    := len(aAcessos)
            for nI := 1 to nAcessos
                aAcesso    := aAcessos[nI]
                cConsulta  := "INSERT INTO acesso (codusuario, codrotina, acesso) "
                cConsulta  += "VALUES (" + str(cCodUsuario) + ", " + aAcesso[1] + ", '" + aAcesso[3] + aAcesso[4] + aAcesso[5] + aAcesso[6] + aAcesso[7] + "')"
                lResultado := MySQL_Exec(oServer, cConsulta)
            next
        end if
    end if

    if lResultado
        MsgInfo("Usuário incluído com sucesso", "Inclusão de Usuário")
        MostraUsuarios()
    end if

return lResultado

function alteraUsuario( cCodUsuario, aDados, aAcessos )

    local lResultado := .F.
    local cConsulta  := ""
    local nAcessos   := 0
    local aAcesso    := {}
    local nI         := 0

    // gravando dados
    cConsulta  := "UPDATE usuario SET "
    cConsulta  += "senha = '" + aDados[2] + "', "
    cConsulta  += "administrador = '" + aDados[3] + "', "
    cConsulta  += "bloqueado = '" + aDados[4] + "', "
    cConsulta  += "excluido = '" + aDados[5] + "' "
    cConsulta  += "WHERE codusuario = " + cCodUsuario
    lResultado := MySQL_Exec(oServer, cConsulta)

    if lResultado
        cConsulta   := "DELETE FROM acesso WHERE codusuario = " + cCodUsuario
        lResultado  := MySQL_Exec(oServer, cConsulta)

        nAcessos    := len(aAcessos)
        for nI := 1 to nAcessos
            aAcesso    := aAcessos[nI]
            cConsulta  := "INSERT INTO acesso (codusuario, codrotina, acesso) "
            cConsulta  += "VALUES (" + cCodUsuario + ", " + aAcesso[1] + ", '" + aAcesso[3] + aAcesso[4] + aAcesso[5] + aAcesso[6] + aAcesso[7] + "')"
            lResultado := MySQL_Exec(oServer, cConsulta)
        next
    end if

    if lResultado
        MsgInfo("Usuário alterado com sucesso", "Alteração de Usuário")
        MostraUsuarios()
    end if

return lResultado

function excluiUsuario( cCodUsuario )

    local lResultado := .F.
    local cConsulta  := ""
    local nAcessos   := 0
    local aAcesso    := {}
    local nI         := 0

    // gravando dados
    cConsulta  := "UPDATE usuario SET "
    cConsulta  += "excluido = 'S' "
    cConsulta  += "WHERE codusuario = " + cCodUsuario
    lResultado := MySQL_Exec(oServer, cConsulta)

    if lResultado
        MsgInfo("Usuário excluído com sucesso", "Exclusão de Usuário")
        MostraUsuarios()
    end if

return lResultado

function leUsuarios()

    local cConsulta := "SELECT codusuario, nome, senha, administrador, bloqueado, excluido, datacadastro, dataatualizacao FROM usuario"
    local aItens    := {}

    aItens := MySQL_ExecQuery( oServer, cConsulta )

return aItens

function leAcessoRotinaUsuario(cCodRotina)

    local aResultado := {}
    local cConsulta  := ""
    local cRetorno   := "NNNNN"

    cConsulta := "SELECT acesso FROM acesso "
    cConsulta += "WHERE codrotina = " + alltrim(cCodRotina) + " AND codusuario = " + alltrim(str(pcUserCode)) + " "

    if ConectaBanco()
        aResultado := MySQL_ExecQuery(oServer, cConsulta)
        if ! empty(aResultado)
            cRetorno := aResultado[1][1]
        end if
    end if

return cRetorno // "XXXXX" (CIAER)

function alteraSenha( cNovaSenha )

    local lResultado := .F.
    local cConsulta  := ""

    // gravando dados
    cConsulta  := "UPDATE usuario SET "
    cConsulta  += "senha = '" + alltrim(cNovaSenha) + "' "
    cConsulta  += "WHERE codusuario = " + alltrim(str(pcUserCode))
    lResultado := MySQL_Exec(oServer, cConsulta)

    if lResultado
        MsgInfo("Senha alterada com sucesso!", "Alteração de Senha")
    else
        MsgInfo("Senha não alterada!", "Alteração de Senha")
    end if

return lResultado
