/*
 * Harbour 3.2.0dev (r2011030937)
 * MinGW GNU C 7.3 (32-bit)
 * Generated C source from "C:\Users\Ronaldo\Documents\GitHub\controle_acesso\code\Main.Prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( MAIN );
HB_FUNC_EXTERN( __SETCENTURY );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MVPUBLIC );
HB_FUNC_EXTERN( GETSTARTUPFOLDER );
HB_FUNC_EXTERN( INI_LE );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( MOSTRA_CONFIGDB );
HB_FUNC_EXTERN( MYSQL_CONNECT );
HB_FUNC_EXTERN( MYSQL_DATABASE_CONNECT );
HB_FUNC_EXTERN( MSGINFO );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( MYSQL_DESTROY );
HB_FUNC_EXTERN( MOSTRA_TELA_LOGIN );
HB_FUNC_EXTERN( _DEFINEWINDOW );
HB_FUNC_EXTERN( MAIN_FORM_ONRELEASE );
HB_FUNC_EXTERN( _DEFINEMAINMENU );
HB_FUNC_EXTERN( _DEFINEMENUPOPUP );
HB_FUNC_EXTERN( _DEFINEMENUITEM );
HB_FUNC_EXTERN( MOSTRA_LISTA_USUARIOS );
HB_FUNC_EXTERN( _ENDMENUPOPUP );
HB_FUNC_EXTERN( _ENDMENU );
HB_FUNC_EXTERN( _STARTSTATUSBAR );
HB_FUNC_EXTERN( _DEFINESTATUSBARITEM );
HB_FUNC_EXTERN( _SETSTATUSKEYBRD );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( LOWER );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( RIGHT );
HB_FUNC_EXTERN( _SETSTATUSCLOCK );
HB_FUNC_EXTERN( _ENDSTATUSBAR );
HB_FUNC_EXTERN( _ENDWINDOW );
HB_FUNC_EXTERN( DOMETHOD );
HB_FUNC( CONECTABANCO );
HB_FUNC_EXTERN( ERRORSYS );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MAIN )
{ "MAIN", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( MAIN )}, NULL },
{ "__SETCENTURY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETCENTURY )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "OSERVER", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "__MVPUBLIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPUBLIC )}, NULL },
{ "PCFILEINI", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "GETSTARTUPFOLDER", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETSTARTUPFOLDER )}, NULL },
{ "PCHOSTNAME", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "PCDATABASE", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "PCUSERNAME", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "PCPASSWORD", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "PCUSERLOGIN", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "PCUSERCODE", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "PLADMIN", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "PNTRY", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "INI_LE", {HB_FS_PUBLIC}, {HB_FUNCNAME( INI_LE )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "MOSTRA_CONFIGDB", {HB_FS_PUBLIC}, {HB_FUNCNAME( MOSTRA_CONFIGDB )}, NULL },
{ "MYSQL_CONNECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSQL_CONNECT )}, NULL },
{ "MYSQL_DATABASE_CONNECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSQL_DATABASE_CONNECT )}, NULL },
{ "MSGINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGINFO )}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "MYSQL_DESTROY", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSQL_DESTROY )}, NULL },
{ "MOSTRA_TELA_LOGIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MOSTRA_TELA_LOGIN )}, NULL },
{ "_HMG_SYSDATA", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "_DEFINEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( _DEFINEWINDOW )}, NULL },
{ "MAIN_FORM_ONRELEASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAIN_FORM_ONRELEASE )}, NULL },
{ "_DEFINEMAINMENU", {HB_FS_PUBLIC}, {HB_FUNCNAME( _DEFINEMAINMENU )}, NULL },
{ "_DEFINEMENUPOPUP", {HB_FS_PUBLIC}, {HB_FUNCNAME( _DEFINEMENUPOPUP )}, NULL },
{ "_DEFINEMENUITEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( _DEFINEMENUITEM )}, NULL },
{ "MOSTRA_LISTA_USUARIOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( MOSTRA_LISTA_USUARIOS )}, NULL },
{ "_ENDMENUPOPUP", {HB_FS_PUBLIC}, {HB_FUNCNAME( _ENDMENUPOPUP )}, NULL },
{ "_ENDMENU", {HB_FS_PUBLIC}, {HB_FUNCNAME( _ENDMENU )}, NULL },
{ "_STARTSTATUSBAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( _STARTSTATUSBAR )}, NULL },
{ "_DEFINESTATUSBARITEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( _DEFINESTATUSBARITEM )}, NULL },
{ "_SETSTATUSKEYBRD", {HB_FS_PUBLIC}, {HB_FUNCNAME( _SETSTATUSKEYBRD )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "LOWER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LOWER )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "RIGHT", {HB_FS_PUBLIC}, {HB_FUNCNAME( RIGHT )}, NULL },
{ "_SETSTATUSCLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( _SETSTATUSCLOCK )}, NULL },
{ "_ENDSTATUSBAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( _ENDSTATUSBAR )}, NULL },
{ "_ENDWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( _ENDWINDOW )}, NULL },
{ "DOMETHOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( DOMETHOD )}, NULL },
{ "CONECTABANCO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CONECTABANCO )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_MAIN, "C:\\Users\\Ronaldo\\Documents\\GitHub\\controle_acesso\\code\\Main.Prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_MAIN
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_MAIN )
   #include "hbiniseg.h"
#endif

HB_FUNC( MAIN )
{
	static const HB_BYTE pcode[] =
	{
		36,8,0,176,1,0,106,3,111,110,0,20,1,36,
		9,0,176,2,0,92,4,176,1,0,12,0,28,17,
		106,11,100,100,47,109,109,47,121,121,121,121,0,25,
		13,106,9,100,100,47,109,109,47,121,121,0,20,2,
		36,11,0,100,176,4,0,108,3,20,1,81,3,0,
		36,12,0,176,6,0,12,0,106,13,92,115,105,115,
		116,101,109,97,46,105,110,105,0,72,176,4,0,108,
		5,20,1,81,5,0,36,13,0,106,1,0,176,4,
		0,108,7,20,1,81,7,0,36,14,0,106,1,0,
		176,4,0,108,8,20,1,81,8,0,36,15,0,106,
		1,0,176,4,0,108,9,20,1,81,9,0,36,16,
		0,106,1,0,176,4,0,108,10,20,1,81,10,0,
		36,18,0,106,1,0,176,4,0,108,11,20,1,81,
		11,0,36,19,0,121,176,4,0,108,12,20,1,81,
		12,0,36,20,0,9,176,4,0,108,13,20,1,81,
		13,0,36,22,0,121,176,4,0,108,14,20,1,81,
		14,0,36,24,0,176,15,0,20,0,36,26,0,176,
		16,0,109,7,0,12,1,29,227,0,36,28,0,176,
		17,0,20,0,36,30,0,176,15,0,20,0,36,32,
		0,176,18,0,109,7,0,109,9,0,109,10,0,12,
		3,29,139,0,36,33,0,176,19,0,109,8,0,12,
		1,28,56,36,34,0,176,20,0,106,36,67,111,110,
		101,120,195,163,111,32,99,111,109,32,115,101,114,118,
		105,100,111,114,32,98,101,109,32,115,117,99,101,100,
		105,100,97,33,0,106,4,83,81,76,0,20,2,25,
		61,36,36,0,176,21,0,106,17,66,97,110,99,111,
		32,100,101,32,100,97,100,111,115,32,91,0,109,8,
		0,72,106,19,93,32,110,195,163,111,32,108,111,99,
		97,108,105,122,97,100,111,33,0,72,106,4,83,81,
		76,0,20,2,36,38,0,176,22,0,20,0,25,54,
		36,40,0,176,21,0,106,11,83,101,114,118,105,100,
		111,114,32,91,0,109,7,0,72,106,18,93,32,110,
		195,163,111,32,99,111,110,101,99,116,97,100,111,33,
		0,72,106,4,83,81,76,0,20,2,36,44,0,176,
		23,0,20,0,36,46,0,176,16,0,109,11,0,12,
		1,32,110,2,36,47,0,106,5,77,97,105,110,0,
		98,24,0,93,214,0,2,36,4,0,176,25,0,100,
		106,10,83,105,115,116,101,109,97,32,88,0,93,57,
		1,93,148,0,93,30,4,93,69,2,9,9,9,9,
		9,9,106,1,0,90,4,100,6,90,8,176,26,0,
		12,0,6,90,4,100,6,90,4,100,6,90,4,100,
		6,90,4,100,6,100,90,4,100,6,9,9,120,100,
		9,100,100,100,100,90,4,100,6,90,4,100,6,90,
		4,100,6,100,100,90,4,100,6,90,4,100,6,90,
		4,100,6,90,4,100,6,90,4,100,6,90,4,100,
		6,9,90,4,100,6,90,4,100,6,100,9,90,4,
		100,6,100,100,100,100,100,100,100,100,9,20,56,36,
		6,0,176,27,0,20,0,36,7,0,176,28,0,106,
		6,85,116,101,105,115,0,100,20,2,36,8,0,176,
		29,0,106,10,85,115,117,195,161,114,105,111,115,0,
		90,8,176,30,0,12,0,6,100,100,9,9,100,20,
		7,36,9,0,176,29,0,106,18,67,111,110,102,105,
		103,117,114,97,195,167,195,163,111,32,68,66,0,90,
		8,176,17,0,12,0,6,100,100,9,9,100,20,7,
		36,10,0,176,31,0,20,0,36,11,0,176,32,0,
		20,0,36,13,0,176,33,0,100,106,6,65,114,105,
		97,108,0,92,9,9,9,9,9,9,20,8,36,14,
		0,176,34,0,106,13,38,112,99,85,115,101,114,76,
		111,103,105,110,0,47,100,100,100,100,100,20,6,36,
		15,0,176,35,0,98,24,0,93,223,0,1,100,100,
		100,100,20,5,36,16,0,176,34,0,176,36,0,176,
		37,0,12,0,12,1,176,38,0,176,39,0,176,2,
		0,92,4,12,1,92,4,12,2,12,1,106,5,121,
		121,121,121,0,8,31,31,176,38,0,176,40,0,176,
		2,0,92,4,12,1,92,4,12,2,12,1,106,5,
		121,121,121,121,0,8,28,6,92,90,25,4,92,70,
		100,100,100,100,20,6,36,17,0,176,41,0,98,24,
		0,93,223,0,1,100,100,100,100,20,5,36,18,0,
		176,42,0,98,24,0,93,212,0,1,98,24,0,93,
		143,0,1,98,24,0,93,144,0,1,98,24,0,93,
		145,0,1,98,24,0,93,148,0,1,98,24,0,93,
		147,0,1,98,24,0,93,146,0,1,98,24,0,93,
		213,0,1,98,24,0,93,165,0,1,98,24,0,93,
		16,1,1,98,24,0,93,17,1,1,98,24,0,93,
		18,1,1,98,24,0,93,19,1,1,98,24,0,93,
		20,1,1,20,14,36,20,0,176,43,0,20,0,36,
		48,0,176,44,0,106,5,77,97,105,110,0,106,7,
		67,101,110,116,101,114,0,20,2,36,49,0,176,44,
		0,106,5,77,97,105,110,0,106,9,65,99,116,105,
		118,97,116,101,0,20,2,36,52,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CONECTABANCO )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,55,0,9,80,1,36,57,0,176,18,
		0,109,7,0,109,9,0,109,10,0,12,3,28,83,
		36,58,0,176,19,0,109,8,0,12,1,28,10,36,
		59,0,120,80,1,25,114,36,61,0,176,21,0,106,
		17,66,97,110,99,111,32,100,101,32,68,97,100,111,
		115,32,91,0,109,8,0,72,106,18,93,32,110,195,
		163,111,32,99,111,110,101,99,116,97,100,111,33,0,
		72,106,4,83,81,76,0,20,2,25,54,36,64,0,
		176,21,0,106,11,83,101,114,118,105,100,111,114,32,
		91,0,109,7,0,72,106,18,93,32,110,195,163,111,
		32,99,111,110,101,99,116,97,100,111,33,0,72,106,
		4,83,81,76,0,20,2,36,67,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

