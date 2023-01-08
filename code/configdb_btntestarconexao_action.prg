#include "hmg.ch"

declare window configdb

Function configdb_btntestarconexao_action

    local cHostname, cDatabase, cUsername, cPassword

    cHostname := getProperty("configdb","txtHostName","value")
    cDatabase := getProperty("configdb","txtDataBase","value")
    cUsername := getProperty("configdb","txtUsername","value")
    cPassword := getProperty("configdb","txtPassWord","value")

    if MySQL_Connect(cHostname,cUsername,cPassword)
        if MySQL_Database_Connect(cDatabase)
                MsgInfo("Conexão com servidor bem sucedida!", "SQL")
        else
                MsgStop("Banco de dados [" + cDatabase + "] não localizado!", "SQL")
        end if
        MySQL_Destroy()
    else
        MsgStop("Servidor [" + cHostname + "] não conectado!", "SQL")
    end if

Return Nil
