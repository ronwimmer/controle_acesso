#include "hmg.ch"

declare window listausuarios

Function listausuarios_form_oninit

    if ConectaBanco()
        MostraUsuarios()
    else
        doMethod("listausuarios","RELEASE")
    endif

Return Nil
