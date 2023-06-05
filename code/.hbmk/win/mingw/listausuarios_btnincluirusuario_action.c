/*
 * Harbour 3.2.0dev (r2011030937)
 * MinGW GNU C 7.3 (32-bit)
 * Generated C source from "C:\Users\Ronaldo\Documents\GitHub\controle_acesso\code\listausuarios_btnincluirusuario_action.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( LISTAUSUARIOS_BTNINCLUIRUSUARIO_ACTION );
HB_FUNC_EXTERN( MOSTRATELAUSUARIO );
HB_FUNC_EXTERN( ERRORSYS );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_LISTAUSUARIOS_BTNINCLUIRUSUARIO_ACTION )
{ "LISTAUSUARIOS_BTNINCLUIRUSUARIO_ACTION", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( LISTAUSUARIOS_BTNINCLUIRUSUARIO_ACTION )}, NULL },
{ "MOSTRATELAUSUARIO", {HB_FS_PUBLIC}, {HB_FUNCNAME( MOSTRATELAUSUARIO )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_LISTAUSUARIOS_BTNINCLUIRUSUARIO_ACTION, "C:\\Users\\Ronaldo\\Documents\\GitHub\\controle_acesso\\code\\listausuarios_btnincluirusuario_action.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_LISTAUSUARIOS_BTNINCLUIRUSUARIO_ACTION
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_LISTAUSUARIOS_BTNINCLUIRUSUARIO_ACTION )
   #include "hbiniseg.h"
#endif

HB_FUNC( LISTAUSUARIOS_BTNINCLUIRUSUARIO_ACTION )
{
	static const HB_BYTE pcode[] =
	{
		36,7,0,176,1,0,106,2,73,0,20,1,36,9,
		0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

