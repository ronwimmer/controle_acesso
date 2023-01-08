#include "hmg.ch"

declare window configdb

Function configdb_btnsalvarconfiguracao_action

    pcHostName := getProperty("configdb","txtHostName","value")
    pcDataBase := getProperty("configdb","txtDataBase","value")
    pcUserName := getProperty("configdb","txtUsername","value")
    pcPassWord := getProperty("configdb","txtPassWord","value")

    ini_salva()

    doMethod("configdb","RELEASE")

Return Nil
