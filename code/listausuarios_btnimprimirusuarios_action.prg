#include "hmg.ch"
#include "hmg_hpdf.ch"

declare window listausuarios

Function listausuarios_btnimprimirusuarios_action

    local lSucesso     := .F.
    local nEspacamento := 5
    local aUsuarios    := {}
    local aLinha       := {}
    local nPag, nLin, nI

    SELECT HPDFDOC "lista_usuarios.pdf" TO lSucesso ORIENTATION HPDF_ORIENT_PORTRAIT PAPERSIZE HPDF_PAPER_A4

    if lSucesso

        SET HPDFDOC ENCODING TO "ISO8859-16"

        SET HPDFINFO AUTHOR TO pcUserLogin
        SET HPDFINFO CREATOR TO pcUserLogin
        SET HPDFINFO TITLE TO "Lista de Usuarios"
        SET HPDFINFO SUBJECT TO "Lista de Usuarios do Sistema"
        SET HPDFINFO KEYWORDS TO "usuarios, relatorio"
        SET HPDFINFO DATECREATED TO date() TIME time()
        SET HPDFINFO DATEMODIFIED TO date() TIME time()

        aUsuarios := LeUsuarios()

        START HPDFDOC
            START HPDFPAGE

                nPag := 0
                Cabec( @nPag, @nLin, nEspacamento)

                for nI := 1 to len(aUsuarios)
                    aLinha := aUsuarios[nI]
                    @ nLin, 00 HPDFPRINT "     " + strzero(aLinha[1],3) + " " + padr(aLinha[2], 46) + "  " + aLinha[4] + "   " + aLinha[5] + "   " + aLinha[6] + "  " + substr(aLinha[7],9,2) + "/" + substr(aLinha[7],6,2) + "/" + substr(aLinha[7],3,2) + " " + substr(aLinha[8],9,2) + "/" + substr(aLinha[8],6,2) + "/" + substr(aLinha[8],3,2) + " " FONT "Consolas"
                    nLin += nEspacamento

                    if (nLin >= 280)
                        END HPDFPAGE
                        nLin := 0
                        START HPDFPAGE
                        Cabec( @nPag, @nLin, nEspacamento)
                    end if
                next
            END HPDFPAGE
        END HPDFDOC
        Execute File "lista_usuarios.pdf"
    else
        MsgStop("Não foi possível criar o relatório!", "Geração do Relatório")
    end if

Return Nil

static function Cabec( nPag, nLin, nEspacamento )
    local cMargem := space(5)

    nLin := 12
    nPag++

    @ nLin, 00 HPDFPRINT cMargem + space(71) + "Pag.: " + strzero(nPag,3) FONT "Consolas"
    nLin += nEspacamento
    @ nLin, 105 HPDFPRINT "Lista de Usuarios" SIZE 24 BOLD CENTER FONT "Consolas"
    nLin += nEspacamento
    nLin += nEspacamento
    nLin += nEspacamento

    @ nLin, 00 HPDFPRINT "     " + replicate("-", 80) FONT "Consolas"
    nLin += nEspacamento
    @ nLin, 00 HPDFPRINT "     COD NOME                                           ADM BLQ EXC CADASTRO ATUALIZ." FONT "Consolas"
    nLin += nEspacamento
    @ nLin, 00 HPDFPRINT "     " + replicate("-", 80) FONT "Consolas"
    nLin += nEspacamento

return NIL