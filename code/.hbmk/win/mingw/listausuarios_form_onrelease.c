/*
 * Harbour 3.2.0dev (r2011030937)
 * MinGW GNU C 7.3 (32-bit)
 * Generated C source from "C:\Users\Ronaldo\Documents\GitHub\controle_acesso\code\listausuarios_form_onrelease.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( LISTAUSUARIOS_FORM_ONRELEASE );
HB_FUNC_EXTERN( MYSQL_DESTROY );
HB_FUNC_EXTERN( ERRORSYS );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_LISTAUSUARIOS_FORM_ONRELEASE )
{ "LISTAUSUARIOS_FORM_ONRELEASE", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( LISTAUSUARIOS_FORM_ONRELEASE )}, NULL },
{ "MYSQL_DESTROY", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSQL_DESTROY )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_LISTAUSUARIOS_FORM_ONRELEASE, "C:\\Users\\Ronaldo\\Documents\\GitHub\\controle_acesso\\code\\listausuarios_form_onrelease.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_LISTAUSUARIOS_FORM_ONRELEASE
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_LISTAUSUARIOS_FORM_ONRELEASE )
   #include "hbiniseg.h"
#endif

HB_FUNC( LISTAUSUARIOS_FORM_ONRELEASE )
{
	static const HB_BYTE pcode[] =
	{
		36,7,0,176,1,0,20,0,36,9,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

