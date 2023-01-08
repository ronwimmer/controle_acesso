#include "hmg.ch"

declare window configdb

Function configdb_form_oninit

    setProperty("configdb","txtHostName","value",pcHostName)
    setProperty("configdb","txtDataBase","value",pcDataBase)
    setProperty("configdb","txtUsername","value",pcUserName)
    setProperty("configdb","txtPassWord","value",pcPassWord)

Return Nil
