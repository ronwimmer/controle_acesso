#include <hmg.ch>

//***********************************************
// Função principal do sistema
//
Function Main

        set century on
        set date british

        public oServer := NIL
        public pcFileIni := GetStartUpFolder() + "\sistema.ini"
        public pcHostName := ""
        public pcDataBase := ""
        public pcUserName := ""
        public pcPassWord := ""

        ini_le()   // lê arquivo .ini de configuração

        if empty(pcHostName)
                // abre tela para efetuar configuração do acesso ao banco de dados
                mostra_configdb()

                ini_le()

                if MySQL_Connect(pcHostName,pcUserName,pcPassWord)
                        if MySQL_Database_Connect(pcDataBase)
                                MsgInfo("Conexão com servidor bem sucedida!", "SQL")
                        else
                                MsgStop("Banco de dados [" + pcDataBase + "] não localizado!", "SQL")
                        end if
                        MySQL_Destroy()
                else
                        MsgStop("Servidor [" + pcHostName + "] não conectado!", "SQL")
                end if
        endif

        Load Window Main
        Main.Center
        Main.Activate

Return
