/*
 * Harbour 3.2.0dev (r2011030937)
 * MinGW GNU C 7.3 (32-bit)
 * Generated C source from "C:\Users\Ronaldo\Documents\GitHub\controle_acesso\code\tela_troca_senha_btnconfirmarsenha_action.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TELA_TROCA_SENHA_BTNCONFIRMARSENHA_ACTION );
HB_FUNC_EXTERN( GETPROPERTY );
HB_FUNC_EXTERN( CONECTABANCO );
HB_FUNC_EXTERN( LEDADOSUSUARIO );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( MSGYESNO );
HB_FUNC_EXTERN( ALTERASENHA );
HB_FUNC_EXTERN( MYSQL_DESTROY );
HB_FUNC_EXTERN( DOMETHOD );
HB_FUNC_EXTERN( ERRORSYS );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TELA_TROCA_SENHA_BTNCONFIRMARSENHA_ACTION )
{ "TELA_TROCA_SENHA_BTNCONFIRMARSENHA_ACTION", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TELA_TROCA_SENHA_BTNCONFIRMARSENHA_ACTION )}, NULL },
{ "GETPROPERTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETPROPERTY )}, NULL },
{ "CONECTABANCO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONECTABANCO )}, NULL },
{ "LEDADOSUSUARIO", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEDADOSUSUARIO )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "PCUSERCODE", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "MSGYESNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGYESNO )}, NULL },
{ "ALTERASENHA", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALTERASENHA )}, NULL },
{ "MYSQL_DESTROY", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSQL_DESTROY )}, NULL },
{ "DOMETHOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( DOMETHOD )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TELA_TROCA_SENHA_BTNCONFIRMARSENHA_ACTION, "C:\\Users\\Ronaldo\\Documents\\GitHub\\controle_acesso\\code\\tela_troca_senha_btnconfirmarsenha_action.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TELA_TROCA_SENHA_BTNCONFIRMARSENHA_ACTION
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TELA_TROCA_SENHA_BTNCONFIRMARSENHA_ACTION )
   #include "hbiniseg.h"
#endif

HB_FUNC( TELA_TROCA_SENHA_BTNCONFIRMARSENHA_ACTION )
{
	static const HB_BYTE pcode[] =
	{
		13,5,0,36,7,0,106,1,0,80,1,36,8,0,
		106,1,0,80,2,36,9,0,106,1,0,80,3,36,
		10,0,4,0,0,80,4,36,11,0,9,80,5,36,
		13,0,176,1,0,106,17,116,101,108,97,95,116,114,
		111,99,97,95,115,101,110,104,97,0,106,13,116,98,
		83,101,110,104,97,65,116,117,97,108,0,106,6,86,
		97,108,117,101,0,12,3,80,1,36,14,0,176,1,
		0,106,17,116,101,108,97,95,116,114,111,99,97,95,
		115,101,110,104,97,0,106,12,116,98,78,111,118,97,
		83,101,110,104,97,0,106,6,86,97,108,117,101,0,
		12,3,80,2,36,15,0,176,1,0,106,17,116,101,
		108,97,95,116,114,111,99,97,95,115,101,110,104,97,
		0,106,13,116,98,78,111,118,97,83,101,110,104,97,
		50,0,106,6,86,97,108,117,101,0,12,3,80,3,
		36,17,0,176,2,0,12,0,29,93,1,36,19,0,
		176,3,0,176,4,0,109,5,0,12,1,12,1,80,
		4,36,20,0,95,1,95,4,92,3,1,69,28,104,
		36,21,0,176,6,0,106,66,83,101,110,104,97,32,
		97,116,117,97,108,32,100,105,103,105,116,97,100,97,
		32,110,195,163,111,32,99,111,114,114,101,115,112,111,
		110,100,101,32,195,160,32,115,101,110,104,97,32,97,
		116,117,97,108,32,100,111,32,117,115,117,195,161,114,
		105,111,33,0,106,21,65,108,116,101,114,97,195,167,
		195,163,111,32,100,101,32,83,101,110,104,97,0,20,
		2,26,208,0,36,24,0,95,2,95,3,8,28,86,
		36,25,0,176,7,0,106,31,67,111,110,102,105,114,
		109,97,32,97,108,116,101,114,97,195,167,195,163,111,
		32,100,101,32,115,101,110,104,97,63,0,106,21,65,
		108,116,101,114,97,195,167,195,163,111,32,100,101,32,
		83,101,110,104,97,0,12,2,28,12,36,26,0,176,
		8,0,95,2,20,1,36,28,0,120,80,5,25,113,
		36,30,0,176,6,0,106,78,83,101,103,117,110,100,
		97,32,110,111,118,97,32,115,101,110,104,97,32,100,
		105,103,105,116,97,100,97,32,110,195,163,111,32,99,
		111,114,114,101,115,112,111,110,100,101,32,195,160,32,
		112,114,105,109,101,105,114,97,32,110,111,118,97,32,
		115,101,110,104,97,32,100,105,103,105,116,97,100,97,
		33,0,106,21,65,108,116,101,114,97,195,167,195,163,
		111,32,100,101,32,83,101,110,104,97,0,20,2,36,
		34,0,176,9,0,20,0,36,37,0,95,5,28,39,
		36,38,0,176,10,0,106,17,116,101,108,97,95,116,
		114,111,99,97,95,115,101,110,104,97,0,106,8,82,
		69,76,69,65,83,69,0,20,2,36,40,0,100,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

