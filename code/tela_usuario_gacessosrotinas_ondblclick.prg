#include "hmg.ch"

declare window tela_usuario

Function tela_usuario_gacessosrotinas_ondblclick

    local nItem    := 0
    local aSelecionado := {}
    local lAcesso1 := .F.
    local lAcesso2 := .F.
    local lAcesso3 := .F.
    local lAcesso4 := .F.
    local lAcesso5 := .F.

    if getProperty("tela_usuario", "btnSalvar", "Caption") == "Salvar" .and. ;
       getProperty("tela_usuario", "btnSalvar", "Visible") == .T.

       nItem        := getProperty("tela_usuario", "gAcessosRotinas", "Value")
       aSelecionado := getProperty("tela_usuario", "gAcessosRotinas", "Item", nItem)

       lAcesso1 := MsgYesNo("[" + aSelecionado[1] + "][" + aSelecionado[2] + "] - Consulta", "Permitido?", iif(aSelecionado[3]=="S",.F.,.T.))
       lAcesso2 := MsgYesNo("[" + aSelecionado[1] + "][" + aSelecionado[2] + "] - Inclusão", "Permitido?", iif(aSelecionado[4]=="S",.F.,.T.))
       lAcesso3 := MsgYesNo("[" + aSelecionado[1] + "][" + aSelecionado[2] + "] - Alteração", "Permitido?", iif(aSelecionado[5]=="S",.F.,.T.))
       lAcesso4 := MsgYesNo("[" + aSelecionado[1] + "][" + aSelecionado[2] + "] - Exclusão", "Permitido?", iif(aSelecionado[6]=="S",.F.,.T.))
       lAcesso5 := MsgYesNo("[" + aSelecionado[1] + "][" + aSelecionado[2] + "] - Impressão (R)", "Permitido?", iif(aSelecionado[7]=="S",.F.,.T.))

       aSelecionado[3] := iif(lAcesso1, "S", "N")
       aSelecionado[4] := iif(lAcesso2, "S", "N")
       aSelecionado[5] := iif(lAcesso3, "S", "N")
       aSelecionado[6] := iif(lAcesso4, "S", "N")
       aSelecionado[7] := iif(lAcesso5, "S", "N")

       setProperty("tela_usuario", "gAcessosRotinas", "Item", nItem, aSelecionado)
    end if

Return Nil
