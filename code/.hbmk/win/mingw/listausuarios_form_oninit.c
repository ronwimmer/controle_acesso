/*
 * Harbour 3.2.0dev (r2011030937)
 * MinGW GNU C 7.3 (32-bit)
 * Generated C source from "C:\Users\Ronaldo\Documents\GitHub\controle_acesso\code\listausuarios_form_oninit.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( LISTAUSUARIOS_FORM_ONINIT );
HB_FUNC_EXTERN( CONECTABANCO );
HB_FUNC_EXTERN( MOSTRAUSUARIOS );
HB_FUNC_EXTERN( DOMETHOD );
HB_FUNC_EXTERN( ERRORSYS );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_LISTAUSUARIOS_FORM_ONINIT )
{ "LISTAUSUARIOS_FORM_ONINIT", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( LISTAUSUARIOS_FORM_ONINIT )}, NULL },
{ "CONECTABANCO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONECTABANCO )}, NULL },
{ "MOSTRAUSUARIOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( MOSTRAUSUARIOS )}, NULL },
{ "DOMETHOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( DOMETHOD )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_LISTAUSUARIOS_FORM_ONINIT, "C:\\Users\\Ronaldo\\Documents\\GitHub\\controle_acesso\\code\\listausuarios_form_oninit.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_LISTAUSUARIOS_FORM_ONINIT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_LISTAUSUARIOS_FORM_ONINIT )
   #include "hbiniseg.h"
#endif

HB_FUNC( LISTAUSUARIOS_FORM_ONINIT )
{
	static const HB_BYTE pcode[] =
	{
		36,7,0,176,1,0,12,0,28,12,36,8,0,176,
		2,0,20,0,25,36,36,10,0,176,3,0,106,14,
		108,105,115,116,97,117,115,117,97,114,105,111,115,0,
		106,8,82,69,76,69,65,83,69,0,20,2,36,13,
		0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

