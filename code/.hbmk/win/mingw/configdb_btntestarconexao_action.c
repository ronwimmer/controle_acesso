/*
 * Harbour 3.2.0dev (r2011030937)
 * MinGW GNU C 7.3 (32-bit)
 * Generated C source from "C:\Users\Ronaldo\Documents\GitHub\controle_acesso\code\configdb_btntestarconexao_action.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( CONFIGDB_BTNTESTARCONEXAO_ACTION );
HB_FUNC_EXTERN( GETPROPERTY );
HB_FUNC_EXTERN( MYSQL_CONNECT );
HB_FUNC_EXTERN( MYSQL_DATABASE_CONNECT );
HB_FUNC_EXTERN( MSGINFO );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( MYSQL_DESTROY );
HB_FUNC_EXTERN( ERRORSYS );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CONFIGDB_BTNTESTARCONEXAO_ACTION )
{ "CONFIGDB_BTNTESTARCONEXAO_ACTION", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( CONFIGDB_BTNTESTARCONEXAO_ACTION )}, NULL },
{ "GETPROPERTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETPROPERTY )}, NULL },
{ "MYSQL_CONNECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSQL_CONNECT )}, NULL },
{ "MYSQL_DATABASE_CONNECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSQL_DATABASE_CONNECT )}, NULL },
{ "MSGINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGINFO )}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "MYSQL_DESTROY", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSQL_DESTROY )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_CONFIGDB_BTNTESTARCONEXAO_ACTION, "C:\\Users\\Ronaldo\\Documents\\GitHub\\controle_acesso\\code\\configdb_btntestarconexao_action.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_CONFIGDB_BTNTESTARCONEXAO_ACTION
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_CONFIGDB_BTNTESTARCONEXAO_ACTION )
   #include "hbiniseg.h"
#endif

HB_FUNC( CONFIGDB_BTNTESTARCONEXAO_ACTION )
{
	static const HB_BYTE pcode[] =
	{
		13,4,0,36,9,0,176,1,0,106,9,99,111,110,
		102,105,103,100,98,0,106,12,116,120,116,72,111,115,
		116,78,97,109,101,0,106,6,118,97,108,117,101,0,
		12,3,80,1,36,10,0,176,1,0,106,9,99,111,
		110,102,105,103,100,98,0,106,12,116,120,116,68,97,
		116,97,66,97,115,101,0,106,6,118,97,108,117,101,
		0,12,3,80,2,36,11,0,176,1,0,106,9,99,
		111,110,102,105,103,100,98,0,106,12,116,120,116,85,
		115,101,114,110,97,109,101,0,106,6,118,97,108,117,
		101,0,12,3,80,3,36,12,0,176,1,0,106,9,
		99,111,110,102,105,103,100,98,0,106,12,116,120,116,
		80,97,115,115,87,111,114,100,0,106,6,118,97,108,
		117,101,0,12,3,80,4,36,14,0,176,2,0,95,
		1,95,3,95,4,12,3,29,137,0,36,15,0,176,
		3,0,95,2,12,1,28,56,36,16,0,176,4,0,
		106,36,67,111,110,101,120,195,163,111,32,99,111,109,
		32,115,101,114,118,105,100,111,114,32,98,101,109,32,
		115,117,99,101,100,105,100,97,33,0,106,4,83,81,
		76,0,20,2,25,60,36,18,0,176,5,0,106,17,
		66,97,110,99,111,32,100,101,32,100,97,100,111,115,
		32,91,0,95,2,72,106,19,93,32,110,195,163,111,
		32,108,111,99,97,108,105,122,97,100,111,33,0,72,
		106,4,83,81,76,0,20,2,36,20,0,176,6,0,
		20,0,25,53,36,22,0,176,5,0,106,11,83,101,
		114,118,105,100,111,114,32,91,0,95,1,72,106,18,
		93,32,110,195,163,111,32,99,111,110,101,99,116,97,
		100,111,33,0,72,106,4,83,81,76,0,20,2,36,
		25,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

