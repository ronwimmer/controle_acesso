/*
 * Harbour 3.2.0dev (r2011030937)
 * MinGW GNU C 7.3 (32-bit)
 * Generated C source from "C:\Users\Ronaldo\Documents\GitHub\controle_acesso\code\funcoes_usuarios.Prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( MOSTRAUSUARIOS );
HB_FUNC_EXTERN( MYSQL_EXECQUERY );
HB_FUNC_EXTERN( DOMETHOD );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ACLONE );
HB_FUNC( VALIDAUSUARIO );
HB_FUNC_EXTERN( CONECTABANCO );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC( BLOQUEIAUSUARIO );
HB_FUNC_EXTERN( MYSQL_EXEC );
HB_FUNC( LEDADOSUSUARIO );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC( LEROTINASPORUSUARIO );
HB_FUNC_EXTERN( ERRORSYS );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_FUNCOES_USUARIOS )
{ "MOSTRAUSUARIOS", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( MOSTRAUSUARIOS )}, NULL },
{ "MYSQL_EXECQUERY", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSQL_EXECQUERY )}, NULL },
{ "OSERVER", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DOMETHOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( DOMETHOD )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ACLONE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACLONE )}, NULL },
{ "VALIDAUSUARIO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( VALIDAUSUARIO )}, NULL },
{ "CONECTABANCO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONECTABANCO )}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "BLOQUEIAUSUARIO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLOQUEIAUSUARIO )}, NULL },
{ "MYSQL_EXEC", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYSQL_EXEC )}, NULL },
{ "LEDADOSUSUARIO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( LEDADOSUSUARIO )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "LEROTINASPORUSUARIO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( LEROTINASPORUSUARIO )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_FUNCOES_USUARIOS, "C:\\Users\\Ronaldo\\Documents\\GitHub\\controle_acesso\\code\\funcoes_usuarios.Prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_FUNCOES_USUARIOS
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_FUNCOES_USUARIOS )
   #include "hbiniseg.h"
#endif

HB_FUNC( MOSTRAUSUARIOS )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,36,5,0,106,73,83,69,76,69,67,84,
		32,99,111,100,117,115,117,97,114,105,111,44,32,110,
		111,109,101,44,32,97,100,109,105,110,105,115,116,114,
		97,100,111,114,44,32,98,108,111,113,117,101,97,100,
		111,44,32,101,120,99,108,117,105,100,111,32,70,82,
		79,77,32,117,115,117,97,114,105,111,0,80,1,36,
		6,0,4,0,0,80,2,36,7,0,121,80,3,36,
		9,0,176,1,0,109,2,0,95,1,12,2,80,2,
		36,11,0,176,3,0,106,14,108,105,115,116,97,117,
		115,117,97,114,105,111,115,0,106,18,103,114,105,100,
		76,105,115,116,97,85,115,117,97,114,105,111,115,0,
		106,15,68,101,108,101,116,101,65,108,108,73,116,101,
		109,115,0,20,3,36,12,0,176,4,0,95,2,12,
		1,121,15,28,91,36,13,0,122,165,80,3,25,72,
		36,14,0,176,3,0,106,14,108,105,115,116,97,117,
		115,117,97,114,105,111,115,0,106,18,103,114,105,100,
		76,105,115,116,97,85,115,117,97,114,105,111,115,0,
		106,8,65,100,100,73,116,101,109,0,176,5,0,95,
		2,95,3,1,12,1,20,4,36,13,0,175,3,0,
		176,4,0,95,2,12,1,15,28,178,36,18,0,100,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( VALIDAUSUARIO )
{
	static const HB_BYTE pcode[] =
	{
		13,3,4,36,22,0,9,80,5,36,23,0,106,82,
		83,69,76,69,67,84,32,99,111,100,117,115,117,97,
		114,105,111,44,32,97,100,109,105,110,105,115,116,114,
		97,100,111,114,44,32,98,108,111,113,117,101,97,100,
		111,44,32,101,120,99,108,117,105,100,111,32,70,82,
		79,77,32,117,115,117,97,114,105,111,32,87,72,69,
		82,69,32,110,111,109,101,32,61,32,39,0,95,1,
		72,106,16,39,32,65,78,68,32,115,101,110,104,97,
		32,61,32,39,0,72,95,2,72,106,2,39,0,72,
		80,6,36,24,0,4,0,0,80,7,36,26,0,176,
		7,0,12,0,28,17,36,27,0,176,1,0,109,2,
		0,95,6,12,2,80,7,36,30,0,176,4,0,95,
		7,12,1,121,15,29,0,1,36,31,0,95,7,122,
		1,92,3,1,106,2,83,0,8,28,117,36,32,0,
		176,8,0,106,72,85,115,117,195,161,114,105,111,32,
		116,101,118,101,32,115,101,117,32,97,99,101,115,115,
		111,32,98,108,111,113,117,101,97,100,111,33,32,67,
		111,110,116,97,116,101,32,111,32,97,100,109,105,110,
		105,115,116,114,97,100,111,114,32,100,111,32,115,105,
		115,116,101,109,97,33,0,106,28,73,100,101,110,116,
		105,102,105,99,97,195,167,195,163,111,32,100,101,32,
		85,115,117,195,161,114,105,111,0,20,2,26,190,0,
		36,33,0,95,7,122,1,92,4,1,106,2,83,0,
		8,28,70,36,34,0,176,8,0,106,26,85,115,117,
		195,161,114,105,111,47,83,101,110,104,97,32,105,110,
		99,111,114,114,101,116,111,33,0,106,28,73,100,101,
		110,116,105,102,105,99,97,195,167,195,163,111,32,100,
		101,32,85,115,117,195,161,114,105,111,0,20,2,25,
		104,36,36,0,120,80,5,36,37,0,95,7,122,1,
		122,1,80,3,36,38,0,95,7,122,1,92,2,1,
		106,2,83,0,8,80,4,25,68,36,41,0,176,8,
		0,106,26,85,115,117,195,161,114,105,111,47,83,101,
		110,104,97,32,105,110,99,111,114,114,101,116,111,33,
		0,106,28,73,100,101,110,116,105,102,105,99,97,195,
		167,195,163,111,32,100,101,32,85,115,117,195,161,114,
		105,111,0,20,2,36,44,0,95,5,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BLOQUEIAUSUARIO )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,36,48,0,106,50,85,80,68,65,84,69,
		32,117,115,117,97,114,105,111,32,83,69,84,32,98,
		108,111,113,117,101,97,100,111,32,61,32,39,83,39,
		32,87,72,69,82,69,32,110,111,109,101,32,61,32,
		39,0,95,1,72,106,2,39,0,72,80,2,36,49,
		0,9,80,3,36,51,0,176,7,0,12,0,28,17,
		36,52,0,176,10,0,109,2,0,95,2,12,2,80,
		3,36,55,0,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( LEDADOSUSUARIO )
{
	static const HB_BYTE pcode[] =
	{
		13,3,1,36,59,0,4,0,0,80,2,36,60,0,
		106,131,83,69,76,69,67,84,32,99,111,100,117,115,
		117,97,114,105,111,44,32,110,111,109,101,44,32,115,
		101,110,104,97,44,32,97,100,109,105,110,105,115,116,
		114,97,100,111,114,44,32,98,108,111,113,117,101,97,
		100,111,44,32,101,120,99,108,117,105,100,111,44,32,
		100,97,116,97,99,97,100,97,115,116,114,111,44,32,
		100,97,116,97,97,116,117,97,108,105,122,97,99,97,
		111,32,70,82,79,77,32,117,115,117,97,114,105,111,
		32,87,72,69,82,69,32,99,111,100,117,115,117,97,
		114,105,111,32,61,32,0,176,12,0,95,1,12,1,
		72,80,3,36,61,0,4,0,0,80,4,36,63,0,
		176,1,0,109,2,0,95,3,12,2,80,4,36,64,
		0,95,4,122,1,80,2,36,66,0,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( LEROTINASPORUSUARIO )
{
	static const HB_BYTE pcode[] =
	{
		13,3,1,36,70,0,4,0,0,80,2,36,71,0,
		106,1,0,80,3,36,72,0,4,0,0,80,4,36,
		74,0,106,41,83,69,76,69,67,84,32,114,111,116,
		105,110,97,46,99,111,100,114,111,116,105,110,97,44,
		32,114,111,116,105,110,97,46,114,111,116,105,110,97,
		44,32,0,80,3,36,75,0,96,3,0,106,35,40,
		83,69,76,69,67,84,32,97,99,101,115,115,111,46,
		97,99,101,115,115,111,32,70,82,79,77,32,97,99,
		101,115,115,111,32,0,135,36,76,0,96,3,0,106,
		68,32,87,72,69,82,69,32,114,111,116,105,110,97,
		46,99,111,100,114,111,116,105,110,97,32,61,32,97,
		99,101,115,115,111,46,99,111,100,114,111,116,105,110,
		97,32,65,78,68,32,97,99,101,115,115,111,46,99,
		111,100,117,115,117,97,114,105,111,32,61,32,0,176,
		12,0,95,1,12,1,72,106,20,41,32,65,83,32,
		97,99,101,115,115,111,117,115,117,97,114,105,111,32,
		0,72,135,36,77,0,96,3,0,106,12,70,82,79,
		77,32,114,111,116,105,110,97,0,135,36,79,0,176,
		1,0,109,2,0,95,3,12,2,80,2,36,81,0,
		95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

