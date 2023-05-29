#include "hmg.ch"

declare window configdb

Function configdb_btntestarconexao_action

    local cServidor, cBancoDados, cNomeUsuario, cSenha

    cServidor    := getProperty("configdb","txtHostName","value")
    cBancoDados  := getProperty("configdb","txtDataBase","value")
    cNomeUsuario := getProperty("configdb","txtUsername","value")
    cSenha       := getProperty("configdb","txtPassWord","value")

    if MySQL_Connect(cServidor,cNomeUsuario,cSenha)
        if MySQL_Database_Connect(cBancoDados)
                MsgInfo("Conexão com servidor bem sucedida!", "SQL")
        else
                MsgStop("Banco de dados [" + cBancoDados + "] não localizado!", "SQL")
        end if
        MySQL_Destroy()
    else
        MsgStop("Servidor [" + cServidor + "] não conectado!", "SQL")
    end if

Return Nil
