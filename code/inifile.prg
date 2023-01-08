#include <hmg.ch>

*************************************************
* Leitura do arquivo de configuração .INI
*
function ini_le()

    if (!file(pcFileIni))
        ini_salva()
    end if

    begin ini file pcFileIni
        get pcHostName section "server" entry "hostname"
        get pcDataBase section "server" entry "database"
        get pcUserName section "server" entry "username"
        get pcPassWord section "server" entry "password"
    end ini

return NIL

*************************************************
* Gravação do arquivo de configuração .INI
*
function ini_salva()

    begin ini file pcFileIni
        set section "server" entry "hostname" to pcHostName
        set section "server" entry "database" to pcDataBase
        set section "server" entry "username" to pcUserName
        set section "server" entry "password" to pcPassWord
    end ini

return NIL
