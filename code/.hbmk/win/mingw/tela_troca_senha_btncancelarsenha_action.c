/*
 * Harbour 3.2.0dev (r2011030937)
 * MinGW GNU C 7.3 (32-bit)
 * Generated C source from "C:\Users\Ronaldo\Documents\GitHub\controle_acesso\code\tela_troca_senha_btncancelarsenha_action.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TELA_TROCA_SENHA_BTNCANCELARSENHA_ACTION );
HB_FUNC_EXTERN( DOMETHOD );
HB_FUNC_EXTERN( ERRORSYS );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TELA_TROCA_SENHA_BTNCANCELARSENHA_ACTION )
{ "TELA_TROCA_SENHA_BTNCANCELARSENHA_ACTION", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TELA_TROCA_SENHA_BTNCANCELARSENHA_ACTION )}, NULL },
{ "DOMETHOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( DOMETHOD )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TELA_TROCA_SENHA_BTNCANCELARSENHA_ACTION, "C:\\Users\\Ronaldo\\Documents\\GitHub\\controle_acesso\\code\\tela_troca_senha_btncancelarsenha_action.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TELA_TROCA_SENHA_BTNCANCELARSENHA_ACTION
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TELA_TROCA_SENHA_BTNCANCELARSENHA_ACTION )
   #include "hbiniseg.h"
#endif

HB_FUNC( TELA_TROCA_SENHA_BTNCANCELARSENHA_ACTION )
{
	static const HB_BYTE pcode[] =
	{
		36,7,0,176,1,0,106,17,116,101,108,97,95,116,
		114,111,99,97,95,115,101,110,104,97,0,106,8,82,
		69,76,69,65,83,69,0,20,2,36,9,0,100,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

