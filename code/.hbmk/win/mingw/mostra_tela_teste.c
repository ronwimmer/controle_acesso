/*
 * Harbour 3.2.0dev (r2011030937)
 * MinGW GNU C 7.3 (32-bit)
 * Generated C source from "C:\Users\Ronaldo\Documents\GitHub\controle_acesso\code\mostra_tela_teste.Prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( MOSTRA_TELA_TESTE );
HB_FUNC_EXTERN( LEACESSOROTINAUSUARIO );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( _ISWINDOWACTIVE );
HB_FUNC_EXTERN( DOMETHOD );
HB_FUNC_EXTERN( _DEFINEWINDOW );
HB_FUNC_EXTERN( _DEFINELABEL );
HB_FUNC_EXTERN( _ENDWINDOW );
HB_FUNC_EXTERN( SETPROPERTY );
HB_FUNC_EXTERN( _ACTIVATEWINDOW );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( ERRORSYS );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MOSTRA_TELA_TESTE )
{ "MOSTRA_TELA_TESTE", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( MOSTRA_TELA_TESTE )}, NULL },
{ "LEACESSOROTINAUSUARIO", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEACESSOROTINAUSUARIO )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "PLADMIN", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "_ISWINDOWACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( _ISWINDOWACTIVE )}, NULL },
{ "DOMETHOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( DOMETHOD )}, NULL },
{ "_HMG_SYSDATA", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "_DEFINEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( _DEFINEWINDOW )}, NULL },
{ "_DEFINELABEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( _DEFINELABEL )}, NULL },
{ "_ENDWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( _ENDWINDOW )}, NULL },
{ "SETPROPERTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPROPERTY )}, NULL },
{ "PCUSERLOGIN", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "_ACTIVATEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( _ACTIVATEWINDOW )}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_MOSTRA_TELA_TESTE, "C:\\Users\\Ronaldo\\Documents\\GitHub\\controle_acesso\\code\\mostra_tela_teste.Prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_MOSTRA_TELA_TESTE
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_MOSTRA_TELA_TESTE )
   #include "hbiniseg.h"
#endif

HB_FUNC( MOSTRA_TELA_TESTE )
{
	static const HB_BYTE pcode[] =
	{
		13,6,0,36,10,0,176,1,0,106,4,49,48,49,
		0,12,1,80,1,36,12,0,176,2,0,95,1,122,
		122,12,3,106,2,83,0,8,80,2,36,13,0,176,
		2,0,95,1,92,2,122,12,3,106,2,83,0,8,
		80,3,36,14,0,176,2,0,95,1,92,3,122,12,
		3,106,2,83,0,8,80,4,36,15,0,176,2,0,
		95,1,92,4,122,12,3,106,2,83,0,8,80,5,
		36,16,0,176,2,0,95,1,92,5,122,12,3,106,
		2,83,0,8,80,6,36,18,0,109,3,0,31,7,
		95,2,29,69,35,36,19,0,176,4,0,106,11,116,
		101,108,97,95,116,101,115,116,101,0,12,1,28,100,
		36,20,0,176,5,0,106,11,116,101,108,97,95,116,
		101,115,116,101,0,106,9,77,73,78,73,77,73,90,
		69,0,20,2,36,21,0,176,5,0,106,11,116,101,
		108,97,95,116,101,115,116,101,0,106,8,82,69,83,
		84,79,82,69,0,20,2,36,22,0,176,5,0,106,
		11,116,101,108,97,95,116,101,115,116,101,0,106,9,
		83,69,84,70,79,67,85,83,0,20,2,26,2,35,
		36,24,0,106,11,116,101,108,97,95,116,101,115,116,
		101,0,98,6,0,93,214,0,2,36,4,0,176,7,
		0,100,106,24,84,101,108,97,32,100,101,32,84,101,
		115,116,101,32,100,101,32,65,99,101,115,115,111,0,
		93,231,1,93,199,0,93,76,1,93,9,1,120,120,
		9,9,9,9,106,1,0,90,4,100,6,90,4,100,
		6,90,4,100,6,90,4,100,6,90,4,100,6,90,
		4,100,6,100,90,4,100,6,9,9,9,100,9,100,
		100,100,100,90,4,100,6,90,4,100,6,90,4,100,
		6,100,100,90,4,100,6,90,4,100,6,90,4,100,
		6,90,4,100,6,90,4,100,6,90,4,100,6,9,
		90,4,100,6,90,4,100,6,100,9,90,4,100,6,
		100,100,100,100,100,100,100,100,9,20,56,36,6,0,
		106,8,76,97,98,101,108,95,49,0,98,6,0,93,
		160,1,2,100,98,6,0,93,161,1,2,100,98,6,
		0,93,176,1,2,100,98,6,0,93,175,1,2,100,
		98,6,0,93,178,1,2,100,98,6,0,93,164,1,
		2,100,98,6,0,93,165,1,2,100,98,6,0,93,
		166,1,2,100,98,6,0,93,167,1,2,9,98,6,
		0,93,203,1,2,9,98,6,0,93,204,1,2,9,
		98,6,0,93,205,1,2,9,98,6,0,93,206,1,
		2,9,98,6,0,93,207,1,2,100,98,6,0,93,
		201,1,2,100,98,6,0,93,202,1,2,100,98,6,
		0,93,163,1,2,100,98,6,0,93,173,1,2,9,
		98,6,0,93,174,1,2,9,98,6,0,93,156,1,
		2,9,98,6,0,93,157,1,2,9,98,6,0,93,
		158,1,2,9,98,6,0,93,159,1,2,100,98,6,
		0,93,168,1,2,9,98,6,0,93,184,1,2,9,
		98,6,0,93,153,1,2,9,98,6,0,93,137,1,
		2,9,98,6,0,93,25,1,2,9,98,6,0,93,
		131,1,2,36,7,0,92,20,98,6,0,93,175,1,
		2,36,8,0,92,30,98,6,0,93,176,1,2,36,
		9,0,92,70,98,6,0,93,164,1,2,36,10,0,
		92,20,98,6,0,93,165,1,2,36,11,0,106,9,
		85,115,117,195,161,114,105,111,0,98,6,0,93,178,
		1,2,36,12,0,106,6,65,114,105,97,108,0,98,
		6,0,93,166,1,2,36,13,0,92,9,98,6,0,
		93,167,1,2,36,14,0,106,1,0,98,6,0,93,
		168,1,2,36,15,0,9,98,6,0,93,156,1,2,
		36,16,0,9,98,6,0,93,157,1,2,36,17,0,
		9,98,6,0,93,159,1,2,36,18,0,9,98,6,
		0,93,158,1,2,36,19,0,100,98,6,0,93,173,
		1,2,36,20,0,9,98,6,0,93,174,1,2,36,
		21,0,9,98,6,0,93,207,1,2,36,22,0,90,
		4,100,6,98,6,0,93,163,1,2,36,23,0,9,
		98,6,0,93,153,1,2,36,24,0,100,98,6,0,
		93,201,1,2,36,25,0,100,98,6,0,93,202,1,
		2,36,26,0,176,8,0,98,6,0,93,160,1,1,
		98,6,0,93,161,1,1,98,6,0,93,176,1,1,
		98,6,0,93,175,1,1,98,6,0,93,178,1,1,
		98,6,0,93,164,1,1,98,6,0,93,165,1,1,
		98,6,0,93,166,1,1,98,6,0,93,167,1,1,
		98,6,0,93,156,1,1,98,6,0,93,203,1,1,
		98,6,0,93,204,1,1,98,6,0,93,205,1,1,
		98,6,0,93,206,1,1,98,6,0,93,207,1,1,
		98,6,0,93,201,1,1,98,6,0,93,202,1,1,
		98,6,0,93,163,1,1,98,6,0,93,168,1,1,
		98,6,0,93,173,1,1,98,6,0,93,174,1,1,
		98,6,0,93,157,1,1,98,6,0,93,159,1,1,
		98,6,0,93,158,1,1,98,6,0,93,153,1,1,
		98,6,0,93,184,1,1,98,6,0,93,137,1,1,
		98,6,0,93,25,1,1,98,6,0,93,131,1,1,
		20,29,36,28,0,106,8,76,97,98,101,108,95,50,
		0,98,6,0,93,160,1,2,100,98,6,0,93,161,
		1,2,100,98,6,0,93,176,1,2,100,98,6,0,
		93,175,1,2,100,98,6,0,93,178,1,2,100,98,
		6,0,93,164,1,2,100,98,6,0,93,165,1,2,
		100,98,6,0,93,166,1,2,100,98,6,0,93,167,
		1,2,9,98,6,0,93,203,1,2,9,98,6,0,
		93,204,1,2,9,98,6,0,93,205,1,2,9,98,
		6,0,93,206,1,2,9,98,6,0,93,207,1,2,
		100,98,6,0,93,201,1,2,100,98,6,0,93,202,
		1,2,100,98,6,0,93,163,1,2,100,98,6,0,
		93,173,1,2,9,98,6,0,93,174,1,2,9,98,
		6,0,93,156,1,2,9,98,6,0,93,157,1,2,
		9,98,6,0,93,158,1,2,9,98,6,0,93,159,
		1,2,100,98,6,0,93,168,1,2,9,98,6,0,
		93,184,1,2,9,98,6,0,93,153,1,2,9,98,
		6,0,93,137,1,2,9,98,6,0,93,25,1,2,
		9,98,6,0,93,131,1,2,36,29,0,92,50,98,
		6,0,93,175,1,2,36,30,0,92,30,98,6,0,
		93,176,1,2,36,31,0,92,70,98,6,0,93,164,
		1,2,36,32,0,92,20,98,6,0,93,165,1,2,
		36,33,0,106,9,67,111,110,115,117,108,116,97,0,
		98,6,0,93,178,1,2,36,34,0,106,6,65,114,
		105,97,108,0,98,6,0,93,166,1,2,36,35,0,
		92,9,98,6,0,93,167,1,2,36,36,0,106,1,
		0,98,6,0,93,168,1,2,36,37,0,9,98,6,
		0,93,156,1,2,36,38,0,9,98,6,0,93,157,
		1,2,36,39,0,9,98,6,0,93,159,1,2,36,
		40,0,9,98,6,0,93,158,1,2,36,41,0,100,
		98,6,0,93,173,1,2,36,42,0,9,98,6,0,
		93,174,1,2,36,43,0,9,98,6,0,93,207,1,
		2,36,44,0,90,4,100,6,98,6,0,93,163,1,
		2,36,45,0,9,98,6,0,93,153,1,2,36,46,
		0,100,98,6,0,93,201,1,2,36,47,0,100,98,
		6,0,93,202,1,2,36,48,0,176,8,0,98,6,
		0,93,160,1,1,98,6,0,93,161,1,1,98,6,
		0,93,176,1,1,98,6,0,93,175,1,1,98,6,
		0,93,178,1,1,98,6,0,93,164,1,1,98,6,
		0,93,165,1,1,98,6,0,93,166,1,1,98,6,
		0,93,167,1,1,98,6,0,93,156,1,1,98,6,
		0,93,203,1,1,98,6,0,93,204,1,1,98,6,
		0,93,205,1,1,98,6,0,93,206,1,1,98,6,
		0,93,207,1,1,98,6,0,93,201,1,1,98,6,
		0,93,202,1,1,98,6,0,93,163,1,1,98,6,
		0,93,168,1,1,98,6,0,93,173,1,1,98,6,
		0,93,174,1,1,98,6,0,93,157,1,1,98,6,
		0,93,159,1,1,98,6,0,93,158,1,1,98,6,
		0,93,153,1,1,98,6,0,93,184,1,1,98,6,
		0,93,137,1,1,98,6,0,93,25,1,1,98,6,
		0,93,131,1,1,20,29,36,50,0,106,8,76,97,
		98,101,108,95,51,0,98,6,0,93,160,1,2,100,
		98,6,0,93,161,1,2,100,98,6,0,93,176,1,
		2,100,98,6,0,93,175,1,2,100,98,6,0,93,
		178,1,2,100,98,6,0,93,164,1,2,100,98,6,
		0,93,165,1,2,100,98,6,0,93,166,1,2,100,
		98,6,0,93,167,1,2,9,98,6,0,93,203,1,
		2,9,98,6,0,93,204,1,2,9,98,6,0,93,
		205,1,2,9,98,6,0,93,206,1,2,9,98,6,
		0,93,207,1,2,100,98,6,0,93,201,1,2,100,
		98,6,0,93,202,1,2,100,98,6,0,93,163,1,
		2,100,98,6,0,93,173,1,2,9,98,6,0,93,
		174,1,2,9,98,6,0,93,156,1,2,9,98,6,
		0,93,157,1,2,9,98,6,0,93,158,1,2,9,
		98,6,0,93,159,1,2,100,98,6,0,93,168,1,
		2,9,98,6,0,93,184,1,2,9,98,6,0,93,
		153,1,2,9,98,6,0,93,137,1,2,9,98,6,
		0,93,25,1,2,9,98,6,0,93,131,1,2,36,
		51,0,92,80,98,6,0,93,175,1,2,36,52,0,
		92,30,98,6,0,93,176,1,2,36,53,0,92,80,
		98,6,0,93,164,1,2,36,54,0,92,20,98,6,
		0,93,165,1,2,36,55,0,106,10,73,110,99,108,
		117,115,195,163,111,0,98,6,0,93,178,1,2,36,
		56,0,106,6,65,114,105,97,108,0,98,6,0,93,
		166,1,2,36,57,0,92,9,98,6,0,93,167,1,
		2,36,58,0,106,1,0,98,6,0,93,168,1,2,
		36,59,0,9,98,6,0,93,156,1,2,36,60,0,
		9,98,6,0,93,157,1,2,36,61,0,9,98,6,
		0,93,159,1,2,36,62,0,9,98,6,0,93,158,
		1,2,36,63,0,100,98,6,0,93,173,1,2,36,
		64,0,9,98,6,0,93,174,1,2,36,65,0,9,
		98,6,0,93,207,1,2,36,66,0,90,4,100,6,
		98,6,0,93,163,1,2,36,67,0,9,98,6,0,
		93,153,1,2,36,68,0,100,98,6,0,93,201,1,
		2,36,69,0,100,98,6,0,93,202,1,2,36,70,
		0,176,8,0,98,6,0,93,160,1,1,98,6,0,
		93,161,1,1,98,6,0,93,176,1,1,98,6,0,
		93,175,1,1,98,6,0,93,178,1,1,98,6,0,
		93,164,1,1,98,6,0,93,165,1,1,98,6,0,
		93,166,1,1,98,6,0,93,167,1,1,98,6,0,
		93,156,1,1,98,6,0,93,203,1,1,98,6,0,
		93,204,1,1,98,6,0,93,205,1,1,98,6,0,
		93,206,1,1,98,6,0,93,207,1,1,98,6,0,
		93,201,1,1,98,6,0,93,202,1,1,98,6,0,
		93,163,1,1,98,6,0,93,168,1,1,98,6,0,
		93,173,1,1,98,6,0,93,174,1,1,98,6,0,
		93,157,1,1,98,6,0,93,159,1,1,98,6,0,
		93,158,1,1,98,6,0,93,153,1,1,98,6,0,
		93,184,1,1,98,6,0,93,137,1,1,98,6,0,
		93,25,1,1,98,6,0,93,131,1,1,20,29,36,
		72,0,106,8,76,97,98,101,108,95,52,0,98,6,
		0,93,160,1,2,100,98,6,0,93,161,1,2,100,
		98,6,0,93,176,1,2,100,98,6,0,93,175,1,
		2,100,98,6,0,93,178,1,2,100,98,6,0,93,
		164,1,2,100,98,6,0,93,165,1,2,100,98,6,
		0,93,166,1,2,100,98,6,0,93,167,1,2,9,
		98,6,0,93,203,1,2,9,98,6,0,93,204,1,
		2,9,98,6,0,93,205,1,2,9,98,6,0,93,
		206,1,2,9,98,6,0,93,207,1,2,100,98,6,
		0,93,201,1,2,100,98,6,0,93,202,1,2,100,
		98,6,0,93,163,1,2,100,98,6,0,93,173,1,
		2,9,98,6,0,93,174,1,2,9,98,6,0,93,
		156,1,2,9,98,6,0,93,157,1,2,9,98,6,
		0,93,158,1,2,9,98,6,0,93,159,1,2,100,
		98,6,0,93,168,1,2,9,98,6,0,93,184,1,
		2,9,98,6,0,93,153,1,2,9,98,6,0,93,
		137,1,2,9,98,6,0,93,25,1,2,9,98,6,
		0,93,131,1,2,36,73,0,92,110,98,6,0,93,
		175,1,2,36,74,0,92,30,98,6,0,93,176,1,
		2,36,75,0,92,70,98,6,0,93,164,1,2,36,
		76,0,92,20,98,6,0,93,165,1,2,36,77,0,
		106,12,65,108,116,101,114,97,195,167,195,163,111,0,
		98,6,0,93,178,1,2,36,78,0,106,6,65,114,
		105,97,108,0,98,6,0,93,166,1,2,36,79,0,
		92,9,98,6,0,93,167,1,2,36,80,0,106,1,
		0,98,6,0,93,168,1,2,36,81,0,9,98,6,
		0,93,156,1,2,36,82,0,9,98,6,0,93,157,
		1,2,36,83,0,9,98,6,0,93,159,1,2,36,
		84,0,9,98,6,0,93,158,1,2,36,85,0,100,
		98,6,0,93,173,1,2,36,86,0,9,98,6,0,
		93,174,1,2,36,87,0,9,98,6,0,93,207,1,
		2,36,88,0,90,4,100,6,98,6,0,93,163,1,
		2,36,89,0,9,98,6,0,93,153,1,2,36,90,
		0,100,98,6,0,93,201,1,2,36,91,0,100,98,
		6,0,93,202,1,2,36,92,0,176,8,0,98,6,
		0,93,160,1,1,98,6,0,93,161,1,1,98,6,
		0,93,176,1,1,98,6,0,93,175,1,1,98,6,
		0,93,178,1,1,98,6,0,93,164,1,1,98,6,
		0,93,165,1,1,98,6,0,93,166,1,1,98,6,
		0,93,167,1,1,98,6,0,93,156,1,1,98,6,
		0,93,203,1,1,98,6,0,93,204,1,1,98,6,
		0,93,205,1,1,98,6,0,93,206,1,1,98,6,
		0,93,207,1,1,98,6,0,93,201,1,1,98,6,
		0,93,202,1,1,98,6,0,93,163,1,1,98,6,
		0,93,168,1,1,98,6,0,93,173,1,1,98,6,
		0,93,174,1,1,98,6,0,93,157,1,1,98,6,
		0,93,159,1,1,98,6,0,93,158,1,1,98,6,
		0,93,153,1,1,98,6,0,93,184,1,1,98,6,
		0,93,137,1,1,98,6,0,93,25,1,1,98,6,
		0,93,131,1,1,20,29,36,94,0,106,8,76,97,
		98,101,108,95,53,0,98,6,0,93,160,1,2,100,
		98,6,0,93,161,1,2,100,98,6,0,93,176,1,
		2,100,98,6,0,93,175,1,2,100,98,6,0,93,
		178,1,2,100,98,6,0,93,164,1,2,100,98,6,
		0,93,165,1,2,100,98,6,0,93,166,1,2,100,
		98,6,0,93,167,1,2,9,98,6,0,93,203,1,
		2,9,98,6,0,93,204,1,2,9,98,6,0,93,
		205,1,2,9,98,6,0,93,206,1,2,9,98,6,
		0,93,207,1,2,100,98,6,0,93,201,1,2,100,
		98,6,0,93,202,1,2,100,98,6,0,93,163,1,
		2,100,98,6,0,93,173,1,2,9,98,6,0,93,
		174,1,2,9,98,6,0,93,156,1,2,9,98,6,
		0,93,157,1,2,9,98,6,0,93,158,1,2,9,
		98,6,0,93,159,1,2,100,98,6,0,93,168,1,
		2,9,98,6,0,93,184,1,2,9,98,6,0,93,
		153,1,2,9,98,6,0,93,137,1,2,9,98,6,
		0,93,25,1,2,9,98,6,0,93,131,1,2,36,
		95,0,93,140,0,98,6,0,93,175,1,2,36,96,
		0,92,30,98,6,0,93,176,1,2,36,97,0,92,
		70,98,6,0,93,164,1,2,36,98,0,92,20,98,
		6,0,93,165,1,2,36,99,0,106,10,69,120,99,
		108,117,115,195,163,111,0,98,6,0,93,178,1,2,
		36,100,0,106,6,65,114,105,97,108,0,98,6,0,
		93,166,1,2,36,101,0,92,9,98,6,0,93,167,
		1,2,36,102,0,106,1,0,98,6,0,93,168,1,
		2,36,103,0,9,98,6,0,93,156,1,2,36,104,
		0,9,98,6,0,93,157,1,2,36,105,0,9,98,
		6,0,93,159,1,2,36,106,0,9,98,6,0,93,
		158,1,2,36,107,0,100,98,6,0,93,173,1,2,
		36,108,0,9,98,6,0,93,174,1,2,36,109,0,
		9,98,6,0,93,207,1,2,36,110,0,90,4,100,
		6,98,6,0,93,163,1,2,36,111,0,9,98,6,
		0,93,153,1,2,36,112,0,100,98,6,0,93,201,
		1,2,36,113,0,100,98,6,0,93,202,1,2,36,
		114,0,176,8,0,98,6,0,93,160,1,1,98,6,
		0,93,161,1,1,98,6,0,93,176,1,1,98,6,
		0,93,175,1,1,98,6,0,93,178,1,1,98,6,
		0,93,164,1,1,98,6,0,93,165,1,1,98,6,
		0,93,166,1,1,98,6,0,93,167,1,1,98,6,
		0,93,156,1,1,98,6,0,93,203,1,1,98,6,
		0,93,204,1,1,98,6,0,93,205,1,1,98,6,
		0,93,206,1,1,98,6,0,93,207,1,1,98,6,
		0,93,201,1,1,98,6,0,93,202,1,1,98,6,
		0,93,163,1,1,98,6,0,93,168,1,1,98,6,
		0,93,173,1,1,98,6,0,93,174,1,1,98,6,
		0,93,157,1,1,98,6,0,93,159,1,1,98,6,
		0,93,158,1,1,98,6,0,93,153,1,1,98,6,
		0,93,184,1,1,98,6,0,93,137,1,1,98,6,
		0,93,25,1,1,98,6,0,93,131,1,1,20,29,
		36,116,0,106,8,76,97,98,101,108,95,54,0,98,
		6,0,93,160,1,2,100,98,6,0,93,161,1,2,
		100,98,6,0,93,176,1,2,100,98,6,0,93,175,
		1,2,100,98,6,0,93,178,1,2,100,98,6,0,
		93,164,1,2,100,98,6,0,93,165,1,2,100,98,
		6,0,93,166,1,2,100,98,6,0,93,167,1,2,
		9,98,6,0,93,203,1,2,9,98,6,0,93,204,
		1,2,9,98,6,0,93,205,1,2,9,98,6,0,
		93,206,1,2,9,98,6,0,93,207,1,2,100,98,
		6,0,93,201,1,2,100,98,6,0,93,202,1,2,
		100,98,6,0,93,163,1,2,100,98,6,0,93,173,
		1,2,9,98,6,0,93,174,1,2,9,98,6,0,
		93,156,1,2,9,98,6,0,93,157,1,2,9,98,
		6,0,93,158,1,2,9,98,6,0,93,159,1,2,
		100,98,6,0,93,168,1,2,9,98,6,0,93,184,
		1,2,9,98,6,0,93,153,1,2,9,98,6,0,
		93,137,1,2,9,98,6,0,93,25,1,2,9,98,
		6,0,93,131,1,2,36,117,0,93,170,0,98,6,
		0,93,175,1,2,36,118,0,92,30,98,6,0,93,
		176,1,2,36,119,0,92,90,98,6,0,93,164,1,
		2,36,120,0,92,20,98,6,0,93,165,1,2,36,
		121,0,106,15,73,109,112,114,101,115,115,195,163,111,
		32,40,82,41,0,98,6,0,93,178,1,2,36,122,
		0,106,6,65,114,105,97,108,0,98,6,0,93,166,
		1,2,36,123,0,92,9,98,6,0,93,167,1,2,
		36,124,0,106,1,0,98,6,0,93,168,1,2,36,
		125,0,9,98,6,0,93,156,1,2,36,126,0,9,
		98,6,0,93,157,1,2,36,127,0,9,98,6,0,
		93,159,1,2,36,128,0,9,98,6,0,93,158,1,
		2,36,129,0,100,98,6,0,93,173,1,2,36,130,
		0,9,98,6,0,93,174,1,2,36,131,0,9,98,
		6,0,93,207,1,2,36,132,0,90,4,100,6,98,
		6,0,93,163,1,2,36,133,0,9,98,6,0,93,
		153,1,2,36,134,0,100,98,6,0,93,201,1,2,
		36,135,0,100,98,6,0,93,202,1,2,36,136,0,
		176,8,0,98,6,0,93,160,1,1,98,6,0,93,
		161,1,1,98,6,0,93,176,1,1,98,6,0,93,
		175,1,1,98,6,0,93,178,1,1,98,6,0,93,
		164,1,1,98,6,0,93,165,1,1,98,6,0,93,
		166,1,1,98,6,0,93,167,1,1,98,6,0,93,
		156,1,1,98,6,0,93,203,1,1,98,6,0,93,
		204,1,1,98,6,0,93,205,1,1,98,6,0,93,
		206,1,1,98,6,0,93,207,1,1,98,6,0,93,
		201,1,1,98,6,0,93,202,1,1,98,6,0,93,
		163,1,1,98,6,0,93,168,1,1,98,6,0,93,
		173,1,1,98,6,0,93,174,1,1,98,6,0,93,
		157,1,1,98,6,0,93,159,1,1,98,6,0,93,
		158,1,1,98,6,0,93,153,1,1,98,6,0,93,
		184,1,1,98,6,0,93,137,1,1,98,6,0,93,
		25,1,1,98,6,0,93,131,1,1,20,29,36,138,
		0,106,11,108,98,108,85,115,117,97,114,105,111,0,
		98,6,0,93,160,1,2,100,98,6,0,93,161,1,
		2,100,98,6,0,93,176,1,2,100,98,6,0,93,
		175,1,2,100,98,6,0,93,178,1,2,100,98,6,
		0,93,164,1,2,100,98,6,0,93,165,1,2,100,
		98,6,0,93,166,1,2,100,98,6,0,93,167,1,
		2,9,98,6,0,93,203,1,2,9,98,6,0,93,
		204,1,2,9,98,6,0,93,205,1,2,9,98,6,
		0,93,206,1,2,9,98,6,0,93,207,1,2,100,
		98,6,0,93,201,1,2,100,98,6,0,93,202,1,
		2,100,98,6,0,93,163,1,2,100,98,6,0,93,
		173,1,2,9,98,6,0,93,174,1,2,9,98,6,
		0,93,156,1,2,9,98,6,0,93,157,1,2,9,
		98,6,0,93,158,1,2,9,98,6,0,93,159,1,
		2,100,98,6,0,93,168,1,2,9,98,6,0,93,
		184,1,2,9,98,6,0,93,153,1,2,9,98,6,
		0,93,137,1,2,9,98,6,0,93,25,1,2,9,
		98,6,0,93,131,1,2,36,139,0,92,20,98,6,
		0,93,175,1,2,36,140,0,93,130,0,98,6,0,
		93,176,1,2,36,141,0,92,120,98,6,0,93,164,
		1,2,36,142,0,92,24,98,6,0,93,165,1,2,
		36,143,0,106,8,76,97,98,101,108,95,55,0,98,
		6,0,93,178,1,2,36,144,0,106,6,65,114,105,
		97,108,0,98,6,0,93,166,1,2,36,145,0,92,
		9,98,6,0,93,167,1,2,36,146,0,106,1,0,
		98,6,0,93,168,1,2,36,147,0,120,98,6,0,
		93,156,1,2,36,148,0,9,98,6,0,93,157,1,
		2,36,149,0,9,98,6,0,93,159,1,2,36,150,
		0,9,98,6,0,93,158,1,2,36,151,0,100,98,
		6,0,93,173,1,2,36,152,0,9,98,6,0,93,
		174,1,2,36,153,0,9,98,6,0,93,207,1,2,
		36,154,0,90,4,100,6,98,6,0,93,163,1,2,
		36,155,0,9,98,6,0,93,153,1,2,36,156,0,
		100,98,6,0,93,201,1,2,36,157,0,100,98,6,
		0,93,202,1,2,36,158,0,176,8,0,98,6,0,
		93,160,1,1,98,6,0,93,161,1,1,98,6,0,
		93,176,1,1,98,6,0,93,175,1,1,98,6,0,
		93,178,1,1,98,6,0,93,164,1,1,98,6,0,
		93,165,1,1,98,6,0,93,166,1,1,98,6,0,
		93,167,1,1,98,6,0,93,156,1,1,98,6,0,
		93,203,1,1,98,6,0,93,204,1,1,98,6,0,
		93,205,1,1,98,6,0,93,206,1,1,98,6,0,
		93,207,1,1,98,6,0,93,201,1,1,98,6,0,
		93,202,1,1,98,6,0,93,163,1,1,98,6,0,
		93,168,1,1,98,6,0,93,173,1,1,98,6,0,
		93,174,1,1,98,6,0,93,157,1,1,98,6,0,
		93,159,1,1,98,6,0,93,158,1,1,98,6,0,
		93,153,1,1,98,6,0,93,184,1,1,98,6,0,
		93,137,1,1,98,6,0,93,25,1,1,98,6,0,
		93,131,1,1,20,29,36,160,0,106,12,108,98,108,
		67,111,110,115,117,108,116,97,0,98,6,0,93,160,
		1,2,100,98,6,0,93,161,1,2,100,98,6,0,
		93,176,1,2,100,98,6,0,93,175,1,2,100,98,
		6,0,93,178,1,2,100,98,6,0,93,164,1,2,
		100,98,6,0,93,165,1,2,100,98,6,0,93,166,
		1,2,100,98,6,0,93,167,1,2,9,98,6,0,
		93,203,1,2,9,98,6,0,93,204,1,2,9,98,
		6,0,93,205,1,2,9,98,6,0,93,206,1,2,
		9,98,6,0,93,207,1,2,100,98,6,0,93,201,
		1,2,100,98,6,0,93,202,1,2,100,98,6,0,
		93,163,1,2,100,98,6,0,93,173,1,2,9,98,
		6,0,93,174,1,2,9,98,6,0,93,156,1,2,
		9,98,6,0,93,157,1,2,9,98,6,0,93,158,
		1,2,9,98,6,0,93,159,1,2,100,98,6,0,
		93,168,1,2,9,98,6,0,93,184,1,2,9,98,
		6,0,93,153,1,2,9,98,6,0,93,137,1,2,
		9,98,6,0,93,25,1,2,9,98,6,0,93,131,
		1,2,36,161,0,92,50,98,6,0,93,175,1,2,
		36,162,0,93,130,0,98,6,0,93,176,1,2,36,
		163,0,92,120,98,6,0,93,164,1,2,36,164,0,
		92,24,98,6,0,93,165,1,2,36,165,0,106,8,
		76,97,98,101,108,95,56,0,98,6,0,93,178,1,
		2,36,166,0,106,6,65,114,105,97,108,0,98,6,
		0,93,166,1,2,36,167,0,92,9,98,6,0,93,
		167,1,2,36,168,0,106,1,0,98,6,0,93,168,
		1,2,36,169,0,120,98,6,0,93,156,1,2,36,
		170,0,9,98,6,0,93,157,1,2,36,171,0,9,
		98,6,0,93,159,1,2,36,172,0,9,98,6,0,
		93,158,1,2,36,173,0,100,98,6,0,93,173,1,
		2,36,174,0,9,98,6,0,93,174,1,2,36,175,
		0,9,98,6,0,93,207,1,2,36,176,0,90,4,
		100,6,98,6,0,93,163,1,2,36,177,0,9,98,
		6,0,93,153,1,2,36,178,0,100,98,6,0,93,
		201,1,2,36,179,0,100,98,6,0,93,202,1,2,
		36,180,0,176,8,0,98,6,0,93,160,1,1,98,
		6,0,93,161,1,1,98,6,0,93,176,1,1,98,
		6,0,93,175,1,1,98,6,0,93,178,1,1,98,
		6,0,93,164,1,1,98,6,0,93,165,1,1,98,
		6,0,93,166,1,1,98,6,0,93,167,1,1,98,
		6,0,93,156,1,1,98,6,0,93,203,1,1,98,
		6,0,93,204,1,1,98,6,0,93,205,1,1,98,
		6,0,93,206,1,1,98,6,0,93,207,1,1,98,
		6,0,93,201,1,1,98,6,0,93,202,1,1,98,
		6,0,93,163,1,1,98,6,0,93,168,1,1,98,
		6,0,93,173,1,1,98,6,0,93,174,1,1,98,
		6,0,93,157,1,1,98,6,0,93,159,1,1,98,
		6,0,93,158,1,1,98,6,0,93,153,1,1,98,
		6,0,93,184,1,1,98,6,0,93,137,1,1,98,
		6,0,93,25,1,1,98,6,0,93,131,1,1,20,
		29,36,182,0,106,12,108,98,108,73,110,99,108,117,
		115,97,111,0,98,6,0,93,160,1,2,100,98,6,
		0,93,161,1,2,100,98,6,0,93,176,1,2,100,
		98,6,0,93,175,1,2,100,98,6,0,93,178,1,
		2,100,98,6,0,93,164,1,2,100,98,6,0,93,
		165,1,2,100,98,6,0,93,166,1,2,100,98,6,
		0,93,167,1,2,9,98,6,0,93,203,1,2,9,
		98,6,0,93,204,1,2,9,98,6,0,93,205,1,
		2,9,98,6,0,93,206,1,2,9,98,6,0,93,
		207,1,2,100,98,6,0,93,201,1,2,100,98,6,
		0,93,202,1,2,100,98,6,0,93,163,1,2,100,
		98,6,0,93,173,1,2,9,98,6,0,93,174,1,
		2,9,98,6,0,93,156,1,2,9,98,6,0,93,
		157,1,2,9,98,6,0,93,158,1,2,9,98,6,
		0,93,159,1,2,100,98,6,0,93,168,1,2,9,
		98,6,0,93,184,1,2,9,98,6,0,93,153,1,
		2,9,98,6,0,93,137,1,2,9,98,6,0,93,
		25,1,2,9,98,6,0,93,131,1,2,36,183,0,
		92,80,98,6,0,93,175,1,2,36,184,0,93,130,
		0,98,6,0,93,176,1,2,36,185,0,92,120,98,
		6,0,93,164,1,2,36,186,0,92,24,98,6,0,
		93,165,1,2,36,187,0,106,8,76,97,98,101,108,
		95,57,0,98,6,0,93,178,1,2,36,188,0,106,
		6,65,114,105,97,108,0,98,6,0,93,166,1,2,
		36,189,0,92,9,98,6,0,93,167,1,2,36,190,
		0,106,1,0,98,6,0,93,168,1,2,36,191,0,
		120,98,6,0,93,156,1,2,36,192,0,9,98,6,
		0,93,157,1,2,36,193,0,9,98,6,0,93,159,
		1,2,36,194,0,9,98,6,0,93,158,1,2,36,
		195,0,100,98,6,0,93,173,1,2,36,196,0,9,
		98,6,0,93,174,1,2,36,197,0,9,98,6,0,
		93,207,1,2,36,198,0,90,4,100,6,98,6,0,
		93,163,1,2,36,199,0,9,98,6,0,93,153,1,
		2,36,200,0,100,98,6,0,93,201,1,2,36,201,
		0,100,98,6,0,93,202,1,2,36,202,0,176,8,
		0,98,6,0,93,160,1,1,98,6,0,93,161,1,
		1,98,6,0,93,176,1,1,98,6,0,93,175,1,
		1,98,6,0,93,178,1,1,98,6,0,93,164,1,
		1,98,6,0,93,165,1,1,98,6,0,93,166,1,
		1,98,6,0,93,167,1,1,98,6,0,93,156,1,
		1,98,6,0,93,203,1,1,98,6,0,93,204,1,
		1,98,6,0,93,205,1,1,98,6,0,93,206,1,
		1,98,6,0,93,207,1,1,98,6,0,93,201,1,
		1,98,6,0,93,202,1,1,98,6,0,93,163,1,
		1,98,6,0,93,168,1,1,98,6,0,93,173,1,
		1,98,6,0,93,174,1,1,98,6,0,93,157,1,
		1,98,6,0,93,159,1,1,98,6,0,93,158,1,
		1,98,6,0,93,153,1,1,98,6,0,93,184,1,
		1,98,6,0,93,137,1,1,98,6,0,93,25,1,
		1,98,6,0,93,131,1,1,20,29,36,204,0,106,
		13,108,98,108,65,108,116,101,114,97,99,97,111,0,
		98,6,0,93,160,1,2,100,98,6,0,93,161,1,
		2,100,98,6,0,93,176,1,2,100,98,6,0,93,
		175,1,2,100,98,6,0,93,178,1,2,100,98,6,
		0,93,164,1,2,100,98,6,0,93,165,1,2,100,
		98,6,0,93,166,1,2,100,98,6,0,93,167,1,
		2,9,98,6,0,93,203,1,2,9,98,6,0,93,
		204,1,2,9,98,6,0,93,205,1,2,9,98,6,
		0,93,206,1,2,9,98,6,0,93,207,1,2,100,
		98,6,0,93,201,1,2,100,98,6,0,93,202,1,
		2,100,98,6,0,93,163,1,2,100,98,6,0,93,
		173,1,2,9,98,6,0,93,174,1,2,9,98,6,
		0,93,156,1,2,9,98,6,0,93,157,1,2,9,
		98,6,0,93,158,1,2,9,98,6,0,93,159,1,
		2,100,98,6,0,93,168,1,2,9,98,6,0,93,
		184,1,2,9,98,6,0,93,153,1,2,9,98,6,
		0,93,137,1,2,9,98,6,0,93,25,1,2,9,
		98,6,0,93,131,1,2,36,205,0,92,110,98,6,
		0,93,175,1,2,36,206,0,93,130,0,98,6,0,
		93,176,1,2,36,207,0,92,120,98,6,0,93,164,
		1,2,36,208,0,92,24,98,6,0,93,165,1,2,
		36,209,0,106,9,76,97,98,101,108,95,49,48,0,
		98,6,0,93,178,1,2,36,210,0,106,6,65,114,
		105,97,108,0,98,6,0,93,166,1,2,36,211,0,
		92,9,98,6,0,93,167,1,2,36,212,0,106,1,
		0,98,6,0,93,168,1,2,36,213,0,120,98,6,
		0,93,156,1,2,36,214,0,9,98,6,0,93,157,
		1,2,36,215,0,9,98,6,0,93,159,1,2,36,
		216,0,9,98,6,0,93,158,1,2,36,217,0,100,
		98,6,0,93,173,1,2,36,218,0,9,98,6,0,
		93,174,1,2,36,219,0,9,98,6,0,93,207,1,
		2,36,220,0,90,4,100,6,98,6,0,93,163,1,
		2,36,221,0,9,98,6,0,93,153,1,2,36,222,
		0,100,98,6,0,93,201,1,2,36,223,0,100,98,
		6,0,93,202,1,2,36,224,0,176,8,0,98,6,
		0,93,160,1,1,98,6,0,93,161,1,1,98,6,
		0,93,176,1,1,98,6,0,93,175,1,1,98,6,
		0,93,178,1,1,98,6,0,93,164,1,1,98,6,
		0,93,165,1,1,98,6,0,93,166,1,1,98,6,
		0,93,167,1,1,98,6,0,93,156,1,1,98,6,
		0,93,203,1,1,98,6,0,93,204,1,1,98,6,
		0,93,205,1,1,98,6,0,93,206,1,1,98,6,
		0,93,207,1,1,98,6,0,93,201,1,1,98,6,
		0,93,202,1,1,98,6,0,93,163,1,1,98,6,
		0,93,168,1,1,98,6,0,93,173,1,1,98,6,
		0,93,174,1,1,98,6,0,93,157,1,1,98,6,
		0,93,159,1,1,98,6,0,93,158,1,1,98,6,
		0,93,153,1,1,98,6,0,93,184,1,1,98,6,
		0,93,137,1,1,98,6,0,93,25,1,1,98,6,
		0,93,131,1,1,20,29,36,226,0,106,12,108,98,
		108,69,120,99,108,117,115,97,111,0,98,6,0,93,
		160,1,2,100,98,6,0,93,161,1,2,100,98,6,
		0,93,176,1,2,100,98,6,0,93,175,1,2,100,
		98,6,0,93,178,1,2,100,98,6,0,93,164,1,
		2,100,98,6,0,93,165,1,2,100,98,6,0,93,
		166,1,2,100,98,6,0,93,167,1,2,9,98,6,
		0,93,203,1,2,9,98,6,0,93,204,1,2,9,
		98,6,0,93,205,1,2,9,98,6,0,93,206,1,
		2,9,98,6,0,93,207,1,2,100,98,6,0,93,
		201,1,2,100,98,6,0,93,202,1,2,100,98,6,
		0,93,163,1,2,100,98,6,0,93,173,1,2,9,
		98,6,0,93,174,1,2,9,98,6,0,93,156,1,
		2,9,98,6,0,93,157,1,2,9,98,6,0,93,
		158,1,2,9,98,6,0,93,159,1,2,100,98,6,
		0,93,168,1,2,9,98,6,0,93,184,1,2,9,
		98,6,0,93,153,1,2,9,98,6,0,93,137,1,
		2,9,98,6,0,93,25,1,2,9,98,6,0,93,
		131,1,2,36,227,0,93,140,0,98,6,0,93,175,
		1,2,36,228,0,93,130,0,98,6,0,93,176,1,
		2,36,229,0,92,120,98,6,0,93,164,1,2,36,
		230,0,92,24,98,6,0,93,165,1,2,36,231,0,
		106,9,76,97,98,101,108,95,49,49,0,98,6,0,
		93,178,1,2,36,232,0,106,6,65,114,105,97,108,
		0,98,6,0,93,166,1,2,36,233,0,92,9,98,
		6,0,93,167,1,2,36,234,0,106,1,0,98,6,
		0,93,168,1,2,36,235,0,120,98,6,0,93,156,
		1,2,36,236,0,9,98,6,0,93,157,1,2,36,
		237,0,9,98,6,0,93,159,1,2,36,238,0,9,
		98,6,0,93,158,1,2,36,239,0,100,98,6,0,
		93,173,1,2,36,240,0,9,98,6,0,93,174,1,
		2,36,241,0,9,98,6,0,93,207,1,2,36,242,
		0,90,4,100,6,98,6,0,93,163,1,2,36,243,
		0,9,98,6,0,93,153,1,2,36,244,0,100,98,
		6,0,93,201,1,2,36,245,0,100,98,6,0,93,
		202,1,2,36,246,0,176,8,0,98,6,0,93,160,
		1,1,98,6,0,93,161,1,1,98,6,0,93,176,
		1,1,98,6,0,93,175,1,1,98,6,0,93,178,
		1,1,98,6,0,93,164,1,1,98,6,0,93,165,
		1,1,98,6,0,93,166,1,1,98,6,0,93,167,
		1,1,98,6,0,93,156,1,1,98,6,0,93,203,
		1,1,98,6,0,93,204,1,1,98,6,0,93,205,
		1,1,98,6,0,93,206,1,1,98,6,0,93,207,
		1,1,98,6,0,93,201,1,1,98,6,0,93,202,
		1,1,98,6,0,93,163,1,1,98,6,0,93,168,
		1,1,98,6,0,93,173,1,1,98,6,0,93,174,
		1,1,98,6,0,93,157,1,1,98,6,0,93,159,
		1,1,98,6,0,93,158,1,1,98,6,0,93,153,
		1,1,98,6,0,93,184,1,1,98,6,0,93,137,
		1,1,98,6,0,93,25,1,1,98,6,0,93,131,
		1,1,20,29,36,248,0,106,13,108,98,108,82,101,
		108,97,116,111,114,105,111,0,98,6,0,93,160,1,
		2,100,98,6,0,93,161,1,2,100,98,6,0,93,
		176,1,2,100,98,6,0,93,175,1,2,100,98,6,
		0,93,178,1,2,100,98,6,0,93,164,1,2,100,
		98,6,0,93,165,1,2,100,98,6,0,93,166,1,
		2,100,98,6,0,93,167,1,2,9,98,6,0,93,
		203,1,2,9,98,6,0,93,204,1,2,9,98,6,
		0,93,205,1,2,9,98,6,0,93,206,1,2,9,
		98,6,0,93,207,1,2,100,98,6,0,93,201,1,
		2,100,98,6,0,93,202,1,2,100,98,6,0,93,
		163,1,2,100,98,6,0,93,173,1,2,9,98,6,
		0,93,174,1,2,9,98,6,0,93,156,1,2,9,
		98,6,0,93,157,1,2,9,98,6,0,93,158,1,
		2,9,98,6,0,93,159,1,2,100,98,6,0,93,
		168,1,2,9,98,6,0,93,184,1,2,9,98,6,
		0,93,153,1,2,9,98,6,0,93,137,1,2,9,
		98,6,0,93,25,1,2,9,98,6,0,93,131,1,
		2,36,249,0,93,170,0,98,6,0,93,175,1,2,
		36,250,0,93,130,0,98,6,0,93,176,1,2,36,
		251,0,92,120,98,6,0,93,164,1,2,36,252,0,
		92,24,98,6,0,93,165,1,2,36,253,0,106,9,
		76,97,98,101,108,95,49,50,0,98,6,0,93,178,
		1,2,36,254,0,106,6,65,114,105,97,108,0,98,
		6,0,93,166,1,2,36,255,0,92,9,98,6,0,
		93,167,1,2,36,0,1,106,1,0,98,6,0,93,
		168,1,2,36,1,1,120,98,6,0,93,156,1,2,
		36,2,1,9,98,6,0,93,157,1,2,36,3,1,
		9,98,6,0,93,159,1,2,36,4,1,9,98,6,
		0,93,158,1,2,36,5,1,100,98,6,0,93,173,
		1,2,36,6,1,9,98,6,0,93,174,1,2,36,
		7,1,9,98,6,0,93,207,1,2,36,8,1,90,
		4,100,6,98,6,0,93,163,1,2,36,9,1,9,
		98,6,0,93,153,1,2,36,10,1,100,98,6,0,
		93,201,1,2,36,11,1,100,98,6,0,93,202,1,
		2,36,12,1,176,8,0,98,6,0,93,160,1,1,
		98,6,0,93,161,1,1,98,6,0,93,176,1,1,
		98,6,0,93,175,1,1,98,6,0,93,178,1,1,
		98,6,0,93,164,1,1,98,6,0,93,165,1,1,
		98,6,0,93,166,1,1,98,6,0,93,167,1,1,
		98,6,0,93,156,1,1,98,6,0,93,203,1,1,
		98,6,0,93,204,1,1,98,6,0,93,205,1,1,
		98,6,0,93,206,1,1,98,6,0,93,207,1,1,
		98,6,0,93,201,1,1,98,6,0,93,202,1,1,
		98,6,0,93,163,1,1,98,6,0,93,168,1,1,
		98,6,0,93,173,1,1,98,6,0,93,174,1,1,
		98,6,0,93,157,1,1,98,6,0,93,159,1,1,
		98,6,0,93,158,1,1,98,6,0,93,153,1,1,
		98,6,0,93,184,1,1,98,6,0,93,137,1,1,
		98,6,0,93,25,1,1,98,6,0,93,131,1,1,
		20,29,36,14,1,176,9,0,20,0,36,26,0,176,
		10,0,106,11,116,101,108,97,95,116,101,115,116,101,
		0,106,11,108,98,108,85,115,117,97,114,105,111,0,
		106,6,86,97,108,117,101,0,109,11,0,20,4,36,
		27,0,176,10,0,106,11,116,101,108,97,95,116,101,
		115,116,101,0,106,12,108,98,108,67,111,110,115,117,
		108,116,97,0,106,6,86,97,108,117,101,0,95,2,
		28,10,106,4,83,105,109,0,25,9,106,5,78,195,
		163,111,0,20,4,36,28,0,176,10,0,106,11,116,
		101,108,97,95,116,101,115,116,101,0,106,12,108,98,
		108,73,110,99,108,117,115,97,111,0,106,6,86,97,
		108,117,101,0,95,3,28,10,106,4,83,105,109,0,
		25,9,106,5,78,195,163,111,0,20,4,36,29,0,
		176,10,0,106,11,116,101,108,97,95,116,101,115,116,
		101,0,106,13,108,98,108,65,108,116,101,114,97,99,
		97,111,0,106,6,86,97,108,117,101,0,95,4,28,
		10,106,4,83,105,109,0,25,9,106,5,78,195,163,
		111,0,20,4,36,30,0,176,10,0,106,11,116,101,
		108,97,95,116,101,115,116,101,0,106,12,108,98,108,
		69,120,99,108,117,115,97,111,0,106,6,86,97,108,
		117,101,0,95,5,28,10,106,4,83,105,109,0,25,
		9,106,5,78,195,163,111,0,20,4,36,31,0,176,
		10,0,106,11,116,101,108,97,95,116,101,115,116,101,
		0,106,13,108,98,108,82,101,108,97,116,111,114,105,
		111,0,106,6,86,97,108,117,101,0,95,6,28,10,
		106,4,83,105,109,0,25,9,106,5,78,195,163,111,
		0,20,4,36,33,0,176,12,0,106,11,116,101,108,
		97,95,116,101,115,116,101,0,4,1,0,20,1,25,
		56,36,36,0,176,13,0,106,23,65,99,101,115,115,
		111,32,110,195,163,111,32,112,101,114,109,105,116,105,
		100,111,33,0,106,19,67,111,110,116,114,111,108,101,
		32,100,101,32,65,99,101,115,115,111,0,20,2,36,
		38,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

