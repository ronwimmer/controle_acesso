/*
 * Harbour 3.2.0dev (r2011030937)
 * MinGW GNU C 7.3 (32-bit)
 * Generated C source from "C:\Users\Ronaldo\Documents\GitHub\controle_acesso\code\listausuarios_btnsairlistausuarios_action.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( LISTAUSUARIOS_BTNSAIRLISTAUSUARIOS_ACTION );
HB_FUNC_EXTERN( DOMETHOD );
HB_FUNC_EXTERN( ERRORSYS );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_LISTAUSUARIOS_BTNSAIRLISTAUSUARIOS_ACTION )
{ "LISTAUSUARIOS_BTNSAIRLISTAUSUARIOS_ACTION", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( LISTAUSUARIOS_BTNSAIRLISTAUSUARIOS_ACTION )}, NULL },
{ "DOMETHOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( DOMETHOD )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_LISTAUSUARIOS_BTNSAIRLISTAUSUARIOS_ACTION, "C:\\Users\\Ronaldo\\Documents\\GitHub\\controle_acesso\\code\\listausuarios_btnsairlistausuarios_action.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_LISTAUSUARIOS_BTNSAIRLISTAUSUARIOS_ACTION
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_LISTAUSUARIOS_BTNSAIRLISTAUSUARIOS_ACTION )
   #include "hbiniseg.h"
#endif

HB_FUNC( LISTAUSUARIOS_BTNSAIRLISTAUSUARIOS_ACTION )
{
	static const HB_BYTE pcode[] =
	{
		36,6,0,176,1,0,106,14,108,105,115,116,97,117,
		115,117,97,114,105,111,115,0,106,8,82,69,76,69,
		65,83,69,0,20,2,36,7,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

