#include <hmg.ch>

declare window configdb

function mostra_configdb()
    if IsWindowActive(configdb)
        doMethod("configdb","MINIMIZE")
        doMethod("configdb","RESTORE")
        doMethod("configdb","SETFOCUS")
    else
        load window configdb
        activate window configdb
    end if
return NIL
