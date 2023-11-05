#include <hmg.ch>

declare window configdb

function mostra_configdb()
    if plAdmin
        if IsWindowActive(configdb)
            doMethod("configdb","MINIMIZE")
            doMethod("configdb","RESTORE")
            doMethod("configdb","SETFOCUS")
        else
            load window configdb
            activate window configdb
        end if
    else
        MsgStop("Acesso não permitido!", "Controle de Acesso")
    end if
return NIL
