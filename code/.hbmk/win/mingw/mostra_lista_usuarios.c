/*
 * Harbour 3.2.0dev (r2011030937)
 * MinGW GNU C 7.3 (32-bit)
 * Generated C source from "C:\Users\Ronaldo\Documents\GitHub\controle_acesso\code\mostra_lista_usuarios.Prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( MOSTRA_LISTA_USUARIOS );
HB_FUNC_EXTERN( _ISWINDOWACTIVE );
HB_FUNC_EXTERN( DOMETHOD );
HB_FUNC_EXTERN( _DEFINEWINDOW );
HB_FUNC_EXTERN( LISTAUSUARIOS_FORM_ONINIT );
HB_FUNC_EXTERN( LISTAUSUARIOS_FORM_ONRELEASE );
HB_FUNC_EXTERN( LISTAUSUARIOS_BTNCONSULTARUSUARIO_ACTION );
HB_FUNC_EXTERN( _DEFINEBUTTON );
HB_FUNC_EXTERN( _DEFINEIMAGEBUTTON );
HB_FUNC_EXTERN( _DEFINEMIXEDBUTTON );
HB_FUNC_EXTERN( LISTAUSUARIOS_BTNINCLUIRUSUARIO_ACTION );
HB_FUNC_EXTERN( LISTAUSUARIOS_BTNALTERARUSUARIO_ACTION );
HB_FUNC_EXTERN( LISTAUSUARIOS_BTNEXCLUIRUSUARIO_ACTION );
HB_FUNC_EXTERN( LISTAUSUARIOS_BTNIMPRIMIRUSUARIOS_ACTION );
HB_FUNC_EXTERN( LISTAUSUARIOS_BTNSAIRLISTAUSUARIOS_ACTION );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( _DEFINEGRID );
HB_FUNC_EXTERN( _ENDWINDOW );
HB_FUNC_EXTERN( _ACTIVATEWINDOW );
HB_FUNC_EXTERN( ERRORSYS );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MOSTRA_LISTA_USUARIOS )
{ "MOSTRA_LISTA_USUARIOS", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( MOSTRA_LISTA_USUARIOS )}, NULL },
{ "_ISWINDOWACTIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( _ISWINDOWACTIVE )}, NULL },
{ "DOMETHOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( DOMETHOD )}, NULL },
{ "_HMG_SYSDATA", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "_DEFINEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( _DEFINEWINDOW )}, NULL },
{ "LISTAUSUARIOS_FORM_ONINIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTAUSUARIOS_FORM_ONINIT )}, NULL },
{ "LISTAUSUARIOS_FORM_ONRELEASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTAUSUARIOS_FORM_ONRELEASE )}, NULL },
{ "LISTAUSUARIOS_BTNCONSULTARUSUARIO_ACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTAUSUARIOS_BTNCONSULTARUSUARIO_ACTION )}, NULL },
{ "_DEFINEBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( _DEFINEBUTTON )}, NULL },
{ "_DEFINEIMAGEBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( _DEFINEIMAGEBUTTON )}, NULL },
{ "_DEFINEMIXEDBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( _DEFINEMIXEDBUTTON )}, NULL },
{ "LISTAUSUARIOS_BTNINCLUIRUSUARIO_ACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTAUSUARIOS_BTNINCLUIRUSUARIO_ACTION )}, NULL },
{ "LISTAUSUARIOS_BTNALTERARUSUARIO_ACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTAUSUARIOS_BTNALTERARUSUARIO_ACTION )}, NULL },
{ "LISTAUSUARIOS_BTNEXCLUIRUSUARIO_ACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTAUSUARIOS_BTNEXCLUIRUSUARIO_ACTION )}, NULL },
{ "LISTAUSUARIOS_BTNIMPRIMIRUSUARIOS_ACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTAUSUARIOS_BTNIMPRIMIRUSUARIOS_ACTION )}, NULL },
{ "LISTAUSUARIOS_BTNSAIRLISTAUSUARIOS_ACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISTAUSUARIOS_BTNSAIRLISTAUSUARIOS_ACTION )}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "_DEFINEGRID", {HB_FS_PUBLIC}, {HB_FUNCNAME( _DEFINEGRID )}, NULL },
{ "_ENDWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( _ENDWINDOW )}, NULL },
{ "_ACTIVATEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( _ACTIVATEWINDOW )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_MOSTRA_LISTA_USUARIOS, "C:\\Users\\Ronaldo\\Documents\\GitHub\\controle_acesso\\code\\mostra_lista_usuarios.Prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_MOSTRA_LISTA_USUARIOS
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_MOSTRA_LISTA_USUARIOS )
   #include "hbiniseg.h"
#endif

HB_FUNC( MOSTRA_LISTA_USUARIOS )
{
	static const HB_BYTE pcode[] =
	{
		36,6,0,176,1,0,106,14,108,105,115,116,97,117,
		115,117,97,114,105,111,115,0,12,1,28,109,36,7,
		0,176,2,0,106,14,108,105,115,116,97,117,115,117,
		97,114,105,111,115,0,106,9,77,73,78,73,77,73,
		90,69,0,20,2,36,8,0,176,2,0,106,14,108,
		105,115,116,97,117,115,117,97,114,105,111,115,0,106,
		8,82,69,83,84,79,82,69,0,20,2,36,9,0,
		176,2,0,106,14,108,105,115,116,97,117,115,117,97,
		114,105,111,115,0,106,9,83,69,84,70,79,67,85,
		83,0,20,2,26,255,30,36,11,0,106,14,108,105,
		115,116,97,117,115,117,97,114,105,111,115,0,98,3,
		0,93,214,0,2,36,4,0,176,4,0,100,106,18,
		76,105,115,116,97,32,100,101,32,85,115,117,97,114,
		105,111,115,0,93,190,1,93,173,0,93,38,2,93,
		56,1,9,9,9,9,9,9,106,1,0,90,8,176,
		5,0,12,0,6,90,8,176,6,0,12,0,6,90,
		4,100,6,90,4,100,6,90,4,100,6,90,4,100,
		6,100,90,4,100,6,9,9,9,100,9,100,100,100,
		100,90,4,100,6,90,4,100,6,90,4,100,6,100,
		100,90,4,100,6,90,4,100,6,90,4,100,6,90,
		4,100,6,90,4,100,6,90,4,100,6,9,90,4,
		100,6,90,4,100,6,100,9,90,4,100,6,100,100,
		100,100,100,100,100,100,9,20,56,36,6,0,106,20,
		98,116,110,67,111,110,115,117,108,116,97,114,85,115,
		117,97,114,105,111,0,98,3,0,93,160,1,2,100,
		98,3,0,93,161,1,2,100,98,3,0,93,176,1,
		2,100,98,3,0,93,175,1,2,100,98,3,0,93,
		162,1,2,100,98,3,0,93,163,1,2,100,98,3,
		0,93,164,1,2,100,98,3,0,93,165,1,2,100,
		98,3,0,93,166,1,2,100,98,3,0,93,167,1,
		2,100,98,3,0,93,168,1,2,9,98,3,0,93,
		169,1,2,100,98,3,0,93,170,1,2,100,98,3,
		0,93,171,1,2,9,98,3,0,93,172,1,2,100,
		98,3,0,93,173,1,2,9,98,3,0,93,174,1,
		2,100,98,3,0,93,175,1,2,100,98,3,0,93,
		176,1,2,100,98,3,0,93,177,1,2,120,98,3,
		0,93,207,1,2,9,98,3,0,93,156,1,2,9,
		98,3,0,93,157,1,2,9,98,3,0,93,158,1,
		2,9,98,3,0,93,97,1,2,9,98,3,0,93,
		159,1,2,36,7,0,92,20,98,3,0,93,175,1,
		2,36,8,0,93,164,1,98,3,0,93,176,1,2,
		36,9,0,92,100,98,3,0,93,164,1,2,36,10,
		0,92,28,98,3,0,93,165,1,2,36,11,0,90,
		8,176,7,0,12,0,6,98,3,0,93,163,1,2,
		36,12,0,106,10,67,111,110,115,117,108,116,97,114,
		0,98,3,0,93,162,1,2,36,13,0,106,6,65,
		114,105,97,108,0,98,3,0,93,166,1,2,36,14,
		0,92,9,98,3,0,93,167,1,2,36,15,0,106,
		1,0,98,3,0,93,168,1,2,36,16,0,9,98,
		3,0,93,156,1,2,36,17,0,9,98,3,0,93,
		157,1,2,36,18,0,9,98,3,0,93,159,1,2,
		36,19,0,9,98,3,0,93,158,1,2,36,20,0,
		90,4,100,6,98,3,0,93,170,1,2,36,21,0,
		90,4,100,6,98,3,0,93,171,1,2,36,22,0,
		100,98,3,0,93,173,1,2,36,23,0,9,98,3,
		0,93,169,1,2,36,24,0,9,98,3,0,93,172,
		1,2,36,25,0,9,98,3,0,93,174,1,2,36,
		26,0,9,98,3,0,93,207,1,2,36,27,0,9,
		98,3,0,93,97,1,2,36,28,0,100,98,3,0,
		93,177,1,2,36,29,0,106,4,84,79,80,0,98,
		3,0,93,125,1,2,36,30,0,98,3,0,93,177,
		1,1,100,8,29,165,0,176,8,0,98,3,0,93,
		160,1,1,98,3,0,93,161,1,1,98,3,0,93,
		176,1,1,98,3,0,93,175,1,1,98,3,0,93,
		162,1,1,98,3,0,93,163,1,1,98,3,0,93,
		164,1,1,98,3,0,93,165,1,1,98,3,0,93,
		166,1,1,98,3,0,93,167,1,1,98,3,0,93,
		168,1,1,98,3,0,93,170,1,1,98,3,0,93,
		171,1,1,98,3,0,93,169,1,1,98,3,0,93,
		172,1,1,98,3,0,93,173,1,1,98,3,0,93,
		174,1,1,98,3,0,93,156,1,1,98,3,0,93,
		157,1,1,98,3,0,93,159,1,1,98,3,0,93,
		158,1,1,98,3,0,93,97,1,1,20,22,26,63,
		1,98,3,0,93,162,1,1,100,8,28,126,176,9,
		0,98,3,0,93,160,1,1,98,3,0,93,161,1,
		1,98,3,0,93,176,1,1,98,3,0,93,175,1,
		1,106,1,0,98,3,0,93,163,1,1,98,3,0,
		93,164,1,1,98,3,0,93,165,1,1,98,3,0,
		93,177,1,1,98,3,0,93,168,1,1,98,3,0,
		93,170,1,1,98,3,0,93,171,1,1,98,3,0,
		93,169,1,1,98,3,0,93,207,1,1,68,98,3,
		0,93,173,1,1,98,3,0,93,174,1,1,98,3,
		0,93,172,1,1,20,17,26,184,0,176,10,0,98,
		3,0,93,160,1,1,98,3,0,93,161,1,1,98,
		3,0,93,176,1,1,98,3,0,93,175,1,1,98,
		3,0,93,162,1,1,98,3,0,93,163,1,1,98,
		3,0,93,164,1,1,98,3,0,93,165,1,1,98,
		3,0,93,166,1,1,98,3,0,93,167,1,1,98,
		3,0,93,168,1,1,98,3,0,93,170,1,1,98,
		3,0,93,171,1,1,98,3,0,93,169,1,1,98,
		3,0,93,172,1,1,98,3,0,93,173,1,1,98,
		3,0,93,174,1,1,98,3,0,93,156,1,1,98,
		3,0,93,157,1,1,98,3,0,93,159,1,1,98,
		3,0,93,158,1,1,98,3,0,93,177,1,1,98,
		3,0,93,125,1,1,98,3,0,93,97,1,1,98,
		3,0,93,207,1,1,68,20,25,36,32,0,106,18,
		98,116,110,73,110,99,108,117,105,114,85,115,117,97,
		114,105,111,0,98,3,0,93,160,1,2,100,98,3,
		0,93,161,1,2,100,98,3,0,93,176,1,2,100,
		98,3,0,93,175,1,2,100,98,3,0,93,162,1,
		2,100,98,3,0,93,163,1,2,100,98,3,0,93,
		164,1,2,100,98,3,0,93,165,1,2,100,98,3,
		0,93,166,1,2,100,98,3,0,93,167,1,2,100,
		98,3,0,93,168,1,2,9,98,3,0,93,169,1,
		2,100,98,3,0,93,170,1,2,100,98,3,0,93,
		171,1,2,9,98,3,0,93,172,1,2,100,98,3,
		0,93,173,1,2,9,98,3,0,93,174,1,2,100,
		98,3,0,93,175,1,2,100,98,3,0,93,176,1,
		2,100,98,3,0,93,177,1,2,120,98,3,0,93,
		207,1,2,9,98,3,0,93,156,1,2,9,98,3,
		0,93,157,1,2,9,98,3,0,93,158,1,2,9,
		98,3,0,93,97,1,2,9,98,3,0,93,159,1,
		2,36,33,0,92,60,98,3,0,93,175,1,2,36,
		34,0,93,164,1,98,3,0,93,176,1,2,36,35,
		0,92,100,98,3,0,93,164,1,2,36,36,0,92,
		28,98,3,0,93,165,1,2,36,37,0,90,8,176,
		11,0,12,0,6,98,3,0,93,163,1,2,36,38,
		0,106,8,73,110,99,108,117,105,114,0,98,3,0,
		93,162,1,2,36,39,0,106,6,65,114,105,97,108,
		0,98,3,0,93,166,1,2,36,40,0,92,9,98,
		3,0,93,167,1,2,36,41,0,106,1,0,98,3,
		0,93,168,1,2,36,42,0,9,98,3,0,93,156,
		1,2,36,43,0,9,98,3,0,93,157,1,2,36,
		44,0,9,98,3,0,93,159,1,2,36,45,0,9,
		98,3,0,93,158,1,2,36,46,0,90,4,100,6,
		98,3,0,93,170,1,2,36,47,0,90,4,100,6,
		98,3,0,93,171,1,2,36,48,0,100,98,3,0,
		93,173,1,2,36,49,0,9,98,3,0,93,169,1,
		2,36,50,0,9,98,3,0,93,172,1,2,36,51,
		0,9,98,3,0,93,174,1,2,36,52,0,9,98,
		3,0,93,207,1,2,36,53,0,9,98,3,0,93,
		97,1,2,36,54,0,100,98,3,0,93,177,1,2,
		36,55,0,106,4,84,79,80,0,98,3,0,93,125,
		1,2,36,56,0,98,3,0,93,177,1,1,100,8,
		29,165,0,176,8,0,98,3,0,93,160,1,1,98,
		3,0,93,161,1,1,98,3,0,93,176,1,1,98,
		3,0,93,175,1,1,98,3,0,93,162,1,1,98,
		3,0,93,163,1,1,98,3,0,93,164,1,1,98,
		3,0,93,165,1,1,98,3,0,93,166,1,1,98,
		3,0,93,167,1,1,98,3,0,93,168,1,1,98,
		3,0,93,170,1,1,98,3,0,93,171,1,1,98,
		3,0,93,169,1,1,98,3,0,93,172,1,1,98,
		3,0,93,173,1,1,98,3,0,93,174,1,1,98,
		3,0,93,156,1,1,98,3,0,93,157,1,1,98,
		3,0,93,159,1,1,98,3,0,93,158,1,1,98,
		3,0,93,97,1,1,20,22,26,63,1,98,3,0,
		93,162,1,1,100,8,28,126,176,9,0,98,3,0,
		93,160,1,1,98,3,0,93,161,1,1,98,3,0,
		93,176,1,1,98,3,0,93,175,1,1,106,1,0,
		98,3,0,93,163,1,1,98,3,0,93,164,1,1,
		98,3,0,93,165,1,1,98,3,0,93,177,1,1,
		98,3,0,93,168,1,1,98,3,0,93,170,1,1,
		98,3,0,93,171,1,1,98,3,0,93,169,1,1,
		98,3,0,93,207,1,1,68,98,3,0,93,173,1,
		1,98,3,0,93,174,1,1,98,3,0,93,172,1,
		1,20,17,26,184,0,176,10,0,98,3,0,93,160,
		1,1,98,3,0,93,161,1,1,98,3,0,93,176,
		1,1,98,3,0,93,175,1,1,98,3,0,93,162,
		1,1,98,3,0,93,163,1,1,98,3,0,93,164,
		1,1,98,3,0,93,165,1,1,98,3,0,93,166,
		1,1,98,3,0,93,167,1,1,98,3,0,93,168,
		1,1,98,3,0,93,170,1,1,98,3,0,93,171,
		1,1,98,3,0,93,169,1,1,98,3,0,93,172,
		1,1,98,3,0,93,173,1,1,98,3,0,93,174,
		1,1,98,3,0,93,156,1,1,98,3,0,93,157,
		1,1,98,3,0,93,159,1,1,98,3,0,93,158,
		1,1,98,3,0,93,177,1,1,98,3,0,93,125,
		1,1,98,3,0,93,97,1,1,98,3,0,93,207,
		1,1,68,20,25,36,58,0,106,18,98,116,110,65,
		108,116,101,114,97,114,85,115,117,97,114,105,111,0,
		98,3,0,93,160,1,2,100,98,3,0,93,161,1,
		2,100,98,3,0,93,176,1,2,100,98,3,0,93,
		175,1,2,100,98,3,0,93,162,1,2,100,98,3,
		0,93,163,1,2,100,98,3,0,93,164,1,2,100,
		98,3,0,93,165,1,2,100,98,3,0,93,166,1,
		2,100,98,3,0,93,167,1,2,100,98,3,0,93,
		168,1,2,9,98,3,0,93,169,1,2,100,98,3,
		0,93,170,1,2,100,98,3,0,93,171,1,2,9,
		98,3,0,93,172,1,2,100,98,3,0,93,173,1,
		2,9,98,3,0,93,174,1,2,100,98,3,0,93,
		175,1,2,100,98,3,0,93,176,1,2,100,98,3,
		0,93,177,1,2,120,98,3,0,93,207,1,2,9,
		98,3,0,93,156,1,2,9,98,3,0,93,157,1,
		2,9,98,3,0,93,158,1,2,9,98,3,0,93,
		97,1,2,9,98,3,0,93,159,1,2,36,59,0,
		92,100,98,3,0,93,175,1,2,36,60,0,93,164,
		1,98,3,0,93,176,1,2,36,61,0,92,100,98,
		3,0,93,164,1,2,36,62,0,92,28,98,3,0,
		93,165,1,2,36,63,0,90,8,176,12,0,12,0,
		6,98,3,0,93,163,1,2,36,64,0,106,8,65,
		108,116,101,114,97,114,0,98,3,0,93,162,1,2,
		36,65,0,106,6,65,114,105,97,108,0,98,3,0,
		93,166,1,2,36,66,0,92,9,98,3,0,93,167,
		1,2,36,67,0,106,1,0,98,3,0,93,168,1,
		2,36,68,0,9,98,3,0,93,156,1,2,36,69,
		0,9,98,3,0,93,157,1,2,36,70,0,9,98,
		3,0,93,159,1,2,36,71,0,9,98,3,0,93,
		158,1,2,36,72,0,90,4,100,6,98,3,0,93,
		170,1,2,36,73,0,90,4,100,6,98,3,0,93,
		171,1,2,36,74,0,100,98,3,0,93,173,1,2,
		36,75,0,9,98,3,0,93,169,1,2,36,76,0,
		9,98,3,0,93,172,1,2,36,77,0,9,98,3,
		0,93,174,1,2,36,78,0,9,98,3,0,93,207,
		1,2,36,79,0,9,98,3,0,93,97,1,2,36,
		80,0,100,98,3,0,93,177,1,2,36,81,0,106,
		4,84,79,80,0,98,3,0,93,125,1,2,36,82,
		0,98,3,0,93,177,1,1,100,8,29,165,0,176,
		8,0,98,3,0,93,160,1,1,98,3,0,93,161,
		1,1,98,3,0,93,176,1,1,98,3,0,93,175,
		1,1,98,3,0,93,162,1,1,98,3,0,93,163,
		1,1,98,3,0,93,164,1,1,98,3,0,93,165,
		1,1,98,3,0,93,166,1,1,98,3,0,93,167,
		1,1,98,3,0,93,168,1,1,98,3,0,93,170,
		1,1,98,3,0,93,171,1,1,98,3,0,93,169,
		1,1,98,3,0,93,172,1,1,98,3,0,93,173,
		1,1,98,3,0,93,174,1,1,98,3,0,93,156,
		1,1,98,3,0,93,157,1,1,98,3,0,93,159,
		1,1,98,3,0,93,158,1,1,98,3,0,93,97,
		1,1,20,22,26,63,1,98,3,0,93,162,1,1,
		100,8,28,126,176,9,0,98,3,0,93,160,1,1,
		98,3,0,93,161,1,1,98,3,0,93,176,1,1,
		98,3,0,93,175,1,1,106,1,0,98,3,0,93,
		163,1,1,98,3,0,93,164,1,1,98,3,0,93,
		165,1,1,98,3,0,93,177,1,1,98,3,0,93,
		168,1,1,98,3,0,93,170,1,1,98,3,0,93,
		171,1,1,98,3,0,93,169,1,1,98,3,0,93,
		207,1,1,68,98,3,0,93,173,1,1,98,3,0,
		93,174,1,1,98,3,0,93,172,1,1,20,17,26,
		184,0,176,10,0,98,3,0,93,160,1,1,98,3,
		0,93,161,1,1,98,3,0,93,176,1,1,98,3,
		0,93,175,1,1,98,3,0,93,162,1,1,98,3,
		0,93,163,1,1,98,3,0,93,164,1,1,98,3,
		0,93,165,1,1,98,3,0,93,166,1,1,98,3,
		0,93,167,1,1,98,3,0,93,168,1,1,98,3,
		0,93,170,1,1,98,3,0,93,171,1,1,98,3,
		0,93,169,1,1,98,3,0,93,172,1,1,98,3,
		0,93,173,1,1,98,3,0,93,174,1,1,98,3,
		0,93,156,1,1,98,3,0,93,157,1,1,98,3,
		0,93,159,1,1,98,3,0,93,158,1,1,98,3,
		0,93,177,1,1,98,3,0,93,125,1,1,98,3,
		0,93,97,1,1,98,3,0,93,207,1,1,68,20,
		25,36,84,0,106,18,98,116,110,69,120,99,108,117,
		105,114,85,115,117,97,114,105,111,0,98,3,0,93,
		160,1,2,100,98,3,0,93,161,1,2,100,98,3,
		0,93,176,1,2,100,98,3,0,93,175,1,2,100,
		98,3,0,93,162,1,2,100,98,3,0,93,163,1,
		2,100,98,3,0,93,164,1,2,100,98,3,0,93,
		165,1,2,100,98,3,0,93,166,1,2,100,98,3,
		0,93,167,1,2,100,98,3,0,93,168,1,2,9,
		98,3,0,93,169,1,2,100,98,3,0,93,170,1,
		2,100,98,3,0,93,171,1,2,9,98,3,0,93,
		172,1,2,100,98,3,0,93,173,1,2,9,98,3,
		0,93,174,1,2,100,98,3,0,93,175,1,2,100,
		98,3,0,93,176,1,2,100,98,3,0,93,177,1,
		2,120,98,3,0,93,207,1,2,9,98,3,0,93,
		156,1,2,9,98,3,0,93,157,1,2,9,98,3,
		0,93,158,1,2,9,98,3,0,93,97,1,2,9,
		98,3,0,93,159,1,2,36,85,0,93,140,0,98,
		3,0,93,175,1,2,36,86,0,93,164,1,98,3,
		0,93,176,1,2,36,87,0,92,100,98,3,0,93,
		164,1,2,36,88,0,92,28,98,3,0,93,165,1,
		2,36,89,0,90,8,176,13,0,12,0,6,98,3,
		0,93,163,1,2,36,90,0,106,8,69,120,99,108,
		117,105,114,0,98,3,0,93,162,1,2,36,91,0,
		106,6,65,114,105,97,108,0,98,3,0,93,166,1,
		2,36,92,0,92,9,98,3,0,93,167,1,2,36,
		93,0,106,1,0,98,3,0,93,168,1,2,36,94,
		0,9,98,3,0,93,156,1,2,36,95,0,9,98,
		3,0,93,157,1,2,36,96,0,9,98,3,0,93,
		159,1,2,36,97,0,9,98,3,0,93,158,1,2,
		36,98,0,90,4,100,6,98,3,0,93,170,1,2,
		36,99,0,90,4,100,6,98,3,0,93,171,1,2,
		36,100,0,100,98,3,0,93,173,1,2,36,101,0,
		9,98,3,0,93,169,1,2,36,102,0,9,98,3,
		0,93,172,1,2,36,103,0,9,98,3,0,93,174,
		1,2,36,104,0,9,98,3,0,93,207,1,2,36,
		105,0,9,98,3,0,93,97,1,2,36,106,0,100,
		98,3,0,93,177,1,2,36,107,0,106,4,84,79,
		80,0,98,3,0,93,125,1,2,36,108,0,98,3,
		0,93,177,1,1,100,8,29,165,0,176,8,0,98,
		3,0,93,160,1,1,98,3,0,93,161,1,1,98,
		3,0,93,176,1,1,98,3,0,93,175,1,1,98,
		3,0,93,162,1,1,98,3,0,93,163,1,1,98,
		3,0,93,164,1,1,98,3,0,93,165,1,1,98,
		3,0,93,166,1,1,98,3,0,93,167,1,1,98,
		3,0,93,168,1,1,98,3,0,93,170,1,1,98,
		3,0,93,171,1,1,98,3,0,93,169,1,1,98,
		3,0,93,172,1,1,98,3,0,93,173,1,1,98,
		3,0,93,174,1,1,98,3,0,93,156,1,1,98,
		3,0,93,157,1,1,98,3,0,93,159,1,1,98,
		3,0,93,158,1,1,98,3,0,93,97,1,1,20,
		22,26,63,1,98,3,0,93,162,1,1,100,8,28,
		126,176,9,0,98,3,0,93,160,1,1,98,3,0,
		93,161,1,1,98,3,0,93,176,1,1,98,3,0,
		93,175,1,1,106,1,0,98,3,0,93,163,1,1,
		98,3,0,93,164,1,1,98,3,0,93,165,1,1,
		98,3,0,93,177,1,1,98,3,0,93,168,1,1,
		98,3,0,93,170,1,1,98,3,0,93,171,1,1,
		98,3,0,93,169,1,1,98,3,0,93,207,1,1,
		68,98,3,0,93,173,1,1,98,3,0,93,174,1,
		1,98,3,0,93,172,1,1,20,17,26,184,0,176,
		10,0,98,3,0,93,160,1,1,98,3,0,93,161,
		1,1,98,3,0,93,176,1,1,98,3,0,93,175,
		1,1,98,3,0,93,162,1,1,98,3,0,93,163,
		1,1,98,3,0,93,164,1,1,98,3,0,93,165,
		1,1,98,3,0,93,166,1,1,98,3,0,93,167,
		1,1,98,3,0,93,168,1,1,98,3,0,93,170,
		1,1,98,3,0,93,171,1,1,98,3,0,93,169,
		1,1,98,3,0,93,172,1,1,98,3,0,93,173,
		1,1,98,3,0,93,174,1,1,98,3,0,93,156,
		1,1,98,3,0,93,157,1,1,98,3,0,93,159,
		1,1,98,3,0,93,158,1,1,98,3,0,93,177,
		1,1,98,3,0,93,125,1,1,98,3,0,93,97,
		1,1,98,3,0,93,207,1,1,68,20,25,36,110,
		0,106,20,98,116,110,73,109,112,114,105,109,105,114,
		85,115,117,97,114,105,111,115,0,98,3,0,93,160,
		1,2,100,98,3,0,93,161,1,2,100,98,3,0,
		93,176,1,2,100,98,3,0,93,175,1,2,100,98,
		3,0,93,162,1,2,100,98,3,0,93,163,1,2,
		100,98,3,0,93,164,1,2,100,98,3,0,93,165,
		1,2,100,98,3,0,93,166,1,2,100,98,3,0,
		93,167,1,2,100,98,3,0,93,168,1,2,9,98,
		3,0,93,169,1,2,100,98,3,0,93,170,1,2,
		100,98,3,0,93,171,1,2,9,98,3,0,93,172,
		1,2,100,98,3,0,93,173,1,2,9,98,3,0,
		93,174,1,2,100,98,3,0,93,175,1,2,100,98,
		3,0,93,176,1,2,100,98,3,0,93,177,1,2,
		120,98,3,0,93,207,1,2,9,98,3,0,93,156,
		1,2,9,98,3,0,93,157,1,2,9,98,3,0,
		93,158,1,2,9,98,3,0,93,97,1,2,9,98,
		3,0,93,159,1,2,36,111,0,93,180,0,98,3,
		0,93,175,1,2,36,112,0,93,164,1,98,3,0,
		93,176,1,2,36,113,0,92,100,98,3,0,93,164,
		1,2,36,114,0,92,28,98,3,0,93,165,1,2,
		36,115,0,90,8,176,14,0,12,0,6,98,3,0,
		93,163,1,2,36,116,0,106,9,73,109,112,114,105,
		109,105,114,0,98,3,0,93,162,1,2,36,117,0,
		106,6,65,114,105,97,108,0,98,3,0,93,166,1,
		2,36,118,0,92,9,98,3,0,93,167,1,2,36,
		119,0,106,1,0,98,3,0,93,168,1,2,36,120,
		0,9,98,3,0,93,156,1,2,36,121,0,9,98,
		3,0,93,157,1,2,36,122,0,9,98,3,0,93,
		159,1,2,36,123,0,9,98,3,0,93,158,1,2,
		36,124,0,90,4,100,6,98,3,0,93,170,1,2,
		36,125,0,90,4,100,6,98,3,0,93,171,1,2,
		36,126,0,100,98,3,0,93,173,1,2,36,127,0,
		9,98,3,0,93,169,1,2,36,128,0,9,98,3,
		0,93,172,1,2,36,129,0,9,98,3,0,93,174,
		1,2,36,130,0,9,98,3,0,93,207,1,2,36,
		131,0,9,98,3,0,93,97,1,2,36,132,0,100,
		98,3,0,93,177,1,2,36,133,0,106,4,84,79,
		80,0,98,3,0,93,125,1,2,36,134,0,98,3,
		0,93,177,1,1,100,8,29,165,0,176,8,0,98,
		3,0,93,160,1,1,98,3,0,93,161,1,1,98,
		3,0,93,176,1,1,98,3,0,93,175,1,1,98,
		3,0,93,162,1,1,98,3,0,93,163,1,1,98,
		3,0,93,164,1,1,98,3,0,93,165,1,1,98,
		3,0,93,166,1,1,98,3,0,93,167,1,1,98,
		3,0,93,168,1,1,98,3,0,93,170,1,1,98,
		3,0,93,171,1,1,98,3,0,93,169,1,1,98,
		3,0,93,172,1,1,98,3,0,93,173,1,1,98,
		3,0,93,174,1,1,98,3,0,93,156,1,1,98,
		3,0,93,157,1,1,98,3,0,93,159,1,1,98,
		3,0,93,158,1,1,98,3,0,93,97,1,1,20,
		22,26,63,1,98,3,0,93,162,1,1,100,8,28,
		126,176,9,0,98,3,0,93,160,1,1,98,3,0,
		93,161,1,1,98,3,0,93,176,1,1,98,3,0,
		93,175,1,1,106,1,0,98,3,0,93,163,1,1,
		98,3,0,93,164,1,1,98,3,0,93,165,1,1,
		98,3,0,93,177,1,1,98,3,0,93,168,1,1,
		98,3,0,93,170,1,1,98,3,0,93,171,1,1,
		98,3,0,93,169,1,1,98,3,0,93,207,1,1,
		68,98,3,0,93,173,1,1,98,3,0,93,174,1,
		1,98,3,0,93,172,1,1,20,17,26,184,0,176,
		10,0,98,3,0,93,160,1,1,98,3,0,93,161,
		1,1,98,3,0,93,176,1,1,98,3,0,93,175,
		1,1,98,3,0,93,162,1,1,98,3,0,93,163,
		1,1,98,3,0,93,164,1,1,98,3,0,93,165,
		1,1,98,3,0,93,166,1,1,98,3,0,93,167,
		1,1,98,3,0,93,168,1,1,98,3,0,93,170,
		1,1,98,3,0,93,171,1,1,98,3,0,93,169,
		1,1,98,3,0,93,172,1,1,98,3,0,93,173,
		1,1,98,3,0,93,174,1,1,98,3,0,93,156,
		1,1,98,3,0,93,157,1,1,98,3,0,93,159,
		1,1,98,3,0,93,158,1,1,98,3,0,93,177,
		1,1,98,3,0,93,125,1,1,98,3,0,93,97,
		1,1,98,3,0,93,207,1,1,68,20,25,36,136,
		0,106,21,98,116,110,83,97,105,114,76,105,115,116,
		97,85,115,117,97,114,105,111,115,0,98,3,0,93,
		160,1,2,100,98,3,0,93,161,1,2,100,98,3,
		0,93,176,1,2,100,98,3,0,93,175,1,2,100,
		98,3,0,93,162,1,2,100,98,3,0,93,163,1,
		2,100,98,3,0,93,164,1,2,100,98,3,0,93,
		165,1,2,100,98,3,0,93,166,1,2,100,98,3,
		0,93,167,1,2,100,98,3,0,93,168,1,2,9,
		98,3,0,93,169,1,2,100,98,3,0,93,170,1,
		2,100,98,3,0,93,171,1,2,9,98,3,0,93,
		172,1,2,100,98,3,0,93,173,1,2,9,98,3,
		0,93,174,1,2,100,98,3,0,93,175,1,2,100,
		98,3,0,93,176,1,2,100,98,3,0,93,177,1,
		2,120,98,3,0,93,207,1,2,9,98,3,0,93,
		156,1,2,9,98,3,0,93,157,1,2,9,98,3,
		0,93,158,1,2,9,98,3,0,93,97,1,2,9,
		98,3,0,93,159,1,2,36,137,0,93,220,0,98,
		3,0,93,175,1,2,36,138,0,93,164,1,98,3,
		0,93,176,1,2,36,139,0,92,100,98,3,0,93,
		164,1,2,36,140,0,92,28,98,3,0,93,165,1,
		2,36,141,0,90,8,176,15,0,12,0,6,98,3,
		0,93,163,1,2,36,142,0,106,5,83,97,105,114,
		0,98,3,0,93,162,1,2,36,143,0,106,6,65,
		114,105,97,108,0,98,3,0,93,166,1,2,36,144,
		0,92,9,98,3,0,93,167,1,2,36,145,0,106,
		1,0,98,3,0,93,168,1,2,36,146,0,9,98,
		3,0,93,156,1,2,36,147,0,9,98,3,0,93,
		157,1,2,36,148,0,9,98,3,0,93,159,1,2,
		36,149,0,9,98,3,0,93,158,1,2,36,150,0,
		90,4,100,6,98,3,0,93,170,1,2,36,151,0,
		90,4,100,6,98,3,0,93,171,1,2,36,152,0,
		100,98,3,0,93,173,1,2,36,153,0,9,98,3,
		0,93,169,1,2,36,154,0,9,98,3,0,93,172,
		1,2,36,155,0,9,98,3,0,93,174,1,2,36,
		156,0,9,98,3,0,93,207,1,2,36,157,0,9,
		98,3,0,93,97,1,2,36,158,0,100,98,3,0,
		93,177,1,2,36,159,0,106,4,84,79,80,0,98,
		3,0,93,125,1,2,36,160,0,98,3,0,93,177,
		1,1,100,8,29,165,0,176,8,0,98,3,0,93,
		160,1,1,98,3,0,93,161,1,1,98,3,0,93,
		176,1,1,98,3,0,93,175,1,1,98,3,0,93,
		162,1,1,98,3,0,93,163,1,1,98,3,0,93,
		164,1,1,98,3,0,93,165,1,1,98,3,0,93,
		166,1,1,98,3,0,93,167,1,1,98,3,0,93,
		168,1,1,98,3,0,93,170,1,1,98,3,0,93,
		171,1,1,98,3,0,93,169,1,1,98,3,0,93,
		172,1,1,98,3,0,93,173,1,1,98,3,0,93,
		174,1,1,98,3,0,93,156,1,1,98,3,0,93,
		157,1,1,98,3,0,93,159,1,1,98,3,0,93,
		158,1,1,98,3,0,93,97,1,1,20,22,26,63,
		1,98,3,0,93,162,1,1,100,8,28,126,176,9,
		0,98,3,0,93,160,1,1,98,3,0,93,161,1,
		1,98,3,0,93,176,1,1,98,3,0,93,175,1,
		1,106,1,0,98,3,0,93,163,1,1,98,3,0,
		93,164,1,1,98,3,0,93,165,1,1,98,3,0,
		93,177,1,1,98,3,0,93,168,1,1,98,3,0,
		93,170,1,1,98,3,0,93,171,1,1,98,3,0,
		93,169,1,1,98,3,0,93,207,1,1,68,98,3,
		0,93,173,1,1,98,3,0,93,174,1,1,98,3,
		0,93,172,1,1,20,17,26,184,0,176,10,0,98,
		3,0,93,160,1,1,98,3,0,93,161,1,1,98,
		3,0,93,176,1,1,98,3,0,93,175,1,1,98,
		3,0,93,162,1,1,98,3,0,93,163,1,1,98,
		3,0,93,164,1,1,98,3,0,93,165,1,1,98,
		3,0,93,166,1,1,98,3,0,93,167,1,1,98,
		3,0,93,168,1,1,98,3,0,93,170,1,1,98,
		3,0,93,171,1,1,98,3,0,93,169,1,1,98,
		3,0,93,172,1,1,98,3,0,93,173,1,1,98,
		3,0,93,174,1,1,98,3,0,93,156,1,1,98,
		3,0,93,157,1,1,98,3,0,93,159,1,1,98,
		3,0,93,158,1,1,98,3,0,93,177,1,1,98,
		3,0,93,125,1,1,98,3,0,93,97,1,1,98,
		3,0,93,207,1,1,68,20,25,36,162,0,120,98,
		3,0,93,127,1,2,100,98,3,0,93,126,1,2,
		106,18,103,114,105,100,76,105,115,116,97,85,115,117,
		97,114,105,111,115,0,98,3,0,93,160,1,2,100,
		98,3,0,93,161,1,2,100,98,3,0,93,176,1,
		2,100,98,3,0,93,175,1,2,100,98,3,0,93,
		164,1,2,100,98,3,0,93,165,1,2,100,98,3,
		0,93,189,1,2,100,98,3,0,93,190,1,2,100,
		98,3,0,93,25,1,2,100,98,3,0,93,180,1,
		2,100,98,3,0,93,178,1,2,100,98,3,0,93,
		166,1,2,100,98,3,0,93,167,1,2,100,98,3,
		0,93,168,1,2,100,98,3,0,93,170,1,2,100,
		98,3,0,93,179,1,2,100,98,3,0,93,171,1,
		2,100,98,3,0,93,191,1,2,100,98,3,0,93,
		192,1,2,9,98,3,0,93,193,1,2,100,98,3,
		0,93,194,1,2,100,98,3,0,93,195,1,2,100,
		98,3,0,93,173,1,2,9,98,3,0,93,199,1,
		2,9,98,3,0,93,187,1,2,9,98,3,0,93,
		156,1,2,9,98,3,0,93,157,1,2,9,98,3,
		0,93,158,1,2,9,98,3,0,93,159,1,2,100,
		98,3,0,93,152,1,2,100,98,3,0,93,151,1,
		2,100,98,3,0,93,201,1,2,100,98,3,0,93,
		202,1,2,100,98,3,0,93,185,1,2,9,98,3,
		0,93,154,1,2,9,98,3,0,93,145,1,2,9,
		98,3,0,93,200,1,2,9,98,3,0,93,73,1,
		2,100,98,3,0,93,135,1,2,100,98,3,0,93,
		134,1,2,100,98,3,0,93,132,1,2,100,98,3,
		0,93,246,0,2,100,98,3,0,93,131,1,2,100,
		98,3,0,93,71,1,2,100,98,3,0,93,70,1,
		2,9,98,3,0,93,69,1,2,9,98,3,0,93,
		226,1,2,100,98,3,0,93,230,1,2,100,98,3,
		0,93,244,0,2,100,98,3,0,93,21,1,2,100,
		98,3,0,93,130,1,2,100,98,3,0,93,163,1,
		2,100,98,3,0,93,247,0,2,100,98,3,0,93,
		248,0,2,120,98,3,0,93,207,1,2,100,98,3,
		0,93,197,1,2,100,98,3,0,93,198,1,2,120,
		98,3,0,93,196,1,2,100,98,3,0,93,96,1,
		2,36,163,0,92,20,98,3,0,93,175,1,2,36,
		164,0,92,20,98,3,0,93,176,1,2,36,165,0,
		93,124,1,98,3,0,93,164,1,2,36,166,0,93,
		230,0,98,3,0,93,165,1,2,36,167,0,106,2,
		49,0,106,16,110,111,109,101,32,100,111,32,117,115,
		117,97,114,105,111,0,106,2,83,0,106,2,78,0,
		106,2,78,0,4,5,0,4,1,0,98,3,0,93,
		180,1,2,36,168,0,100,98,3,0,93,178,1,2,
		36,169,0,92,55,93,185,0,92,45,92,45,92,45,
		4,5,0,98,3,0,93,190,1,2,36,170,0,106,
		7,67,111,100,105,103,111,0,106,5,78,111,109,101,
		0,106,4,65,100,109,0,106,5,66,108,111,113,0,
		106,5,69,120,99,108,0,4,5,0,98,3,0,93,
		189,1,2,36,171,0,106,6,65,114,105,97,108,0,
		98,3,0,93,166,1,2,36,172,0,92,9,98,3,
		0,93,167,1,2,36,173,0,106,1,0,98,3,0,
		93,168,1,2,36,174,0,90,4,100,6,98,3,0,
		93,179,1,2,36,175,0,90,4,100,6,98,3,0,
		93,170,1,2,36,176,0,90,4,100,6,98,3,0,
		93,171,1,2,36,177,0,9,98,3,0,93,156,1,
		2,36,178,0,9,98,3,0,93,157,1,2,36,179,
		0,9,98,3,0,93,159,1,2,36,180,0,9,98,
		3,0,93,158,1,2,36,181,0,90,4,100,6,98,
		3,0,93,191,1,2,36,182,0,100,98,3,0,93,
		192,1,2,36,183,0,90,4,100,6,98,3,0,93,
		152,1,2,36,184,0,9,98,3,0,93,199,1,2,
		36,185,0,9,98,3,0,93,200,1,2,36,186,0,
		9,98,3,0,93,154,1,2,36,187,0,100,98,3,
		0,93,135,1,2,36,188,0,100,98,3,0,93,134,
		1,2,36,189,0,100,98,3,0,93,130,1,2,36,
		190,0,100,98,3,0,93,131,1,2,36,191,0,100,
		98,3,0,93,132,1,2,36,192,0,120,98,3,0,
		93,126,1,2,36,193,0,9,98,3,0,93,73,1,
		2,36,194,0,9,98,3,0,93,193,1,2,36,195,
		0,100,98,3,0,93,173,1,2,36,196,0,100,98,
		3,0,93,194,1,2,36,197,0,100,98,3,0,93,
		195,1,2,36,198,0,100,98,3,0,93,151,1,2,
		36,199,0,100,98,3,0,93,201,1,2,36,200,0,
		100,98,3,0,93,202,1,2,36,201,0,100,98,3,
		0,93,246,0,2,36,202,0,100,98,3,0,93,71,
		1,2,36,203,0,100,98,3,0,93,70,1,2,36,
		204,0,9,98,3,0,93,230,1,2,36,205,0,9,
		98,3,0,93,226,1,2,36,206,0,9,98,3,0,
		93,69,1,2,36,207,0,100,98,3,0,93,244,0,
		2,36,208,0,176,16,0,100,12,1,106,2,85,0,
		8,28,5,100,25,6,90,4,100,6,98,3,0,93,
		21,1,2,36,209,0,121,98,3,0,93,25,1,2,
		36,210,0,9,98,3,0,93,127,1,2,176,17,0,
		98,3,0,93,160,1,1,98,3,0,93,161,1,1,
		98,3,0,93,176,1,1,98,3,0,93,175,1,1,
		98,3,0,93,164,1,1,98,3,0,93,165,1,1,
		98,3,0,93,189,1,1,98,3,0,93,190,1,1,
		98,3,0,93,180,1,1,98,3,0,93,178,1,1,
		98,3,0,93,166,1,1,98,3,0,93,167,1,1,
		98,3,0,93,168,1,1,98,3,0,93,179,1,1,
		98,3,0,93,191,1,1,98,3,0,93,192,1,1,
		98,3,0,93,170,1,1,98,3,0,93,171,1,1,
		98,3,0,93,193,1,1,98,3,0,93,194,1,1,
		98,3,0,93,195,1,1,98,3,0,93,187,1,1,
		98,3,0,93,173,1,1,98,3,0,93,156,1,1,
		98,3,0,93,157,1,1,98,3,0,93,159,1,1,
		98,3,0,93,158,1,1,98,3,0,93,154,1,1,
		98,3,0,93,152,1,1,98,3,0,93,151,1,1,
		100,100,100,98,3,0,93,199,1,1,100,98,3,0,
		93,201,1,1,98,3,0,93,202,1,1,98,3,0,
		93,200,1,1,98,3,0,93,132,1,1,98,3,0,
		93,135,1,1,98,3,0,93,134,1,1,98,3,0,
		93,131,1,1,98,3,0,93,130,1,1,98,3,0,
		93,126,1,1,98,3,0,93,246,0,1,98,3,0,
		93,73,1,1,98,3,0,93,71,1,1,98,3,0,
		93,70,1,1,98,3,0,93,230,1,1,98,3,0,
		93,69,1,1,98,3,0,93,226,1,1,98,3,0,
		93,244,0,1,98,3,0,93,21,1,1,98,3,0,
		93,25,1,1,98,3,0,93,163,1,1,98,3,0,
		93,247,0,1,98,3,0,93,248,0,1,98,3,0,
		93,207,1,1,68,98,3,0,93,196,1,1,68,98,
		3,0,93,197,1,1,98,3,0,93,198,1,1,98,
		3,0,93,96,1,1,20,62,36,212,0,176,18,0,
		20,0,36,12,0,176,19,0,106,14,108,105,115,116,
		97,117,115,117,97,114,105,111,115,0,4,1,0,20,
		1,36,14,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

