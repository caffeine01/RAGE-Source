
#pragma once
#include <Windows.h>
#include "retcheck.h"
#include "Bridge.h"



//Auto Lua Type: https://github.com/Mellonyt/Roblox-Lua-Type-Scanner
// Scanning Time: 4 Secs
// For version-5a2a97e1d9794df1
namespace Adresses {
    /*

    * addinfo_Decompiled_Args: int a1
    * addinfo_TypeDef: int
    * addinfo_Aob: 55 8B EC 81 EC 00 01 00 00 57
    * addinfo_ProtectedByRetCheck: false
    * addinfo_IsApartOfLua: true
    * addinfo_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_addinfo_typedef)(int a1);
      r_addinfo_typedef  r_addinfo = (r_addinfo_typedef)(x(0x014402E0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(addinfo_CCV* r_addinfo_typedef)(int a1);
      r_addinfo_typedef  r_addinfo = (r_addinfo_typedef)(x(Adresses::addinfo_addr));



    */
    DWORD addinfo_addr = 0x014402E0;
#define addinfo_CCV  __cdecl

    /*

    * adjuststack_Decompiled_Args: int a1
    * adjuststack_TypeDef: int
    * adjuststack_Aob: 55 8B EC 53 8B 5D 08 83 7B 04
    * adjuststack_ProtectedByRetCheck: false
    * adjuststack_IsApartOfLua: true
    * adjuststack_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_adjuststack_typedef)(int a1);
      r_adjuststack_typedef  r_adjuststack = (r_adjuststack_typedef)(x(0x01435930));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(adjuststack_CCV* r_adjuststack_typedef)(int a1);
      r_adjuststack_typedef  r_adjuststack = (r_adjuststack_typedef)(x(Adresses::adjuststack_addr));



    */
    DWORD adjuststack_addr = 0x01435930;
#define adjuststack_CCV  __cdecl

    /*

    * arith_Decompiled_Args: int a1, int a2, int a3
    * arith_TypeDef: int
    * arith_Aob: 55 8B EC 56 8B 75 0C 57 8B 46 0C
    * arith_ProtectedByRetCheck: false
    * arith_IsApartOfLua: true
    * arith_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_arith_typedef)(int a1, int a2, int a3);
      r_arith_typedef  r_arith = (r_arith_typedef)(x(0x0144B190));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(arith_CCV* r_arith_typedef)(int a1, int a2, int a3);
      r_arith_typedef  r_arith = (r_arith_typedef)(x(Adresses::arith_addr));



    */
    DWORD arith_addr = 0x0144B190;
#define arith_CCV  __cdecl

    /*

    * aux_upvalue_Decompiled_Args: int a1, int a2, int a3
    * aux_upvalue_TypeDef: int
    * aux_upvalue_Aob: 55 8B EC 8B 55 08 56 57 83 7A
    * aux_upvalue_ProtectedByRetCheck: false
    * aux_upvalue_IsApartOfLua: true
    * aux_upvalue_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_aux_upvalue_typedef)(int a1, int a2, int a3);
      r_aux_upvalue_typedef  r_aux_upvalue = (r_aux_upvalue_typedef)(x(0x014332F0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(aux_upvalue_CCV* r_aux_upvalue_typedef)(int a1, int a2, int a3);
      r_aux_upvalue_typedef  r_aux_upvalue = (r_aux_upvalue_typedef)(x(Adresses::aux_upvalue_addr));



    */
    DWORD aux_upvalue_addr = 0x014332F0;
#define aux_upvalue_CCV  __cdecl

    /*

    * auxgetinfo_Decompiled_Args: int a1, int a2, int a3, int a4
    * auxgetinfo_TypeDef: int
    * auxgetinfo_Aob: 55 8B EC 53 57 8B 7D 0C BB
    * auxgetinfo_ProtectedByRetCheck: false
    * auxgetinfo_IsApartOfLua: true
    * auxgetinfo_Mask: .........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_auxgetinfo_typedef)(int a1, int a2, int a3, int a4);
      r_auxgetinfo_typedef  r_auxgetinfo = (r_auxgetinfo_typedef)(x(0x01440350));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(auxgetinfo_CCV* r_auxgetinfo_typedef)(int a1, int a2, int a3, int a4);
      r_auxgetinfo_typedef  r_auxgetinfo = (r_auxgetinfo_typedef)(x(Adresses::auxgetinfo_addr));



    */
    DWORD auxgetinfo_addr = 0x01440350;
#define auxgetinfo_CCV  __cdecl

    /*

    * auxresume_Decompiled_Args: int a1, int a2, int a3
    * auxresume_TypeDef: int
    * auxresume_Aob: 55 8B EC 53 56 8B 75 0C 57 8B 7D 08 3B
    * auxresume_ProtectedByRetCheck: false
    * auxresume_IsApartOfLua: true
    * auxresume_Mask: .............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_auxresume_typedef)(int a1, int a2, int a3);
      r_auxresume_typedef  r_auxresume = (r_auxresume_typedef)(x(0x01441E70));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(auxresume_CCV* r_auxresume_typedef)(int a1, int a2, int a3);
      r_auxresume_typedef  r_auxresume = (r_auxresume_typedef)(x(Adresses::auxresume_addr));



    */
    DWORD auxresume_addr = 0x01441E70;
#define auxresume_CCV  __cdecl

    /*

    * call_bintm_Decompiled_Args: int a1, int a2, int a3, int a4
    * call_bintm_TypeDef: int
    * call_bintm_Aob: 55 8B EC 51 53 56 8B 75 0C 57 85
    * call_bintm_ProtectedByRetCheck: false
    * call_bintm_IsApartOfLua: true
    * call_bintm_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_call_bintm_typedef)(int a1, int a2, int a3, int a4);
      r_call_bintm_typedef  r_call_bintm = (r_call_bintm_typedef)(x(0x0144AA30));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(call_bintm_CCV* r_call_bintm_typedef)(int a1, int a2, int a3, int a4);
      r_call_bintm_typedef  r_call_bintm = (r_call_bintm_typedef)(x(Adresses::call_bintm_addr));



    */
    DWORD call_bintm_addr = 0x0144AA30;
#define call_bintm_CCV  __cdecl

    /*

    * call_ordertm_Decompiled_Args: int a1, int a2
    * call_ordertm_TypeDef: int
    * call_ordertm_Aob: 55 8B EC 8B 45 08 53 56 57 8D
    * call_ordertm_ProtectedByRetCheck: false
    * call_ordertm_IsApartOfLua: true
    * call_ordertm_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_call_ordertm_typedef)(int a1, int a2);
      r_call_ordertm_typedef  r_call_ordertm = (r_call_ordertm_typedef)(x(0x0144AAE0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(call_ordertm_CCV* r_call_ordertm_typedef)(int a1, int a2);
      r_call_ordertm_typedef  r_call_ordertm = (r_call_ordertm_typedef)(x(Adresses::call_ordertm_addr));



    */
    DWORD call_ordertm_addr = 0x0144AAE0;
#define call_ordertm_CCV  __cdecl

    /*

    * callcheck_Decompiled_Args: Given Adress Is Not A Function
    * callcheck_TypeDef: Given Adress Is Not A Function
    * callcheck_Aob: FF 15 F8 61 A1 01 8B D8
    * callcheck_ProtectedByRetCheck: false
    * callcheck_IsApartOfLua: false
    * callcheck_Mask: ........
    * Usage (Not 100% Accurate):

    Given Addy Is Not A Function.

    */
    DWORD callcheck_addr = 0x005E1240;
#define callcheck_CCV  __stdcall

    /*

    * calltmres_Decompiled_Args: int a1, int a2, int a3, int a4, int a5
    * calltmres_TypeDef: int
    * calltmres_Aob: 55 8B EC 8B 45 10 56 8B 75 08 57
    * calltmres_ProtectedByRetCheck: false
    * calltmres_IsApartOfLua: true
    * calltmres_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_calltmres_typedef)(int a1, int a2, int a3, int a4, int a5);
      r_calltmres_typedef  r_calltmres = (r_calltmres_typedef)(x(0x0144A8E0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(calltmres_CCV* r_calltmres_typedef)(int a1, int a2, int a3, int a4, int a5);
      r_calltmres_typedef  r_calltmres = (r_calltmres_typedef)(x(Adresses::calltmres_addr));



    */
    DWORD calltmres_addr = 0x0144A8E0;
#define calltmres_CCV  __cdecl

    /*

    * close_state_Decompiled_Args: int a1
    * close_state_TypeDef: int
    * close_state_Aob: 55 8B EC 53 8B 5D 08 56 57 8B 7B 08 8D
    * close_state_ProtectedByRetCheck: false
    * close_state_IsApartOfLua: true
    * close_state_Mask: .............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_close_state_typedef)(int a1);
      r_close_state_typedef  r_close_state = (r_close_state_typedef)(x(0x0143FD90));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(close_state_CCV* r_close_state_typedef)(int a1);
      r_close_state_typedef  r_close_state = (r_close_state_typedef)(x(Adresses::close_state_addr));



    */
    DWORD close_state_addr = 0x0143FD90;
#define close_state_CCV  __cdecl

    /*

    * collectvalidlines_Decompiled_Args: int a1, int a2
    * collectvalidlines_TypeDef: int
    * collectvalidlines_Aob: 55 8B EC 56 8B 75 0C 57 8B 7D 08 8B 57
    * collectvalidlines_ProtectedByRetCheck: false
    * collectvalidlines_IsApartOfLua: true
    * collectvalidlines_Mask: .............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_collectvalidlines_typedef)(int a1, int a2);
      r_collectvalidlines_typedef  r_collectvalidlines = (r_collectvalidlines_typedef)(x(0x014365C0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(collectvalidlines_CCV* r_collectvalidlines_typedef)(int a1, int a2);
      r_collectvalidlines_typedef  r_collectvalidlines = (r_collectvalidlines_typedef)(x(Adresses::collectvalidlines_addr));



    */
    DWORD collectvalidlines_addr = 0x014365C0;
#define collectvalidlines_CCV  __cdecl

    /*

    * currentline_Decompiled_Args: int a1
    * currentline_TypeDef: int
    * currentline_Aob: 55 8B EC 8B 4D 0C 53 56 57 8B 01
    * currentline_ProtectedByRetCheck: false
    * currentline_IsApartOfLua: true
    * currentline_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_currentline_typedef)(int a1);
      r_currentline_typedef  r_currentline = (r_currentline_typedef)(x(0x01440570));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(currentline_CCV* r_currentline_typedef)(int a1);
      r_currentline_typedef  r_currentline = (r_currentline_typedef)(x(Adresses::currentline_addr));



    */
    DWORD currentline_addr = 0x01440570;
#define currentline_CCV  __cdecl

    /*

    * deobfuscate_closure_Decompiled_Args: int a1, int a2
    * deobfuscate_closure_TypeDef: int
    * deobfuscate_closure_Aob: 55 8B EC 53 8B 5D 08 56 8B 75 0C 57 83 7E 0C 07 75 47
    * deobfuscate_closure_ProtectedByRetCheck: false
    * deobfuscate_closure_IsApartOfLua: true
    * deobfuscate_closure_Mask: ..................
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_deobfuscate_closure_typedef)(int a1, int a2);
      r_deobfuscate_closure_typedef  r_deobfuscate_closure = (r_deobfuscate_closure_typedef)(x(0x0144B8D0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(deobfuscate_closure_CCV* r_deobfuscate_closure_typedef)(int a1, int a2);
      r_deobfuscate_closure_typedef  r_deobfuscate_closure = (r_deobfuscate_closure_typedef)(x(Adresses::deobfuscate_closure_addr));



    */
    DWORD deobfuscate_closure_addr = 0x0144B8D0;
#define deobfuscate_closure_CCV  __cdecl

    /*

    * f_call_Decompiled_Args: int a1
    * f_call_TypeDef: int
    * f_call_Aob: 55 8B EC 8B 45 0C FF 70 04 FF 30 FF 75 08 E8 2D 31
    * f_call_ProtectedByRetCheck: true
    * f_call_IsApartOfLua: true
    * f_call_Mask: .................
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_f_call_typedef)(int a1);
      r_f_call_typedef  r_f_call = (r_f_call_typedef)unprotect(x(0x01433380));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(f_call_CCV* r_f_call_typedef)(int a1);
      r_f_call_typedef  r_f_call = (r_f_call_typedef)unprotect(x(Adresses::f_call_addr));



    */
    DWORD f_call_addr = 0x01433380;
#define f_call_CCV  __cdecl

    /*

    * f_luaopen_Decompiled_Args: int a1
    * f_luaopen_TypeDef: int
    * f_luaopen_Aob: 55 8B EC 53 8B 5D 08 8B 43 08 56
    * f_luaopen_ProtectedByRetCheck: false
    * f_luaopen_IsApartOfLua: true
    * f_luaopen_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_f_luaopen_typedef)(int a1);
      r_f_luaopen_typedef  r_f_luaopen = (r_f_luaopen_typedef)(x(0x0143FE30));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(f_luaopen_CCV* r_f_luaopen_typedef)(int a1);
      r_f_luaopen_typedef  r_f_luaopen = (r_f_luaopen_typedef)(x(Adresses::f_luaopen_addr));



    */
    DWORD f_luaopen_addr = 0x0143FE30;
#define f_luaopen_CCV  __cdecl

    /*

    * findfirstchild_Decompiled_Args: int a1
    * findfirstchild_TypeDef: int
    * findfirstchild_Aob: 55 8B EC 83 EC 10 53 8B C1
    * findfirstchild_ProtectedByRetCheck: false
    * findfirstchild_IsApartOfLua: false
    * findfirstchild_Mask: .........
    * Usage (Not 100% Accurate):

      typedef int(__thiscall* r_findfirstchild_typedef)(int a1);
      r_findfirstchild_typedef  r_findfirstchild = (r_findfirstchild_typedef)(x(0x0067F4A0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(findfirstchild_CCV* r_findfirstchild_typedef)(int a1);
      r_findfirstchild_typedef  r_findfirstchild = (r_findfirstchild_typedef)(x(Adresses::findfirstchild_addr));



    */
    DWORD findfirstchild_addr = 0x0067F4A0;
#define findfirstchild_CCV  __thiscall

    /*

    * findfirstchildofclass_Decompiled_Args: int a1
    * findfirstchildofclass_TypeDef: int
    * findfirstchildofclass_Aob: Unable to get AOB
    * findfirstchildofclass_ProtectedByRetCheck: false
    * findfirstchildofclass_IsApartOfLua: false
    * findfirstchildofclass_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__stdcall* r_findfirstchildofclass_typedef)(int a1);
      r_findfirstchildofclass_typedef  r_findfirstchildofclass = (r_findfirstchildofclass_typedef)(x(0x0067F670));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(findfirstchildofclass_CCV* r_findfirstchildofclass_typedef)(int a1);
      r_findfirstchildofclass_typedef  r_findfirstchildofclass = (r_findfirstchildofclass_typedef)(x(Adresses::findfirstchildofclass_addr));



    */
    DWORD findfirstchildofclass_addr = 0x0067F670;
#define findfirstchildofclass_CCV  __stdcall

    /*

    * findlocal_Decompiled_Args: int a1, int a2, int a3
    * findlocal_TypeDef: int
    * findlocal_Aob: 55 8B EC 51 8B 4D 08 33 D2 53 56
    * findlocal_ProtectedByRetCheck: false
    * findlocal_IsApartOfLua: true
    * findlocal_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_findlocal_typedef)(int a1, int a2, int a3);
      r_findlocal_typedef  r_findlocal = (r_findlocal_typedef)(x(0x01447B70));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(findlocal_CCV* r_findlocal_typedef)(int a1, int a2, int a3);
      r_findlocal_typedef  r_findlocal = (r_findlocal_typedef)(x(Adresses::findlocal_addr));



    */
    DWORD findlocal_addr = 0x01447B70;
#define findlocal_CCV  __cdecl

    /*

    * fireclickdetector_Decompiled_Args: int a1
    * fireclickdetector_TypeDef: int
    * fireclickdetector_Aob: Unable to get AOB
    * fireclickdetector_ProtectedByRetCheck: false
    * fireclickdetector_IsApartOfLua: false
    * fireclickdetector_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__stdcall* r_fireclickdetector_typedef)(int a1);
      r_fireclickdetector_typedef  r_fireclickdetector = (r_fireclickdetector_typedef)(x(0x00B0C2A0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(fireclickdetector_CCV* r_fireclickdetector_typedef)(int a1);
      r_fireclickdetector_typedef  r_fireclickdetector = (r_fireclickdetector_typedef)(x(Adresses::fireclickdetector_addr));



    */
    DWORD fireclickdetector_addr = 0x00B0C2A0;
#define fireclickdetector_CCV  __stdcall

    /*

    * flog_getvalue_Decompiled_Args: int a1, int a2, int a3
    * flog_getvalue_TypeDef: bool
    * flog_getvalue_Aob: 55 8B EC 83 EC 1C 53 8B 5D 08 56 57 8B 3D 3C 9F 5C 02 53 0F B6 07 8D 77 01 03 F0 56 E8 FF
    * flog_getvalue_ProtectedByRetCheck: false
    * flog_getvalue_IsApartOfLua: false
    * flog_getvalue_Mask: ..............................
    * Usage (Not 100% Accurate):

      typedef bool(__cdecl* r_flog_getvalue_typedef)(int a1, int a2, int a3);
      r_flog_getvalue_typedef  r_flog_getvalue = (r_flog_getvalue_typedef)(x(0x015F2AC0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef bool(flog_getvalue_CCV* r_flog_getvalue_typedef)(int a1, int a2, int a3);
      r_flog_getvalue_typedef  r_flog_getvalue = (r_flog_getvalue_typedef)(x(Adresses::flog_getvalue_addr));



    */
    DWORD flog_getvalue_addr = 0x015F2AC0;
#define flog_getvalue_CCV  __cdecl

    /*

    * flog_setvalue_Decompiled_Args: int a1, const char* a2, int a3
    * flog_setvalue_TypeDef: int
    * flog_setvalue_Aob: 55 8B EC 64 A1 00 00 00 00 6A FF 68 98 5F 8C 01 50 64 89 25 00 00 00 00 83 EC 5C
    * flog_setvalue_ProtectedByRetCheck: false
    * flog_setvalue_IsApartOfLua: false
    * flog_setvalue_Mask: ...........................
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_flog_setvalue_typedef)(int a1, const char* a2, int a3);
      r_flog_setvalue_typedef  r_flog_setvalue = (r_flog_setvalue_typedef)(x(0x015F3290));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(flog_setvalue_CCV* r_flog_setvalue_typedef)(int a1, const char* a2, int a3);
      r_flog_setvalue_typedef  r_flog_setvalue = (r_flog_setvalue_typedef)(x(Adresses::flog_setvalue_addr));



    */
    DWORD flog_setvalue_addr = 0x015F3290;
#define flog_setvalue_CCV  __cdecl

    /*

    * getdatamodel_Decompiled_Args: int a1
    * getdatamodel_TypeDef: int
    * getdatamodel_Aob: 55 8B EC 64 A1 00 00 00 00 6A FF 68 F8 C5 8C 01 50 64 89 25 00 00 00 00 83 EC 10 80 3D 88
    * getdatamodel_ProtectedByRetCheck: false
    * getdatamodel_IsApartOfLua: false
    * getdatamodel_Mask: ..............................
    * Usage (Not 100% Accurate):

      typedef int(__stdcall* r_getdatamodel_typedef)(int a1);
      r_getdatamodel_typedef  r_getdatamodel = (r_getdatamodel_typedef)(x(0x00F24A80));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(getdatamodel_CCV* r_getdatamodel_typedef)(int a1);
      r_getdatamodel_typedef  r_getdatamodel = (r_getdatamodel_typedef)(x(Adresses::getdatamodel_addr));



    */
    DWORD getdatamodel_addr = 0x00F24A80;
#define getdatamodel_CCV  __stdcall

    /*

    * getdatamodel2_Decompiled_Args: Function Has No Args Or Unable To Get Args
    * getdatamodel2_TypeDef: Unable To Get typedef
    * getdatamodel2_Aob: 55 8B EC 64 A1 00 00 00 00 6A FF 68 E4 47
    * getdatamodel2_ProtectedByRetCheck: false
    * getdatamodel2_IsApartOfLua: false
    * getdatamodel2_Mask: ..............
    * Usage (Not 100% Accurate):

      typedef void(__cdecl* r_getdatamodel2_typedef)();
      r_getdatamodel2_typedef  r_getdatamodel2 = (r_getdatamodel2_typedef)(x(0x00F24930));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef void(getdatamodel2_CCV* r_getdatamodel2_typedef)();
      r_getdatamodel2_typedef  r_getdatamodel2 = (r_getdatamodel2_typedef)(x(Adresses::getdatamodel2_addr));



    */
    DWORD getdatamodel2_addr = 0x00F24930;
#define getdatamodel2_CCV  __cdecl

    /*

    * getjobsbyname_Decompiled_Args: Function Has No Args Or Unable To Get Args
    * getjobsbyname_TypeDef: Unable To Get typedef
    * getjobsbyname_Aob: 55 8B EC E8 E8 FD
    * getjobsbyname_ProtectedByRetCheck: false
    * getjobsbyname_IsApartOfLua: false
    * getjobsbyname_Mask: ......
    * Usage (Not 100% Accurate):

      typedef void(__cdecl* r_getjobsbyname_typedef)();
      r_getjobsbyname_typedef  r_getjobsbyname = (r_getjobsbyname_typedef)(x(0x00FB0840));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef void(getjobsbyname_CCV* r_getjobsbyname_typedef)();
      r_getjobsbyname_typedef  r_getjobsbyname = (r_getjobsbyname_typedef)(x(Adresses::getjobsbyname_addr));



    */
    DWORD getjobsbyname_addr = 0x00FB0840;
#define getjobsbyname_CCV  __cdecl

    /*

    * getfunc_Decompiled_Args: int a1, int a2
    * getfunc_TypeDef: int
    * getfunc_Aob: 55 8B EC 81 EC 24 01 00 00 56
    * getfunc_ProtectedByRetCheck: false
    * getfunc_IsApartOfLua: true
    * getfunc_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_getfunc_typedef)(int a1, int a2);
      r_getfunc_typedef  r_getfunc = (r_getfunc_typedef)(x(0x014416D0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(getfunc_CCV* r_getfunc_typedef)(int a1, int a2);
      r_getfunc_typedef  r_getfunc = (r_getfunc_typedef)(x(Adresses::getfunc_addr));



    */
    DWORD getfunc_addr = 0x014416D0;
#define getfunc_CCV  __cdecl

    /*

    * getnamecallmethod_Decompiled_Args: int a1
    * getnamecallmethod_TypeDef: int
    * getnamecallmethod_Aob: 55 8B EC 56 57 8B 7D 08 8B 47 18 3B
    * getnamecallmethod_ProtectedByRetCheck: false
    * getnamecallmethod_IsApartOfLua: true
    * getnamecallmethod_Mask: ............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_getnamecallmethod_typedef)(int a1);
      r_getnamecallmethod_typedef  r_getnamecallmethod = (r_getnamecallmethod_typedef)(x(0x014359A0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(getnamecallmethod_CCV* r_getnamecallmethod_typedef)(int a1);
      r_getnamecallmethod_typedef  r_getnamecallmethod = (r_getnamecallmethod_typedef)(x(Adresses::getnamecallmethod_addr));



    */
    DWORD getnamecallmethod_addr = 0x014359A0;
#define getnamecallmethod_CCV  __cdecl

    /*

    * growci_Decompiled_Args: int a1
    * growci_TypeDef: int
    * growci_Aob: 55 8B EC 56 8B 75 08 8B 46 2C
    * growci_ProtectedByRetCheck: false
    * growci_IsApartOfLua: true
    * growci_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_growci_typedef)(int a1);
      r_growci_typedef  r_growci = (r_growci_typedef)(x(0x01436560));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(growci_CCV* r_growci_typedef)(int a1);
      r_growci_typedef  r_growci = (r_growci_typedef)(x(Adresses::growci_addr));



    */
    DWORD growci_addr = 0x01436560;
#define growci_CCV  __cdecl

    /*

    * hashnum_Decompiled_Args: int a1, int a2, int a3
    * hashnum_TypeDef: int
    * hashnum_Aob: 55 8B EC 8B 4D 10 81 E1
    * hashnum_ProtectedByRetCheck: false
    * hashnum_IsApartOfLua: true
    * hashnum_Mask: ........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_hashnum_typedef)(int a1, int a2, int a3);
      r_hashnum_typedef  r_hashnum = (r_hashnum_typedef)(x(0x01449590));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(hashnum_CCV* r_hashnum_typedef)(int a1, int a2, int a3);
      r_hashnum_typedef  r_hashnum = (r_hashnum_typedef)(x(Adresses::hashnum_addr));



    */
    DWORD hashnum_addr = 0x01449590;
#define hashnum_CCV  __cdecl

    /*

    * index2adr_Decompiled_Args: int a1, int a2
    * index2adr_TypeDef: int
    * index2adr_Aob: 55 8B EC 8B 55 0C 81 FA F0 D8
    * index2adr_ProtectedByRetCheck: false
    * index2adr_IsApartOfLua: true
    * index2adr_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__stdcall* r_index2adr_typedef)(int a1, int a2);
      r_index2adr_typedef  r_index2adr = (r_index2adr_typedef)(x(0x014333D0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(index2adr_CCV* r_index2adr_typedef)(int a1, int a2);
      r_index2adr_typedef  r_index2adr = (r_index2adr_typedef)(x(Adresses::index2adr_addr));



    */
    DWORD index2adr_addr = 0x014333D0;
#define index2adr_CCV  __stdcall

    /*

    * match_Decompiled_Args: int a1, int a2, int a3
    * match_TypeDef: int
    * match_Aob: 55 8B EC 83 EC 1C 53 8B 5D 08 56 57 8B 0B
    * match_ProtectedByRetCheck: false
    * match_IsApartOfLua: true
    * match_Mask: ..............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_match_typedef)(int a1, int a2, int a3);
      r_match_typedef  r_match = (r_match_typedef)(x(0x01445440));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(match_CCV* r_match_typedef)(int a1, int a2, int a3);
      r_match_typedef  r_match = (r_match_typedef)(x(Adresses::match_addr));



    */
    DWORD match_addr = 0x01445440;
#define match_CCV  __cdecl

    /*

    * newlstr_Decompiled_Args: int a1, int a2
    * newlstr_TypeDef: int
    * newlstr_Aob: 55 8B EC 83 EC 14 53 56 8B 75 08 57 8B F9 89 55
    * newlstr_ProtectedByRetCheck: false
    * newlstr_IsApartOfLua: true
    * newlstr_Mask: ................
    * Usage (Not 100% Accurate):

      typedef int(__fastcall* r_newlstr_typedef)(int a1, int a2);
      r_newlstr_typedef  r_newlstr = (r_newlstr_typedef)(x(0x014493C0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(newlstr_CCV* r_newlstr_typedef)(int a1, int a2);
      r_newlstr_typedef  r_newlstr = (r_newlstr_typedef)(x(Adresses::newlstr_addr));



    */
    DWORD newlstr_addr = 0x014493C0;
#define newlstr_CCV  __fastcall

    /*

    * push_captures_Decompiled_Args: int a1, int a2, int a3
    * push_captures_TypeDef: int
    * push_captures_Aob: 55 8B EC 53 56 8B 75 08 57 8B 5E 14
    * push_captures_ProtectedByRetCheck: false
    * push_captures_IsApartOfLua: true
    * push_captures_Mask: ............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_push_captures_typedef)(int a1, int a2, int a3);
      r_push_captures_typedef  r_push_captures = (r_push_captures_typedef)(x(0x01445DD0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(push_captures_CCV* r_push_captures_typedef)(int a1, int a2, int a3);
      r_push_captures_typedef  r_push_captures = (r_push_captures_typedef)(x(Adresses::push_captures_addr));



    */
    DWORD push_captures_addr = 0x01445DD0;
#define push_captures_CCV  __cdecl

    /*

    * luaa_pushobject_Decompiled_Args: int a1, int a2
    * luaa_pushobject_TypeDef: int
    * luaa_pushobject_Aob: 55 8B EC 8B 55 08 8B 45 0C 8B 4A 0C 0F
    * luaa_pushobject_ProtectedByRetCheck: false
    * luaa_pushobject_IsApartOfLua: true
    * luaa_pushobject_Mask: .............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luaa_pushobject_typedef)(int a1, int a2);
      r_luaa_pushobject_typedef  r_luaa_pushobject = (r_luaa_pushobject_typedef)(x(0x01433490));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luaa_pushobject_CCV* r_luaa_pushobject_typedef)(int a1, int a2);
      r_luaa_pushobject_typedef  r_luaa_pushobject = (r_luaa_pushobject_typedef)(x(Adresses::luaa_pushobject_addr));



    */
    DWORD luaa_pushobject_addr = 0x01433490;
#define luaa_pushobject_CCV  __cdecl

    /*

    * lua_rawvalue_Decompiled_Args: int a1, int a2
    * lua_rawvalue_TypeDef: int
    * lua_rawvalue_Aob: 55 8B EC 8B 55 0C 85 D2 7E 28
    * lua_rawvalue_ProtectedByRetCheck: false
    * lua_rawvalue_IsApartOfLua: true
    * lua_rawvalue_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_rawvalue_typedef)(int a1, int a2);
      r_lua_rawvalue_typedef  r_lua_rawvalue = (r_lua_rawvalue_typedef)(x(0x014334B0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_rawvalue_CCV* r_lua_rawvalue_typedef)(int a1, int a2);
      r_lua_rawvalue_typedef  r_lua_rawvalue = (r_lua_rawvalue_typedef)(x(Adresses::lua_rawvalue_addr));



    */
    DWORD lua_rawvalue_addr = 0x014334B0;
#define lua_rawvalue_CCV  __cdecl

    /*

    * lua_call_Decompiled_Args: int a1, int a2, int a3
    * lua_call_TypeDef: int
    * lua_call_Aob: 55 8B EC 8B 4D 0C 57 8B 7D 08 FF
    * lua_call_ProtectedByRetCheck: true
    * lua_call_IsApartOfLua: true
    * lua_call_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_call_typedef)(int a1, int a2, int a3);
      r_lua_call_typedef  r_lua_call = (r_lua_call_typedef)unprotect(x(0x01433500));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_call_CCV* r_lua_call_typedef)(int a1, int a2, int a3);
      r_lua_call_typedef  r_lua_call = (r_lua_call_typedef)unprotect(x(Adresses::lua_call_addr));



    */
    DWORD lua_call_addr = 0x01433500;
#define lua_call_CCV  __cdecl

    /*

    * lua_checkstack_Decompiled_Args: int a1, int a2
    * lua_checkstack_TypeDef: int
    * lua_checkstack_Aob: 55 8B EC 8B 4D 0C 56 8B 75 08 57 BF
    * lua_checkstack_ProtectedByRetCheck: false
    * lua_checkstack_IsApartOfLua: true
    * lua_checkstack_Mask: ............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_checkstack_typedef)(int a1, int a2);
      r_lua_checkstack_typedef  r_lua_checkstack = (r_lua_checkstack_typedef)(x(0x01433570));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_checkstack_CCV* r_lua_checkstack_typedef)(int a1, int a2);
      r_lua_checkstack_typedef  r_lua_checkstack = (r_lua_checkstack_typedef)(x(Adresses::lua_checkstack_addr));



    */
    DWORD lua_checkstack_addr = 0x01433570;
#define lua_checkstack_CCV  __cdecl

    /*

    * lua_concat_Decompiled_Args: int a1, int a2
    * lua_concat_TypeDef: int
    * lua_concat_Aob: 55 8B EC 56 8B 75 0C 57 8B 7D 08 83 FE 02
    * lua_concat_ProtectedByRetCheck: true
    * lua_concat_IsApartOfLua: true
    * lua_concat_Mask: ..............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_concat_typedef)(int a1, int a2);
      r_lua_concat_typedef  r_lua_concat = (r_lua_concat_typedef)unprotect(x(0x01433610));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_concat_CCV* r_lua_concat_typedef)(int a1, int a2);
      r_lua_concat_typedef  r_lua_concat = (r_lua_concat_typedef)unprotect(x(Adresses::lua_concat_addr));



    */
    DWORD lua_concat_addr = 0x01433610;
#define lua_concat_CCV  __cdecl

    /*

    * lua_createtable_Decompiled_Args: int a1
    * lua_createtable_TypeDef: int
    * lua_createtable_Aob: Unable to get AOB
    * lua_createtable_ProtectedByRetCheck: true
    * lua_createtable_IsApartOfLua: true
    * lua_createtable_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_createtable_typedef)(int a1);
      r_lua_createtable_typedef  r_lua_createtable = (r_lua_createtable_typedef)unprotect(x(0x014336C0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_createtable_CCV* r_lua_createtable_typedef)(int a1);
      r_lua_createtable_typedef  r_lua_createtable = (r_lua_createtable_typedef)unprotect(x(Adresses::lua_createtable_addr));



    */
    DWORD lua_createtable_addr = 0x014336C0;
#define lua_createtable_CCV  __cdecl

    /*

    * lua_freeobj_Decompiled_Args: int a1
    * lua_freeobj_TypeDef: int
    * lua_freeobj_Aob: 55 8B EC 51 53 57 8B 7D 08 8B 5F
    * lua_freeobj_ProtectedByRetCheck: false
    * lua_freeobj_IsApartOfLua: true
    * lua_freeobj_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_freeobj_typedef)(int a1);
      r_lua_freeobj_typedef  r_lua_freeobj = (r_lua_freeobj_typedef)(x(0x01447F70));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_freeobj_CCV* r_lua_freeobj_typedef)(int a1);
      r_lua_freeobj_typedef  r_lua_freeobj = (r_lua_freeobj_typedef)(x(Adresses::lua_freeobj_addr));



    */
    DWORD lua_freeobj_addr = 0x01447F70;
#define lua_freeobj_CCV  __cdecl

    /*

    * lua_gc_Decompiled_Args: int a1, int a2, int a3
    * lua_gc_TypeDef: int
    * lua_gc_Aob: 55 8B EC 53 56 57 8B 7D 08 33 DB 8B 77
    * lua_gc_ProtectedByRetCheck: false
    * lua_gc_IsApartOfLua: true
    * lua_gc_Mask: .............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_gc_typedef)(int a1, int a2, int a3);
      r_lua_gc_typedef  r_lua_gc = (r_lua_gc_typedef)(x(0x01433810));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_gc_CCV* r_lua_gc_typedef)(int a1, int a2, int a3);
      r_lua_gc_typedef  r_lua_gc = (r_lua_gc_typedef)(x(Adresses::lua_gc_addr));



    */
    DWORD lua_gc_addr = 0x01433810;
#define lua_gc_CCV  __cdecl

    /*

    * lua_getfenv_Decompiled_Args: int a1, int a2
    * lua_getfenv_TypeDef: int
    * lua_getfenv_Aob: 55 8B EC 8B 4D 0C 56 8B 75 08 85 C9 7E 18 8B 46 10 BA
    * lua_getfenv_ProtectedByRetCheck: true
    * lua_getfenv_IsApartOfLua: true
    * lua_getfenv_Mask: ..................
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_getfenv_typedef)(int a1, int a2);
      r_lua_getfenv_typedef  r_lua_getfenv = (r_lua_getfenv_typedef)unprotect(x(0x01433930));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_getfenv_CCV* r_lua_getfenv_typedef)(int a1, int a2);
      r_lua_getfenv_typedef  r_lua_getfenv = (r_lua_getfenv_typedef)unprotect(x(Adresses::lua_getfenv_addr));



    */
    DWORD lua_getfenv_addr = 0x01433930;
#define lua_getfenv_CCV  __cdecl

    /*

    * lua_getfield_Decompiled_Args: const char* a1
    * lua_getfield_TypeDef: int
    * lua_getfield_Aob: Unable to get AOB
    * lua_getfield_ProtectedByRetCheck: true
    * lua_getfield_IsApartOfLua: true
    * lua_getfield_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__fastcall* r_lua_getfield_typedef)(const char* a1);
      r_lua_getfield_typedef  r_lua_getfield = (r_lua_getfield_typedef)unprotect(x(0x014339D0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_getfield_CCV* r_lua_getfield_typedef)(const char* a1);
      r_lua_getfield_typedef  r_lua_getfield = (r_lua_getfield_typedef)unprotect(x(Adresses::lua_getfield_addr));



    */
    DWORD lua_getfield_addr = 0x014339D0;
#define lua_getfield_CCV  __fastcall

    /*

    * lua_getinfo_Decompiled_Args: int a1, int a2, int a3
    * lua_getinfo_TypeDef: int
    * lua_getinfo_Aob: 55 8B EC 51 8B 55 10 53 8B 5D 0C
    * lua_getinfo_ProtectedByRetCheck: true
    * lua_getinfo_IsApartOfLua: true
    * lua_getinfo_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_getinfo_typedef)(int a1, int a2, int a3);
      r_lua_getinfo_typedef  r_lua_getinfo = (r_lua_getinfo_typedef)unprotect(x(0x01440B00));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_getinfo_CCV* r_lua_getinfo_typedef)(int a1, int a2, int a3);
      r_lua_getinfo_typedef  r_lua_getinfo = (r_lua_getinfo_typedef)unprotect(x(Adresses::lua_getinfo_addr));



    */
    DWORD lua_getinfo_addr = 0x01440B00;
#define lua_getinfo_CCV  __cdecl

    /*

    * lua_getlocal_Decompiled_Args: int a1, int a2
    * lua_getlocal_TypeDef: int
    * lua_getlocal_Aob: Unable to get AOB
    * lua_getlocal_ProtectedByRetCheck: true
    * lua_getlocal_IsApartOfLua: true
    * lua_getlocal_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_getlocal_typedef)(int a1, int a2);
      r_lua_getlocal_typedef  r_lua_getlocal = (r_lua_getlocal_typedef)unprotect(x(0x01440BD0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_getlocal_CCV* r_lua_getlocal_typedef)(int a1, int a2);
      r_lua_getlocal_typedef  r_lua_getlocal = (r_lua_getlocal_typedef)unprotect(x(Adresses::lua_getlocal_addr));



    */
    DWORD lua_getlocal_addr = 0x01440BD0;
#define lua_getlocal_CCV  __cdecl

    /*

    * lua_setlocal_Decompiled_Args: int a1, int a2
    * lua_setlocal_TypeDef: int
    * lua_setlocal_Aob: Unable to get AOB
    * lua_setlocal_ProtectedByRetCheck: true
    * lua_setlocal_IsApartOfLua: true
    * lua_setlocal_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_setlocal_typedef)(int a1, int a2);
      r_lua_setlocal_typedef  r_lua_setlocal = (r_lua_setlocal_typedef)unprotect(x(0x01440D10));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_setlocal_CCV* r_lua_setlocal_typedef)(int a1, int a2);
      r_lua_setlocal_typedef  r_lua_setlocal = (r_lua_setlocal_typedef)unprotect(x(Adresses::lua_setlocal_addr));



    */
    DWORD lua_setlocal_addr = 0x01440D10;
#define lua_setlocal_CCV  __cdecl

    /*

    * lua_getmettable_Decompiled_Args: int a1, int a2
    * lua_getmettable_TypeDef: int
    * lua_getmettable_Aob: 55 8B EC 8B 4D 0C 56 8B 75 08 57 85 C9 7E 18 8B 46 10 BA
    * lua_getmettable_ProtectedByRetCheck: false
    * lua_getmettable_IsApartOfLua: true
    * lua_getmettable_Mask: ...................
    * Usage (Not 100% Accurate):

      typedef int(__stdcall* r_lua_getmettable_typedef)(int a1, int a2);
      r_lua_getmettable_typedef  r_lua_getmettable = (r_lua_getmettable_typedef)(x(0x01433A70));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_getmettable_CCV* r_lua_getmettable_typedef)(int a1, int a2);
      r_lua_getmettable_typedef  r_lua_getmettable = (r_lua_getmettable_typedef)(x(Adresses::lua_getmettable_addr));



    */
    DWORD lua_getmettable_addr = 0x01433A70;
#define lua_getmettable_CCV  __stdcall

    /*

    * lua_getstack_Decompiled_Args: int a1, int a2, int a3
    * lua_getstack_TypeDef: int
    * lua_getstack_Aob: 55 8B EC 8B 4D 0C B8 AB
    * lua_getstack_ProtectedByRetCheck: false
    * lua_getstack_IsApartOfLua: true
    * lua_getstack_Mask: ........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_getstack_typedef)(int a1, int a2, int a3);
      r_lua_getstack_typedef  r_lua_getstack = (r_lua_getstack_typedef)(x(0x01440C80));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_getstack_CCV* r_lua_getstack_typedef)(int a1, int a2, int a3);
      r_lua_getstack_typedef  r_lua_getstack = (r_lua_getstack_typedef)(x(Adresses::lua_getstack_addr));



    */
    DWORD lua_getstack_addr = 0x01440C80;
#define lua_getstack_CCV  __cdecl

    /*

    * lua_gettable_Decompiled_Args: int a1, int a2
    * lua_gettable_TypeDef: int
    * lua_gettable_Aob: Unable to get AOB
    * lua_gettable_ProtectedByRetCheck: true
    * lua_gettable_IsApartOfLua: true
    * lua_gettable_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_gettable_typedef)(int a1, int a2);
      r_lua_gettable_typedef  r_lua_gettable = (r_lua_gettable_typedef)unprotect(x(0x01433B30));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_gettable_CCV* r_lua_gettable_typedef)(int a1, int a2);
      r_lua_gettable_typedef  r_lua_gettable = (r_lua_gettable_typedef)unprotect(x(Adresses::lua_gettable_addr));



    */
    DWORD lua_gettable_addr = 0x01433B30;
#define lua_gettable_CCV  __cdecl

    /*

    * lua_gettop_Decompiled_Args: int a1
    * lua_gettop_TypeDef: int
    * lua_gettop_Aob: 55 8B EC 8B 4D 08 8B 41 0C 2B
    * lua_gettop_ProtectedByRetCheck: false
    * lua_gettop_IsApartOfLua: true
    * lua_gettop_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_gettop_typedef)(int a1);
      r_lua_gettop_typedef  r_lua_gettop = (r_lua_gettop_typedef)(x(0x01433BA0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_gettop_CCV* r_lua_gettop_typedef)(int a1);
      r_lua_gettop_typedef  r_lua_gettop = (r_lua_gettop_typedef)(x(Adresses::lua_gettop_addr));



    */
    DWORD lua_gettop_addr = 0x01433BA0;
#define lua_gettop_CCV  __cdecl

    /*

    * lua_getupvalue_Decompiled_Args: int a1, int a2
    * lua_getupvalue_TypeDef: int
    * lua_getupvalue_Aob: 55 8B EC 8B 4D 0C 56 8B 75 08 57 85 C9 7E 18 8B 46 10 C1
    * lua_getupvalue_ProtectedByRetCheck: true
    * lua_getupvalue_IsApartOfLua: true
    * lua_getupvalue_Mask: ...................
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_getupvalue_typedef)(int a1, int a2);
      r_lua_getupvalue_typedef  r_lua_getupvalue = (r_lua_getupvalue_typedef)unprotect(x(0x01433BC0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_getupvalue_CCV* r_lua_getupvalue_typedef)(int a1, int a2);
      r_lua_getupvalue_typedef  r_lua_getupvalue = (r_lua_getupvalue_typedef)unprotect(x(Adresses::lua_getupvalue_addr));



    */
    DWORD lua_getupvalue_addr = 0x01433BC0;
#define lua_getupvalue_CCV  __cdecl

    /*

    * lua_insert_Decompiled_Args: int a1, int a2
    * lua_insert_TypeDef: int
    * lua_insert_Aob: 55 8B EC 8B 4D 0C 56 8B 75 08 85 C9 7E 17
    * lua_insert_ProtectedByRetCheck: true
    * lua_insert_IsApartOfLua: true
    * lua_insert_Mask: ..............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_insert_typedef)(int a1, int a2);
      r_lua_insert_typedef  r_lua_insert = (r_lua_insert_typedef)unprotect(x(0x01433C50));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_insert_CCV* r_lua_insert_typedef)(int a1, int a2);
      r_lua_insert_typedef  r_lua_insert = (r_lua_insert_typedef)unprotect(x(Adresses::lua_insert_addr));



    */
    DWORD lua_insert_addr = 0x01433C50;
#define lua_insert_CCV  __cdecl

    /*

    * lua_iscfunction_Decompiled_Args: int a1, int a2
    * lua_iscfunction_TypeDef: int
    * lua_iscfunction_Aob: Unable to get AOB
    * lua_iscfunction_ProtectedByRetCheck: false
    * lua_iscfunction_IsApartOfLua: true
    * lua_iscfunction_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_iscfunction_typedef)(int a1, int a2);
      r_lua_iscfunction_typedef  r_lua_iscfunction = (r_lua_iscfunction_typedef)(x(0x01433CD0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_iscfunction_CCV* r_lua_iscfunction_typedef)(int a1, int a2);
      r_lua_iscfunction_typedef  r_lua_iscfunction = (r_lua_iscfunction_typedef)(x(Adresses::lua_iscfunction_addr));



    */
    DWORD lua_iscfunction_addr = 0x01433CD0;
#define lua_iscfunction_CCV  __cdecl

    /*

    * lua_isnumber_Decompiled_Args: int a1, int a2
    * lua_isnumber_TypeDef: int
    * lua_isnumber_Aob: Unable to get AOB
    * lua_isnumber_ProtectedByRetCheck: false
    * lua_isnumber_IsApartOfLua: true
    * lua_isnumber_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_isnumber_typedef)(int a1, int a2);
      r_lua_isnumber_typedef  r_lua_isnumber = (r_lua_isnumber_typedef)(x(0x01433D70));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_isnumber_CCV* r_lua_isnumber_typedef)(int a1, int a2);
      r_lua_isnumber_typedef  r_lua_isnumber = (r_lua_isnumber_typedef)(x(Adresses::lua_isnumber_addr));



    */
    DWORD lua_isnumber_addr = 0x01433D70;
#define lua_isnumber_CCV  __cdecl

    /*

    * lua_isstring_Decompiled_Args: int a1, int a2
    * lua_isstring_TypeDef: int
    * lua_isstring_Aob: 55 8B EC 8B 55 0C 85 D2 7E 17
    * lua_isstring_ProtectedByRetCheck: false
    * lua_isstring_IsApartOfLua: true
    * lua_isstring_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_isstring_typedef)(int a1, int a2);
      r_lua_isstring_typedef  r_lua_isstring = (r_lua_isstring_typedef)(x(0x01433DD0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_isstring_CCV* r_lua_isstring_typedef)(int a1, int a2);
      r_lua_isstring_typedef  r_lua_isstring = (r_lua_isstring_typedef)(x(Adresses::lua_isstring_addr));



    */
    DWORD lua_isstring_addr = 0x01433DD0;
#define lua_isstring_CCV  __cdecl

    /*

    * lua_error_Decompiled_Args: Function Has No Args Or Unable To Get Args
    * lua_error_TypeDef: Unable To Get typedef
    * lua_error_Aob: 55 8B EC 6A 02 FF 75 08 E8 F3
    * lua_error_ProtectedByRetCheck: false
    * lua_error_IsApartOfLua: true
    * lua_error_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef void(__cdecl* r_lua_error_typedef)();
      r_lua_error_typedef  r_lua_error = (r_lua_error_typedef)(x(0x01433800));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef void(lua_error_CCV* r_lua_error_typedef)();
      r_lua_error_typedef  r_lua_error = (r_lua_error_typedef)(x(Adresses::lua_error_addr));



    */
    DWORD lua_error_addr = 0x01433800;
#define lua_error_CCV  __cdecl

    /*

    * lua_isuserdata_Decompiled_Args: int a1, int a2
    * lua_isuserdata_TypeDef: int
    * lua_isuserdata_Aob: Unable to get AOB
    * lua_isuserdata_ProtectedByRetCheck: false
    * lua_isuserdata_IsApartOfLua: true
    * lua_isuserdata_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_isuserdata_typedef)(int a1, int a2);
      r_lua_isuserdata_typedef  r_lua_isuserdata = (r_lua_isuserdata_typedef)(x(0x01433D20));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_isuserdata_CCV* r_lua_isuserdata_typedef)(int a1, int a2);
      r_lua_isuserdata_typedef  r_lua_isuserdata = (r_lua_isuserdata_typedef)(x(Adresses::lua_isuserdata_addr));



    */
    DWORD lua_isuserdata_addr = 0x01433D20;
#define lua_isuserdata_CCV  __cdecl

    /*

    * lua_lessthan_Decompiled_Args: int a1, int a2, int a3
    * lua_lessthan_TypeDef: int
    * lua_lessthan_Aob: 55 8B EC 8B 4D 0C 53 56 8B 75 08 57 BF 80
    * lua_lessthan_ProtectedByRetCheck: true
    * lua_lessthan_IsApartOfLua: true
    * lua_lessthan_Mask: ..............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_lessthan_typedef)(int a1, int a2, int a3);
      r_lua_lessthan_typedef  r_lua_lessthan = (r_lua_lessthan_typedef)unprotect(x(0x01433E20));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_lessthan_CCV* r_lua_lessthan_typedef)(int a1, int a2, int a3);
      r_lua_lessthan_typedef  r_lua_lessthan = (r_lua_lessthan_typedef)unprotect(x(Adresses::lua_lessthan_addr));



    */
    DWORD lua_lessthan_addr = 0x01433E20;
#define lua_lessthan_CCV  __cdecl

    /*

    * lua_newstate_Decompiled_Args: int a1, int a2
    * lua_newstate_TypeDef: int
    * lua_newstate_Aob: 55 8B EC 83 EC 08 53 57 8B 7D 0C 68
    * lua_newstate_ProtectedByRetCheck: false
    * lua_newstate_IsApartOfLua: true
    * lua_newstate_Mask: ............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_newstate_typedef)(int a1, int a2);
      r_lua_newstate_typedef  r_lua_newstate = (r_lua_newstate_typedef)(x(0x0143FFE0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_newstate_CCV* r_lua_newstate_typedef)(int a1, int a2);
      r_lua_newstate_typedef  r_lua_newstate = (r_lua_newstate_typedef)(x(Adresses::lua_newstate_addr));



    */
    DWORD lua_newstate_addr = 0x0143FFE0;
#define lua_newstate_CCV  __cdecl

    /*

    * lua_newthread_Decompiled_Args: int a1
    * lua_newthread_TypeDef: int
    * lua_newthread_Aob: 55 8B EC 53 56 8B 75 08 8B 46 08
    * lua_newthread_ProtectedByRetCheck: true
    * lua_newthread_IsApartOfLua: true
    * lua_newthread_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_newthread_typedef)(int a1);
      r_lua_newthread_typedef  r_lua_newthread = (r_lua_newthread_typedef)unprotect(x(0x01433ED0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_newthread_CCV* r_lua_newthread_typedef)(int a1);
      r_lua_newthread_typedef  r_lua_newthread = (r_lua_newthread_typedef)unprotect(x(Adresses::lua_newthread_addr));



    */
    DWORD lua_newthread_addr = 0x01433ED0;
#define lua_newthread_CCV  __cdecl

    /*

    * lua_newuserdata_Decompiled_Args: int a1
    * lua_newuserdata_TypeDef: int
    * lua_newuserdata_Aob: Unable to get AOB
    * lua_newuserdata_ProtectedByRetCheck: true
    * lua_newuserdata_IsApartOfLua: true
    * lua_newuserdata_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_newuserdata_typedef)(int a1);
      r_lua_newuserdata_typedef  r_lua_newuserdata = (r_lua_newuserdata_typedef)unprotect(x(0x01433F60));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_newuserdata_CCV* r_lua_newuserdata_typedef)(int a1);
      r_lua_newuserdata_typedef  r_lua_newuserdata = (r_lua_newuserdata_typedef)unprotect(x(Adresses::lua_newuserdata_addr));



    */
    DWORD lua_newuserdata_addr = 0x01433F60;
#define lua_newuserdata_CCV  __cdecl

    /*

    * lua_next_Decompiled_Args: int a1, int a2
    * lua_next_TypeDef: int
    * lua_next_Aob: 55 8B EC 8B 4D 0C 56 8B 75 08 57 85 C9 7E 19
    * lua_next_ProtectedByRetCheck: true
    * lua_next_IsApartOfLua: true
    * lua_next_Mask: ...............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_next_typedef)(int a1, int a2);
      r_lua_next_typedef  r_lua_next = (r_lua_next_typedef)unprotect(x(0x01433FE0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_next_CCV* r_lua_next_typedef)(int a1, int a2);
      r_lua_next_typedef  r_lua_next = (r_lua_next_typedef)unprotect(x(Adresses::lua_next_addr));



    */
    DWORD lua_next_addr = 0x01433FE0;
#define lua_next_CCV  __cdecl

    /*

    * lua_objlen_Decompiled_Args: int a1, int a2
    * lua_objlen_TypeDef: int
    * lua_objlen_Aob: 55 8B EC 8B 4D 0C 56 57 8B 7D 08 85
    * lua_objlen_ProtectedByRetCheck: false
    * lua_objlen_IsApartOfLua: true
    * lua_objlen_Mask: ............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_objlen_typedef)(int a1, int a2);
      r_lua_objlen_typedef  r_lua_objlen = (r_lua_objlen_typedef)(x(0x01434070));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_objlen_CCV* r_lua_objlen_typedef)(int a1, int a2);
      r_lua_objlen_typedef  r_lua_objlen = (r_lua_objlen_typedef)(x(Adresses::lua_objlen_addr));



    */
    DWORD lua_objlen_addr = 0x01434070;
#define lua_objlen_CCV  __cdecl

    /*

    * lua_pcall_Decompiled_Args: int a1, int a2, int a3, int a4
    * lua_pcall_TypeDef: int
    * lua_pcall_Aob: 55 8B EC 8B 4D 14 83 EC 08 53 57
    * lua_pcall_ProtectedByRetCheck: true
    * lua_pcall_IsApartOfLua: true
    * lua_pcall_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_pcall_typedef)(int a1, int a2, int a3, int a4);
      r_lua_pcall_typedef  r_lua_pcall = (r_lua_pcall_typedef)unprotect(x(0x01434140));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_pcall_CCV* r_lua_pcall_typedef)(int a1, int a2, int a3, int a4);
      r_lua_pcall_typedef  r_lua_pcall = (r_lua_pcall_typedef)unprotect(x(Adresses::lua_pcall_addr));



    */
    DWORD lua_pcall_addr = 0x01434140;
#define lua_pcall_CCV  __cdecl

    /*

    * lua_pushboolean_Decompiled_Args: int a1, int a2
    * lua_pushboolean_TypeDef: int
    * lua_pushboolean_Aob: 55 8B EC 8B 55 08 33 C0 39
    * lua_pushboolean_ProtectedByRetCheck: true
    * lua_pushboolean_IsApartOfLua: true
    * lua_pushboolean_Mask: .........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_pushboolean_typedef)(int a1, int a2);
      r_lua_pushboolean_typedef  r_lua_pushboolean = (r_lua_pushboolean_typedef)unprotect(x(0x01434200));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_pushboolean_CCV* r_lua_pushboolean_typedef)(int a1, int a2);
      r_lua_pushboolean_typedef  r_lua_pushboolean = (r_lua_pushboolean_typedef)unprotect(x(Adresses::lua_pushboolean_addr));



    */
    DWORD lua_pushboolean_addr = 0x01434200;
#define lua_pushboolean_CCV  __cdecl

    /*

    * lua_pushcclosure_Decompiled_Args: int a1, int a2, int a3, int a4, int a5
    * lua_pushcclosure_TypeDef: int
    * lua_pushcclosure_Aob: 55 8B EC 56 8B 75 08 8B 56 08 8D 46 08 8B CA 2B D6 2B C8 8B
    * lua_pushcclosure_ProtectedByRetCheck: true
    * lua_pushcclosure_IsApartOfLua: true
    * lua_pushcclosure_Mask: ....................
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_pushcclosure_typedef)(int a1, int a2, int a3, int a4, int a5);
      r_lua_pushcclosure_typedef  r_lua_pushcclosure = (r_lua_pushcclosure_typedef)unprotect(x(0x01434250));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_pushcclosure_CCV* r_lua_pushcclosure_typedef)(int a1, int a2, int a3, int a4, int a5);
      r_lua_pushcclosure_typedef  r_lua_pushcclosure = (r_lua_pushcclosure_typedef)unprotect(x(Adresses::lua_pushcclosure_addr));



    */
    DWORD lua_pushcclosure_addr = 0x01434250;
#define lua_pushcclosure_CCV  __cdecl

    /*

    * lua_pushfstring_Decompiled_Args: int a1, int a2
    * lua_pushfstring_TypeDef: int
    * lua_pushfstring_Aob: Unable to get AOB
    * lua_pushfstring_ProtectedByRetCheck: false
    * lua_pushfstring_IsApartOfLua: true
    * lua_pushfstring_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_pushfstring_typedef)(int a1, int a2);
      r_lua_pushfstring_typedef  r_lua_pushfstring = (r_lua_pushfstring_typedef)(x(0x01434330));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_pushfstring_CCV* r_lua_pushfstring_typedef)(int a1, int a2);
      r_lua_pushfstring_typedef  r_lua_pushfstring = (r_lua_pushfstring_typedef)(x(Adresses::lua_pushfstring_addr));



    */
    DWORD lua_pushfstring_addr = 0x01434330;
#define lua_pushfstring_CCV  __cdecl

    /*

    * lua_pushinteger_Decompiled_Args: int a1, int a2
    * lua_pushinteger_TypeDef: int
    * lua_pushinteger_Aob: 55 8B EC 66 0F 6E 4D
    * lua_pushinteger_ProtectedByRetCheck: true
    * lua_pushinteger_IsApartOfLua: true
    * lua_pushinteger_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_pushinteger_typedef)(int a1, int a2);
      r_lua_pushinteger_typedef  r_lua_pushinteger = (r_lua_pushinteger_typedef)unprotect(x(0x014343A0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_pushinteger_CCV* r_lua_pushinteger_typedef)(int a1, int a2);
      r_lua_pushinteger_typedef  r_lua_pushinteger = (r_lua_pushinteger_typedef)unprotect(x(Adresses::lua_pushinteger_addr));



    */
    DWORD lua_pushinteger_addr = 0x014343A0;
#define lua_pushinteger_CCV  __cdecl

    /*

    * lua_pushlightuserdata_Decompiled_Args: int a1, int a2
    * lua_pushlightuserdata_TypeDef: int
    * lua_pushlightuserdata_Aob: 55 8B EC 8B 55 08 8B 45 0C 8B 4A 0C 89
    * lua_pushlightuserdata_ProtectedByRetCheck: true
    * lua_pushlightuserdata_IsApartOfLua: true
    * lua_pushlightuserdata_Mask: .............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_pushlightuserdata_typedef)(int a1, int a2);
      r_lua_pushlightuserdata_typedef  r_lua_pushlightuserdata = (r_lua_pushlightuserdata_typedef)unprotect(x(0x01434400));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_pushlightuserdata_CCV* r_lua_pushlightuserdata_typedef)(int a1, int a2);
      r_lua_pushlightuserdata_typedef  r_lua_pushlightuserdata = (r_lua_pushlightuserdata_typedef)unprotect(x(Adresses::lua_pushlightuserdata_addr));



    */
    DWORD lua_pushlightuserdata_addr = 0x01434400;
#define lua_pushlightuserdata_CCV  __cdecl

    /*

    * lua_pushlstring_Decompiled_Args: int a1
    * lua_pushlstring_TypeDef: int
    * lua_pushlstring_Aob: Unable to get AOB
    * lua_pushlstring_ProtectedByRetCheck: true
    * lua_pushlstring_IsApartOfLua: true
    * lua_pushlstring_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_pushlstring_typedef)(int a1);
      r_lua_pushlstring_typedef  r_lua_pushlstring = (r_lua_pushlstring_typedef)unprotect(x(0x01434450));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_pushlstring_CCV* r_lua_pushlstring_typedef)(int a1);
      r_lua_pushlstring_typedef  r_lua_pushlstring = (r_lua_pushlstring_typedef)unprotect(x(Adresses::lua_pushlstring_addr));



    */
    DWORD lua_pushlstring_addr = 0x01434450;
#define lua_pushlstring_CCV  __cdecl

    /*

    * lua_pushnil_Decompiled_Args: int a1
    * lua_pushnil_TypeDef: int
    * lua_pushnil_Aob: 55 8B EC 8B 55 08 8B 42 0C C7
    * lua_pushnil_ProtectedByRetCheck: true
    * lua_pushnil_IsApartOfLua: true
    * lua_pushnil_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_pushnil_typedef)(int a1);
      r_lua_pushnil_typedef  r_lua_pushnil = (r_lua_pushnil_typedef)unprotect(x(0x014344D0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_pushnil_CCV* r_lua_pushnil_typedef)(int a1);
      r_lua_pushnil_typedef  r_lua_pushnil = (r_lua_pushnil_typedef)unprotect(x(Adresses::lua_pushnil_addr));



    */
    DWORD lua_pushnil_addr = 0x014344D0;
#define lua_pushnil_CCV  __cdecl

    /*

    * lua_pushnumber_Decompiled_Args: int a1, int a2
    * lua_pushnumber_TypeDef: int
    * lua_pushnumber_Aob: 55 8B EC 8B 55 08 0F 28 15
    * lua_pushnumber_ProtectedByRetCheck: true
    * lua_pushnumber_IsApartOfLua: true
    * lua_pushnumber_Mask: .........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_pushnumber_typedef)(int a1, int a2);
      r_lua_pushnumber_typedef  r_lua_pushnumber = (r_lua_pushnumber_typedef)unprotect(x(0x01434520));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_pushnumber_CCV* r_lua_pushnumber_typedef)(int a1, int a2);
      r_lua_pushnumber_typedef  r_lua_pushnumber = (r_lua_pushnumber_typedef)unprotect(x(Adresses::lua_pushnumber_addr));



    */
    DWORD lua_pushnumber_addr = 0x01434520;
#define lua_pushnumber_CCV  __cdecl

    /*

    * lua_pushstring_Decompiled_Args: int a1, const char* a2
    * lua_pushstring_TypeDef: int
    * lua_pushstring_Aob: 55 8B EC 8B 45 0C 85 C0 75 48
    * lua_pushstring_ProtectedByRetCheck: true
    * lua_pushstring_IsApartOfLua: true
    * lua_pushstring_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_pushstring_typedef)(int a1, const char* a2);
      r_lua_pushstring_typedef  r_lua_pushstring = (r_lua_pushstring_typedef)unprotect(x(0x01434580));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_pushstring_CCV* r_lua_pushstring_typedef)(int a1, const char* a2);
      r_lua_pushstring_typedef  r_lua_pushstring = (r_lua_pushstring_typedef)unprotect(x(Adresses::lua_pushstring_addr));



    */
    DWORD lua_pushstring_addr = 0x01434580;
#define lua_pushstring_CCV  __cdecl

    /*

    * lua_pushthread_Decompiled_Args: int a1
    * lua_pushthread_TypeDef: int
    * lua_pushthread_Aob: 55 8B EC 56 8B 75 08 8B 46 0C 89
    * lua_pushthread_ProtectedByRetCheck: true
    * lua_pushthread_IsApartOfLua: true
    * lua_pushthread_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_pushthread_typedef)(int a1);
      r_lua_pushthread_typedef  r_lua_pushthread = (r_lua_pushthread_typedef)unprotect(x(0x01434660));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_pushthread_CCV* r_lua_pushthread_typedef)(int a1);
      r_lua_pushthread_typedef  r_lua_pushthread = (r_lua_pushthread_typedef)unprotect(x(Adresses::lua_pushthread_addr));



    */
    DWORD lua_pushthread_addr = 0x01434660;
#define lua_pushthread_CCV  __cdecl

    /*

    * lua_pushvalue_Decompiled_Args: int a1, int a2
    * lua_pushvalue_TypeDef: int
    * lua_pushvalue_Aob: 55 8B EC 8B 4D 0C 56 8B 75 08 85 C9 7E 19 8B 46 10 83
    * lua_pushvalue_ProtectedByRetCheck: true
    * lua_pushvalue_IsApartOfLua: true
    * lua_pushvalue_Mask: ..................
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_pushvalue_typedef)(int a1, int a2);
      r_lua_pushvalue_typedef  r_lua_pushvalue = (r_lua_pushvalue_typedef)unprotect(x(0x01434730));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_pushvalue_CCV* r_lua_pushvalue_typedef)(int a1, int a2);
      r_lua_pushvalue_typedef  r_lua_pushvalue = (r_lua_pushvalue_typedef)unprotect(x(Adresses::lua_pushvalue_addr));



    */
    DWORD lua_pushvalue_addr = 0x01434730;
#define lua_pushvalue_CCV  __cdecl

    /*

    * lua_pushvfstring_Decompiled_Args: int a1
    * lua_pushvfstring_TypeDef: int
    * lua_pushvfstring_Aob: Unable to get AOB
    * lua_pushvfstring_ProtectedByRetCheck: false
    * lua_pushvfstring_IsApartOfLua: true
    * lua_pushvfstring_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_pushvfstring_typedef)(int a1);
      r_lua_pushvfstring_typedef  r_lua_pushvfstring = (r_lua_pushvfstring_typedef)(x(0x014347A0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_pushvfstring_CCV* r_lua_pushvfstring_typedef)(int a1);
      r_lua_pushvfstring_typedef  r_lua_pushvfstring = (r_lua_pushvfstring_typedef)(x(Adresses::lua_pushvfstring_addr));



    */
    DWORD lua_pushvfstring_addr = 0x014347A0;
#define lua_pushvfstring_CCV  __cdecl

    /*

    * lua_rawequal_Decompiled_Args: int a1, int a2, int a3
    * lua_rawequal_TypeDef: int
    * lua_rawequal_Aob: 55 8B EC 8B 4D 0C 53 56 BE
    * lua_rawequal_ProtectedByRetCheck: false
    * lua_rawequal_IsApartOfLua: true
    * lua_rawequal_Mask: .........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_rawequal_typedef)(int a1, int a2, int a3);
      r_lua_rawequal_typedef  r_lua_rawequal = (r_lua_rawequal_typedef)(x(0x01434810));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_rawequal_CCV* r_lua_rawequal_typedef)(int a1, int a2, int a3);
      r_lua_rawequal_typedef  r_lua_rawequal = (r_lua_rawequal_typedef)(x(Adresses::lua_rawequal_addr));



    */
    DWORD lua_rawequal_addr = 0x01434810;
#define lua_rawequal_CCV  __cdecl

    /*

    * lua_rawget_Decompiled_Args: int a1, int a2
    * lua_rawget_TypeDef: int
    * lua_rawget_Aob: Unable to get AOB
    * lua_rawget_ProtectedByRetCheck: true
    * lua_rawget_IsApartOfLua: true
    * lua_rawget_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_rawget_typedef)(int a1, int a2);
      r_lua_rawget_typedef  r_lua_rawget = (r_lua_rawget_typedef)unprotect(x(0x01434890));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_rawget_CCV* r_lua_rawget_typedef)(int a1, int a2);
      r_lua_rawget_typedef  r_lua_rawget = (r_lua_rawget_typedef)unprotect(x(Adresses::lua_rawget_addr));



    */
    DWORD lua_rawget_addr = 0x01434890;
#define lua_rawget_CCV  __cdecl

    /*

    * lua_rawgeti_Decompiled_Args: int a1, int a2
    * lua_rawgeti_TypeDef: int
    * lua_rawgeti_Aob: Unable to get AOB
    * lua_rawgeti_ProtectedByRetCheck: true
    * lua_rawgeti_IsApartOfLua: true
    * lua_rawgeti_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_rawgeti_typedef)(int a1, int a2);
      r_lua_rawgeti_typedef  r_lua_rawgeti = (r_lua_rawgeti_typedef)unprotect(x(0x014349B0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_rawgeti_CCV* r_lua_rawgeti_typedef)(int a1, int a2);
      r_lua_rawgeti_typedef  r_lua_rawgeti = (r_lua_rawgeti_typedef)unprotect(x(Adresses::lua_rawgeti_addr));



    */
    DWORD lua_rawgeti_addr = 0x014349B0;
#define lua_rawgeti_CCV  __cdecl

    /*

    * lua_rawset_Decompiled_Args: int a1, int a2
    * lua_rawset_TypeDef: int
    * lua_rawset_Aob: Unable to get AOB
    * lua_rawset_ProtectedByRetCheck: true
    * lua_rawset_IsApartOfLua: true
    * lua_rawset_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_rawset_typedef)(int a1, int a2);
      r_lua_rawset_typedef  r_lua_rawset = (r_lua_rawset_typedef)unprotect(x(0x01434A30));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_rawset_CCV* r_lua_rawset_typedef)(int a1, int a2);
      r_lua_rawset_typedef  r_lua_rawset = (r_lua_rawset_typedef)unprotect(x(Adresses::lua_rawset_addr));



    */
    DWORD lua_rawset_addr = 0x01434A30;
#define lua_rawset_CCV  __cdecl

    /*

    * lua_rawseti_Decompiled_Args: int a1, int a2
    * lua_rawseti_TypeDef: int
    * lua_rawseti_Aob: Unable to get AOB
    * lua_rawseti_ProtectedByRetCheck: true
    * lua_rawseti_IsApartOfLua: true
    * lua_rawseti_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_rawseti_typedef)(int a1, int a2);
      r_lua_rawseti_typedef  r_lua_rawseti = (r_lua_rawseti_typedef)unprotect(x(0x01434B00));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_rawseti_CCV* r_lua_rawseti_typedef)(int a1, int a2);
      r_lua_rawseti_typedef  r_lua_rawseti = (r_lua_rawseti_typedef)unprotect(x(Adresses::lua_rawseti_addr));



    */
    DWORD lua_rawseti_addr = 0x01434B00;
#define lua_rawseti_CCV  __cdecl

    /*

    * lua_remove_Decompiled_Args: int a1, int a2
    * lua_remove_TypeDef: int
    * lua_remove_Aob: Unable to get AOB
    * lua_remove_ProtectedByRetCheck: true
    * lua_remove_IsApartOfLua: true
    * lua_remove_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_remove_typedef)(int a1, int a2);
      r_lua_remove_typedef  r_lua_remove = (r_lua_remove_typedef)unprotect(x(0x01434BD0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_remove_CCV* r_lua_remove_typedef)(int a1, int a2);
      r_lua_remove_typedef  r_lua_remove = (r_lua_remove_typedef)unprotect(x(Adresses::lua_remove_addr));



    */
    DWORD lua_remove_addr = 0x01434BD0;
#define lua_remove_CCV  __cdecl

    /*

    * lua_replace_Decompiled_Args: int a1, int a2
    * lua_replace_TypeDef: int
    * lua_replace_Aob: 55 8B EC 56 8B 75 08 57 8B 7D 0C 81
    * lua_replace_ProtectedByRetCheck: true
    * lua_replace_IsApartOfLua: true
    * lua_replace_Mask: ............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_replace_typedef)(int a1, int a2);
      r_lua_replace_typedef  r_lua_replace = (r_lua_replace_typedef)unprotect(x(0x01434C60));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_replace_CCV* r_lua_replace_typedef)(int a1, int a2);
      r_lua_replace_typedef  r_lua_replace = (r_lua_replace_typedef)unprotect(x(Adresses::lua_replace_addr));



    */
    DWORD lua_replace_addr = 0x01434C60;
#define lua_replace_CCV  __cdecl

    /*

    * lua_resume_Decompiled_Args: int a1, int a2, int a3
    * lua_resume_TypeDef: int
    * lua_resume_Aob: Unable to get AOB
    * lua_resume_ProtectedByRetCheck: true
    * lua_resume_IsApartOfLua: true
    * lua_resume_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_resume_typedef)(int a1, int a2, int a3);
      r_lua_resume_typedef  r_lua_resume = (r_lua_resume_typedef)unprotect(x(0x01436A50));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_resume_CCV* r_lua_resume_typedef)(int a1, int a2, int a3);
      r_lua_resume_typedef  r_lua_resume = (r_lua_resume_typedef)unprotect(x(Adresses::lua_resume_addr));



    */
    DWORD lua_resume_addr = 0x01436A50;
#define lua_resume_CCV  __cdecl

    /*

    * lua_setfenv_Decompiled_Args: int a1, int a2
    * lua_setfenv_TypeDef: int
    * lua_setfenv_Aob: 55 8B EC 8B 4D 0C 53 56 8B 75 08 57 BF 01
    * lua_setfenv_ProtectedByRetCheck: false
    * lua_setfenv_IsApartOfLua: true
    * lua_setfenv_Mask: ..............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_setfenv_typedef)(int a1, int a2);
      r_lua_setfenv_typedef  r_lua_setfenv = (r_lua_setfenv_typedef)(x(0x01434D60));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_setfenv_CCV* r_lua_setfenv_typedef)(int a1, int a2);
      r_lua_setfenv_typedef  r_lua_setfenv = (r_lua_setfenv_typedef)(x(Adresses::lua_setfenv_addr));



    */
    DWORD lua_setfenv_addr = 0x01434D60;
#define lua_setfenv_CCV  __cdecl

    /*

    * lua_setfield_Decompiled_Args: int a1, int a2, const char* a3
    * lua_setfield_TypeDef: int
    * lua_setfield_Aob: 55 8B EC 8B 4D 0C 83 EC 10 56
    * lua_setfield_ProtectedByRetCheck: true
    * lua_setfield_IsApartOfLua: true
    * lua_setfield_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__stdcall* r_lua_setfield_typedef)(int a1, int a2, const char* a3);
      r_lua_setfield_typedef  r_lua_setfield = (r_lua_setfield_typedef)unprotect(x(0x01434E30));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_setfield_CCV* r_lua_setfield_typedef)(int a1, int a2, const char* a3);
      r_lua_setfield_typedef  r_lua_setfield = (r_lua_setfield_typedef)unprotect(x(Adresses::lua_setfield_addr));



    */
    DWORD lua_setfield_addr = 0x01434E30;
#define lua_setfield_CCV  __stdcall

    /*

    * lua_setmetatable_Decompiled_Args: int a1, int a2
    * lua_setmetatable_TypeDef: int
    * lua_setmetatable_Aob: 55 8B EC 8B 4D 0C 56 8B 75 08 57 85 C9 7E 17
    * lua_setmetatable_ProtectedByRetCheck: true
    * lua_setmetatable_IsApartOfLua: true
    * lua_setmetatable_Mask: ...............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_setmetatable_typedef)(int a1, int a2);
      r_lua_setmetatable_typedef  r_lua_setmetatable = (r_lua_setmetatable_typedef)unprotect(x(0x01434EE0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_setmetatable_CCV* r_lua_setmetatable_typedef)(int a1, int a2);
      r_lua_setmetatable_typedef  r_lua_setmetatable = (r_lua_setmetatable_typedef)unprotect(x(Adresses::lua_setmetatable_addr));



    */
    DWORD lua_setmetatable_addr = 0x01434EE0;
#define lua_setmetatable_CCV  __cdecl

    /*

    * lua_setreadonly_Decompiled_Args: int a1, int a2, int a3
    * lua_setreadonly_TypeDef: int
    * lua_setreadonly_Aob: Unable to get AOB
    * lua_setreadonly_ProtectedByRetCheck: true
    * lua_setreadonly_IsApartOfLua: true
    * lua_setreadonly_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_setreadonly_typedef)(int a1, int a2, int a3);
      r_lua_setreadonly_typedef  r_lua_setreadonly = (r_lua_setreadonly_typedef)unprotect(x(0x01434FF0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_setreadonly_CCV* r_lua_setreadonly_typedef)(int a1, int a2, int a3);
      r_lua_setreadonly_typedef  r_lua_setreadonly = (r_lua_setreadonly_typedef)unprotect(x(Adresses::lua_setreadonly_addr));



    */
    DWORD lua_setreadonly_addr = 0x01434FF0;
#define lua_setreadonly_CCV  __cdecl

    /*

    * lua_settable_Decompiled_Args: int a1, int a2
    * lua_settable_TypeDef: int
    * lua_settable_Aob: 55 8B EC 8B 4D 0C 56 8B 75 08 85 C9 7E 19 8B 56
    * lua_settable_ProtectedByRetCheck: true
    * lua_settable_IsApartOfLua: true
    * lua_settable_Mask: ................
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_settable_typedef)(int a1, int a2);
      r_lua_settable_typedef  r_lua_settable = (r_lua_settable_typedef)unprotect(x(0x014350D0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_settable_CCV* r_lua_settable_typedef)(int a1, int a2);
      r_lua_settable_typedef  r_lua_settable = (r_lua_settable_typedef)unprotect(x(Adresses::lua_settable_addr));



    */
    DWORD lua_settable_addr = 0x014350D0;
#define lua_settable_CCV  __cdecl

    /*

    * lua_settop_Decompiled_Args: int a1, int a2
    * lua_settop_TypeDef: int
    * lua_settop_Aob: 55 8B EC 8B 45 0C 8B C8 8B
    * lua_settop_ProtectedByRetCheck: true
    * lua_settop_IsApartOfLua: true
    * lua_settop_Mask: .........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_settop_typedef)(int a1, int a2);
      r_lua_settop_typedef  r_lua_settop = (r_lua_settop_typedef)unprotect(x(0x01435150));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_settop_CCV* r_lua_settop_typedef)(int a1, int a2);
      r_lua_settop_typedef  r_lua_settop = (r_lua_settop_typedef)unprotect(x(Adresses::lua_settop_addr));



    */
    DWORD lua_settop_addr = 0x01435150;
#define lua_settop_CCV  __cdecl

    /*

    * lua_setupvalue_Decompiled_Args: int a1, int a2
    * lua_setupvalue_TypeDef: int
    * lua_setupvalue_Aob: 55 8B EC 8B 4D 0C 53 56 8B 75 08 57 85
    * lua_setupvalue_ProtectedByRetCheck: true
    * lua_setupvalue_IsApartOfLua: true
    * lua_setupvalue_Mask: .............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_setupvalue_typedef)(int a1, int a2);
      r_lua_setupvalue_typedef  r_lua_setupvalue = (r_lua_setupvalue_typedef)unprotect(x(0x014351D0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_setupvalue_CCV* r_lua_setupvalue_typedef)(int a1, int a2);
      r_lua_setupvalue_typedef  r_lua_setupvalue = (r_lua_setupvalue_typedef)unprotect(x(Adresses::lua_setupvalue_addr));



    */
    DWORD lua_setupvalue_addr = 0x014351D0;
#define lua_setupvalue_CCV  __cdecl

    /*

    * lua_toboolean_Decompiled_Args: int a1, int a2
    * lua_toboolean_TypeDef: bool
    * lua_toboolean_Aob: 55 8B EC 8B 55 0C 85 D2 7E 29
    * lua_toboolean_ProtectedByRetCheck: false
    * lua_toboolean_IsApartOfLua: true
    * lua_toboolean_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef bool(__cdecl* r_lua_toboolean_typedef)(int a1, int a2);
      r_lua_toboolean_typedef  r_lua_toboolean = (r_lua_toboolean_typedef)(x(0x01435280));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef bool(lua_toboolean_CCV* r_lua_toboolean_typedef)(int a1, int a2);
      r_lua_toboolean_typedef  r_lua_toboolean = (r_lua_toboolean_typedef)(x(Adresses::lua_toboolean_addr));



    */
    DWORD lua_toboolean_addr = 0x01435280;
#define lua_toboolean_CCV  __cdecl

    /*

    * lua_tolstring_Decompiled_Args: int a1, int a2, int a3
    * lua_tolstring_TypeDef: int
    * lua_tolstring_Aob: 55 8B EC 53 8B 5D 0C 56 8B 75 08 57 85
    * lua_tolstring_ProtectedByRetCheck: true
    * lua_tolstring_IsApartOfLua: true
    * lua_tolstring_Mask: .............
    * Usage (Not 100% Accurate):

      typedef int(__stdcall* r_lua_tolstring_typedef)(int a1, int a2, int a3);
      r_lua_tolstring_typedef  r_lua_tolstring = (r_lua_tolstring_typedef)unprotect(x(0x01435350));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_tolstring_CCV* r_lua_tolstring_typedef)(int a1, int a2, int a3);
      r_lua_tolstring_typedef  r_lua_tolstring = (r_lua_tolstring_typedef)unprotect(x(Adresses::lua_tolstring_addr));



    */
    DWORD lua_tolstring_addr = 0x01435350;
#define lua_tolstring_CCV  __stdcall

    /*

    * lua_tonumber_Decompiled_Args: int a1, int a2, int a3
    * lua_tonumber_TypeDef: int
    * lua_tonumber_Aob: Unable to get AOB
    * lua_tonumber_ProtectedByRetCheck: false
    * lua_tonumber_IsApartOfLua: true
    * lua_tonumber_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_tonumber_typedef)(int a1, int a2, int a3);
      r_lua_tonumber_typedef  r_lua_tonumber = (r_lua_tonumber_typedef)(x(0x01435480));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_tonumber_CCV* r_lua_tonumber_typedef)(int a1, int a2, int a3);
      r_lua_tonumber_typedef  r_lua_tonumber = (r_lua_tonumber_typedef)(x(Adresses::lua_tonumber_addr));



    */
    DWORD lua_tonumber_addr = 0x01435480;
#define lua_tonumber_CCV  __cdecl

    /*

    * lua_topointer_Decompiled_Args: int a1, int a2
    * lua_topointer_TypeDef: int
    * lua_topointer_Aob: 55 8B EC 53 8B 5D 08 56 57 8B 7D 0C BE
    * lua_topointer_ProtectedByRetCheck: false
    * lua_topointer_IsApartOfLua: true
    * lua_topointer_Mask: .............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_topointer_typedef)(int a1, int a2);
      r_lua_topointer_typedef  r_lua_topointer = (r_lua_topointer_typedef)(x(0x01435500));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_topointer_CCV* r_lua_topointer_typedef)(int a1, int a2);
      r_lua_topointer_typedef  r_lua_topointer = (r_lua_topointer_typedef)(x(Adresses::lua_topointer_addr));



    */
    DWORD lua_topointer_addr = 0x01435500;
#define lua_topointer_CCV  __cdecl

    /*

    * lua_tostring_Decompiled_Args: int a1, int a2
    * lua_tostring_TypeDef: int
    * lua_tostring_Aob: Unable to get AOB
    * lua_tostring_ProtectedByRetCheck: false
    * lua_tostring_IsApartOfLua: true
    * lua_tostring_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_tostring_typedef)(int a1, int a2);
      r_lua_tostring_typedef  r_lua_tostring = (r_lua_tostring_typedef)(x(0x014355C0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_tostring_CCV* r_lua_tostring_typedef)(int a1, int a2);
      r_lua_tostring_typedef  r_lua_tostring = (r_lua_tostring_typedef)(x(Adresses::lua_tostring_addr));



    */
    DWORD lua_tostring_addr = 0x014355C0;
#define lua_tostring_CCV  __cdecl

    /*

    * lua_tothread_Decompiled_Args: int a1, int a2
    * lua_tothread_TypeDef: int
    * lua_tothread_Aob: Unable to get AOB
    * lua_tothread_ProtectedByRetCheck: false
    * lua_tothread_IsApartOfLua: true
    * lua_tothread_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_tothread_typedef)(int a1, int a2);
      r_lua_tothread_typedef  r_lua_tothread = (r_lua_tothread_typedef)(x(0x01435640));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_tothread_CCV* r_lua_tothread_typedef)(int a1, int a2);
      r_lua_tothread_typedef  r_lua_tothread = (r_lua_tothread_typedef)(x(Adresses::lua_tothread_addr));



    */
    DWORD lua_tothread_addr = 0x01435640;
#define lua_tothread_CCV  __cdecl

    /*

    * lua_touserdata_Decompiled_Args: int a1, int a2
    * lua_touserdata_TypeDef: int
    * lua_touserdata_Aob: Unable to get AOB
    * lua_touserdata_ProtectedByRetCheck: false
    * lua_touserdata_IsApartOfLua: true
    * lua_touserdata_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_touserdata_typedef)(int a1, int a2);
      r_lua_touserdata_typedef  r_lua_touserdata = (r_lua_touserdata_typedef)(x(0x01435710));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_touserdata_CCV* r_lua_touserdata_typedef)(int a1, int a2);
      r_lua_touserdata_typedef  r_lua_touserdata = (r_lua_touserdata_typedef)(x(Adresses::lua_touserdata_addr));



    */
    DWORD lua_touserdata_addr = 0x01435710;
#define lua_touserdata_CCV  __cdecl

    /*

    * lua_type_Decompiled_Args: int a1, int a2
    * lua_type_TypeDef: int
    * lua_type_Aob: 55 8B EC 8B 55 0C 85 D2 7E 15
    * lua_type_ProtectedByRetCheck: false
    * lua_type_IsApartOfLua: true
    * lua_type_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_type_typedef)(int a1, int a2);
      r_lua_type_typedef  r_lua_type = (r_lua_type_typedef)(x(0x01435800));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_type_CCV* r_lua_type_typedef)(int a1, int a2);
      r_lua_type_typedef  r_lua_type = (r_lua_type_typedef)(x(Adresses::lua_type_addr));



    */
    DWORD lua_type_addr = 0x01435800;
#define lua_type_CCV  __cdecl

    /*

    * lua_typename_Decompiled_Args: int a1
    * lua_typename_TypeDef: int
    * lua_typename_Aob: 55 8B EC 8B 45 0C 83 F8 FF 75
    * lua_typename_ProtectedByRetCheck: false
    * lua_typename_IsApartOfLua: true
    * lua_typename_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_typename_typedef)(int a1);
      r_lua_typename_typedef  r_lua_typename = (r_lua_typename_typedef)(x(0x01435840));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_typename_CCV* r_lua_typename_typedef)(int a1);
      r_lua_typename_typedef  r_lua_typename = (r_lua_typename_typedef)(x(Adresses::lua_typename_addr));



    */
    DWORD lua_typename_addr = 0x01435840;
#define lua_typename_CCV  __cdecl

    /*

    * lua_xmove_Decompiled_Args: int a1, int a2, int a3
    * lua_xmove_TypeDef: int
    * lua_xmove_Aob: 55 8B EC 56 8B 75 0C 57 8B 7D 08 3B
    * lua_xmove_ProtectedByRetCheck: true
    * lua_xmove_IsApartOfLua: true
    * lua_xmove_Mask: ............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lua_xmove_typedef)(int a1, int a2, int a3);
      r_lua_xmove_typedef  r_lua_xmove = (r_lua_xmove_typedef)unprotect(x(0x014358B0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lua_xmove_CCV* r_lua_xmove_typedef)(int a1, int a2, int a3);
      r_lua_xmove_typedef  r_lua_xmove = (r_lua_xmove_typedef)unprotect(x(Adresses::lua_xmove_addr));



    */
    DWORD lua_xmove_addr = 0x014358B0;
#define lua_xmove_CCV  __cdecl

    /*

    * lua_yeild_Decompiled_Args: int a1, int a2
    * lua_yeild_TypeDef: bool
    * lua_yeild_Aob: 55 8B EC 8B 55 08 66 8B 42 30
    * lua_yeild_ProtectedByRetCheck: true
    * lua_yeild_IsApartOfLua: true
    * lua_yeild_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef bool(__cdecl* r_lua_yeild_typedef)(int a1, int a2);
      r_lua_yeild_typedef  r_lua_yeild = (r_lua_yeild_typedef)unprotect(x(0x01436C50));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef bool(lua_yeild_CCV* r_lua_yeild_typedef)(int a1, int a2);
      r_lua_yeild_typedef  r_lua_yeild = (r_lua_yeild_typedef)unprotect(x(Adresses::lua_yeild_addr));



    */
    DWORD lua_yeild_addr = 0x01436C50;
#define lua_yeild_CCV  __cdecl

    /*

    * luab_auxwrap_Decompiled_Args: int a1
    * luab_auxwrap_TypeDef: int
    * luab_auxwrap_Aob: 55 8B EC 56 57 8B 7D 08 68 ED
    * luab_auxwrap_ProtectedByRetCheck: false
    * luab_auxwrap_IsApartOfLua: true
    * luab_auxwrap_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luab_auxwrap_typedef)(int a1);
      r_luab_auxwrap_typedef  r_luab_auxwrap = (r_luab_auxwrap_typedef)(x(0x01441FA0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luab_auxwrap_CCV* r_luab_auxwrap_typedef)(int a1);
      r_luab_auxwrap_typedef  r_luab_auxwrap = (r_luab_auxwrap_typedef)(x(Adresses::luab_auxwrap_addr));



    */
    DWORD luab_auxwrap_addr = 0x01441FA0;
#define luab_auxwrap_CCV  __cdecl

    /*

    * luac_barrierback_Decompiled_Args: int a1, int a2
    * luac_barrierback_TypeDef: int
    * luac_barrierback_Aob: 55 8B EC 8B 45 08 8B 4D 0C 83 C0 08 8B 10 2B D0 80
    * luac_barrierback_ProtectedByRetCheck: false
    * luac_barrierback_IsApartOfLua: true
    * luac_barrierback_Mask: .................
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luac_barrierback_typedef)(int a1, int a2);
      r_luac_barrierback_typedef  r_luac_barrierback = (r_luac_barrierback_typedef)(x(0x01447F10));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luac_barrierback_CCV* r_luac_barrierback_typedef)(int a1, int a2);
      r_luac_barrierback_typedef  r_luac_barrierback = (r_luac_barrierback_typedef)(x(Adresses::luac_barrierback_addr));



    */
    DWORD luac_barrierback_addr = 0x01447F10;
#define luac_barrierback_CCV  __cdecl

    /*

    * luac_barrierf_Decompiled_Args: int a1, int a2
    * luac_barrierf_TypeDef: int
    * luac_barrierf_Aob: 55 8B EC 8B 45 08 83 C0 08 8B
    * luac_barrierf_ProtectedByRetCheck: false
    * luac_barrierf_IsApartOfLua: true
    * luac_barrierf_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luac_barrierf_typedef)(int a1, int a2);
      r_luac_barrierf_typedef  r_luac_barrierf = (r_luac_barrierf_typedef)(x(0x01447F30));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luac_barrierf_CCV* r_luac_barrierf_typedef)(int a1, int a2);
      r_luac_barrierf_typedef  r_luac_barrierf = (r_luac_barrierf_typedef)(x(Adresses::luac_barrierf_addr));



    */
    DWORD luac_barrierf_addr = 0x01447F30;
#define luac_barrierf_CCV  __cdecl

    /*

    * luac_fullgc_Decompiled_Args: int a1
    * luac_fullgc_TypeDef: int
    * luac_fullgc_Aob: 55 8B EC 53 56 57 8B 7D 08 8B 77 08
    * luac_fullgc_ProtectedByRetCheck: false
    * luac_fullgc_IsApartOfLua: true
    * luac_fullgc_Mask: ............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luac_fullgc_typedef)(int a1);
      r_luac_fullgc_typedef  r_luac_fullgc = (r_luac_fullgc_typedef)(x(0x01448060));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luac_fullgc_CCV* r_luac_fullgc_typedef)(int a1);
      r_luac_fullgc_typedef  r_luac_fullgc = (r_luac_fullgc_typedef)(x(Adresses::luac_fullgc_addr));



    */
    DWORD luac_fullgc_addr = 0x01448060;
#define luac_fullgc_CCV  __cdecl

    /*

    * luac_link_Decompiled_Args: int a1, int a2, int a3
    * luac_link_TypeDef: int
    * luac_link_Aob: 55 8B EC 8B 45 08 8B 4D 0C 83 C0 08 8B 10 2B D0 8B
    * luac_link_ProtectedByRetCheck: false
    * luac_link_IsApartOfLua: true
    * luac_link_Mask: .................
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luac_link_typedef)(int a1, int a2, int a3);
      r_luac_link_typedef  r_luac_link = (r_luac_link_typedef)(x(0x01448140));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luac_link_CCV* r_luac_link_typedef)(int a1, int a2, int a3);
      r_luac_link_typedef  r_luac_link = (r_luac_link_typedef)(x(Adresses::luac_link_addr));



    */
    DWORD luac_link_addr = 0x01448140;
#define luac_link_CCV  __cdecl

    /*

    * luac_linkupval_Decompiled_Args: int a1, int a2
    * luac_linkupval_TypeDef: bool
    * luac_linkupval_Aob: 55 8B EC 8B 55 0C 56 57 8B 7D 08 83
    * luac_linkupval_ProtectedByRetCheck: false
    * luac_linkupval_IsApartOfLua: true
    * luac_linkupval_Mask: ............
    * Usage (Not 100% Accurate):

      typedef bool(__thiscall* r_luac_linkupval_typedef)(int a1, int a2);
      r_luac_linkupval_typedef  r_luac_linkupval = (r_luac_linkupval_typedef)(x(0x01448170));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef bool(luac_linkupval_CCV* r_luac_linkupval_typedef)(int a1, int a2);
      r_luac_linkupval_typedef  r_luac_linkupval = (r_luac_linkupval_typedef)(x(Adresses::luac_linkupval_addr));



    */
    DWORD luac_linkupval_addr = 0x01448170;
#define luac_linkupval_CCV  __thiscall

    /*

    * luac_step_Decompiled_Args: int a1
    * luac_step_TypeDef: int
    * luac_step_Aob: 55 8B EC 83 EC 14 53 56 8B 75 08 B8 1F
    * luac_step_ProtectedByRetCheck: false
    * luac_step_IsApartOfLua: true
    * luac_step_Mask: .............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luac_step_typedef)(int a1);
      r_luac_step_typedef  r_luac_step = (r_luac_step_typedef)(x(0x014481F0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luac_step_CCV* r_luac_step_typedef)(int a1);
      r_luac_step_typedef  r_luac_step = (r_luac_step_typedef)(x(Adresses::luac_step_addr));



    */
    DWORD luac_step_addr = 0x014481F0;
#define luac_step_CCV  __cdecl

    /*

    * luad_call_Decompiled_Args: int a1
    * luad_call_TypeDef: int
    * luad_call_Aob: 55 8B EC 56 8B 75 08 BA C8
    * luad_call_ProtectedByRetCheck: false
    * luad_call_IsApartOfLua: true
    * luad_call_Mask: .........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luad_call_typedef)(int a1);
      r_luad_call_typedef  r_luad_call = (r_luad_call_typedef)(x(0x014364C0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luad_call_CCV* r_luad_call_typedef)(int a1);
      r_luad_call_typedef  r_luad_call = (r_luad_call_typedef)(x(Adresses::luad_call_addr));



    */
    DWORD luad_call_addr = 0x014364C0;
#define luad_call_CCV  __cdecl

    /*

    * luad_pcall_Decompiled_Args: int a1, int a2, int a3
    * luad_pcall_TypeDef: int
    * luad_pcall_Aob: 55 8B EC 83 EC 08 53 56 57 8B 7D 08 FF
    * luad_pcall_ProtectedByRetCheck: false
    * luad_pcall_IsApartOfLua: true
    * luad_pcall_Mask: .............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luad_pcall_typedef)(int a1, int a2, int a3);
      r_luad_pcall_typedef  r_luad_pcall = (r_luad_pcall_typedef)(x(0x014365F0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luad_pcall_CCV* r_luad_pcall_typedef)(int a1, int a2, int a3);
      r_luad_pcall_typedef  r_luad_pcall = (r_luad_pcall_typedef)(x(Adresses::luad_pcall_addr));



    */
    DWORD luad_pcall_addr = 0x014365F0;
#define luad_pcall_CCV  __cdecl

    /*

    * luad_precall_Decompiled_Args: int a1, int a2, int a3
    * luad_precall_TypeDef: int
    * luad_precall_Aob: 55 8B EC 53 56 8B 75 0C 57 8B 7D 08 83 7E
    * luad_precall_ProtectedByRetCheck: false
    * luad_precall_IsApartOfLua: true
    * luad_precall_Mask: ..............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luad_precall_typedef)(int a1, int a2, int a3);
      r_luad_precall_typedef  r_luad_precall = (r_luad_precall_typedef)(x(0x0143F920));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luad_precall_CCV* r_luad_precall_typedef)(int a1, int a2, int a3);
      r_luad_precall_typedef  r_luad_precall = (r_luad_precall_typedef)(x(Adresses::luad_precall_addr));



    */
    DWORD luad_precall_addr = 0x0143F920;
#define luad_precall_CCV  __cdecl

    /*

    * luad_poscall_Decompiled_Args: int a1, int a2
    * luad_poscall_TypeDef: int
    * luad_poscall_Aob: 55 8B EC 83 EC 08 53 8B 5D 08 56 57 8B 7D 0C 8B 73
    * luad_poscall_ProtectedByRetCheck: false
    * luad_poscall_IsApartOfLua: true
    * luad_poscall_Mask: .................
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luad_poscall_typedef)(int a1, int a2);
      r_luad_poscall_typedef  r_luad_poscall = (r_luad_poscall_typedef)(x(0x0143F890));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luad_poscall_CCV* r_luad_poscall_typedef)(int a1, int a2);
      r_luad_poscall_typedef  r_luad_poscall = (r_luad_poscall_typedef)(x(Adresses::luad_poscall_addr));



    */
    DWORD luad_poscall_addr = 0x0143F890;
#define luad_poscall_CCV  __cdecl

    /*

    * luad_rawrunprotected_Decompiled_Args: int a1, int a2
    * luad_rawrunprotected_TypeDef: int
    * luad_rawrunprotected_Aob: 55 8B EC 6A FF 68 F0 0A
    * luad_rawrunprotected_ProtectedByRetCheck: false
    * luad_rawrunprotected_IsApartOfLua: true
    * luad_rawrunprotected_Mask: ........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luad_rawrunprotected_typedef)(int a1, int a2);
      r_luad_rawrunprotected_typedef  r_luad_rawrunprotected = (r_luad_rawrunprotected_typedef)(x(0x014366F0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luad_rawrunprotected_CCV* r_luad_rawrunprotected_typedef)(int a1, int a2);
      r_luad_rawrunprotected_typedef  r_luad_rawrunprotected = (r_luad_rawrunprotected_typedef)(x(Adresses::luad_rawrunprotected_addr));



    */
    DWORD luad_rawrunprotected_addr = 0x014366F0;
#define luad_rawrunprotected_CCV  __cdecl

    /*

    * luad_reallocci_Decompiled_Args: int a1, int a2
    * luad_reallocci_TypeDef: int
    * luad_reallocci_Aob: 55 8B EC 8B 45 0C 53 8B 5D 08 56 57 8B 4B
    * luad_reallocci_ProtectedByRetCheck: false
    * luad_reallocci_IsApartOfLua: true
    * luad_reallocci_Mask: ..............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luad_reallocci_typedef)(int a1, int a2);
      r_luad_reallocci_typedef  r_luad_reallocci = (r_luad_reallocci_typedef)(x(0x01436830));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luad_reallocci_CCV* r_luad_reallocci_typedef)(int a1, int a2);
      r_luad_reallocci_typedef  r_luad_reallocci = (r_luad_reallocci_typedef)(x(Adresses::luad_reallocci_addr));



    */
    DWORD luad_reallocci_addr = 0x01436830;
#define luad_reallocci_CCV  __cdecl

    /*

    * luad_seterrorObj_Decompiled_Args: int a1, int a2, int a3
    * luad_seterrorObj_TypeDef: int
    * luad_seterrorObj_Aob: 55 8B EC 8B 45 0C 56 8B 75 10 83
    * luad_seterrorObj_ProtectedByRetCheck: false
    * luad_seterrorObj_IsApartOfLua: true
    * luad_seterrorObj_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luad_seterrorObj_typedef)(int a1, int a2, int a3);
      r_luad_seterrorObj_typedef  r_luad_seterrorObj = (r_luad_seterrorObj_typedef)(x(0x01436990));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luad_seterrorObj_CCV* r_luad_seterrorObj_typedef)(int a1, int a2, int a3);
      r_luad_seterrorObj_typedef  r_luad_seterrorObj = (r_luad_seterrorObj_typedef)(x(Adresses::luad_seterrorObj_addr));



    */
    DWORD luad_seterrorObj_addr = 0x01436990;
#define luad_seterrorObj_CCV  __cdecl

    /*

    * luad_throw_Decompiled_Args: Function Has No Args Or Unable To Get Args
    * luad_throw_TypeDef: Unable To Get typedef
    * luad_throw_Aob: 55 8B EC 83 EC 14 8D 4D
    * luad_throw_ProtectedByRetCheck: false
    * luad_throw_IsApartOfLua: true
    * luad_throw_Mask: ........
    * Usage (Not 100% Accurate):

      typedef void(__cdecl* r_luad_throw_typedef)();
      r_luad_throw_typedef  r_luad_throw = (r_luad_throw_typedef)(x(0x01436A00));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef void(luad_throw_CCV* r_luad_throw_typedef)();
      r_luad_throw_typedef  r_luad_throw = (r_luad_throw_typedef)(x(Adresses::luad_throw_addr));



    */
    DWORD luad_throw_addr = 0x01436A00;
#define luad_throw_CCV  __cdecl

    /*

    * luae_freethread_Decompiled_Args: int a1, int a2
    * luae_freethread_TypeDef: int
    * luae_freethread_Aob: 55 8B EC 56 8B 75 0C 57 FF 76
    * luae_freethread_ProtectedByRetCheck: false
    * luae_freethread_IsApartOfLua: true
    * luae_freethread_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luae_freethread_typedef)(int a1, int a2);
      r_luae_freethread_typedef  r_luae_freethread = (r_luae_freethread_typedef)(x(0x0143FEB0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luae_freethread_CCV* r_luae_freethread_typedef)(int a1, int a2);
      r_luae_freethread_typedef  r_luae_freethread = (r_luae_freethread_typedef)(x(Adresses::luae_freethread_addr));



    */
    DWORD luae_freethread_addr = 0x0143FEB0;
#define luae_freethread_CCV  __cdecl

    /*

    * luae_newthread_Decompiled_Args: int a1
    * luae_newthread_TypeDef: int
    * luae_newthread_Aob: 55 8B EC 56 57 8B 7D 08 6A 70
    * luae_newthread_ProtectedByRetCheck: false
    * luae_newthread_IsApartOfLua: true
    * luae_newthread_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luae_newthread_typedef)(int a1);
      r_luae_newthread_typedef  r_luae_newthread = (r_luae_newthread_typedef)(x(0x0143FF20));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luae_newthread_CCV* r_luae_newthread_typedef)(int a1);
      r_luae_newthread_typedef  r_luae_newthread = (r_luae_newthread_typedef)(x(Adresses::luae_newthread_addr));



    */
    DWORD luae_newthread_addr = 0x0143FF20;
#define luae_newthread_CCV  __cdecl

    /*

    * luaf_close_Decompiled_Args: int a1, int a2
    * luaf_close_TypeDef: int
    * luaf_close_Aob: 55 8B EC 53 57 8B 7D 08 8B 5F 08 8D 47
    * luaf_close_ProtectedByRetCheck: false
    * luaf_close_IsApartOfLua: true
    * luaf_close_Mask: .............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luaf_close_typedef)(int a1, int a2);
      r_luaf_close_typedef  r_luaf_close = (r_luaf_close_typedef)(x(0x01447910));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luaf_close_CCV* r_luaf_close_typedef)(int a1, int a2);
      r_luaf_close_typedef  r_luaf_close = (r_luaf_close_typedef)(x(Adresses::luaf_close_addr));



    */
    DWORD luaf_close_addr = 0x01447910;
#define luaf_close_CCV  __cdecl

    /*

    * luaf_freeproto_Decompiled_Args: int a1, int a2
    * luaf_freeproto_TypeDef: int
    * luaf_freeproto_Aob: 55 8B EC 56 8B 75 0C 57 8B 7D 08 8D 4E
    * luaf_freeproto_ProtectedByRetCheck: false
    * luaf_freeproto_IsApartOfLua: true
    * luaf_freeproto_Mask: .............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luaf_freeproto_typedef)(int a1, int a2);
      r_luaf_freeproto_typedef  r_luaf_freeproto = (r_luaf_freeproto_typedef)(x(0x01447A70));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luaf_freeproto_CCV* r_luaf_freeproto_typedef)(int a1, int a2);
      r_luaf_freeproto_typedef  r_luaf_freeproto = (r_luaf_freeproto_typedef)(x(Adresses::luaf_freeproto_addr));



    */
    DWORD luaf_freeproto_addr = 0x01447A70;
#define luaf_freeproto_CCV  __cdecl

    /*

    * luaf_findupval_Decompiled_Args: int a1, int a2
    * luaf_findupval_TypeDef: bool
    * luaf_findupval_Aob: 55 8B EC 8B 55 08 53 8B 5A
    * luaf_findupval_ProtectedByRetCheck: false
    * luaf_findupval_IsApartOfLua: true
    * luaf_findupval_Mask: .........
    * Usage (Not 100% Accurate):

      typedef bool(__cdecl* r_luaf_findupval_typedef)(int a1, int a2);
      r_luaf_findupval_typedef  r_luaf_findupval = (r_luaf_findupval_typedef)(x(0x014479A0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef bool(luaf_findupval_CCV* r_luaf_findupval_typedef)(int a1, int a2);
      r_luaf_findupval_typedef  r_luaf_findupval = (r_luaf_findupval_typedef)(x(Adresses::luaf_findupval_addr));



    */
    DWORD luaf_findupval_addr = 0x014479A0;
#define luaf_findupval_CCV  __cdecl

    /*

    * luaf_newcclosure_Decompiled_Args: int a1, int a2
    * luaf_newcclosure_TypeDef: int
    * luaf_newcclosure_Aob: 55 8B EC 53 8B 5D 0C 8B C3 C1
    * luaf_newcclosure_ProtectedByRetCheck: false
    * luaf_newcclosure_IsApartOfLua: true
    * luaf_newcclosure_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luaf_newcclosure_typedef)(int a1, int a2);
      r_luaf_newcclosure_typedef  r_luaf_newcclosure = (r_luaf_newcclosure_typedef)(x(0x01447BD0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luaf_newcclosure_CCV* r_luaf_newcclosure_typedef)(int a1, int a2);
      r_luaf_newcclosure_typedef  r_luaf_newcclosure = (r_luaf_newcclosure_typedef)(x(Adresses::luaf_newcclosure_addr));



    */
    DWORD luaf_newcclosure_addr = 0x01447BD0;
#define luaf_newcclosure_CCV  __cdecl

    /*

    * luaf_newlclosure_Decompiled_Args: int a1, int a2, int a3
    * luaf_newlclosure_TypeDef: int
    * luaf_newlclosure_Aob: 55 8B EC 53 8B 5D 0C 57 8D
    * luaf_newlclosure_ProtectedByRetCheck: false
    * luaf_newlclosure_IsApartOfLua: true
    * luaf_newlclosure_Mask: .........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luaf_newlclosure_typedef)(int a1, int a2, int a3);
      r_luaf_newlclosure_typedef  r_luaf_newlclosure = (r_luaf_newlclosure_typedef)(x(0x01447C30));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luaf_newlclosure_CCV* r_luaf_newlclosure_typedef)(int a1, int a2, int a3);
      r_luaf_newlclosure_typedef  r_luaf_newlclosure = (r_luaf_newlclosure_typedef)(x(Adresses::luaf_newlclosure_addr));



    */
    DWORD luaf_newlclosure_addr = 0x01447C30;
#define luaf_newlclosure_CCV  __cdecl

    /*

    * luaf_newproto_Decompiled_Args: No Args Found
    * luaf_newproto_TypeDef: int
    * luaf_newproto_Aob: 55 8B EC 57 6A 54
    * luaf_newproto_ProtectedByRetCheck: false
    * luaf_newproto_IsApartOfLua: true
    * luaf_newproto_Mask: ......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luaf_newproto_typedef)(No Args Found);
      r_luaf_newproto_typedef  r_luaf_newproto = (r_luaf_newproto_typedef)(x(0x01447CA0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luaf_newproto_CCV* r_luaf_newproto_typedef)(No Args Found);
      r_luaf_newproto_typedef  r_luaf_newproto = (r_luaf_newproto_typedef)(x(Adresses::luaf_newproto_addr));



    */
    DWORD luaf_newproto_addr = 0x01447CA0;
#define luaf_newproto_CCV  __cdecl

    /*

    * luag_runerror_Decompiled_Args: Function Has No Args Or Unable To Get Args
    * luag_runerror_TypeDef: Unable To Get typedef
    * luag_runerror_Aob: 55 8B EC 56 8B 75 08 8D 45 10 50 FF
    * luag_runerror_ProtectedByRetCheck: false
    * luag_runerror_IsApartOfLua: true
    * luag_runerror_Mask: ............
    * Usage (Not 100% Accurate):

      typedef void(__cdecl* r_luag_runerror_typedef)();
      r_luag_runerror_typedef  r_luag_runerror = (r_luag_runerror_typedef)(x(0x014409E0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef void(luag_runerror_CCV* r_luag_runerror_typedef)();
      r_luag_runerror_typedef  r_luag_runerror = (r_luag_runerror_typedef)(x(Adresses::luag_runerror_addr));



    */
    DWORD luag_runerror_addr = 0x014409E0;
#define luag_runerror_CCV  __cdecl

    /*

    * luag_typeerror_Decompiled_Args: int a1, int a2, int a3
    * luag_typeerror_TypeDef: int
    * luag_typeerror_Aob: 55 8B EC 8B 55 08 56 8B 75 0C 8B 4E
    * luag_typeerror_ProtectedByRetCheck: false
    * luag_typeerror_IsApartOfLua: true
    * luag_typeerror_Mask: ............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luag_typeerror_typedef)(int a1, int a2, int a3);
      r_luag_typeerror_typedef  r_luag_typeerror = (r_luag_typeerror_typedef)(x(0x0144B7B0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luag_typeerror_CCV* r_luag_typeerror_typedef)(int a1, int a2, int a3);
      r_luag_typeerror_typedef  r_luag_typeerror = (r_luag_typeerror_typedef)(x(Adresses::luag_typeerror_addr));



    */
    DWORD luag_typeerror_addr = 0x0144B7B0;
#define luag_typeerror_CCV  __cdecl

    /*

    * luah_free_Decompiled_Args: int a1, int a2
    * luah_free_TypeDef: int
    * luah_free_Aob: 55 8B EC 56 8B 75 0C 57 8B 7D 08 8B 56 18
    * luah_free_ProtectedByRetCheck: false
    * luah_free_IsApartOfLua: true
    * luah_free_Mask: ..............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luah_free_typedef)(int a1, int a2);
      r_luah_free_typedef  r_luah_free = (r_luah_free_typedef)(x(0x014497A0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luah_free_CCV* r_luah_free_typedef)(int a1, int a2);
      r_luah_free_typedef  r_luah_free = (r_luah_free_typedef)(x(Adresses::luah_free_addr));



    */
    DWORD luah_free_addr = 0x014497A0;
#define luah_free_CCV  __cdecl

    /*

    * luah_get_Decompiled_Args: int a1
    * luah_get_TypeDef: int
    * luah_get_Aob: 55 8B EC 56 57 8B 7D 0C 8B 47 0C
    * luah_get_ProtectedByRetCheck: false
    * luah_get_IsApartOfLua: true
    * luah_get_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luah_get_typedef)(int a1);
      r_luah_get_typedef  r_luah_get = (r_luah_get_typedef)(x(0x01449800));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luah_get_CCV* r_luah_get_typedef)(int a1);
      r_luah_get_typedef  r_luah_get = (r_luah_get_typedef)(x(Adresses::luah_get_addr));



    */
    DWORD luah_get_addr = 0x01449800;
#define luah_get_CCV  __cdecl

    /*

    * luah_getn_Decompiled_Args: int a1
    * luah_getn_TypeDef: int
    * luah_getn_Aob: 55 8B EC 53 56 57 8B 7D 08 8B 77 0C 85
    * luah_getn_ProtectedByRetCheck: false
    * luah_getn_IsApartOfLua: true
    * luah_getn_Mask: .............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luah_getn_typedef)(int a1);
      r_luah_getn_typedef  r_luah_getn = (r_luah_getn_typedef)(x(0x014498B0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luah_getn_CCV* r_luah_getn_typedef)(int a1);
      r_luah_getn_typedef  r_luah_getn = (r_luah_getn_typedef)(x(Adresses::luah_getn_addr));



    */
    DWORD luah_getn_addr = 0x014498B0;
#define luah_getn_CCV  __cdecl

    /*

    * luah_getnum_Decompiled_Args: int a1, int a2
    * luah_getnum_TypeDef: int
    * luah_getnum_Aob: 55 8B EC 8B 4D 0C 83 EC 08 57
    * luah_getnum_ProtectedByRetCheck: false
    * luah_getnum_IsApartOfLua: true
    * luah_getnum_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luah_getnum_typedef)(int a1, int a2);
      r_luah_getnum_typedef  r_luah_getnum = (r_luah_getnum_typedef)(x(0x01449930));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luah_getnum_CCV* r_luah_getnum_typedef)(int a1, int a2);
      r_luah_getnum_typedef  r_luah_getnum = (r_luah_getnum_typedef)(x(Adresses::luah_getnum_addr));



    */
    DWORD luah_getnum_addr = 0x01449930;
#define luah_getnum_CCV  __cdecl

    /*

    * luah_getstr_Decompiled_Args: int a1, int a2
    * luah_getstr_TypeDef: int
    * luah_getstr_Aob: 55 8B EC 8B 45 08 53 8B 5D 0C 56 8A
    * luah_getstr_ProtectedByRetCheck: false
    * luah_getstr_IsApartOfLua: true
    * luah_getstr_Mask: ............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luah_getstr_typedef)(int a1, int a2);
      r_luah_getstr_typedef  r_luah_getstr = (r_luah_getstr_typedef)(x(0x01449A10));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luah_getstr_CCV* r_luah_getstr_typedef)(int a1, int a2);
      r_luah_getstr_typedef  r_luah_getstr = (r_luah_getstr_typedef)(x(Adresses::luah_getstr_addr));



    */
    DWORD luah_getstr_addr = 0x01449A10;
#define luah_getstr_CCV  __cdecl

    /*

    * luah_new_Decompiled_Args: int a1
    * luah_new_TypeDef: int
    * luah_new_Aob: 55 8B EC 56 57 8B 7D 08 6A 24
    * luah_new_ProtectedByRetCheck: false
    * luah_new_IsApartOfLua: true
    * luah_new_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luah_new_typedef)(int a1);
      r_luah_new_typedef  r_luah_new = (r_luah_new_typedef)(x(0x01449A80));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luah_new_CCV* r_luah_new_typedef)(int a1);
      r_luah_new_typedef  r_luah_new = (r_luah_new_typedef)(x(Adresses::luah_new_addr));



    */
    DWORD luah_new_addr = 0x01449A80;
#define luah_new_CCV  __cdecl

    /*

    * luah_next_Decompiled_Args: int a1, int a2
    * luah_next_TypeDef: int
    * luah_next_Aob: 55 8B EC 83 EC 0C 56 57 8B 7D 10
    * luah_next_ProtectedByRetCheck: false
    * luah_next_IsApartOfLua: true
    * luah_next_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luah_next_typedef)(int a1, int a2);
      r_luah_next_typedef  r_luah_next = (r_luah_next_typedef)(x(0x01449AF0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luah_next_CCV* r_luah_next_typedef)(int a1, int a2);
      r_luah_next_typedef  r_luah_next = (r_luah_next_typedef)(x(Adresses::luah_next_addr));



    */
    DWORD luah_next_addr = 0x01449AF0;
#define luah_next_CCV  __cdecl

    /*

    * luah_resizearray_Decompiled_Args: int a1
    * luah_resizearray_TypeDef: int
    * luah_resizearray_Aob: 55 8B EC 8B 55 0C 8B 42 18
    * luah_resizearray_ProtectedByRetCheck: false
    * luah_resizearray_IsApartOfLua: true
    * luah_resizearray_Mask: .........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luah_resizearray_typedef)(int a1);
      r_luah_resizearray_typedef  r_luah_resizearray = (r_luah_resizearray_typedef)(x(0x01449CD0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luah_resizearray_CCV* r_luah_resizearray_typedef)(int a1);
      r_luah_resizearray_typedef  r_luah_resizearray = (r_luah_resizearray_typedef)(x(Adresses::luah_resizearray_addr));



    */
    DWORD luah_resizearray_addr = 0x01449CD0;
#define luah_resizearray_CCV  __cdecl

    /*

    * luah_set_Decompiled_Args: int a1, int a2
    * luah_set_TypeDef: int
    * luah_set_Aob: 55 8B EC 56 57 8B 7D 10 8B 47
    * luah_set_ProtectedByRetCheck: false
    * luah_set_IsApartOfLua: true
    * luah_set_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luah_set_typedef)(int a1, int a2);
      r_luah_set_typedef  r_luah_set = (r_luah_set_typedef)(x(0x01449D20));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luah_set_CCV* r_luah_set_typedef)(int a1, int a2);
      r_luah_set_typedef  r_luah_set = (r_luah_set_typedef)(x(Adresses::luah_set_addr));



    */
    DWORD luah_set_addr = 0x01449D20;
#define luah_set_CCV  __cdecl

    /*

    * luah_setnum_Decompiled_Args: int a1, int a2
    * luah_setnum_TypeDef: int
    * luah_setnum_Aob: 55 8B EC 83 EC 10 56 8B 75 10 57 8B 7D
    * luah_setnum_ProtectedByRetCheck: false
    * luah_setnum_IsApartOfLua: true
    * luah_setnum_Mask: .............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luah_setnum_typedef)(int a1, int a2);
      r_luah_setnum_typedef  r_luah_setnum = (r_luah_setnum_typedef)(x(0x01449E40));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luah_setnum_CCV* r_luah_setnum_typedef)(int a1, int a2);
      r_luah_setnum_typedef  r_luah_setnum = (r_luah_setnum_typedef)(x(Adresses::luah_setnum_addr));



    */
    DWORD luah_setnum_addr = 0x01449E40;
#define luah_setnum_CCV  __cdecl

    /*

    * lual_addlstring_Decompiled_Args: int a1, int a2, int a3
    * lual_addlstring_TypeDef: int
    * lual_addlstring_Aob: 55 8B EC 53 8B 5D 10 85 DB 74
    * lual_addlstring_ProtectedByRetCheck: false
    * lual_addlstring_IsApartOfLua: true
    * lual_addlstring_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lual_addlstring_typedef)(int a1, int a2, int a3);
      r_lual_addlstring_typedef  r_lual_addlstring = (r_lual_addlstring_typedef)(x(0x01435A20));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lual_addlstring_CCV* r_lual_addlstring_typedef)(int a1, int a2, int a3);
      r_lual_addlstring_typedef  r_lual_addlstring = (r_lual_addlstring_typedef)(x(Adresses::lual_addlstring_addr));



    */
    DWORD lual_addlstring_addr = 0x01435A20;
#define lual_addlstring_CCV  __cdecl

    /*

    * lual_addvalue_Decompiled_Args: int a1
    * lual_addvalue_TypeDef: int
    * lual_addvalue_Aob: 55 8B EC 53 56 57 8B 7D 08 8D
    * lual_addvalue_ProtectedByRetCheck: false
    * lual_addvalue_IsApartOfLua: true
    * lual_addvalue_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lual_addvalue_typedef)(int a1);
      r_lual_addvalue_typedef  r_lual_addvalue = (r_lual_addvalue_typedef)(x(0x01435A90));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lual_addvalue_CCV* r_lual_addvalue_typedef)(int a1);
      r_lual_addvalue_typedef  r_lual_addvalue = (r_lual_addvalue_typedef)(x(Adresses::lual_addvalue_addr));



    */
    DWORD lual_addvalue_addr = 0x01435A90;
#define lual_addvalue_CCV  __cdecl

    /*

    * lual_argerror_Decompiled_Args: int a1, int a2
    * lual_argerror_TypeDef: int
    * lual_argerror_Aob: 55 8B EC 56 8B 75 08 57 8B 7D 0C 8D 87 0F 27 00 00 3D 0F 27 00 00 77 0C 56 E8 02
    * lual_argerror_ProtectedByRetCheck: false
    * lual_argerror_IsApartOfLua: true
    * lual_argerror_Mask: ...........................
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lual_argerror_typedef)(int a1, int a2);
      r_lual_argerror_typedef  r_lual_argerror = (r_lual_argerror_typedef)(x(0x01435B80));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lual_argerror_CCV* r_lual_argerror_typedef)(int a1, int a2);
      r_lual_argerror_typedef  r_lual_argerror = (r_lual_argerror_typedef)(x(Adresses::lual_argerror_addr));



    */
    DWORD lual_argerror_addr = 0x01435B80;
#define lual_argerror_CCV  __cdecl

    /*

    * lual_checkany_Decompiled_Args: Function Has No Args Or Unable To Get Args
    * lual_checkany_TypeDef: Unable To Get typedef
    * lual_checkany_Aob: 55 8B EC 51 FF 75 0C FF 75 08 E8 E1 FB
    * lual_checkany_ProtectedByRetCheck: false
    * lual_checkany_IsApartOfLua: true
    * lual_checkany_Mask: .............
    * Usage (Not 100% Accurate):

      typedef void(__cdecl* r_lual_checkany_typedef)();
      r_lual_checkany_typedef  r_lual_checkany = (r_lual_checkany_typedef)(x(0x01435C10));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef void(lual_checkany_CCV* r_lual_checkany_typedef)();
      r_lual_checkany_typedef  r_lual_checkany = (r_lual_checkany_typedef)(x(Adresses::lual_checkany_addr));



    */
    DWORD lual_checkany_addr = 0x01435C10;
#define lual_checkany_CCV  __cdecl

    /*

    * lual_checkinteger_Decompiled_Args: Function Has No Args Or Unable To Get Args
    * lual_checkinteger_TypeDef: Unable To Get typedef
    * lual_checkinteger_Aob: 55 8B EC 51 8D 45 FC 50 FF 75 0C FF 75 08 E8 6D
    * lual_checkinteger_ProtectedByRetCheck: false
    * lual_checkinteger_IsApartOfLua: true
    * lual_checkinteger_Mask: ................
    * Usage (Not 100% Accurate):

      typedef void(__cdecl* r_lual_checkinteger_typedef)();
      r_lual_checkinteger_typedef  r_lual_checkinteger = (r_lual_checkinteger_typedef)(x(0x01435C50));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef void(lual_checkinteger_CCV* r_lual_checkinteger_typedef)();
      r_lual_checkinteger_typedef  r_lual_checkinteger = (r_lual_checkinteger_typedef)(x(Adresses::lual_checkinteger_addr));



    */
    DWORD lual_checkinteger_addr = 0x01435C50;
#define lual_checkinteger_CCV  __cdecl

    /*

    * lual_checklstring_Decompiled_Args: No Args Found
    * lual_checklstring_TypeDef: int
    * lual_checklstring_Aob: 55 8B EC FF 75 10 FF 75 0C FF 75 08 E8 BF F6
    * lual_checklstring_ProtectedByRetCheck: false
    * lual_checklstring_IsApartOfLua: true
    * lual_checklstring_Mask: ...............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lual_checklstring_typedef)(No Args Found);
      r_lual_checklstring_typedef  r_lual_checklstring = (r_lual_checklstring_typedef)(x(0x01435C80));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lual_checklstring_CCV* r_lual_checklstring_typedef)(No Args Found);
      r_lual_checklstring_typedef  r_lual_checklstring = (r_lual_checklstring_typedef)(x(Adresses::lual_checklstring_addr));



    */
    DWORD lual_checklstring_addr = 0x01435C80;
#define lual_checklstring_CCV  __cdecl

    /*

    * lual_checknumber_Decompiled_Args: Function Has No Args Or Unable To Get Args
    * lual_checknumber_TypeDef: Unable To Get typedef
    * lual_checknumber_Aob: 55 8B EC 51 8D 45 FC 50 FF 75 0C FF 75 08 E8 BD F7
    * lual_checknumber_ProtectedByRetCheck: false
    * lual_checknumber_IsApartOfLua: true
    * lual_checknumber_Mask: .................
    * Usage (Not 100% Accurate):

      typedef void(__cdecl* r_lual_checknumber_typedef)();
      r_lual_checknumber_typedef  r_lual_checknumber = (r_lual_checknumber_typedef)(x(0x01435CB0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef void(lual_checknumber_CCV* r_lual_checknumber_typedef)();
      r_lual_checknumber_typedef  r_lual_checknumber = (r_lual_checknumber_typedef)(x(Adresses::lual_checknumber_addr));



    */
    DWORD lual_checknumber_addr = 0x01435CB0;
#define lual_checknumber_CCV  __cdecl

    /*

    * lual_checkstack_Decompiled_Args: Function Has No Args Or Unable To Get Args
    * lual_checkstack_TypeDef: Unable To Get typedef
    * lual_checkstack_Aob: 55 8B EC 51 FF 75 0C FF 75 08 E8 81 D8
    * lual_checkstack_ProtectedByRetCheck: false
    * lual_checkstack_IsApartOfLua: true
    * lual_checkstack_Mask: .............
    * Usage (Not 100% Accurate):

      typedef void(__cdecl* r_lual_checkstack_typedef)();
      r_lual_checkstack_typedef  r_lual_checkstack = (r_lual_checkstack_typedef)(x(0x01435CE0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef void(lual_checkstack_CCV* r_lual_checkstack_typedef)();
      r_lual_checkstack_typedef  r_lual_checkstack = (r_lual_checkstack_typedef)(x(Adresses::lual_checkstack_addr));



    */
    DWORD lual_checkstack_addr = 0x01435CE0;
#define lual_checkstack_CCV  __cdecl

    /*

    * lual_checktype_Decompiled_Args: int a1
    * lual_checktype_TypeDef: int
    * lual_checktype_Aob: 55 8B EC FF 75 0C FF 75 08 E8 D2 FA
    * lual_checktype_ProtectedByRetCheck: false
    * lual_checktype_IsApartOfLua: true
    * lual_checktype_Mask: ............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lual_checktype_typedef)(int a1);
      r_lual_checktype_typedef  r_lual_checktype = (r_lual_checktype_typedef)(x(0x01435D20));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lual_checktype_CCV* r_lual_checktype_typedef)(int a1);
      r_lual_checktype_typedef  r_lual_checktype = (r_lual_checktype_typedef)(x(Adresses::lual_checktype_addr));



    */
    DWORD lual_checktype_addr = 0x01435D20;
#define lual_checktype_CCV  __cdecl

    /*

    * lual_error_Decompiled_Args: Function Has No Args Or Unable To Get Args
    * lual_error_TypeDef: Unable To Get typedef
    * lual_error_Aob: 55 8B EC 56 8B 75 08 6A 01 56 E8 11 06
    * lual_error_ProtectedByRetCheck: false
    * lual_error_IsApartOfLua: true
    * lual_error_Mask: .............
    * Usage (Not 100% Accurate):

      typedef void(__cdecl* r_lual_error_typedef)();
      r_lual_error_typedef  r_lual_error = (r_lual_error_typedef)(x(0x01435D80));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef void(lual_error_CCV* r_lual_error_typedef)();
      r_lual_error_typedef  r_lual_error = (r_lual_error_typedef)(x(Adresses::lual_error_addr));



    */
    DWORD lual_error_addr = 0x01435D80;
#define lual_error_CCV  __cdecl

    /*

    * lual_findtable_Decompiled_Args: int a1, int a2, int a3
    * lual_findtable_TypeDef: int
    * lual_findtable_Aob: 55 8B EC 53 56 8B 75 08 57 FF 75 0C 56 E8 6E
    * lual_findtable_ProtectedByRetCheck: false
    * lual_findtable_IsApartOfLua: true
    * lual_findtable_Mask: ...............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lual_findtable_typedef)(int a1, int a2, int a3);
      r_lual_findtable_typedef  r_lual_findtable = (r_lual_findtable_typedef)(x(0x01435DB0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lual_findtable_CCV* r_lual_findtable_typedef)(int a1, int a2, int a3);
      r_lual_findtable_typedef  r_lual_findtable = (r_lual_findtable_typedef)(x(Adresses::lual_findtable_addr));



    */
    DWORD lual_findtable_addr = 0x01435DB0;
#define lual_findtable_CCV  __cdecl

    /*

    * lual_getmetafield_Decompiled_Args: int a1
    * lual_getmetafield_TypeDef: int
    * lual_getmetafield_Aob: 55 8B EC 56 FF 75 0C 8B 75 08 56 E8 D0 DB
    * lual_getmetafield_ProtectedByRetCheck: false
    * lual_getmetafield_IsApartOfLua: true
    * lual_getmetafield_Mask: ..............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lual_getmetafield_typedef)(int a1);
      r_lual_getmetafield_typedef  r_lual_getmetafield = (r_lual_getmetafield_typedef)(x(0x01435E90));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lual_getmetafield_CCV* r_lual_getmetafield_typedef)(int a1);
      r_lual_getmetafield_typedef  r_lual_getmetafield = (r_lual_getmetafield_typedef)(x(Adresses::lual_getmetafield_addr));



    */
    DWORD lual_getmetafield_addr = 0x01435E90;
#define lual_getmetafield_CCV  __cdecl

    /*

    * lual_newmetatable_Decompiled_Args: int a1
    * lual_newmetatable_TypeDef: int
    * lual_newmetatable_Aob: 55 8B EC 56 FF 75 0C 8B 75 08 BA
    * lual_newmetatable_ProtectedByRetCheck: false
    * lual_newmetatable_IsApartOfLua: true
    * lual_newmetatable_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lual_newmetatable_typedef)(int a1);
      r_lual_newmetatable_typedef  r_lual_newmetatable = (r_lual_newmetatable_typedef)(x(0x01435EF0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lual_newmetatable_CCV* r_lual_newmetatable_typedef)(int a1);
      r_lual_newmetatable_typedef  r_lual_newmetatable = (r_lual_newmetatable_typedef)(x(Adresses::lual_newmetatable_addr));



    */
    DWORD lual_newmetatable_addr = 0x01435EF0;
#define lual_newmetatable_CCV  __cdecl

    /*

    * lual_optinteger_Decompiled_Args: int a1, int a2, int a3
    * lual_optinteger_TypeDef: int
    * lual_optinteger_Aob: 55 8B EC 51 56 8B 75 0C 57 8B 7D 08 56
    * lual_optinteger_ProtectedByRetCheck: false
    * lual_optinteger_IsApartOfLua: true
    * lual_optinteger_Mask: .............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lual_optinteger_typedef)(int a1, int a2, int a3);
      r_lual_optinteger_typedef  r_lual_optinteger = (r_lual_optinteger_typedef)(x(0x01435F50));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lual_optinteger_CCV* r_lual_optinteger_typedef)(int a1, int a2, int a3);
      r_lual_optinteger_typedef  r_lual_optinteger = (r_lual_optinteger_typedef)(x(Adresses::lual_optinteger_addr));



    */
    DWORD lual_optinteger_addr = 0x01435F50;
#define lual_optinteger_CCV  __cdecl

    /*

    * lual_optlstring_Decompiled_Args: int a1, int a2, int a3, const char* a4
    * lual_optlstring_TypeDef: int
    * lual_optlstring_Aob: 55 8B EC 56 8B 75 0C 57 8B 7D 08 56 57 E8 4E
    * lual_optlstring_ProtectedByRetCheck: false
    * lual_optlstring_IsApartOfLua: true
    * lual_optlstring_Mask: ...............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lual_optlstring_typedef)(int a1, int a2, int a3, const char* a4);
      r_lual_optlstring_typedef  r_lual_optlstring = (r_lual_optlstring_typedef)(x(0x01435FA0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lual_optlstring_CCV* r_lual_optlstring_typedef)(int a1, int a2, int a3, const char* a4);
      r_lual_optlstring_typedef  r_lual_optlstring = (r_lual_optlstring_typedef)(x(Adresses::lual_optlstring_addr));



    */
    DWORD lual_optlstring_addr = 0x01435FA0;
#define lual_optlstring_CCV  __cdecl

    /*

    * lual_prepbuffer_Decompiled_Args: int a1
    * lual_prepbuffer_TypeDef: int
    * lual_prepbuffer_Aob: 55 8B EC 56 8B 75 08 57 8B 06 8D
    * lual_prepbuffer_ProtectedByRetCheck: false
    * lual_prepbuffer_IsApartOfLua: true
    * lual_prepbuffer_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lual_prepbuffer_typedef)(int a1);
      r_lual_prepbuffer_typedef  r_lual_prepbuffer = (r_lual_prepbuffer_typedef)(x(0x01436080));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lual_prepbuffer_CCV* r_lual_prepbuffer_typedef)(int a1);
      r_lual_prepbuffer_typedef  r_lual_prepbuffer = (r_lual_prepbuffer_typedef)(x(Adresses::lual_prepbuffer_addr));



    */
    DWORD lual_prepbuffer_addr = 0x01436080;
#define lual_prepbuffer_CCV  __cdecl

    /*

    * lual_ref_Decompiled_Args: int a1, int a2
    * lual_ref_TypeDef: int
    * lual_ref_Aob: 55 8B EC 56 8B 75 08 57 8B 7D 0C 8D 87 0F 27 00 00 3D 0F 27 00 00 77 0C 56 E8 82
    * lual_ref_ProtectedByRetCheck: false
    * lual_ref_IsApartOfLua: true
    * lual_ref_Mask: ...........................
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lual_ref_typedef)(int a1, int a2);
      r_lual_ref_typedef  r_lual_ref = (r_lual_ref_typedef)(x(0x01436100));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lual_ref_CCV* r_lual_ref_typedef)(int a1, int a2);
      r_lual_ref_typedef  r_lual_ref = (r_lual_ref_typedef)(x(Adresses::lual_ref_addr));



    */
    DWORD lual_ref_addr = 0x01436100;
#define lual_ref_CCV  __cdecl

    /*

    * lual_register_Decompiled_Args: int a1, int a2, int a3
    * lual_register_TypeDef: int
    * lual_register_Aob: 55 8B EC 83 7D 0C 00 56 8B 75 10
    * lual_register_ProtectedByRetCheck: false
    * lual_register_IsApartOfLua: true
    * lual_register_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lual_register_typedef)(int a1, int a2, int a3);
      r_lual_register_typedef  r_lual_register = (r_lual_register_typedef)(x(0x014361B0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lual_register_CCV* r_lual_register_typedef)(int a1, int a2, int a3);
      r_lual_register_typedef  r_lual_register = (r_lual_register_typedef)(x(Adresses::lual_register_addr));



    */
    DWORD lual_register_addr = 0x014361B0;
#define lual_register_CCV  __cdecl

    /*

    * lual_typeerror_Decompiled_Args: int a1, int a2, int a3
    * lual_typeerror_TypeDef: int
    * lual_typeerror_Aob: Unable to get AOB
    * lual_typeerror_ProtectedByRetCheck: false
    * lual_typeerror_IsApartOfLua: true
    * lual_typeerror_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lual_typeerror_typedef)(int a1, int a2, int a3);
      r_lual_typeerror_typedef  r_lual_typeerror = (r_lual_typeerror_typedef)(x(0x014352D0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lual_typeerror_CCV* r_lual_typeerror_typedef)(int a1, int a2, int a3);
      r_lual_typeerror_typedef  r_lual_typeerror = (r_lual_typeerror_typedef)(x(Adresses::lual_typeerror_addr));



    */
    DWORD lual_typeerror_addr = 0x014352D0;
#define lual_typeerror_CCV  __cdecl

    /*

    * lual_unref_Decompiled_Args: int a1, int a2, int a3
    * lual_unref_TypeDef: int
    * lual_unref_Aob: 55 8B EC 53 8B 5D 10 85 DB 78
    * lual_unref_ProtectedByRetCheck: false
    * lual_unref_IsApartOfLua: true
    * lual_unref_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lual_unref_typedef)(int a1, int a2, int a3);
      r_lual_unref_typedef  r_lual_unref = (r_lual_unref_typedef)(x(0x01436340));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lual_unref_CCV* r_lual_unref_typedef)(int a1, int a2, int a3);
      r_lual_unref_typedef  r_lual_unref = (r_lual_unref_typedef)(x(Adresses::lual_unref_addr));



    */
    DWORD lual_unref_addr = 0x01436340;
#define lual_unref_CCV  __cdecl

    /*

    * lual_where_Decompiled_Args: int a1
    * lual_where_TypeDef: int
    * lual_where_Aob: 55 8B EC 81 EC 24 01 00 00 8D
    * lual_where_ProtectedByRetCheck: false
    * lual_where_IsApartOfLua: true
    * lual_where_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_lual_where_typedef)(int a1);
      r_lual_where_typedef  r_lual_where = (r_lual_where_typedef)(x(0x014363A0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(lual_where_CCV* r_lual_where_typedef)(int a1);
      r_lual_where_typedef  r_lual_where = (r_lual_where_typedef)(x(Adresses::lual_where_addr));



    */
    DWORD lual_where_addr = 0x014363A0;
#define lual_where_CCV  __cdecl

    /*

    * luam_realloc_Decompiled_Args: int a1, int a2, int a3, int a4
    * luam_realloc_TypeDef: int
    * luam_realloc_Aob: 55 8B EC 8B 4D 08 53 56 8B 75 14
    * luam_realloc_ProtectedByRetCheck: false
    * luam_realloc_IsApartOfLua: true
    * luam_realloc_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luam_realloc_typedef)(int a1, int a2, int a3, int a4);
      r_luam_realloc_typedef  r_luam_realloc = (r_luam_realloc_typedef)(x(0x0144BC00));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luam_realloc_CCV* r_luam_realloc_typedef)(int a1, int a2, int a3, int a4);
      r_luam_realloc_typedef  r_luam_realloc = (r_luam_realloc_typedef)(x(Adresses::luam_realloc_addr));



    */
    DWORD luam_realloc_addr = 0x0144BC00;
#define luam_realloc_CCV  __cdecl

    /*

    * luam_realloc__Decompiled_Args: int a1, int a2
    * luam_realloc__TypeDef: int
    * luam_realloc__Aob: 55 8B EC 53 8B 5D 08 56 8B 75 0C 8D
    * luam_realloc__ProtectedByRetCheck: false
    * luam_realloc__IsApartOfLua: true
    * luam_realloc__Mask: ............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luam_realloc__typedef)(int a1, int a2);
      r_luam_realloc__typedef  r_luam_realloc_ = (r_luam_realloc__typedef)(x(0x0144BAC0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luam_realloc__CCV* r_luam_realloc__typedef)(int a1, int a2);
      r_luam_realloc__typedef  r_luam_realloc_ = (r_luam_realloc__typedef)(x(Adresses::luam_realloc__addr));



    */
    DWORD luam_realloc__addr = 0x0144BAC0;
#define luam_realloc__CCV  __cdecl

    /*

    * luam_toobig_Decompiled_Args: Function Has No Args Or Unable To Get Args
    * luam_toobig_TypeDef: Unable To Get typedef
    * luam_toobig_Aob: 55 8B EC 51 C7 45 FC 78
    * luam_toobig_ProtectedByRetCheck: false
    * luam_toobig_IsApartOfLua: true
    * luam_toobig_Mask: ........
    * Usage (Not 100% Accurate):

      typedef void(__cdecl* r_luam_toobig_typedef)();
      r_luam_toobig_typedef  r_luam_toobig = (r_luam_toobig_typedef)(x(0x0144BD10));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef void(luam_toobig_CCV* r_luam_toobig_typedef)();
      r_luam_toobig_typedef  r_luam_toobig = (r_luam_toobig_typedef)(x(Adresses::luam_toobig_addr));



    */
    DWORD luam_toobig_addr = 0x0144BD10;
#define luam_toobig_CCV  __cdecl

    /*

    * luao_chunkid_Decompiled_Args: int a1, int a2, const char* a3
    * luao_chunkid_TypeDef: int
    * luao_chunkid_Aob: 55 8B EC 53 8B 5D 0C 56 57 8A
    * luao_chunkid_ProtectedByRetCheck: false
    * luao_chunkid_IsApartOfLua: true
    * luao_chunkid_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luao_chunkid_typedef)(int a1, int a2, const char* a3);
      r_luao_chunkid_typedef  r_luao_chunkid = (r_luao_chunkid_typedef)(x(0x01436F90));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luao_chunkid_CCV* r_luao_chunkid_typedef)(int a1, int a2, const char* a3);
      r_luao_chunkid_typedef  r_luao_chunkid = (r_luao_chunkid_typedef)(x(Adresses::luao_chunkid_addr));



    */
    DWORD luao_chunkid_addr = 0x01436F90;
#define luao_chunkid_CCV  __cdecl

    /*

    * luao_pushfstring_Decompiled_Args: int a1, int a2
    * luao_pushfstring_TypeDef: int
    * luao_pushfstring_Aob: 55 8B EC 81 EC 00 02 00 00 8D 45
    * luao_pushfstring_ProtectedByRetCheck: false
    * luao_pushfstring_IsApartOfLua: true
    * luao_pushfstring_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luao_pushfstring_typedef)(int a1, int a2);
      r_luao_pushfstring_typedef  r_luao_pushfstring = (r_luao_pushfstring_typedef)(x(0x01437110));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luao_pushfstring_CCV* r_luao_pushfstring_typedef)(int a1, int a2);
      r_luao_pushfstring_typedef  r_luao_pushfstring = (r_luao_pushfstring_typedef)(x(Adresses::luao_pushfstring_addr));



    */
    DWORD luao_pushfstring_addr = 0x01437110;
#define luao_pushfstring_CCV  __cdecl

    /*

    * luao_pushvfstring_Decompiled_Args: int a1
    * luao_pushvfstring_TypeDef: int
    * luao_pushvfstring_Aob: 55 8B EC 81 EC 00 02 00 00 8D 85
    * luao_pushvfstring_ProtectedByRetCheck: false
    * luao_pushvfstring_IsApartOfLua: true
    * luao_pushvfstring_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luao_pushvfstring_typedef)(int a1);
      r_luao_pushvfstring_typedef  r_luao_pushvfstring = (r_luao_pushvfstring_typedef)(x(0x014371B0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luao_pushvfstring_CCV* r_luao_pushvfstring_typedef)(int a1);
      r_luao_pushvfstring_typedef  r_luao_pushvfstring = (r_luao_pushvfstring_typedef)(x(Adresses::luao_pushvfstring_addr));



    */
    DWORD luao_pushvfstring_addr = 0x014371B0;
#define luao_pushvfstring_CCV  __cdecl

    /*

    * luao_rawequalObj_Decompiled_Args: int a1, int a2
    * luao_rawequalObj_TypeDef: int
    * luao_rawequalObj_Aob: 55 8B EC 8B 4D 08 8B 55 0C 8B 41 0C 83
    * luao_rawequalObj_ProtectedByRetCheck: false
    * luao_rawequalObj_IsApartOfLua: true
    * luao_rawequalObj_Mask: .............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luao_rawequalObj_typedef)(int a1, int a2);
      r_luao_rawequalObj_typedef  r_luao_rawequalObj = (r_luao_rawequalObj_typedef)(x(0x01437250));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luao_rawequalObj_CCV* r_luao_rawequalObj_typedef)(int a1, int a2);
      r_luao_rawequalObj_typedef  r_luao_rawequalObj = (r_luao_rawequalObj_typedef)(x(Adresses::luao_rawequalObj_addr));



    */
    DWORD luao_rawequalObj_addr = 0x01437250;
#define luao_rawequalObj_CCV  __cdecl

    /*

    * luao_str2d_Decompiled_Args: int a1, int a2
    * luao_str2d_TypeDef: int
    * luao_str2d_Aob: 55 8B EC 51 56 8B 75 08 8D 45 FC 57
    * luao_str2d_ProtectedByRetCheck: false
    * luao_str2d_IsApartOfLua: true
    * luao_str2d_Mask: ............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luao_str2d_typedef)(int a1, int a2);
      r_luao_str2d_typedef  r_luao_str2d = (r_luao_str2d_typedef)(x(0x01437350));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luao_str2d_CCV* r_luao_str2d_typedef)(int a1, int a2);
      r_luao_str2d_typedef  r_luao_str2d = (r_luao_str2d_typedef)(x(Adresses::luao_str2d_addr));



    */
    DWORD luao_str2d_addr = 0x01437350;
#define luao_str2d_CCV  __cdecl

    /*

    * luas_newlstr_Decompiled_Args: int a1, int a2, int a3
    * luas_newlstr_TypeDef: int
    * luas_newlstr_Aob: 55 8B EC 8B 45 10 8B D0
    * luas_newlstr_ProtectedByRetCheck: false
    * luas_newlstr_IsApartOfLua: true
    * luas_newlstr_Mask: ........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luas_newlstr_typedef)(int a1, int a2, int a3);
      r_luas_newlstr_typedef  r_luas_newlstr = (r_luas_newlstr_typedef)(x(0x01449180));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luas_newlstr_CCV* r_luas_newlstr_typedef)(int a1, int a2, int a3);
      r_luas_newlstr_typedef  r_luas_newlstr = (r_luas_newlstr_typedef)(x(Adresses::luas_newlstr_addr));



    */
    DWORD luas_newlstr_addr = 0x01449180;
#define luas_newlstr_CCV  __cdecl

    /*

    * luas_newudata_Decompiled_Args: int a1, int a2
    * luas_newudata_TypeDef: int
    * luas_newudata_Aob: 55 8B EC 53 8B 5D 0C 57 81
    * luas_newudata_ProtectedByRetCheck: false
    * luas_newudata_IsApartOfLua: true
    * luas_newudata_Mask: .........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luas_newudata_typedef)(int a1, int a2);
      r_luas_newudata_typedef  r_luas_newudata = (r_luas_newudata_typedef)(x(0x01449290));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luas_newudata_CCV* r_luas_newudata_typedef)(int a1, int a2);
      r_luas_newudata_typedef  r_luas_newudata = (r_luas_newudata_typedef)(x(Adresses::luas_newudata_addr));



    */
    DWORD luas_newudata_addr = 0x01449290;
#define luas_newudata_CCV  __cdecl

    /*

    * luas_resize_Decompiled_Args: int a1, int a2
    * luas_resize_TypeDef: int
    * luas_resize_Aob: 55 8B EC 8B 4D 08 83 EC 10 8B 41
    * luas_resize_ProtectedByRetCheck: false
    * luas_resize_IsApartOfLua: true
    * luas_resize_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luas_resize_typedef)(int a1, int a2);
      r_luas_resize_typedef  r_luas_resize = (r_luas_resize_typedef)(x(0x014492E0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luas_resize_CCV* r_luas_resize_typedef)(int a1, int a2);
      r_luas_resize_typedef  r_luas_resize = (r_luas_resize_typedef)(x(Adresses::luas_resize_addr));



    */
    DWORD luas_resize_addr = 0x014492E0;
#define luas_resize_CCV  __cdecl

    /*

    * luat_gettmbyobj_Decompiled_Args: int a1, int a2
    * luat_gettmbyobj_TypeDef: int
    * luat_gettmbyobj_Aob: 55 8B EC 56 FF 75 10 8B 75 08 56 E8 80
    * luat_gettmbyobj_ProtectedByRetCheck: false
    * luat_gettmbyobj_IsApartOfLua: true
    * luat_gettmbyobj_Mask: .............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luat_gettmbyobj_typedef)(int a1, int a2);
      r_luat_gettmbyobj_typedef  r_luat_gettmbyobj = (r_luat_gettmbyobj_typedef)(x(0x0144B780));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luat_gettmbyobj_CCV* r_luat_gettmbyobj_typedef)(int a1, int a2);
      r_luat_gettmbyobj_typedef  r_luat_gettmbyobj = (r_luat_gettmbyobj_typedef)(x(Adresses::luat_gettmbyobj_addr));



    */
    DWORD luat_gettmbyobj_addr = 0x0144B780;
#define luat_gettmbyobj_CCV  __cdecl

    /*

    * luat_typenames_Decompiled_Args: Given Adress Is Not A Function
    * luat_typenames_TypeDef: Given Adress Is Not A Function
    * luat_typenames_Aob: 0C EE C5 01 74
    * luat_typenames_ProtectedByRetCheck: false
    * luat_typenames_IsApartOfLua: false
    * luat_typenames_Mask: .....
    * Usage (Not 100% Accurate):

    Given Addy Is Not A Function.

    */
    DWORD luat_typenames_addr = 0x02033508;
#define luat_typenames_CCV  __stdcall

    /*

    * luau_deserialize_Decompiled_Args: int a1, int a2, const char* a3, int a4
    * luau_deserialize_TypeDef: int
    * luau_deserialize_Aob: 55 8B EC 6A FF 68 40 0B 9B
    * luau_deserialize_ProtectedByRetCheck: false
    * luau_deserialize_IsApartOfLua: true
    * luau_deserialize_Mask: .........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luau_deserialize_typedef)(int a1, int a2, const char* a3, int a4);
      r_luau_deserialize_typedef  r_luau_deserialize = (r_luau_deserialize_typedef)(x(0x0143EDD0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luau_deserialize_CCV* r_luau_deserialize_typedef)(int a1, int a2, const char* a3, int a4);
      r_luau_deserialize_typedef  r_luau_deserialize = (r_luau_deserialize_typedef)(x(Adresses::luau_deserialize_addr));



    */
    DWORD luau_deserialize_addr = 0x0143EDD0;
#define luau_deserialize_CCV  __cdecl

    /*

    * luau_execute_Decompiled_Args: int a1, int a2, int a3, int a4, int a5
    * luau_execute_TypeDef: int
    * luau_execute_Aob: 55 8B EC 51 80 3D 24 1E 5C 02 00 74 22 C7 45 FC 88
    * luau_execute_ProtectedByRetCheck: false
    * luau_execute_IsApartOfLua: true
    * luau_execute_Mask: .................
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luau_execute_typedef)(int a1, int a2, int a3, int a4, int a5);
      r_luau_execute_typedef  r_luau_execute = (r_luau_execute_typedef)(x(0x01460F90));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luau_execute_CCV* r_luau_execute_typedef)(int a1, int a2, int a3, int a4, int a5);
      r_luau_execute_typedef  r_luau_execute = (r_luau_execute_typedef)(x(Adresses::luau_execute_addr));



    */
    DWORD luau_execute_addr = 0x01460F90;
#define luau_execute_CCV  __cdecl

    /*

    * luav_concat_Decompiled_Args: int a1, const char* a2, const char* a3
    * luav_concat_TypeDef: int
    * luav_concat_Aob: 55 8B EC 8B 55 08 83 EC 78
    * luav_concat_ProtectedByRetCheck: false
    * luav_concat_IsApartOfLua: true
    * luav_concat_Mask: .........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luav_concat_typedef)(int a1, const char* a2, const char* a3);
      r_luav_concat_typedef  r_luav_concat = (r_luav_concat_typedef)(x(0x0144AB60));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luav_concat_CCV* r_luav_concat_typedef)(int a1, const char* a2, const char* a3);
      r_luav_concat_typedef  r_luav_concat = (r_luav_concat_typedef)(x(Adresses::luav_concat_addr));



    */
    DWORD luav_concat_addr = 0x0144AB60;
#define luav_concat_CCV  __cdecl

    /*

    * luav_execute_Decompiled_Args: int a1, int a2
    * luav_execute_TypeDef: bool
    * luav_execute_Aob: 55 8B EC 83 E4 F0 81 EC B8 00 00 00 56 8B 75 08 57 8B 46 18 8B 56
    * luav_execute_ProtectedByRetCheck: false
    * luav_execute_IsApartOfLua: true
    * luav_execute_Mask: ......................
    * Usage (Not 100% Accurate):

      typedef bool(__cdecl* r_luav_execute_typedef)(int a1, int a2);
      r_luav_execute_typedef  r_luav_execute = (r_luav_execute_typedef)(x(0x01437440));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef bool(luav_execute_CCV* r_luav_execute_typedef)(int a1, int a2);
      r_luav_execute_typedef  r_luav_execute = (r_luav_execute_typedef)(x(Adresses::luav_execute_addr));



    */
    DWORD luav_execute_addr = 0x01437440;
#define luav_execute_CCV  __cdecl

    /*

    * luav_gettable_Decompiled_Args: int a1, int a2, int a3, int a4, int a5
    * luav_gettable_TypeDef: int
    * luav_gettable_Aob: 55 8B EC 51 53 56 8B 75 0C 33 DB 57 8B 7D 08 89
    * luav_gettable_ProtectedByRetCheck: false
    * luav_gettable_IsApartOfLua: true
    * luav_gettable_Mask: ................
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luav_gettable_typedef)(int a1, int a2, int a3, int a4, int a5);
      r_luav_gettable_typedef  r_luav_gettable = (r_luav_gettable_typedef)(x(0x0144B2D0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luav_gettable_CCV* r_luav_gettable_typedef)(int a1, int a2, int a3, int a4, int a5);
      r_luav_gettable_typedef  r_luav_gettable = (r_luav_gettable_typedef)(x(Adresses::luav_gettable_addr));



    */
    DWORD luav_gettable_addr = 0x0144B2D0;
#define luav_gettable_CCV  __cdecl

    /*

    * luav_gettable_opt_Decompiled_Args: Function Has No Args Or Unable To Get Args
    * luav_gettable_opt_TypeDef: Unable To Get typedef
    * luav_gettable_opt_Aob: 55 8B EC 6A 01 FF 75 14 FF 75 10 FF 75 0C FF 75 08 E8 0A 00
    * luav_gettable_opt_ProtectedByRetCheck: false
    * luav_gettable_opt_IsApartOfLua: true
    * luav_gettable_opt_Mask: ....................
    * Usage (Not 100% Accurate):

      typedef void(__cdecl* r_luav_gettable_opt_typedef)();
      r_luav_gettable_opt_typedef  r_luav_gettable_opt = (r_luav_gettable_opt_typedef)(x(0x0144B2B0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef void(luav_gettable_opt_CCV* r_luav_gettable_opt_typedef)();
      r_luav_gettable_opt_typedef  r_luav_gettable_opt = (r_luav_gettable_opt_typedef)(x(Adresses::luav_gettable_opt_addr));



    */
    DWORD luav_gettable_opt_addr = 0x0144B2B0;
#define luav_gettable_opt_CCV  __cdecl

    /*

    * luav_lessthan_Decompiled_Args: int a1, int a2, int a3
    * luav_lessthan_TypeDef: int
    * luav_lessthan_Aob: 55 8B EC 8B 4D 08 56 8B 75 0C 57 8B 7D 10 8B 46 0C 3B 47 0C 75 5B
    * luav_lessthan_ProtectedByRetCheck: false
    * luav_lessthan_IsApartOfLua: true
    * luav_lessthan_Mask: ......................
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luav_lessthan_typedef)(int a1, int a2, int a3);
      r_luav_lessthan_typedef  r_luav_lessthan = (r_luav_lessthan_typedef)(x(0x0144B480));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luav_lessthan_CCV* r_luav_lessthan_typedef)(int a1, int a2, int a3);
      r_luav_lessthan_typedef  r_luav_lessthan = (r_luav_lessthan_typedef)(x(Adresses::luav_lessthan_addr));



    */
    DWORD luav_lessthan_addr = 0x0144B480;
#define luav_lessthan_CCV  __cdecl

    /*

    * luav_settable_Decompiled_Args: int a1, int a2, int a3, int a4
    * luav_settable_TypeDef: int
    * luav_settable_Aob: 55 8B EC 83 EC 18 53 8B 5D 0C 56 8B 75 08 57 33
    * luav_settable_ProtectedByRetCheck: false
    * luav_settable_IsApartOfLua: true
    * luav_settable_Mask: ................
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luav_settable_typedef)(int a1, int a2, int a3, int a4);
      r_luav_settable_typedef  r_luav_settable = (r_luav_settable_typedef)(x(0x0144B520));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luav_settable_CCV* r_luav_settable_typedef)(int a1, int a2, int a3, int a4);
      r_luav_settable_typedef  r_luav_settable = (r_luav_settable_typedef)(x(Adresses::luav_settable_addr));



    */
    DWORD luav_settable_addr = 0x0144B520;
#define luav_settable_CCV  __cdecl

    /*

    * luav_tonumber_Decompiled_Args: int a1, int a2
    * luav_tonumber_TypeDef: int
    * luav_tonumber_Aob: 55 8B EC 8B 45 08 83 EC 08 8B 48 0C
    * luav_tonumber_ProtectedByRetCheck: false
    * luav_tonumber_IsApartOfLua: true
    * luav_tonumber_Mask: ............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luav_tonumber_typedef)(int a1, int a2);
      r_luav_tonumber_typedef  r_luav_tonumber = (r_luav_tonumber_typedef)(x(0x0144B6B0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luav_tonumber_CCV* r_luav_tonumber_typedef)(int a1, int a2);
      r_luav_tonumber_typedef  r_luav_tonumber = (r_luav_tonumber_typedef)(x(Adresses::luav_tonumber_addr));



    */
    DWORD luav_tonumber_addr = 0x0144B6B0;
#define luav_tonumber_CCV  __cdecl

    /*

    * luav_tostring_Decompiled_Args: const char* a1
    * luav_tostring_TypeDef: int
    * luav_tostring_Aob: 55 8B EC 83 EC 20 56 8B 75 0C 83
    * luav_tostring_ProtectedByRetCheck: false
    * luav_tostring_IsApartOfLua: true
    * luav_tostring_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_luav_tostring_typedef)(const char* a1);
      r_luav_tostring_typedef  r_luav_tostring = (r_luav_tostring_typedef)(x(0x0144B710));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(luav_tostring_CCV* r_luav_tostring_typedef)(const char* a1);
      r_luav_tostring_typedef  r_luav_tostring = (r_luav_tostring_typedef)(x(Adresses::luav_tostring_addr));



    */
    DWORD luav_tostring_addr = 0x0144B710;
#define luav_tostring_CCV  __cdecl

    /*

    * luax_init_Decompiled_Args: const char* a1
    * luax_init_TypeDef: bool
    * luax_init_Aob: 55 8B EC 53 56 57 8B 7D 08 BE E0
    * luax_init_ProtectedByRetCheck: false
    * luax_init_IsApartOfLua: true
    * luax_init_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef bool(__cdecl* r_luax_init_typedef)(const char* a1);
      r_luax_init_typedef  r_luax_init = (r_luax_init_typedef)(x(0x0144B820));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef bool(luax_init_CCV* r_luax_init_typedef)(const char* a1);
      r_luax_init_typedef  r_luax_init = (r_luax_init_typedef)(x(Adresses::luax_init_addr));



    */
    DWORD luax_init_addr = 0x0144B820;
#define luax_init_CCV  __cdecl

    /*

    * mainposition_Decompiled_Args: int a1, int a2
    * mainposition_TypeDef: int
    * mainposition_Aob: 55 8B EC 83 EC 0C 56 57 8B 7D 0C 8B 47
    * mainposition_ProtectedByRetCheck: false
    * mainposition_IsApartOfLua: true
    * mainposition_Mask: .............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_mainposition_typedef)(int a1, int a2);
      r_mainposition_typedef  r_mainposition = (r_mainposition_typedef)(x(0x01449EF0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(mainposition_CCV* r_mainposition_typedef)(int a1, int a2);
      r_mainposition_typedef  r_mainposition = (r_mainposition_typedef)(x(Adresses::mainposition_addr));



    */
    DWORD mainposition_addr = 0x01449EF0;
#define mainposition_CCV  __cdecl

    /*

    * markmt_Decompiled_Args: int a1
    * markmt_TypeDef: int
    * markmt_Aob: 55 8B EC 53 56 57 8B 7D 08 BB 0A
    * markmt_ProtectedByRetCheck: false
    * markmt_IsApartOfLua: true
    * markmt_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_markmt_typedef)(int a1);
      r_markmt_typedef  r_markmt = (r_markmt_typedef)(x(0x01448440));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(markmt_CCV* r_markmt_typedef)(int a1);
      r_markmt_typedef  r_markmt = (r_markmt_typedef)(x(Adresses::markmt_addr));



    */
    DWORD markmt_addr = 0x01448440;
#define markmt_CCV  __cdecl

    /*

    * markroot_Decompiled_Args: int a1
    * markroot_TypeDef: int
    * markroot_Aob: 55 8B EC 56 57 8B 7D 08 8B 77 08 8D
    * markroot_ProtectedByRetCheck: false
    * markroot_IsApartOfLua: true
    * markroot_Mask: ............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_markroot_typedef)(int a1);
      r_markroot_typedef  r_markroot = (r_markroot_typedef)(x(0x01448520));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(markroot_CCV* r_markroot_typedef)(int a1);
      r_markroot_typedef  r_markroot = (r_markroot_typedef)(x(Adresses::markroot_addr));



    */
    DWORD markroot_addr = 0x01448520;
#define markroot_CCV  __cdecl

    /*

    * newkey_Decompiled_Args: int a1, int a2, int a3
    * newkey_TypeDef: int
    * newkey_Aob: 55 8B EC 83 EC 10 53 8B 5D 0C 56 57 8B 7D 10
    * newkey_ProtectedByRetCheck: false
    * newkey_IsApartOfLua: true
    * newkey_Mask: ...............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_newkey_typedef)(int a1, int a2, int a3);
      r_newkey_typedef  r_newkey = (r_newkey_typedef)(x(0x0144A030));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(newkey_CCV* r_newkey_typedef)(int a1, int a2, int a3);
      r_newkey_typedef  r_newkey = (r_newkey_typedef)(x(Adresses::newkey_addr));



    */
    DWORD newkey_addr = 0x0144A030;
#define newkey_CCV  __cdecl

    /*

    * print_Decompiled_Args: int a1
    * print_TypeDef: int
    * print_Aob: 55 8B EC 6A FF 68 98 28 8C 01 64 A1 00 00 00 00 50 64 89 25 00 00 00 00 83 EC 18 8D 45 10
    * print_ProtectedByRetCheck: false
    * print_IsApartOfLua: false
    * print_Mask: ..............................
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_print_typedef)(int a1);
      r_print_typedef  r_print = (r_print_typedef)(x(0x0065D8E0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(print_CCV* r_print_typedef)(int a1);
      r_print_typedef  r_print = (r_print_typedef)(x(Adresses::print_addr));



    */
    DWORD print_addr = 0x0065D8E0;
#define print_CCV  __cdecl

    /*

    * reallymarkobject_Decompiled_Args: int a1, int a2
    * reallymarkobject_TypeDef: int
    * reallymarkobject_Aob: 55 8B EC 56 8B 75 0C 0F B6
    * reallymarkobject_ProtectedByRetCheck: false
    * reallymarkobject_IsApartOfLua: true
    * reallymarkobject_Mask: .........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_reallymarkobject_typedef)(int a1, int a2);
      r_reallymarkobject_typedef  r_reallymarkobject = (r_reallymarkobject_typedef)(x(0x01448A80));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(reallymarkobject_CCV* r_reallymarkobject_typedef)(int a1, int a2);
      r_reallymarkobject_typedef  r_reallymarkobject = (r_reallymarkobject_typedef)(x(Adresses::reallymarkobject_addr));



    */
    DWORD reallymarkobject_addr = 0x01448A80;
#define reallymarkobject_CCV  __cdecl

    /*

    * rehash_Decompiled_Args: Function Has No Args Or Unable To Get Args
    * rehash_TypeDef: Unable To Get typedef
    * rehash_Aob: Unable to get AOB
    * rehash_ProtectedByRetCheck: false
    * rehash_IsApartOfLua: true
    * rehash_Mask: .......
    * Usage (Not 100% Accurate):

      typedef void(__cdecl* r_rehash_typedef)();
      r_rehash_typedef  r_rehash = (r_rehash_typedef)(x(0x0144A1E0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef void(rehash_CCV* r_rehash_typedef)();
      r_rehash_typedef  r_rehash = (r_rehash_typedef)(x(Adresses::rehash_addr));



    */
    DWORD rehash_addr = 0x0144A1E0;
#define rehash_CCV  __cdecl

    /*

    * resize_Decompiled_Args: int a1, int a2, int a3, int a4
    * resize_TypeDef: int
    * resize_Aob: 55 8B EC 83 EC 2C 56 8B 75 08 57 8B 7D 0C 8B 57
    * resize_ProtectedByRetCheck: false
    * resize_IsApartOfLua: true
    * resize_Mask: ................
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_resize_typedef)(int a1, int a2, int a3, int a4);
      r_resize_typedef  r_resize = (r_resize_typedef)(x(0x0144A450));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(resize_CCV* r_resize_typedef)(int a1, int a2, int a3, int a4);
      r_resize_typedef  r_resize = (r_resize_typedef)(x(Adresses::resize_addr));



    */
    DWORD resize_addr = 0x0144A450;
#define resize_CCV  __cdecl

    /*

    * resume_Decompiled_Args: int a1, int a2
    * resume_TypeDef: int
    * resume_Aob: 55 8B EC 56 8B 75 08 80 7E 06 00 75 29
    * resume_ProtectedByRetCheck: false
    * resume_IsApartOfLua: true
    * resume_Mask: .............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_resume_typedef)(int a1, int a2);
      r_resume_typedef  r_resume = (r_resume_typedef)(x(0x01436CC0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(resume_CCV* r_resume_typedef)(int a1, int a2);
      r_resume_typedef  r_resume = (r_resume_typedef)(x(Adresses::resume_addr));



    */
    DWORD resume_addr = 0x01436CC0;
#define resume_CCV  __cdecl

    /*

    * reportError_Decompiled_Args: int a1, int a2, int a3
    * reportError_TypeDef: int
    * reportError_Aob: 55 8B EC 6A FF 68 78 C4 8E
    * reportError_ProtectedByRetCheck: false
    * reportError_IsApartOfLua: false
    * reportError_Mask: .........
    * Usage (Not 100% Accurate):

      typedef int(__stdcall* r_reportError_typedef)(int a1, int a2, int a3);
      r_reportError_typedef  r_reportError = (r_reportError_typedef)(x(0x007992E0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(reportError_CCV* r_reportError_typedef)(int a1, int a2, int a3);
      r_reportError_typedef  r_reportError = (r_reportError_typedef)(x(Adresses::reportError_addr));



    */
    DWORD reportError_addr = 0x007992E0;
#define reportError_CCV  __stdcall

    /*

    * resume_error_Decompiled_Args: int a1, const char* a2
    * resume_error_TypeDef: int
    * resume_error_Aob: 55 8B EC 8B 55 0C 8B CA 53
    * resume_error_ProtectedByRetCheck: true
    * resume_error_IsApartOfLua: true
    * resume_error_Mask: .........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_resume_error_typedef)(int a1, const char* a2);
      r_resume_error_typedef  r_resume_error = (r_resume_error_typedef)unprotect(x(0x01436DA0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(resume_error_CCV* r_resume_error_typedef)(int a1, const char* a2);
      r_resume_error_typedef  r_resume_error = (r_resume_error_typedef)unprotect(x(Adresses::resume_error_addr));



    */
    DWORD resume_error_addr = 0x01436DA0;
#define resume_error_CCV  __cdecl

    /*

    * retcheck_Decompiled_Args: No Args Found
    * retcheck_TypeDef: int
    * retcheck_Aob: 55 8B EC 64 A1 00 00 00 00 6A FF 68 78 A9 8C 01 50 64 89 25 00 00 00 00 83 EC 0C 53
    * retcheck_ProtectedByRetCheck: false
    * retcheck_IsApartOfLua: false
    * retcheck_Mask: ............................
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_retcheck_typedef)(No Args Found);
      r_retcheck_typedef  r_retcheck = (r_retcheck_typedef)(x(0x006C0F00));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(retcheck_CCV* r_retcheck_typedef)(No Args Found);
      r_retcheck_typedef  r_retcheck = (r_retcheck_typedef)(x(Adresses::retcheck_addr));



    */
    DWORD retcheck_addr = 0x006C0F00;
#define retcheck_CCV  __cdecl

    /*

    * sandboxthread_Decompiled_Args: int a1, int a2, int a3
    * sandboxthread_TypeDef: int
    * sandboxthread_Aob: 55 8B EC 80 3D 14 BA
    * sandboxthread_ProtectedByRetCheck: false
    * sandboxthread_IsApartOfLua: false
    * sandboxthread_Mask: .......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_sandboxthread_typedef)(int a1, int a2, int a3);
      r_sandboxthread_typedef  r_sandboxthread = (r_sandboxthread_typedef)(x(0x0079C160));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(sandboxthread_CCV* r_sandboxthread_typedef)(int a1, int a2, int a3);
      r_sandboxthread_typedef  r_sandboxthread = (r_sandboxthread_typedef)(x(Adresses::sandboxthread_addr));



    */
    DWORD sandboxthread_addr = 0x0079C160;
#define sandboxthread_CCV  __cdecl

    /*

    * setarrayvector_Decompiled_Args: int a1, int a2
    * setarrayvector_TypeDef: int
    * setarrayvector_Aob: 55 8B EC 53 8B 5D 10 56 57 81
    * setarrayvector_ProtectedByRetCheck: false
    * setarrayvector_IsApartOfLua: true
    * setarrayvector_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_setarrayvector_typedef)(int a1, int a2);
      r_setarrayvector_typedef  r_setarrayvector = (r_setarrayvector_typedef)(x(0x0144A630));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(setarrayvector_CCV* r_setarrayvector_typedef)(int a1, int a2);
      r_setarrayvector_typedef  r_setarrayvector = (r_setarrayvector_typedef)(x(Adresses::setarrayvector_addr));



    */
    DWORD setarrayvector_addr = 0x0144A630;
#define setarrayvector_CCV  __cdecl

    /*

    * setnodevector_Decompiled_Args: int a1, int a2
    * setnodevector_TypeDef: bool
    * setnodevector_Aob: 55 8B EC 53 56 8B 75 10 57 85
    * setnodevector_ProtectedByRetCheck: false
    * setnodevector_IsApartOfLua: true
    * setnodevector_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef bool(__cdecl* r_setnodevector_typedef)(int a1, int a2);
      r_setnodevector_typedef  r_setnodevector = (r_setnodevector_typedef)(x(0x0144A6B0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef bool(setnodevector_CCV* r_setnodevector_typedef)(int a1, int a2);
      r_setnodevector_typedef  r_setnodevector = (r_setnodevector_typedef)(x(Adresses::setnodevector_addr));



    */
    DWORD setnodevector_addr = 0x0144A6B0;
#define setnodevector_CCV  __cdecl

    /*

    * singlestep_Decompiled_Args: int a1
    * singlestep_TypeDef: int
    * singlestep_Aob: 55 8B EC 53 8B 5D 08 56 8D 73 08
    * singlestep_ProtectedByRetCheck: false
    * singlestep_IsApartOfLua: true
    * singlestep_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_singlestep_typedef)(int a1);
      r_singlestep_typedef  r_singlestep = (r_singlestep_typedef)(x(0x01448B60));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(singlestep_CCV* r_singlestep_typedef)(int a1);
      r_singlestep_typedef  r_singlestep = (r_singlestep_typedef)(x(Adresses::singlestep_addr));



    */
    DWORD singlestep_addr = 0x01448B60;
#define singlestep_CCV  __cdecl

    /*

    * spawn_Decompiled_Args: int a1
    * spawn_TypeDef: int
    * spawn_Aob: 55 8B EC 6A FF 68 0F C8
    * spawn_ProtectedByRetCheck: false
    * spawn_IsApartOfLua: false
    * spawn_Mask: ........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_spawn_typedef)(int a1);
      r_spawn_typedef  r_spawn = (r_spawn_typedef)(x(0x0079C4F0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(spawn_CCV* r_spawn_typedef)(int a1);
      r_spawn_typedef  r_spawn = (r_spawn_typedef)(x(Adresses::spawn_addr));



    */
    DWORD spawn_addr = 0x0079C4F0;
#define spawn_CCV  __cdecl

    /*

    * stack_init_Decompiled_Args: int a1
    * stack_init_TypeDef: int
    * stack_init_Aob: 55 8B EC 57 68 C0
    * stack_init_ProtectedByRetCheck: false
    * stack_init_IsApartOfLua: true
    * stack_init_Mask: ......
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_stack_init_typedef)(int a1);
      r_stack_init_typedef  r_stack_init = (r_stack_init_typedef)(x(0x01440250));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(stack_init_CCV* r_stack_init_typedef)(int a1);
      r_stack_init_typedef  r_stack_init = (r_stack_init_typedef)(x(Adresses::stack_init_addr));



    */
    DWORD stack_init_addr = 0x01440250;
#define stack_init_CCV  __cdecl

    /*

    * str_find_aux_Decompiled_Args: int a1, const char* a2
    * str_find_aux_TypeDef: int
    * str_find_aux_Aob: 55 8B EC 81 EC 34 01 00 00 53 8B
    * str_find_aux_ProtectedByRetCheck: false
    * str_find_aux_IsApartOfLua: true
    * str_find_aux_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_str_find_aux_typedef)(int a1, const char* a2);
      r_str_find_aux_typedef  r_str_find_aux = (r_str_find_aux_typedef)(x(0x01445F80));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(str_find_aux_CCV* r_str_find_aux_typedef)(int a1, const char* a2);
      r_str_find_aux_typedef  r_str_find_aux = (r_str_find_aux_typedef)(x(Adresses::str_find_aux_addr));



    */
    DWORD str_find_aux_addr = 0x01445F80;
#define str_find_aux_CCV  __cdecl

    /*

    * tag_error_Decompiled_Args: Function Has No Args Or Unable To Get Args
    * tag_error_TypeDef: Unable To Get typedef
    * tag_error_Aob: 55 8B EC FF 75 10 FF 75 08 E8 12
    * tag_error_ProtectedByRetCheck: false
    * tag_error_IsApartOfLua: true
    * tag_error_Mask: ...........
    * Usage (Not 100% Accurate):

      typedef void(__cdecl* r_tag_error_typedef)();
      r_tag_error_typedef  r_tag_error = (r_tag_error_typedef)(x(0x01436420));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef void(tag_error_CCV* r_tag_error_typedef)();
      r_tag_error_typedef  r_tag_error = (r_tag_error_typedef)(x(Adresses::tag_error_addr));



    */
    DWORD tag_error_addr = 0x01436420;
#define tag_error_CCV  __cdecl

    /*

    * trustCheck_Decompiled_Args: const char* a1, const char* a2
    * trustCheck_TypeDef: bool
    * trustCheck_Aob: 55 8B EC 64 A1 00 00 00 00 6A FF 68 6B E4 8C 01 50 64 89 25 00 00 00 00 81
    * trustCheck_ProtectedByRetCheck: false
    * trustCheck_IsApartOfLua: false
    * trustCheck_Mask: .........................
    * Usage (Not 100% Accurate):

      typedef bool(__cdecl* r_trustCheck_typedef)(const char* a1, const char* a2);
      r_trustCheck_typedef  r_trustCheck = (r_trustCheck_typedef)(x(0x00638D30));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef bool(trustCheck_CCV* r_trustCheck_typedef)(const char* a1, const char* a2);
      r_trustCheck_typedef  r_trustCheck = (r_trustCheck_typedef)(x(Adresses::trustCheck_addr));



    */
    DWORD trustCheck_addr = 0x00638D30;
#define trustCheck_CCV  __cdecl

    /*

    * trustcheck_bypass1_Decompiled_Args: Given Adress Is Not A Function
    * trustcheck_bypass1_TypeDef: Given Adress Is Not A Function
    * trustcheck_bypass1_Aob: Unable to get AOB
    * trustcheck_bypass1_ProtectedByRetCheck: false
    * trustcheck_bypass1_IsApartOfLua: false
    * trustcheck_bypass1_Mask: .......
    * Usage (Not 100% Accurate):

    Given Addy Is Not A Function.

    */
    DWORD trustcheck_bypass1_addr = 0x02409098;
#define trustcheck_bypass1_CCV  __cdecl

    /*

    * tryfunctm_Decompiled_Args: int a1, int a2
    * tryfunctm_TypeDef: int
    * tryfunctm_Aob: 55 8B EC 53 56 8B 75 08 57 8B 7D 0C 6A 0F
    * tryfunctm_ProtectedByRetCheck: false
    * tryfunctm_IsApartOfLua: true
    * tryfunctm_Mask: ..............
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_tryfunctm_typedef)(int a1, int a2);
      r_tryfunctm_typedef  r_tryfunctm = (r_tryfunctm_typedef)(x(0x0143FCA0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(tryfunctm_CCV* r_tryfunctm_typedef)(int a1, int a2);
      r_tryfunctm_typedef  r_tryfunctm = (r_tryfunctm_typedef)(x(Adresses::tryfunctm_addr));



    */
    DWORD tryfunctm_addr = 0x0143FCA0;
#define tryfunctm_CCV  __cdecl

    /*

    * unbound_search_Decompiled_Args: int a1, int a2
    * unbound_search_TypeDef: int
    * unbound_search_Aob: 55 8B EC 83 EC 08 8B 4D 08 0F
    * unbound_search_ProtectedByRetCheck: false
    * unbound_search_IsApartOfLua: true
    * unbound_search_Mask: ..........
    * Usage (Not 100% Accurate):

      typedef int(__cdecl* r_unbound_search_typedef)(int a1, int a2);
      r_unbound_search_typedef  r_unbound_search = (r_unbound_search_typedef)(x(0x0144A780));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef int(unbound_search_CCV* r_unbound_search_typedef)(int a1, int a2);
      r_unbound_search_typedef  r_unbound_search = (r_unbound_search_typedef)(x(Adresses::unbound_search_addr));



    */
    DWORD unbound_search_addr = 0x0144A780;
#define unbound_search_CCV  __cdecl

    /*

    * vm_invoker_Decompiled_Args: Function Has No Args Or Unable To Get Args
    * vm_invoker_TypeDef: Unable To Get typedef
    * vm_invoker_Aob: 55 8B EC 8B 45 08 80 78 07
    * vm_invoker_ProtectedByRetCheck: false
    * vm_invoker_IsApartOfLua: true
    * vm_invoker_Mask: .........
    * Usage (Not 100% Accurate):

      typedef void(__cdecl* r_vm_invoker_typedef)();
      r_vm_invoker_typedef  r_vm_invoker = (r_vm_invoker_typedef)(x(0x0143EDB0));

    * (Compatable Format) Usage (Not 100% Accurate):

      typedef void(vm_invoker_CCV* r_vm_invoker_typedef)();
      r_vm_invoker_typedef  r_vm_invoker = (r_vm_invoker_typedef)(x(Adresses::vm_invoker_addr));



    */
    DWORD vm_invoker_addr = 0x0143EDB0;
#define vm_invoker_CCV  __cdecl

    DWORD retcheckflag1 = 0x027F3000;

    DWORD retcheckflag2 = 0x027F3004;

    DWORD xorconst = 0x02791DA0;

    DWORD luao_nilobject = 0x02032180;

    DWORD scriptcontext = 0x01E58300;

    DWORD getnamecallmethod_offset = 0x60;
    DWORD networked_dm = 0x490;
    int ls_readonly = 7;
    int ls_base_ci = 32;
    int ls_ci = 24;
    int ls_gs_rootgc = 36;
    int ls_saved_pc = 16;
    int ls_gs_totalbytes = 80;
    int ls_closure_isc = 6;
    DWORD RBX_LuaState(DWORD ScriptContext) { return (ScriptContext + 180) ^ *(DWORD*)(ScriptContext + 180); }
    DWORD RBX_GlobalState(DWORD LS) { return *(DWORD*)(LS + 8) - (LS + 8); }

    int Identity1 = 24;
    int Identity2 = 104;
    int top = 12;
    int base = 16;
}
/*
* (some tuts i got my dumper too create everything is still in beta so take all of the tut's with a grain of salt)

* addinfo - Go to currentline addy in ida and go to the 1 xref (should have 2 args) and get it's parent function

* adjuststack - Go to lua_objlen addy in ida and go to the 9 xref (should have 1 args) and get it's parent function

* arith - Go to call_bintm addy in ida and go to the 1 xref (should have 4 args) and get it's parent function

* aux_upvalue - Go to lua_getupvalue addy in ida and find it's 2 function call

* auxgetinfo - Go to luao_chunkid addy in ida and go to the 9 xref (should have 6 args) and get it's parent function

* auxresume - Go to lua_pushfstring addy in ida and go to the 4 xref (should have 6 args) and get it's parent function

* call_bintm - Go to luat_gettmbyobj addy in ida and go to the 21 xref (should have 8 args) and get it's parent function

* call_ordertm - Go to luav_lessthan addy in ida and find it's 1 function call

* callcheck Addy Is Not A Function

* calltmres - Go to collectvalidlines addy in ida and go to the 19 xref (should have 5 args) and get it's parent function

* close_state - Go to luaf_close addy in ida and go to the 5 xref (should have 2 args) and get it's parent function

* collectvalidlines - Go to lua_checkstack addy in ida and find it's 1 function call

* currentline - Go to addinfo addy in ida and find it's 1 function call

* deobfuscate_closure - Go to luah_getstr addy in ida and go to the 6 xref (should have 3 args) and get it's parent function

* f_call - Go to luad_call addy in ida and go to the 1 xref (should have 1 args) and get it's parent function

* f_luaopen - Go to stack_init addy in ida and go to the 1 xref (should have 1 args) and get it's parent function

* Could Not Generate Tut For findfirstchild

* Could Not Generate Tut For findfirstchildofclass

* findlocal - Go to lua_getlocal addy in ida and find it's 1 function call

* Could Not Generate Tut For fireclickdetector

* Could Not Generate Tut For flog_getvalue

* Could Not Generate Tut For flog_setvalue

* Could Not Generate Tut For getdatamodel

* Could Not Generate Tut For getdatamodel2

* Could Not Generate Tut For getjobsbyname

* getfunc - Go to lual_optinteger addy in ida and go to the 6 xref (should have 3 args) and get it's parent function

* Could Not Generate Tut For getnamecallmethod

* growci - Go to luad_reallocci addy in ida and go to the 1 xref (should have 1 args) and get it's parent function

* hashnum - Go to mainposition addy in ida and find it's 1 function call

* index2adr - Go to lua_rawvalue addy in ida and find it's 1 function call

* match - Go to match addy in ida and go to the 7 xref (should have 15 args) and get it's parent function

* newlstr - Go to luam_realloc_ addy in ida and go to the 18 xref (should have 5 args) and get it's parent function

* push_captures - Go to lual_checkstack addy in ida and go to the 4 xref (should have 5 args) and get it's parent function

* luaa_pushobject - Go to lua_getlocal addy in ida and find it's 2 function call

* lua_rawvalue - Go to index2adr addy in ida and go to the 1 xref (should have 2 args) and get it's parent function

* lua_call - Go to luad_call addy in ida and go to the 2 xref (should have 3 args) and get it's parent function

* lua_checkstack - Go to collectvalidlines addy in ida and go to the 1 xref (should have 2 args) and get it's parent function

* lua_concat - Go to luac_step addy in ida and go to the 1 xref (should have 3 args) and get it's parent function

* lua_createtable - Go to luac_step addy in ida and go to the 2 xref (should have 1 args) and get it's parent function

* lua_freeobj - Go to luaf_freeproto addy in ida and go to the 2 xref (should have 2 args) and get it's parent function

* lua_gc - Go to luac_fullgc addy in ida and go to the 1 xref (should have 3 args) and get it's parent function

* lua_getfenv - Go to index2adr addy in ida and go to the 2 xref (should have 2 args) and get it's parent function

* lua_getfield - Go to index2adr addy in ida and go to the 3 xref (should have 1 args) and get it's parent function

* lua_getinfo - Go to auxgetinfo addy in ida and go to the 1 xref (should have 3 args) and get it's parent function

* lua_getlocal - Go to findlocal addy in ida and go to the 1 xref (should have 5 args) and get it's parent function

* lua_setlocal - Go to findlocal addy in ida and go to the 2 xref (should have 5 args) and get it's parent function

* lua_getmettable - Go to index2adr addy in ida and go to the 4 xref (should have 3 args) and get it's parent function

* lua_getstack - Go to lual_where addy in ida and find it's 1 function call

* lua_gettable - Go to index2adr addy in ida and go to the 5 xref (should have 2 args) and get it's parent function

* lua_gettop - Go to spawn addy in ida and find it's 3 function call

* lua_getupvalue - Go to index2adr addy in ida and go to the 6 xref (should have 2 args) and get it's parent function

* lua_insert - Go to index2adr addy in ida and go to the 7 xref (should have 2 args) and get it's parent function

* lua_iscfunction - Go to index2adr addy in ida and go to the 8 xref (should have 3 args) and get it's parent function

* lua_isnumber - Go to index2adr addy in ida and go to the 10 xref (should have 3 args) and get it's parent function

* lua_isstring - Go to index2adr addy in ida and go to the 11 xref (should have 2 args) and get it's parent function

* lua_error - Go to lual_error addy in ida and find it's 4 function call

* lua_isuserdata - Go to index2adr addy in ida and go to the 9 xref (should have 2 args) and get it's parent function

* lua_lessthan - Go to index2adr addy in ida and go to the 13 xref (should have 3 args) and get it's parent function

* lua_newstate - Go to luad_rawrunprotected addy in ida and go to the 5 xref (should have 7 args) and get it's parent function

* lua_newthread - Go to luac_step addy in ida and go to the 4 xref (should have 2 args) and get it's parent function

* lua_newuserdata - Go to luac_step addy in ida and go to the 5 xref (should have 1 args) and get it's parent function

* lua_next - Go to index2adr addy in ida and go to the 14 xref (should have 2 args) and get it's parent function

* lua_objlen - Go to index2adr addy in ida and go to the 15 xref (should have 2 args) and get it's parent function

* lua_pcall - Go to index2adr addy in ida and go to the 16 xref (should have 4 args) and get it's parent function

* Could Not Generate Tut For lua_pushboolean

* lua_pushcclosure - Go to luac_step addy in ida and go to the 6 xref (should have 6 args) and get it's parent function

* lua_pushfstring - Go to luac_step addy in ida and go to the 7 xref (should have 2 args) and get it's parent function

* lua_pushinteger - Go to lual_unref addy in ida and find it's 4 function call

* Could Not Generate Tut For lua_pushlightuserdata

* lua_pushlstring - Go to luac_step addy in ida and go to the 8 xref (should have 1 args) and get it's parent function

* lua_pushnil - Go to str_find_aux addy in ida and find it's 7 function call

* Could Not Generate Tut For lua_pushnumber

* lua_pushstring - Go to luac_step addy in ida and go to the 9 xref (should have 3 args) and get it's parent function

* Could Not Generate Tut For lua_pushthread

* lua_pushvalue - Go to index2adr addy in ida and go to the 17 xref (should have 2 args) and get it's parent function

* lua_pushvfstring - Go to luac_step addy in ida and go to the 10 xref (should have 1 args) and get it's parent function

* lua_rawequal - Go to index2adr addy in ida and go to the 19 xref (should have 3 args) and get it's parent function

* lua_rawget - Go to index2adr addy in ida and go to the 20 xref (should have 2 args) and get it's parent function

* lua_rawgeti - Go to index2adr addy in ida and go to the 22 xref (should have 2 args) and get it's parent function

* lua_rawset - Go to index2adr addy in ida and go to the 23 xref (should have 4 args) and get it's parent function

* lua_rawseti - Go to index2adr addy in ida and go to the 24 xref (should have 4 args) and get it's parent function

* lua_remove - Go to index2adr addy in ida and go to the 25 xref (should have 2 args) and get it's parent function

* lua_replace - Go to index2adr addy in ida and go to the 26 xref (should have 2 args) and get it's parent function

* lua_resume - Go to resume_error addy in ida and go to the 2 xref (should have 4 args) and get it's parent function

* lua_setfenv - Go to index2adr addy in ida and go to the 27 xref (should have 2 args) and get it's parent function

* lua_setfield - Go to index2adr addy in ida and go to the 28 xref (should have 3 args) and get it's parent function

* lua_setmetatable - Go to index2adr addy in ida and go to the 29 xref (should have 3 args) and get it's parent function

* Could Not Generate Tut For lua_setreadonly

* lua_settable - Go to luav_settable addy in ida and go to the 2 xref (should have 2 args) and get it's parent function

* lua_settop - Go to spawn addy in ida and find it's 12 function call

* lua_setupvalue - Go to aux_upvalue addy in ida and go to the 2 xref (should have 2 args) and get it's parent function

* lua_toboolean - Go to str_find_aux addy in ida and find it's 4 function call

* lua_tolstring - Go to luav_tostring addy in ida and go to the 2 xref (should have 4 args) and get it's parent function

* lua_tonumber - Go to luav_tonumber addy in ida and go to the 3 xref (should have 4 args) and get it's parent function

* Could Not Generate Tut For lua_topointer

* Could Not Generate Tut For lua_tostring

* lua_tothread - Go to luab_auxwrap addy in ida and find it's 1 function call

* Could Not Generate Tut For lua_touserdata

* lua_type - Go to lual_argerror addy in ida and find it's 5 function call

* lua_typename - Go to tag_error addy in ida and find it's 1 function call

* lua_xmove - Go to spawn addy in ida and find it's 7 function call

* Could Not Generate Tut For lua_yeild

* luab_auxwrap - Go to lua_tothread addy in ida and go to the 5 xref (should have 1 args) and get it's parent function

* luac_barrierback - Go to lua_rawset addy in ida and find it's 3 function call

* luac_barrierf - Go to reallymarkobject addy in ida and go to the 1 xref (should have 3 args) and get it's parent function

* luac_fullgc - Go to singlestep addy in ida and go to the 2 xref (should have 2 args) and get it's parent function

* luac_link - Go to luae_newthread addy in ida and find it's 2 function call

* luac_linkupval - Go to reallymarkobject addy in ida and go to the 2 xref (should have 4 args) and get it's parent function

* luac_step - Go to markroot addy in ida and go to the 2 xref (should have 3 args) and get it's parent function

* luad_call - Go to luad_precall addy in ida and go to the 1 xref (should have 3 args) and get it's parent function

* luad_pcall - Go to luad_rawrunprotected addy in ida and go to the 1 xref (should have 6 args) and get it's parent function

* luad_precall - Go to tryfunctm addy in ida and go to the 3 xref (should have 7 args) and get it's parent function

* luad_poscall - Go to resume addy in ida and find it's 3 function call

* luad_rawrunprotected - Go to collectvalidlines addy in ida and go to the 2 xref (should have 2 args) and get it's parent function

* luad_reallocci - Go to luam_realloc addy in ida and go to the 2 xref (should have 3 args) and get it's parent function

* luad_seterrorObj - Go to luas_newlstr addy in ida and go to the 7 xref (should have 3 args) and get it's parent function

* luad_throw - Go to lua_error addy in ida and find it's 1 function call

* luae_freethread - Go to luaf_close addy in ida and go to the 6 xref (should have 3 args) and get it's parent function

* luae_newthread - Go to luam_realloc_ addy in ida and go to the 7 xref (should have 1 args) and get it's parent function

* luaf_close - Go to luac_linkupval addy in ida and go to the 1 xref (should have 3 args) and get it's parent function

* luaf_freeproto - Go to lua_freeobj addy in ida and find it's 3 function call

* luaf_findupval - Go to luam_realloc_ addy in ida and go to the 11 xref (should have 5 args) and get it's parent function

* luaf_newcclosure - Go to luam_realloc_ addy in ida and go to the 12 xref (should have 2 args) and get it's parent function

* luaf_newlclosure - Go to luam_realloc_ addy in ida and go to the 13 xref (should have 3 args) and get it's parent function

* luaf_newproto - Go to luam_realloc_ addy in ida and go to the 14 xref (should have 5 args) and get it's parent function

* luag_runerror - Go to lua_rawset addy in ida and find it's 5 function call

* luag_typeerror - Go to luah_getstr addy in ida and go to the 5 xref (should have 5 args) and get it's parent function

* luah_free - Go to lua_freeobj addy in ida and find it's 6 function call

* luah_get - Go to luah_getstr addy in ida and go to the 1 xref (should have 4 args) and get it's parent function

* luah_getn - Go to unbound_search addy in ida and go to the 1 xref (should have 3 args) and get it's parent function

* luah_getnum - Go to lua_rawgeti addy in ida and find it's 2 function call

* luah_getstr - Go to luah_get addy in ida and find it's 1 function call

* luah_new - Go to luam_realloc_ addy in ida and go to the 22 xref (should have 3 args) and get it's parent function

* luah_next - Go to mainposition addy in ida and go to the 2 xref (should have 6 args) and get it's parent function

* luah_resizearray - Go to resize addy in ida and go to the 2 xref (should have 2 args) and get it's parent function

* luah_set - Go to luah_getstr addy in ida and go to the 2 xref (should have 5 args) and get it's parent function

* luah_setnum - Go to luah_getnum addy in ida and go to the 8 xref (should have 3 args) and get it's parent function

* lual_addlstring - Go to adjuststack addy in ida and go to the 1 xref (should have 4 args) and get it's parent function

* lual_addvalue - Go to lua_tolstring addy in ida and go to the 25 xref (should have 2 args) and get it's parent function

* lual_argerror - Go to lua_getmettable addy in ida and go to the 3 xref (should have 4 args) and get it's parent function

* Could Not Generate Tut For lual_checkany

* lual_checkinteger - Go to lual_typeerror addy in ida and go to the 16 xref (should have 0 args) and get it's parent function

* lual_checklstring - Go to lua_tolstring addy in ida and go to the 26 xref (should have 1 args) and get it's parent function

* Could Not Generate Tut For lual_checknumber

* lual_checkstack - Go to push_captures addy in ida and find it's 1 function call

* Could Not Generate Tut For lual_checktype

* lual_error - Go to lual_checkany addy in ida and find it's 2 function call

* lual_findtable - Go to lua_rawget addy in ida and go to the 16 xref (should have 6 args) and get it's parent function

* lual_getmetafield - Go to lua_getmettable addy in ida and go to the 4 xref (should have 3 args) and get it's parent function

* lual_newmetatable - Go to lua_getfield addy in ida and go to the 9 xref (should have 3 args) and get it's parent function

* lual_optinteger - Go to getfunc addy in ida and find it's 3 function call

* Could Not Generate Tut For lual_optlstring

* lual_prepbuffer - Go to adjuststack addy in ida and go to the 3 xref (should have 1 args) and get it's parent function

* lual_ref - Go to lua_rawgeti addy in ida and go to the 23 xref (should have 6 args) and get it's parent function

* lual_register - Go to lual_findtable addy in ida and go to the 2 xref (should have 7 args) and get it's parent function

* lual_typeerror - Go to luav_tonumber addy in ida and go to the 2 xref (should have 4 args) and get it's parent function

* lual_unref - Go to lua_rawgeti addy in ida and go to the 24 xref (should have 4 args) and get it's parent function

* lual_where - Go to lua_getstack addy in ida and go to the 14 xref (should have 2 args) and get it's parent function

* luam_realloc - Go to luad_pcall addy in ida and find it's 4 function call

* luam_realloc_ - Go to luau_deserialize addy in ida and find it's 16 function call

* luam_toobig - Go to luad_reallocci addy in ida and find it's 2 function call

* luao_chunkid - Go to luau_deserialize addy in ida and find it's 21 function call

* luao_pushfstring - Go to luas_newlstr addy in ida and go to the 9 xref (should have 2 args) and get it's parent function

* luao_pushvfstring - Go to luas_newlstr addy in ida and go to the 10 xref (should have 1 args) and get it's parent function

* luao_rawequalObj - Go to luah_get addy in ida and find it's 5 function call

* luao_str2d - Go to luav_tonumber addy in ida and find it's 1 function call

* luas_newlstr - Go to newlstr addy in ida and go to the 1 xref (should have 7 args) and get it's parent function

* luas_newudata - Go to luam_realloc_ addy in ida and go to the 15 xref (should have 2 args) and get it's parent function

* luas_resize - Go to luam_realloc_ addy in ida and go to the 16 xref (should have 3 args) and get it's parent function

* luat_gettmbyobj - Go to luah_getstr addy in ida and go to the 4 xref (should have 3 args) and get it's parent function

* luat_typenames Addy Is Not A Function

* luau_deserialize - Go to luas_newlstr addy in ida and go to the 12 xref (should have 9 args) and get it's parent function

* Could Not Generate Tut For luau_execute

* luav_concat - Go to luas_newlstr addy in ida and go to the 19 xref (should have 9 args) and get it's parent function

* luav_execute - Go to luav_gettable_opt addy in ida and go to the 10 xref (should have 62 args) and get it's parent function

* luav_gettable - Go to luah_get addy in ida and go to the 2 xref (should have 7 args) and get it's parent function

* luav_gettable_opt - Go to luav_gettable addy in ida and go to the 1 xref (should have 0 args) and get it's parent function

* luav_lessthan - Go to call_ordertm addy in ida and go to the 2 xref (should have 4 args) and get it's parent function

* luav_settable - Go to luah_set addy in ida and go to the 5 xref (should have 7 args) and get it's parent function

* luav_tonumber - Go to luao_str2d addy in ida and go to the 3 xref (should have 3 args) and get it's parent function

* luav_tostring - Go to luas_newlstr addy in ida and go to the 20 xref (should have 1 args) and get it's parent function

* luax_init - Go to luas_newlstr addy in ida and go to the 22 xref (should have 1 args) and get it's parent function

* mainposition - Go to hashnum addy in ida and go to the 1 xref (should have 3 args) and get it's parent function

* markmt - Go to reallymarkobject addy in ida and go to the 6 xref (should have 3 args) and get it's parent function

* markroot - Go to reallymarkobject addy in ida and go to the 9 xref (should have 1 args) and get it's parent function

* newkey - Go to mainposition addy in ida and go to the 5 xref (should have 3 args) and get it's parent function

* Could Not Generate Tut For print

* reallymarkobject - Go to reallymarkobject addy in ida and go to the 22 xref (should have 3 args) and get it's parent function

* rehash - Go to newkey addy in ida and find it's 2 function call

* resize - Go to setarrayvector addy in ida and go to the 2 xref (should have 7 args) and get it's parent function

* resume - Go to luad_precall addy in ida and go to the 2 xref (should have 4 args) and get it's parent function

* reportError - Go to lua_tolstring addy in ida and go to the 9 xref (should have 4 args) and get it's parent function

* resume_error - Go to luas_newlstr addy in ida and go to the 8 xref (should have 2 args) and get it's parent function

* retcheck - Go to f_call addy in ida and find it's 2 function call

* sandboxthread - Go to lua_createtable addy in ida and go to the 8 xref (should have 5 args) and get it's parent function

* setarrayvector - Go to luam_realloc addy in ida and go to the 9 xref (should have 2 args) and get it's parent function

* setnodevector - Go to luam_realloc_ addy in ida and go to the 23 xref (should have 3 args) and get it's parent function

* singlestep - Go to markroot addy in ida and go to the 3 xref (should have 3 args) and get it's parent function

* spawn - Go to lua_newthread addy in ida and go to the 9 xref (should have 7 args) and get it's parent function

* stack_init - Go to luam_realloc_ addy in ida and go to the 9 xref (should have 1 args) and get it's parent function

* str_find_aux - Go to lual_optinteger addy in ida and go to the 16 xref (should have 9 args) and get it's parent function

* tag_error - Go to lual_checkinteger addy in ida and find it's 2 function call

* Could Not Generate Tut For trustCheck

* trustcheck_bypass1 Addy Is Not A Function

* tryfunctm - Go to luag_typeerror addy in ida and go to the 15 xref (should have 2 args) and get it's parent function

* unbound_search - Go to luah_getnum addy in ida and go to the 12 xref (should have 4 args) and get it's parent function

* vm_invoker - Go to luad_call addy in ida and find it's 2 function call

 */

 /*

 idc.MakeName(0x014402E0, 'addinfo');
 idc.MakeName(0x01435930, 'adjuststack');
 idc.MakeName(0x0144B190, 'arith');
 idc.MakeName(0x014332F0, 'aux_upvalue');
 idc.MakeName(0x01440350, 'auxgetinfo');
 idc.MakeName(0x01441E70, 'auxresume');
 idc.MakeName(0x0144AA30, 'call_bintm');
 idc.MakeName(0x0144AAE0, 'call_ordertm');
 idc.MakeName(0x005E1240, 'callcheck');
 idc.MakeName(0x0144A8E0, 'calltmres');
 idc.MakeName(0x0143FD90, 'close_state');
 idc.MakeName(0x014365C0, 'collectvalidlines');
 idc.MakeName(0x01440570, 'currentline');
 idc.MakeName(0x0144B8D0, 'deobfuscate_closure');
 idc.MakeName(0x01433380, 'f_call');
 idc.MakeName(0x0143FE30, 'f_luaopen');
 idc.MakeName(0x0067F4A0, 'findfirstchild');
 idc.MakeName(0x0067F670, 'findfirstchildofclass');
 idc.MakeName(0x01447B70, 'findlocal');
 idc.MakeName(0x00B0C2A0, 'fireclickdetector');
 idc.MakeName(0x015F2AC0, 'flog_getvalue');
 idc.MakeName(0x015F3290, 'flog_setvalue');
 idc.MakeName(0x00F24A80, 'getdatamodel');
 idc.MakeName(0x00F24930, 'getdatamodel2');
 idc.MakeName(0x00FB0840, 'getjobsbyname');
 idc.MakeName(0x014416D0, 'getfunc');
 idc.MakeName(0x014359A0, 'getnamecallmethod');
 idc.MakeName(0x01436560, 'growci');
 idc.MakeName(0x01449590, 'hashnum');
 idc.MakeName(0x014333D0, 'index2adr');
 idc.MakeName(0x01445440, 'match');
 idc.MakeName(0x014493C0, 'newlstr');
 idc.MakeName(0x01445DD0, 'push_captures');
 idc.MakeName(0x01433490, 'luaa_pushobject');
 idc.MakeName(0x014334B0, 'lua_rawvalue');
 idc.MakeName(0x01433500, 'lua_call');
 idc.MakeName(0x01433570, 'lua_checkstack');
 idc.MakeName(0x01433610, 'lua_concat');
 idc.MakeName(0x014336C0, 'lua_createtable');
 idc.MakeName(0x01447F70, 'lua_freeobj');
 idc.MakeName(0x01433810, 'lua_gc');
 idc.MakeName(0x01433930, 'lua_getfenv');
 idc.MakeName(0x014339D0, 'lua_getfield');
 idc.MakeName(0x01440B00, 'lua_getinfo');
 idc.MakeName(0x01440BD0, 'lua_getlocal');
 idc.MakeName(0x01440D10, 'lua_setlocal');
 idc.MakeName(0x01433A70, 'lua_getmettable');
 idc.MakeName(0x01440C80, 'lua_getstack');
 idc.MakeName(0x01433B30, 'lua_gettable');
 idc.MakeName(0x01433BA0, 'lua_gettop');
 idc.MakeName(0x01433BC0, 'lua_getupvalue');
 idc.MakeName(0x01433C50, 'lua_insert');
 idc.MakeName(0x01433CD0, 'lua_iscfunction');
 idc.MakeName(0x01433D70, 'lua_isnumber');
 idc.MakeName(0x01433DD0, 'lua_isstring');
 idc.MakeName(0x01433800, 'lua_error');
 idc.MakeName(0x01433D20, 'lua_isuserdata');
 idc.MakeName(0x01433E20, 'lua_lessthan');
 idc.MakeName(0x0143FFE0, 'lua_newstate');
 idc.MakeName(0x01433ED0, 'lua_newthread');
 idc.MakeName(0x01433F60, 'lua_newuserdata');
 idc.MakeName(0x01433FE0, 'lua_next');
 idc.MakeName(0x01434070, 'lua_objlen');
 idc.MakeName(0x01434140, 'lua_pcall');
 idc.MakeName(0x01434200, 'lua_pushboolean');
 idc.MakeName(0x01434250, 'lua_pushcclosure');
 idc.MakeName(0x01434330, 'lua_pushfstring');
 idc.MakeName(0x014343A0, 'lua_pushinteger');
 idc.MakeName(0x01434400, 'lua_pushlightuserdata');
 idc.MakeName(0x01434450, 'lua_pushlstring');
 idc.MakeName(0x014344D0, 'lua_pushnil');
 idc.MakeName(0x01434520, 'lua_pushnumber');
 idc.MakeName(0x01434580, 'lua_pushstring');
 idc.MakeName(0x01434660, 'lua_pushthread');
 idc.MakeName(0x01434730, 'lua_pushvalue');
 idc.MakeName(0x014347A0, 'lua_pushvfstring');
 idc.MakeName(0x01434810, 'lua_rawequal');
 idc.MakeName(0x01434890, 'lua_rawget');
 idc.MakeName(0x014349B0, 'lua_rawgeti');
 idc.MakeName(0x01434A30, 'lua_rawset');
 idc.MakeName(0x01434B00, 'lua_rawseti');
 idc.MakeName(0x01434BD0, 'lua_remove');
 idc.MakeName(0x01434C60, 'lua_replace');
 idc.MakeName(0x01436A50, 'lua_resume');
 idc.MakeName(0x01434D60, 'lua_setfenv');
 idc.MakeName(0x01434E30, 'lua_setfield');
 idc.MakeName(0x01434EE0, 'lua_setmetatable');
 idc.MakeName(0x01434FF0, 'lua_setreadonly');
 idc.MakeName(0x014350D0, 'lua_settable');
 idc.MakeName(0x01435150, 'lua_settop');
 idc.MakeName(0x014351D0, 'lua_setupvalue');
 idc.MakeName(0x01435280, 'lua_toboolean');
 idc.MakeName(0x01435350, 'lua_tolstring');
 idc.MakeName(0x01435480, 'lua_tonumber');
 idc.MakeName(0x01435500, 'lua_topointer');
 idc.MakeName(0x014355C0, 'lua_tostring');
 idc.MakeName(0x01435640, 'lua_tothread');
 idc.MakeName(0x01435710, 'lua_touserdata');
 idc.MakeName(0x01435800, 'lua_type');
 idc.MakeName(0x01435840, 'lua_typename');
 idc.MakeName(0x014358B0, 'lua_xmove');
 idc.MakeName(0x01436C50, 'lua_yeild');
 idc.MakeName(0x01441FA0, 'luab_auxwrap');
 idc.MakeName(0x01447F10, 'luac_barrierback');
 idc.MakeName(0x01447F30, 'luac_barrierf');
 idc.MakeName(0x01448060, 'luac_fullgc');
 idc.MakeName(0x01448140, 'luac_link');
 idc.MakeName(0x01448170, 'luac_linkupval');
 idc.MakeName(0x014481F0, 'luac_step');
 idc.MakeName(0x014364C0, 'luad_call');
 idc.MakeName(0x014365F0, 'luad_pcall');
 idc.MakeName(0x0143F920, 'luad_precall');
 idc.MakeName(0x0143F890, 'luad_poscall');
 idc.MakeName(0x014366F0, 'luad_rawrunprotected');
 idc.MakeName(0x01436830, 'luad_reallocci');
 idc.MakeName(0x01436990, 'luad_seterrorObj');
 idc.MakeName(0x01436A00, 'luad_throw');
 idc.MakeName(0x0143FEB0, 'luae_freethread');
 idc.MakeName(0x0143FF20, 'luae_newthread');
 idc.MakeName(0x01447910, 'luaf_close');
 idc.MakeName(0x01447A70, 'luaf_freeproto');
 idc.MakeName(0x014479A0, 'luaf_findupval');
 idc.MakeName(0x01447BD0, 'luaf_newcclosure');
 idc.MakeName(0x01447C30, 'luaf_newlclosure');
 idc.MakeName(0x01447CA0, 'luaf_newproto');
 idc.MakeName(0x014409E0, 'luag_runerror');
 idc.MakeName(0x0144B7B0, 'luag_typeerror');
 idc.MakeName(0x014497A0, 'luah_free');
 idc.MakeName(0x01449800, 'luah_get');
 idc.MakeName(0x014498B0, 'luah_getn');
 idc.MakeName(0x01449930, 'luah_getnum');
 idc.MakeName(0x01449A10, 'luah_getstr');
 idc.MakeName(0x01449A80, 'luah_new');
 idc.MakeName(0x01449AF0, 'luah_next');
 idc.MakeName(0x01449CD0, 'luah_resizearray');
 idc.MakeName(0x01449D20, 'luah_set');
 idc.MakeName(0x01449E40, 'luah_setnum');
 idc.MakeName(0x01435A20, 'lual_addlstring');
 idc.MakeName(0x01435A90, 'lual_addvalue');
 idc.MakeName(0x01435B80, 'lual_argerror');
 idc.MakeName(0x01435C10, 'lual_checkany');
 idc.MakeName(0x01435C50, 'lual_checkinteger');
 idc.MakeName(0x01435C80, 'lual_checklstring');
 idc.MakeName(0x01435CB0, 'lual_checknumber');
 idc.MakeName(0x01435CE0, 'lual_checkstack');
 idc.MakeName(0x01435D20, 'lual_checktype');
 idc.MakeName(0x01435D80, 'lual_error');
 idc.MakeName(0x01435DB0, 'lual_findtable');
 idc.MakeName(0x01435E90, 'lual_getmetafield');
 idc.MakeName(0x01435EF0, 'lual_newmetatable');
 idc.MakeName(0x01435F50, 'lual_optinteger');
 idc.MakeName(0x01435FA0, 'lual_optlstring');
 idc.MakeName(0x01436080, 'lual_prepbuffer');
 idc.MakeName(0x01436100, 'lual_ref');
 idc.MakeName(0x014361B0, 'lual_register');
 idc.MakeName(0x014352D0, 'lual_typeerror');
 idc.MakeName(0x01436340, 'lual_unref');
 idc.MakeName(0x014363A0, 'lual_where');
 idc.MakeName(0x0144BC00, 'luam_realloc');
 idc.MakeName(0x0144BAC0, 'luam_realloc_');
 idc.MakeName(0x0144BD10, 'luam_toobig');
 idc.MakeName(0x01436F90, 'luao_chunkid');
 idc.MakeName(0x01437110, 'luao_pushfstring');
 idc.MakeName(0x014371B0, 'luao_pushvfstring');
 idc.MakeName(0x01437250, 'luao_rawequalObj');
 idc.MakeName(0x01437350, 'luao_str2d');
 idc.MakeName(0x01449180, 'luas_newlstr');
 idc.MakeName(0x01449290, 'luas_newudata');
 idc.MakeName(0x014492E0, 'luas_resize');
 idc.MakeName(0x0144B780, 'luat_gettmbyobj');
 idc.MakeName(0x02033508, 'luat_typenames');
 idc.MakeName(0x0143EDD0, 'luau_deserialize');
 idc.MakeName(0x01460F90, 'luau_execute');
 idc.MakeName(0x0144AB60, 'luav_concat');
 idc.MakeName(0x01437440, 'luav_execute');
 idc.MakeName(0x0144B2D0, 'luav_gettable');
 idc.MakeName(0x0144B2B0, 'luav_gettable_opt');
 idc.MakeName(0x0144B480, 'luav_lessthan');
 idc.MakeName(0x0144B520, 'luav_settable');
 idc.MakeName(0x0144B6B0, 'luav_tonumber');
 idc.MakeName(0x0144B710, 'luav_tostring');
 idc.MakeName(0x0144B820, 'luax_init');
 idc.MakeName(0x01449EF0, 'mainposition');
 idc.MakeName(0x01448440, 'markmt');
 idc.MakeName(0x01448520, 'markroot');
 idc.MakeName(0x0144A030, 'newkey');
 idc.MakeName(0x0065D8E0, 'print');
 idc.MakeName(0x01448A80, 'reallymarkobject');
 idc.MakeName(0x0144A1E0, 'rehash');
 idc.MakeName(0x0144A450, 'resize');
 idc.MakeName(0x01436CC0, 'resume');
 idc.MakeName(0x007992E0, 'reportError');
 idc.MakeName(0x01436DA0, 'resume_error');
 idc.MakeName(0x006C0F00, 'retcheck');
 idc.MakeName(0x0079C160, 'sandboxthread');
 idc.MakeName(0x0144A630, 'setarrayvector');
 idc.MakeName(0x0144A6B0, 'setnodevector');
 idc.MakeName(0x01448B60, 'singlestep');
 idc.MakeName(0x0079C4F0, 'spawn');
 idc.MakeName(0x01440250, 'stack_init');
 idc.MakeName(0x01445F80, 'str_find_aux');
 idc.MakeName(0x01436420, 'tag_error');
 idc.MakeName(0x00638D30, 'trustCheck');
 idc.MakeName(0x02409098, 'trustcheck_bypass1');
 idc.MakeName(0x0143FCA0, 'tryfunctm');
 idc.MakeName(0x0144A780, 'unbound_search');
 idc.MakeName(0x0143EDB0, 'vm_invoker');
 idc.MakeName(0x027F3000, 'retcheckflag1');
 idc.MakeName(0x027F3004, 'retcheckflag2');
 idc.MakeName(0x02791DA0, 'xorconst');
 idc.MakeName(0x02032180, 'luao_nilobject');
 idc.MakeName(0x01E58300, 'scriptcontext');


  */
  /*
    *Encrypted Strings*

   * Adress: 0x005BD263    String: "Cannot launch game with empty game param. Please check your authentication status"
  * Adress: 0x005BDD30    String: "Lua requested native exit."
  * Adress: 0x005C511E    String: "(Win-AuthToken) loadAuthTokenFromDisk:"
  * Adress: 0x005C523D    String: "(Win-AuthToken) loadAuthTokenFromDisk: Empty auth token."
  * Adress: 0x005C5312    String: "Failed to load auth token from disk"
  * Adress: 0x005C5376    String: "Failed to decrypt auth token with login credentials"
  * Adress: 0x005C56E4    String: "(Win-AuthToken) removeAuthTokenFromDisk:"
  * Adress: 0x005C580F    String: "Failed to remove the auth token from disk"
  * Adress: 0x005C5A7E    String: "Failed to encrypt auth token with login credentials"
  * Adress: 0x005C5C3C    String: "Failed to save auth token to disk"
  * Adress: 0x005C7B4B    String: "Handling command line parameters"
  * Adress: 0x005CBEDB    String: "DUAR is on."
  * Adress: 0x005D616B    String: "initAutoUpgrade failed to init AutoUpgradeController"
  * Adress: 0x005DC23D    String: "Cannot launch game with empty game param. Please check your authentication status"
  * Adress: 0x005DCCFE    String: "Lua requested native exit."
  * Adress: 0x005DF407    String: "WebLogin is not enabled"
  * Adress: 0x005DF599    String: "WebLogin authentication is failed and game param won't be created"
  * Adress: 0x005F10AB    String: "back button cannot disable"
  * Adress: 0x005F1124    String: "back button cannot enable"
  * Adress: 0x005F1856    String: "NotError if on UniversalApp and opens a web link or running any captcha check before login. Otherwise it is an error"
  * Adress: 0x005F1E35    String: "BrowserServiceDiagnose RbxWebView2::WindowClosing"
  * Adress: 0x005F2F00    String: "BrowserServiceDiagnose RbxWebView2::closeWebBrowser"
  * Adress: 0x0061A114    String: "Letting watcher thread know we're alive"
  * Adress: 0x0061A3D4    String: "Processing exception in thread"
  * Adress: 0x0061B000    String: "Found Get/SetProcessUserModeExceptionPolicy"
  * Adress: 0x0061B049    String: "UserMode Exception Flags: %u. Setting CALLBACK_FILER off"
  * Adress: 0x0061B273    String: "Processing exception in watcher thread"
  * Adress: 0x0061B2CB    String: "Processing exception in crashing thread"
  * Adress: 0x0061B576    String: "Launching process to upload dmp."
  * Adress: 0x0061B826    String: "WatcherThread Detected hang."
  * Adress: 0x0061B98E    String: "Processing non-hang"
  * Adress: 0x0061C142    String: "WatcherThread Started"
  * Adress: 0x0061C23B    String: "Processing non-hang"
  * Adress: 0x00621D63    String: "MediaControl GetState failed"
  * Adress: 0x00623DF6    String: "MediaControl GetState failed"
  * Adress: 0x00623F3C    String: "Pushing next frame."
  * Adress: 0x00623F77    String: "DSVideoCaptureEngine: Cancel by time"
  * Adress: 0x00623FE1    String: "DSVideoCaptureEngine: Cancel by device lost"
  * Adress: 0x006242E6    String: "DSVideoCaptureEngine: Cancel by resize"
  * Adress: 0x006537A0    String: "Request shutdown returning"
  * Adress: 0x00654878    String: "Adding counter %s%s = %d (bulk)"
  * Adress: 0x00657567    String: "Skipped performance probe on untrusted domain. Url = %s."
  * Adress: 0x006579DD    String: "Google analytics already initialized!"
  * Adress: 0x00658F5A    String: "Request shutdown starting"
  * Adress: 0x00658FA9    String: "Request shutdown early return because already requested"
  * Adress: 0x006590E3    String: "Request shutdown returning"
  * Adress: 0x00659629    String: "%s sent queued events to target: %s"
  * Adress: 0x0065A5EA    String: "Could not set Google Analytics reporter to uninitialized reporter."
  * Adress: 0x0065B7E9    String: "Request shutdown early return because already requested"
  * Adress: 0x0065BA36    String: "Starting DeferredEphemeral timer thread"
  * Adress: 0x0065BBE6    String: "Starting DeferredReporter timer thread"
  * Adress: 0x0065C038    String: "timerThreadImpl sending SessionCount"
  * Adress: 0x0065C21B    String: "timerThreadImpl adjusting sessionCountTimeout"
  * Adress: 0x0065C2BD    String: "timerThreadImpl sending"
  * Adress: 0x0065C3ED    String: "timerThreadImpl waiting"
  * Adress: 0x0065C5CC    String: "timerThreadImpl sending"
  * Adress: 0x0065C6CF    String: "Exiting DeferredEphemeral timer thread"
  * Adress: 0x0065C9B1    String: "Exiting DeferredReporter timer thread"
  * Adress: 0x0065CAC9    String: "Google analytics not initialized!"
  * Adress: 0x0065CBA0    String: "Google analytics not initialized!"
  * Adress: 0x0065CCA0    String: "Google analytics not initialized!"
  * Adress: 0x0065CD89    String: "Google analytics not initialized!"
  * Adress: 0x0065CE59    String: "Google analytics not initialized!"
  * Adress: 0x006945F8    String: "Bad key"
  * Adress: 0x00694628    String: "Bad key"
  * Adress: 0x00694658    String: "Failed to read file"
  * Adress: 0x006947A2    String: "Error Decoding stream"
  * Adress: 0x006947C3    String: "Error reading stream"
  * Adress: 0x00694814    String: "Bad key"
  * Adress: 0x00694855    String: "Failed to initialize key"
  * Adress: 0x006948B7    String: "Missing file header"
  * Adress: 0x00694922    String: "Failed to read file"
  * Adress: 0x006949EE    String: "Failed to initialize cipher"
  * Adress: 0x00694A6E    String: "Corrupt file"
  * Adress: 0x00694AF7    String: "Bad key"
  * Adress: 0x00694B27    String: "Failed to read file"
  * Adress: 0x00694B7B    String: "Stream does not contain magic number"
  * Adress: 0x00694C8E    String: "Error Decoding stream"
  * Adress: 0x00694CA8    String: "Error reading stream"
  * Adress: 0x0069C315    String: "Asset (%s) "%s" load failed%s: %s"
  * Adress: 0x0069EECE    String: "Parsing content: %s"
  * Adress: 0x0069F198    String: "Got content as string: %s"
  * Adress: 0x006A1677    String: "[ContentProvider] content requested: %s. Type: %d, priority: %.1f, result: 0x%p, callback: 0x%p"
  * Adress: 0x006A1ED4    String: "[ContentProvider] async request: %s"
  * Adress: 0x006D82AB    String: "LegacyLock::Begin, DataModel: (%p), type(%d)"
  * Adress: 0x006D867E    String: "LegacyLock::RecursivelyAcquired DataModel: (%p), type(%d)"
  * Adress: 0x006DA57F    String: "LegacyLock::Released DataModel: (%p), type(%d)"
  * Adress: 0x006DA599    String: "LegacyLock::RecursivelyReleased DataModel: (%p), type(%d)"
  * Adress: 0x006E0035    String: "Finished waiting on lock"
  * Adress: 0x006E2537    String: "Raising close.."
  * Adress: 0x006E257F    String: "Removing all players"
  * Adress: 0x006E25C8    String: "Clearing contents..."
  * Adress: 0x006E25FB    String: "Visiting children with unlockParent..."
  * Adress: 0x006E26AB    String: "Removing all Children..."
  * Adress: 0x006E26ED    String: "Stopping model meshing job..."
  * Adress: 0x006E2726    String: "Resetting workspace..."
  * Adress: 0x006E279F    String: "Resetting runService..."
  * Adress: 0x006E2818    String: "Resetting starterPackService..."
  * Adress: 0x006E2891    String: "Resetting starterGuiService..."
  * Adress: 0x006E290A    String: "Resetting starterPlayerService..."
  * Adress: 0x006E2983    String: "Resetting guiRoot..."
  * Adress: 0x006E29FC    String: "Clearing services..."
  * Adress: 0x006E2A32    String: "Removing GenericJobs..."
  * Adress: 0x006E2C0C    String: "Close DataModel Done!"
  * Adress: 0x006F4602    String: "Process shutdown tasks start"
  * Adress: 0x006F47C8    String: "Process shutdown tasks finish"
  * Adress: 0x006F4877    String: "Process tasks start"
  * Adress: 0x006F4D6A    String: "Process tasks finish"
  * Adress: 0x006F6499    String: "Cleaning flyweight services before datamodel close"
  * Adress: 0x006F64F4    String: "Saving data model on close"
  * Adress: 0x006F6651    String: "Calling onClose callback"
  * Adress: 0x0071CA06    String: "Http cache cleanup time: %.1fms"
  * Adress: 0x0071D52D    String: "HttpClient destroy end (time:%.2fms)"
  * Adress: 0x0071E869    String: "HttpResponse(#%u %p) time:%.01fms (net:%.01fms) redirected from url:"%s" to url: "%s""
  * Adress: 0x0071EFB8    String: "HttpRequest(#%u %p) %s url:"%s" cachePolicy:%d%s external:%d"
  * Adress: 0x0071EFF0    String: "HttpRequest(#%u %p) %s url:"%s" postSize:%zu cachePolicy:%d%s external:%d"
  * Adress: 0x0071F032    String: "HttpRequest(#%u %p) %s url:"%s" cachePolicy:%d%s"
  * Adress: 0x0071F069    String: "HttpRequest(#%u %p) %s url:"%s" postSize:%zu cachePolicy:%d%s"
  * Adress: 0x0071F0C4    String: "HttpRequest(#%u %p) %s url:"%s" cachePolicy:%d%s external:%d"
  * Adress: 0x0071F10C    String: "HttpRequest(#%u %p) %s url:"%s" postSize:%zu cachePolicy:%d%s external:%d"
  * Adress: 0x0071F307    String: "HttpResponse(#%u %p) time:%.01fms (net:%.01fms callback:%.01fms) error:%u message:%s%s url:"%s" ip:%s external:%d"
  * Adress: 0x0071F36B    String: "HttpResponse(#%u %p) time:%.01fms (net:%.01fms callback:%.01fms) status:%d %s bodySize:%zu%s%s url:"%s" ip:%s external:%d"
  * Adress: 0x0071F401    String: "HttpResponse(#%u %p) time:%.01fms (net:%.01fms callback:%.01fms) error:%u message:%s%s url:"%s""
  * Adress: 0x0071F469    String: "HttpResponse(#%u %p) time:%.01fms (net:%.01fms callback:%.01fms) status:%d %s bodySize:%zu%s%s url:"%s""
  * Adress: 0x00720065    String: "Attempting to call HttpClient::send() during global destruction"
  * Adress: 0x00721331    String: "Succeeded CacheResult::updateCache(%p, %s)"
  * Adress: 0x00721361    String: "Failed CacheResult::updateCache(%p, %s, %s)"
  * Adress: 0x0073E7D1    String: "Locale2Id"
  * Adress: 0x0073E8E1    String: "Locale2IdRef"
  * Adress: 0x0073E9F1    String: "Locale2Info"
  * Adress: 0x0079C2B4    String: "Set lua time out: %d"
  * Adress: 0x007A59F7    String: "Unhandled reflection type ReflectionType_TweenInfo in SerializerPugi::readPropertyValue()"
  * Adress: 0x007A5A9C    String: "Unhandled reflection type ReflectionType_EventInstance in SerializerPugi::readPropertyValue()"
  * Adress: 0x007A5B12    String: "Unhandled reflection type ReflectionType_SystemAddress in SerializerPugi::readPropertyValue()"
  * Adress: 0x007BA22F    String: "%s: path: %s, recursive: %d"
  * Adress: 0x007BDC34    String: "%s: path: %s"
  * Adress: 0x007BE477    String: "%s: path: %s, to: %s"
  * Adress: 0x007C0B18    String: "%s: path: %s"
  * Adress: 0x007EF43D    String: "Slot Exception"
  * Adress: 0x007F711F    String: "SoundService::closeFmod(%p)"
  * Adress: 0x007F7149    String: "Closing Fmod."
  * Adress: 0x007F734A    String: "Fmod Closed."
  * Adress: 0x007F7E5C    String: "SoundService::createDSP(%p)"
  * Adress: 0x007F8FAC    String: "NBFSL::fmodCallback received null sound"
  * Adress: 0x007F90D5    String: "NBFSL::fmodCallback loader already used, returning. sound=%p"
  * Adress: 0x007FB11C    String: "SoundService::getSampleRate(%p)"
  * Adress: 0x007FE3F1    String: "SoundService::muteAllChannels(%p)"
  * Adress: 0x007FE551    String: "SoundService::update3DSettings(%p)"
  * Adress: 0x007FEEDF    String: "SoundService::openFmod(%p)"
  * Adress: 0x008003C0    String: "SoundService::setAmbientReverb(%p)"
  * Adress: 0x00801D42    String: "SoundService::getChannelsPlaying(%p)"
  * Adress: 0x008022F1    String: "SoundService::update3DSettings(%p)"
  * Adress: 0x00802582    String: "SoundService::updateAmbientReverb(%p)"
  * Adress: 0x0084FB4F    String: "Changing humanoid state, old: %u, new: %u"
  * Adress: 0x00857900    String: "Disconnecting from last floor"
  * Adress: 0x00857A86    String: "Check platform subscription Player Mass: %4.4f, Floor Mass: %4.4f"
  * Adress: 0x00857AE8    String: "Platform Subscribed"
  * Adress: 0x0085B297    String: "Adding CURL header: %s"
  * Adress: 0x008A444C    String: "next spawn location = (%f,%f,%f)"
  * Adress: 0x008A4547    String: "Player:calculateNextSpawnLocation - ServiceProvider didn't have a Workspace"
  * Adress: 0x008A482A    String: "next spawn location = (%f,%f,%f)"
  * Adress: 0x008A48EA    String: "Player:calculateNextSpawnLocation - Player not in the world"
  * Adress: 0x008B08CE    String: "Player:luaLoadCharacter"
  * Adress: 0x008B0E49    String: "Player:luaLoadCharacterWithHumanoidDescription"
  * Adress: 0x008B3E31    String: "Player:removeCharacter"
  * Adress: 0x008CA279    String: "PartInstance %p named"
  * Adress: 0x008CA2A3    String: "Name: %s"
  * Adress: 0x008F0CED    String: "SoundChannel::loadSoundWithContext could not find SoundService"
  * Adress: 0x008F18C0    String: "SoundChannel::onChildAdded(%p) fmodChannel %p"
  * Adress: 0x008F1920    String: "SoundChannel::onChildRemoved(%p) fmodChannel %p"
  * Adress: 0x008F1980    String: "SoundChannel::onClosingFmod(%p) fmodChannel %p"
  * Adress: 0x008F1A0E    String: "SoundChannel::onOpenFmod(%p) fmodChannel %p"
  * Adress: 0x008F2B2C    String: "SoundChannel::setSuccessfullyLoadedSound(%p) fmodChannel(%p)"
  * Adress: 0x008FA3BC    String: "VideoFrame::render2d"
  * Adress: 0x008FB592    String: "Fetching remote assets is not available"
  * Adress: 0x008FB75A    String: "VideoFrame::step() %ims"
  * Adress: 0x008FB90D    String: "Failed to step video"
  * Adress: 0x008FBB24    String: "Failed to open video"
  * Adress: 0x00931D2F    String: "Workspace created: %p"
  * Adress: 0x00932AB4    String: "Workspace destroyed: %p"
  * Adress: 0x00933ECE    String: "Clearing terrain (from client replicator?)"
  * Adress: 0x00935656    String: "Terrain doesn't exist - creating terrain instance explicitly"
  * Adress: 0x0093AE21    String: "Workspace::Process, eventType: %u"
  * Adress: 0x0093B153    String: "Handling Key up"
  * Adress: 0x0093B20D    String: "Handling Key up"
  * Adress: 0x0093B2C3    String: "Canceling Right Mouse pan"
  * Adress: 0x0093B5BC    String: "Done with workspace process"
  * Adress: 0x0093B69F    String: "Return GuiResponse::notSunk"
  * Adress: 0x0093D146    String: "Setting clouds on workspace, %p"
  * Adress: 0x0093DE65    String: "Rejecting because of plugin override, plugin: %p"
  * Adress: 0x0093DF6B    String: "Setting as null tool: %p"
  * Adress: 0x0093DFD5    String: "Setting as null tool: %p"
  * Adress: 0x0093E033    String: "Generating new arrow tool: %p"
  * Adress: 0x0093E1E1    String: "Set mouse command: Done"
  * Adress: 0x0093E6D7    String: "Setting terrain on workspace, %p"
  * Adress: 0x0098422E    String: "Tool::activate"
  * Adress: 0x0098526E    String: "Tool::activate"
  * Adress: 0x009EE1E1    String: "FilterStringAsync:CanChatChecking %lld %lld "%s""
  * Adress: 0x009FDDC1    String: "Found zh-cjv for UGC content %s"
  * Adress: 0x00A1FD8A    String: "FriendService: StatusCallback (%lld, %lld) %s"
  * Adress: 0x00A60DE8    String: "httpHelper dataModel null."
  * Adress: 0x00A60EFA    String: "httpHelper teleportService null."
  * Adress: 0x00A61265    String: "v1/teleport polling."
  * Adress: 0x00A66ED2    String: "Save joinData"
  * Adress: 0x00A66EFF    String: "joinData writeJSON failed"
  * Adress: 0x00A68A4C    String: "Group Teleport Analytics startTime error"
  * Adress: 0x00A68C66    String: "Group Teleport Analytics added party:%s"
  * Adress: 0x00A69243    String: "Group Teleport Analytics removed party"
  * Adress: 0x00A6E560    String: "Group Teleport Analytics dataModel null."
  * Adress: 0x00A7138C    String: "onUserJoin parse teleportData failed"
  * Adress: 0x00A715D6    String: "onUserJoin failed in verifying joinData"
  * Adress: 0x00A71619    String: "onUserJoin parse joinData error"
  * Adress: 0x00A717FA    String: "onUserJoin invalid accountAge"
  * Adress: 0x00A719D3    String: "guid is missing. cannot record group teleport metrics."
  * Adress: 0x00A71B29    String: "onUserJoin no internalData"
  * Adress: 0x00A71B69    String: "onUserJoin no userData"
  * Adress: 0x00A71B83    String: "onUserJoin no accountAge"
  * Adress: 0x00A71B9D    String: "onUserJoin invalid userId"
  * Adress: 0x00A71BB7    String: "onUserJoin no userId"
  * Adress: 0x00A71BEC    String: "onUserJoin no joinData"
  * Adress: 0x00A71C2C    String: "onUserJoin corrupted auth token"
  * Adress: 0x00A81CD8    String: "Executing throttled requests, size: %f, budget: %f"
  * Adress: 0x00A82239    String: "Creating legacy data store"
  * Adress: 0x00AD0D5B    String: "Interpolating prim: %f"
  * Adress: 0x00AD2324    String: "RemoteBasis to No Basis - Fallback Mode Transition, Missing data on Remote Basis."
  * Adress: 0x00AD23AD    String: "Failed to transform NonNullFrame into GoalFrame's space on StartPrim: %d and GoalPrim: %d"
  * Adress: 0x00AD2698    String: "Failed to transform StartFrame into GoalFrame's space on StartPrim: %d and GoalPrim: %d"
  * Adress: 0x00AD2704    String: "RemoteBasis to RemoteBasis - Fallback Mode Transition, StartFrame Data Valid"
  * Adress: 0x00AD2867    String: "RemoteBasis to RemoteBasis - Fallback Mode Transition, GoalFrame Data Valid"
  * Adress: 0x00AD2982    String: "RemoteBasis to RemoteBasis - Fallback Mode Transition, Goal and Start Data Invalid PANIC"
  * Adress: 0x00B634AC    String: "Player:LoadCharacter - Backend server required"
  * Adress: 0x00B63F03    String: "Player:LoadCharacter - Player not in the world"
  * Adress: 0x00B702E0    String: "Humanoid created - %p"
  * Adress: 0x00B70FA7    String: "Humanoid destroyed - %p"
  * Adress: 0x00C32C0E    String: "End of string is invalid UTF-8"
  * Adress: 0x00C33131    String: "End of string is invalid UTF-8"
  * Adress: 0x00C3314A    String: "String contains invalid UTF-8"
  * Adress: 0x00C7642D    String: "MegaCluster destroyed - %p"
  * Adress: 0x00C80A61    String: "No terrain yet - it's going go be me!"
  * Adress: 0x00C80A86    String: "Terrain already exists - replace the existing one with this one"
  * Adress: 0x00C80B29    String: "onServiceProvider: Clearing terrain instance"
  * Adress: 0x00C83110    String: "Bad argument materials[%d][%d][%d] to 'WriteVoxels' (Enum.Material expected, got %s)"
  * Adress: 0x00C9DFCF    String: "ABTest - dm-task to signal browser-tracker ABTestLoadingStatus datamodel-not-available"
  * Adress: 0x00C9DFE9    String: "ABTest - Attempt to send browser-tracker loading status signal, but service no longer exists"
  * Adress: 0x00C9E17A    String: "ABTest - dm-task to signal user ABTestLoadingStatus datamodel-not-available"
  * Adress: 0x00C9E194    String: "ABTest - Attempt to send user loading status signal, but service no longer exists"
  * Adress: 0x00C9F84D    String: "ABTest - submitting dm-task to signal browser-tracker ABTestLoadingStatus : %s"
  * Adress: 0x00C9F9F0    String: "ABTest - submitting dm-task to signal user ABTestLoadingStatus : %s"
  * Adress: 0x00D43B57    String: "On hub[%s], event[%s]: json array size wrong. jsonData[%s]"
  * Adress: 0x00D446A8    String: "MessagingService::onReconnected resubscribe topic[%s] server error."
  * Adress: 0x00D4756E    String: "MessagingService::handleMessage parseJSONObject failed. message[%s]."
  * Adress: 0x00D47677    String: "MessagingService::handleMessage topic signal not found."
  * Adress: 0x00D4775D    String: "MessagingService::initializeConnection"
  * Adress: 0x00D6E7F8    String: "Can't decode returned value"
  * Adress: 0x00D6E860    String: "Can't decode returned value"
  * Adress: 0x00D73B1D    String: "Can't find data in the response"
  * Adress: 0x00D73B46    String: "No keys updated"
  * Adress: 0x00D73BFE    String: "Unexpected member of the array"
  * Adress: 0x00D73E28    String: "Unexpected structure of entry"
  * Adress: 0x00D7408F    String: "Can't find data in the response"
  * Adress: 0x00D740B9    String: "No keys updated"
  * Adress: 0x00D7414C    String: "Unexpected member of the array"
  * Adress: 0x00D746A1    String: "Unexpected structure of entry"
  * Adress: 0x00D74716    String: "Deserialization of web response failed"
  * Adress: 0x00D7474E    String: "Deserialization of web response failed"
  * Adress: 0x00D776A0    String: "Our change won, lets update final value"
  * Adress: 0x00D77C09    String: "Our change is rejected, update local value"
  * Adress: 0x00D77EC4    String: "Our change is rejected, update local value"
  * Adress: 0x00D78225    String: "Our change won, lets update final value"
  * Adress: 0x00D78C39    String: "Value: %s"
  * Adress: 0x00D7BD94    String: "Initialized Data Store, url: %s"
  * Adress: 0x00D7C469    String: "Fetched keys from the service"
  * Adress: 0x00D7D4B9    String: "SetIf returned %s"
  * Adress: 0x00D7D85A    String: "SetIf returned %s"
  * Adress: 0x00D7E0D7    String: "Next key to fetch: %s"
  * Adress: 0x00D7EDA9    String: "Data model is destroyed, cancel transform"
  * Adress: 0x00D7F378    String: "Url encoded:"
  * Adress: 0x00D7F48B    String: "Transform function returned nil, update is cancelled"
  * Adress: 0x00D7F610    String: "Data model is destroyed, cancel transform"
  * Adress: 0x00D7FFB6    String: "Url encoded:"
  * Adress: 0x00D80097    String: "Transform function returned nil, update is cancelled"
  * Adress: 0x00D802B6    String: "Fetching keys: %s"
  * Adress: 0x00D825F1    String: "Url encoded:"
  * Adress: 0x00D8417C    String: "Updating based on web string for key %s"
  * Adress: 0x00D8487C    String: "Updating value and triggering: %s"
  * Adress: 0x00D8493E    String: "Key is not cached, can just store it directly: %s"
  * Adress: 0x00D849FD    String: "Triggering callback: %s"
  * Adress: 0x00D8BE43    String: "VideoStream::VideoStream"
  * Adress: 0x00D8BE9E    String: "VideoStream::initVideoLibraries"
  * Adress: 0x00D8BFEC    String: "VideoStream::~VideoStream"
  * Adress: 0x00D8C020    String: "VideoStream::close"
  * Adress: 0x00D8C09D    String: "VideoStream::terminateVideoLibraries"
  * Adress: 0x00D8C5A1    String: "VideoStream::close"
  * Adress: 0x00D8C643    String: "VideoStream::closeCodecs"
  * Adress: 0x00D8C760    String: "VideoStream::closeContext"
  * Adress: 0x00D8D821    String: "VideoStream::doRenderVideo"
  * Adress: 0x00D8DCFB    String: "VideoStream::flushRenderBuffers"
  * Adress: 0x00D8E020    String: "VideoStream::getModeForFMOD"
  * Adress: 0x00D8E23D    String: "VideoStream::initVideoLibraries"
  * Adress: 0x00D8E2B0    String: "VideoStream::onClosingFmod"
  * Adress: 0x00D8E300    String: "VideoStream::onOpenFmod"
  * Adress: 0x00D8E39C    String: "VideoStream::onReadAudio"
  * Adress: 0x00D8E488    String: "Audio circular buffer full"
  * Adress: 0x00D8E5B6    String: "Audio circular buffer full"
  * Adress: 0x00D8E921    String: "VideoStream::open"
  * Adress: 0x00D8E94C    String: "VideoStream::openContext"
  * Adress: 0x00D8E9C9    String: "Failed to allocate io context"
  * Adress: 0x00D8EA27    String: "Failed to allocate format context"
  * Adress: 0x00D8EB1E    String: "VideoStream::open(const std::string& videoUrl, std::shared_ptr<const std::string> data)"
  * Adress: 0x00D8EC97    String: "VideoStream::openCodecs"
  * Adress: 0x00D8F2A7    String: "VideoStream::readData"
  * Adress: 0x00D8F6A7    String: "VideoService: failure decoding audio"
  * Adress: 0x00D8F746    String: "VideoService: failure decoding video"
  * Adress: 0x00D8F817    String: "VideoService: alloc failure during decoding audio"
  * Adress: 0x00D8F921    String: "VideoService: alloc failure during decoding video"
  * Adress: 0x00D8F978    String: "VideoService: failure decoding audio"
  * Adress: 0x00D8FA64    String: "VideoService: failure decoding video"
  * Adress: 0x00D8FD2B    String: "VideoStream::renderStep fill buffers"
  * Adress: 0x00D908D9    String: "Failed to seek in video stream"
  * Adress: 0x00D909AE    String: "Failed to seek in audio stream"
  * Adress: 0x00D90B0D    String: "VideoStream::setUpCodec"
  * Adress: 0x00D90B95    String: "Failure setting codec parameters"
  * Adress: 0x00D90BED    String: "Failure opening codec"
  * Adress: 0x00D90C11    String: "Bad codec parameters"
  * Adress: 0x00D90D54    String: "VideoStream::startAudioRendering"
  * Adress: 0x00D910A1    String: "Failed to allocate audio channel"
  * Adress: 0x00D911AF    String: "VideoStream::stopAudioRendering"
  * Adress: 0x00D9140D    String: "VideoStream::terminateVideoLibraries"
  * Adress: 0x00DA8D95    String: "Spatial Filter - filtering incorrect assembly: %p - Filter Phase: %d"
  * Adress: 0x00DF2D6D    String: "BoxSelectCommand created: %p"
  * Adress: 0x00DF3A92    String: "BoxSelectCommand destriyed: %p"
  * Adress: 0x00E03F37    String: "Attachment Dragger Tool created: %p"
  * Adress: 0x00E04232    String: "Attachment Dragger Tool destroyed: %p"
  * Adress: 0x00E13E70    String: "Gui:CameraPanLeft"
  * Adress: 0x00E13F00    String: "Gui:CameraPanRight"
  * Adress: 0x00E13F90    String: "Gui:CameraTildDown"
  * Adress: 0x00E14020    String: "Gui:CameraTiltUp"
  * Adress: 0x00E1411E    String: "Gui:CameraZoomExtents"
  * Adress: 0x00E14B20    String: "Gui:CameraZoomIn"
  * Adress: 0x00E14BB0    String: "Gui:CameraZoomOut"
  * Adress: 0x00E14E0C    String: "Gui:DeleteBase"
  * Adress: 0x00E151A7    String: "Gui:JoinCommand"
  * Adress: 0x00E1536A    String: "Gui:MoveDownSelection"
  * Adress: 0x00E1549A    String: "Gui:MoveUpSelection"
  * Adress: 0x00E15620    String: "Gui:Reset"
  * Adress: 0x00E1568B    String: "Gui:RotateAxis"
  * Adress: 0x00E157B0    String: "Gui:Run"
  * Adress: 0x00E15869    String: "Gui:SelectChildrenOfSelection"
  * Adress: 0x00E15B99    String: "Gui:SnapSelection"
  * Adress: 0x00E15CB0    String: "Gui:Stop"
  * Adress: 0x00E808FF    String: "AnalyticsService can only accept valid UTF-8 characters."
  * Adress: 0x00E8B21E    String: "Commit Failure: %s - unexpected scriptGuid: %s"
  * Adress: 0x00E8C01E    String: "Commit: Finalize"
  * Adress: 0x00E8EFDE    String: "Commit: Finalize"
  * Adress: 0x00E8F857    String: "int64_t conversion failure: not a valid number"
  * Adress: 0x00EB10A9    String: "Error while parsing ab-test enrollment response JSON: negative variation."
  * Adress: 0x00EB1197    String: "Failed to parse get-enrollment response JSON. Got an unexpected Variation value."
  * Adress: 0x00EB1839    String: "Failed to parse enroll response JSON. The subjectTargetId is not a number."
  * Adress: 0x00EB1C05    String: "ABTests - browserTrackerInitializationError"
  * Adress: 0x00EB1CC5    String: "ABTests - browserTrackerRequestPending"
  * Adress: 0x00EB1D85    String: "ABTests - browserTrackerRequestTimedOut"
  * Adress: 0x00EB1E45    String: "ABTests - browserTrackerShutOff"
  * Adress: 0x00EB1F3C    String: "clearUserVariations: setting user-variants to CONTROL, setting initialized to false, setting loading status to None"
  * Adress: 0x00EB25DB    String: "Failed to parse enroll response JSON. Got an unexpected SubjectType value."
  * Adress: 0x00EB285A    String: "Failed to parse JSON. The JSON document was empty."
  * Adress: 0x00EB28C9    String: "Failed to parse JSON. The initial parsing failed."
  * Adress: 0x00EB29BD    String: "Failed to parse JSON. The initial parsing failed."
  * Adress: 0x00EB2ABC    String: "Failed to parse JSON."
  * Adress: 0x00EB2B83    String: "Attempt to access undefined ABTest: %s"
  * Adress: 0x00EB2DB1    String: "ABTests - initializeBrowserTrackerTestsEx succeeded, setting initialized to true, and status to Initialized"
  * Adress: 0x00EB2E3C    String: "ABTests - initializeBrowserTrackerTestsEx json parse error"
  * Adress: 0x00EB2F7F    String: "ABTests - initializeUserTests succeeded, setting initialized to true, and signalling listeners"
  * Adress: 0x00EB2FBE    String: "ABTests - initializeUserTests json parse error"
  * Adress: 0x00EB3920    String: "ABTests - userInitializationError"
  * Adress: 0x00EB3989    String: "ABTests - userRequestPending"
  * Adress: 0x00EB3A60    String: "ABTests - userRequestTimedOut"
  * Adress: 0x00EB3AB0    String: "ABTests - userShutOff"
  * Adress: 0x00F290FA    String: "ScreenTime was unable to communicate with a dependency of the system"
  * Adress: 0x00F29137    String: "ScreenTime client got invalid instructions"
  * Adress: 0x00F29175    String: "ScreenTime status: Normal"
  * Adress: 0x00F29233    String: "ScreenTime client ignored this stale response"
  * Adress: 0x00F2933B    String: "ScreenTime cached status: Normal"
  * Adress: 0x00F295F7    String: "ScreenTime status: Warning or Lockout"
  * Adress: 0x00F2CE66    String: "SingleSurfaceApp::handleLowMemoryWarning - FREE mem: %ld"
  * Adress: 0x00F458FE    String: "PlaceLauncher deleteRobloxView: delete rbxView."
  * Adress: 0x00F46CEC    String: "PlaceLauncher.ashx(request took %4.2fms) response:[%s]"
  * Adress: 0x00F4756E    String: "PlaceLauncher prepareGame - START"
  * Adress: 0x00F475A2    String: "Hello from machinamentum!"
  * Adress: 0x00F47896    String: "PlaceLauncher prepareGame - END"
  * Adress: 0x00F481AD    String: "PlaceLauncher setupGame"
  * Adress: 0x00F4845A    String: "Game's base URL: %s"
  * Adress: 0x00F48C7A    String: "PlaceLauncher startGame: targetGameEntry = %d."
  * Adress: 0x00F49738    String: "TeleportService is null."
  * Adress: 0x00F625D4    String: "UGCGameController:: DataModel was closed. Stop Teleport processing!"
  * Adress: 0x00F644EF    String: "UGCGameController::doTeleport: url: %s"
  * Adress: 0x00F64526    String: "UGCGameController::doTeleport: ticket: %s"
  * Adress: 0x00F67276    String: "UGCGameController::joinGame"
  * Adress: 0x00F6E2C6    String: "LuaAppController: initialize:"
  * Adress: 0x00F72EED    String: "RobloxView RobloxView:CONSTRUCTOR"
  * Adress: 0x00F734F1    String: "RobloxView completeViewPrep: view is NULL. Done."
  * Adress: 0x00F73FCC    String: "RobloxView create_view"
  * Adress: 0x00F7763D    String: "LuaApp memory for category: %s, usage: %4.2f"
  * Adress: 0x00F77D2A    String: "LuaApp memory for category: %s, usage: %4.2f"
  * Adress: 0x00F797C3    String: "Starting collect and post stats timer"
  * Adress: 0x00F79BB8    String: "Stopping collect and post stats timer"
  * Adress: 0x00F8F849    String: "Influx[%s]"
  * Adress: 0x00F8F85F    String: "Influx[%s]"
  * Adress: 0x00F910C0    String: "==== Memory Pressure Reset lastLevel: %u freeMB: %6.2f usedMB: %6.2f"
  * Adress: 0x00F96DC7    String: "LocalStorage invalid json, not an object"
  * Adress: 0x00F96E81    String: "LocalStorage invalid json member, not a std::string"
  * Adress: 0x00F96FBB    String: "LocalStorage failed to open file for loading: %s"
  * Adress: 0x00FA69CC    String: "GetLogicalProcessorInformation is not supported."
  * Adress: 0x00FA6A8C    String: "Error: Allocation failure"
  * Adress: 0x00FA6AAD    String: "Error %d"
  * Adress: 0x00FDAF8C    String: "CSGOperations2::asyncOperation: error: loaded asset is not a PartOperationAsset"
  * Adress: 0x00FDCA6C    String: "CSGOperations: evaluateInstanceTree: specialShape: unknown type"
  * Adress: 0x00FDCAB9    String: "CSGOperations: evaluateInstanceTree: plain PartInstance"
  * Adress: 0x00FDCB13    String: "CSGOperations: primitive transformation matrix:"
  * Adress: 0x00FDCE0A    String: "csgTreeForInstance: instance is not a union, negate or partInstance."
  * Adress: 0x00FDD8D0    String: "CSGAssetFetchContinuator: forked!"
  * Adress: 0x00FDDF22    String: "instanceTransform: unsupported primitive type"
  * Adress: 0x00FDE217    String: "CSGAssetFetchContinuator: forked!"
  * Adress: 0x00FDE45D    String: "CSGAssetFetchContinuator: all joined, success!"
  * Adress: 0x00FE02B7    String: "csgEvaluate: encountered a nil (-1) node in the tree"
  * Adress: 0x00FE039E    String: "csgEvaluate: encountered a nil (-1) node in the tree"
  * Adress: 0x00FE03E5    String: "csgEvaluate: encountered a nil (-1) node in the tree"
  * Adress: 0x00FE0EA9    String: "collapsePass %zu"
  * Adress: 0x00FE1802    String: "triangleLimit %zu for lod level %zu
  "
  * Adress: 0x00FE1844    String: "newTriangulate: vertexAttributes failed: err %d"
  * Adress: 0x00FE5DAC    String: "orientation: supplied point is not valid"
  * Adress: 0x00FE5DDF    String: "a: %e %e %e %e"
  * Adress: 0x00FE5F14    String: "d: %e %e %e %e"
  * Adress: 0x00FE6E0F    String: "createPrimitive2: unhandled primitive %d"
  * Adress: 0x00FEB5F2    String: "treeMerge: unknown csgop %d"
  * Adress: 0x00FEBFB1    String: "planesForVertex: orientation returns unknown value %d"
  * Adress: 0x00FEC23B    String: "triangulateFaces: %zd duplicates"
  * Adress: 0x00FEFE82    String: "extractTriangleMesh: degenerate face, edges %d,%d"
  * Adress: 0x010A3945    String: "RenderView created - %p"
  * Adress: 0x010A4344    String: "RenderView destroyed"
  * Adress: 0x010AB796    String: "Render perform start"
  * Adress: 0x010AD881    String: "Render prepare end"
  * Adress: 0x010B855C    String: "Future is bright shadows"
  * Adress: 0x010C6DA0    String: "RTPool: width %u height %u miplevels %u format %u count %u"
  * Adress: 0x010D3560    String: "TC Job texture: %s"
  * Adress: 0x010D443D    String: "TC Device lost"
  * Adress: 0x010D4BE7    String: "TC Job[%p]: texture blit (width %d) took %d us"
  * Adress: 0x010D59D7    String: "TC Job[%p]: start loading assets (priority %f)"
  * Adress: 0x010D5DB9    String: "TC Job[%p]: orphaning job (no materials)"
  * Adress: 0x010D9C5A    String: "Abandoning image %s because TextureManager is dead"
  * Adress: 0x010DA7FB    String: "Cancelling image %s upon request"
  * Adress: 0x010DC067    String: "Image requested: %s"
  * Adress: 0x010DD275    String: "Abandoning image %s because TextureManager is dead"
  * Adress: 0x010DD4FD    String: "Abandoning image %s because TextureManager is dead"
  * Adress: 0x010DF288    String: "[%4d] %32s *** Nothing to do as texture was not loaded ***"
  * Adress: 0x010E342F    String: "Mesh manager: decoded (ModelMesh)"
  * Adress: 0x010E4E5D    String: "Mesh manager: gc unloaded (%d) '%s' (mem %u / %u kb)"
  * Adress: 0x010E8C76    String: "Mesh manager: '%s' - bad index data"
  * Adress: 0x011020E8    String: "AdvSky Compute: waiting for jobs"
  * Adress: 0x011021B2    String: "AdvSky Compute: processing"
  * Adress: 0x01102769    String: "AdvSky Compute: processing complete"
  * Adress: 0x011027F0    String: "AdvSky Compute: quit signaled"
  * Adress: 0x0110337D    String: "AdvSky: kDirtySky: all textures ready"
  * Adress: 0x011033F6    String: "AdvSky: kDirtySun: texture ready"
  * Adress: 0x011034EA    String: "AdvSky: kDirtyMoon: texture ready"
  * Adress: 0x01103651    String: "AdvSky: kComputeWait: ready, uploading the VB"
  * Adress: 0x011036B2    String: "AdvSky: kDirtyProps: kicking off the updater"
  * Adress: 0x0113D5D4    String: "notifyAwake, adding cluster %p to dynamic nodes"
  * Adress: 0x0113FC71    String: "Updating entity on part cluster: %p"
  * Adress: 0x0113FCF5    String: "Invalidated entities: %u"
  * Adress: 0x0114138E    String: "Updating invalidated local cluster %p"
  * Adress: 0x01141C4A    String: "Scene updater %p - resetting all clusters"
  * Adress: 0x01141EB5    String: "Scene updater finish"
  * Adress: 0x0114FC18    String: "Geometry: %d vertices, %d solid indices, %d water indices"
  * Adress: 0x0115801C    String: "entity 0x%p purged."
  * Adress: 0x011580B5    String: "cluster 0x%p dies"
  * Adress: 0x011582DA    String: "entity 0x%p dies"
  * Adress: 0x01158B67    String: "binding (decal) 0x%p spawns"
  * Adress: 0x0115B6C4    String: "entity 0x%p syncing buffers"
  * Adress: 0x0115B751    String: "entity 0x%p syncing shadow buffers"
  * Adress: 0x0115B96C    String: "cluster 0x%p queued for oob syncbuffers"
  * Adress: 0x0115BFE2    String: "cluster 0x%p scheduled for termination"
  * Adress: 0x01182710    String: "Out of bounds decoded mesh indices"
  * Adress: 0x011A760F    String: "notifyAwake, adding cluster %p to dynamic nodes"
  * Adress: 0x011AA02D    String: "Updating entity on part cluster: %p"
  * Adress: 0x011AA085    String: "Invalidated entities: %u"
  * Adress: 0x011AB970    String: "Updating invalidated local cluster %p"
  * Adress: 0x011AC2CA    String: "Scene updater %p - resetting all clusters"
  * Adress: 0x011AC535    String: "Scene updater finish"
  * Adress: 0x011B6A30    String: "FastCluster[%p]: priorityInvalidateEntity"
  * Adress: 0x011B6EB3    String: "FastCluster[%p]: destroy (no more parts)"
  * Adress: 0x011EC3B0    String: "FastCluster[%p]: priorityInvalidateEntity"
  * Adress: 0x011EC7CB    String: "FastCluster[%p]: destroy (no more parts)"
  * Adress: 0x0120365D    String: "Step Time, HTTP B/W, RakNet B/W, Overall B/W"
  * Adress: 0x01203688    String: "Player Configured"
  * Adress: 0x012059F7    String: "Locale2Id"
  * Adress: 0x0120CDB9    String: "Avatar Load"
  * Adress: 0x0120E60F    String: "======== Join Times ======="
  * Adress: 0x0120EA04    String: "======== Join Times (Delta) ======="
  * Adress: 0x01210297    String: "OnDisconnect http req time:%.2fms%s"
  * Adress: 0x012102BF    String: "OnDisconnect http req time:%.2fms%s"
  * Adress: 0x01210D72    String: "Game Loaded"
  * Adress: 0x012110E4    String: "Game Join"
  * Adress: 0x01211A33    String: "Received Globals"
  * Adress: 0x01221C81    String: "Client received ID_CONNECTION_REQUEST_ACCEPTED successfully"
  * Adress: 0x01222A47    String: "Client:Disconnect"
  * Adress: 0x01223C49    String: "Client:Disconnect"
  * Adress: 0x0122455C    String: "Client will attempt to connect following server endpoints with threadSleepTime(%d)"
  * Adress: 0x012252BD    String: "Connecting to server, IP(inet_addr): %u Port: %d"
  * Adress: 0x01225C2B    String: "Reporting per server(%s:%d) metric to influx: %s."
  * Adress: 0x0122B58D    String: "Can't recv protected bytecode due to missing SessionCrypto."
  * Adress: 0x0122CB93    String: "Can't recv protected bytecode due to missing SessionCrypto."
  * Adress: 0x0122E83D    String: "Can't send protected bytecode due to missing SessionCrypto."
  * Adress: 0x0122F69B    String: "Can't send protected bytecode due to missing SessionCrypto."
  * Adress: 0x01230830    String: "Can't send protected bytecode due to missing SessionCrypto."
  * Adress: 0x01233C79    String: "Replicator created: %p"
  * Adress: 0x012359D2    String: "Replicator destroyed: %p"
  * Adress: 0x0123A282    String: "Exception during cluster out step, request disconnect"
  * Adress: 0x0123ACD4    String: "Exception during data out step, request disconnect"
  * Adress: 0x012504E2    String: "SessionCrypto could not create tag for protected hash"
  * Adress: 0x01255C17    String: "initialSpawnName: %s"
  * Adress: 0x012564CC    String: "Player Creation Error"
  * Adress: 0x01256A10    String: "Error on ServerReplicator::OnReceive: %s"
  * Adress: 0x01258770    String: "ServerReplicator:InstallRemotePlayer - LoadCharacter"
  * Adress: 0x0125C4FD    String: "Disconnecting because got prefetch request but not streaming enabled."
  * Adress: 0x0125C974    String: "RequestCharacter - could not resolve RemotePlayer"
  * Adress: 0x0125E4EA    String: "ServerReplicator:sendTop - begin"
  * Adress: 0x0125E809    String: "Serializing Instances and preparing blobs for JoinDataItemV2"
  * Adress: 0x012630C8    String: "NetworkServer:Create"
  * Adress: 0x01263364    String: "NetworkServer:Destroy"
  * Adress: 0x01263F04    String: "NetworkServer:NewIncomingConnection"
  * Adress: 0x012642F2    String: "On receive packet %d"
  * Adress: 0x012658E7    String: "NetworkServer:Stop blockDuration(%d)"
  * Adress: 0x01266988    String: "NetworkServer:Stop blockDuration(%d)"
  * Adress: 0x012699AC    String: "Closing connection internally"
  * Adress: 0x01269D78    String: "RakNet: Connect requested with attempt count %u , time between attempts %u"
  * Adress: 0x0126E0D0    String: "RakPeer is NOT active, returning"
  * Adress: 0x0126E692    String: "PacketReturnQueue is empty, no work to do"
  * Adress: 0x01287076    String: "childrenWaitingForTheirTurn Not empty at the end of Join. Dumping items in the map. Assert coming up..."
  * Adress: 0x012872F3    String: "orderedChildrenWaitingForTheirTurn Not empty at the end of Join. Dumping items in the map. Assert coming up..."
  * Adress: 0x0128B721    String: "Not enough memory to request more parts: %u free, %u additional required"
  * Adress: 0x01290CFD    String: "Checked %u regions before finding uncollected region."
  * Adress: 0x0129108C    String: "Skipping part %s because parent not replicated"
  * Adress: 0x01291180    String: "Collected %u instances"
  * Adress: 0x012A3F75    String: "getaddrinfo(...) failed:Error code - %d
  "
  * Adress: 0x012A3FE8    String: "1.bind__(...) failed:Error code - %d
  "
  * Adress: 0x012A4128    String: "bind failed:Error : %d - %s
  "
  * Adress: 0x012A4A93    String: "sendto failed with code %i for char %i and length %i.errno %s"
  * Adress: 0x012A4B20    String: "getsockname returned errno 0x%x"
  * Adress: 0x012A4B5C    String: "getsockname returned errno 0x%x"
  * Adress: 0x012B2E10    String: "%s(%s) computed local replicated %d out of %d"
  * Adress: 0x012CE84B    String: "ReplicationDataCache::Finalize curBlob %p, compressedStream=%p, numOfRawBytes=%d, numOfCompressedBytes=%d, numOfInstances=%d  "
  * Adress: 0x012CEE45    String: "ReplicationDataCache::generateDataBlobs : serializing and creating blobs for part instances"
  * Adress: 0x012CEF4B    String: "ReplicationDataCache::generateDataBlobs : serializing and creating blobs for non-cacheable instances"
  * Adress: 0x012D7B5A    String: "ReplicationDataCache::generateDataBlobs : serializing and creating blob for sharedStrings"
  * Adress: 0x012D81EC    String: "Discarding join instance due to null local descriptor (schema diff)"
  * Adress: 0x012D83A8    String: "Expecting %d instances"
  * Adress: 0x012D85D2    String: "No more invalid caches in blob"
  * Adress: 0x012D886F    String: "Done reading join instance %s offset=%X bytes with numOfChildren=%d, indexInParent=%d"
  * Adress: 0x012E1A39    String: "characterOutsideStreamedArea changed to true."
  * Adress: 0x012E2F3D    String: "GCing instance %s as part of gcing region (%d,%d,%d)"
  * Adress: 0x012E60C3    String: "characterOutsideStreamedArea changed to false."
  * Adress: 0x012E770D    String: "Changed streamed in radius to %d based on server metadata"
  * Adress: 0x012E784A    String: "Changed streamed in radius to %d based on prefetch info"
  * Adress: 0x012E78C0    String: "Player is paused, but has no streaming focus."
  * Adress: 0x012E7EB9    String: "Leaving paused state"
  * Adress: 0x012E80BD    String: "No replication focus"
  * Adress: 0x012E80F2    String: "No player found"
  * Adress: 0x012F97D8    String: "SignalR connection stopped successfully"
  * Adress: 0x012F98C9    String: "SignalR disconnected, message: %s"
  * Adress: 0x012F9912    String: "SignalR is closing, message: %s"
  * Adress: 0x012F9951    String: "SignalR is connecting, message: %s"
  * Adress: 0x012F9989    String: "SignalR succesfully connected"
  * Adress: 0x012FB4AD    String: "SignalR connection reconnecting"
  * Adress: 0x012FCA3A    String: "SignalR connection disconnected"
  * Adress: 0x012FCB8C    String: "SignalR notification event is not an array"
  * Adress: 0x012FCF98    String: "SignalR hub proxy subscription status event size has unsupported number of entries."
  * Adress: 0x012FD3C4    String: "SignalR connection started successfully"
  * Adress: 0x012FD65C    String: "SignalR subscription event is not an array"
  * Adress: 0x012FD868    String: "SignalR namespace sequence numbers is not an object"
  * Adress: 0x012FE118    String: "SignalR starting connection"
  * Adress: 0x012FE791    String: "SignalR Connection is NULL"
  * Adress: 0x012FEDA1    String: "SignalR starting connection"
  * Adress: 0x012FEE14    String: "SignalR heartbeat was already created."
  * Adress: 0x012FF040    String: "SignalR stopping connection"
  * Adress: 0x01300B56    String: "signalr: cannot open when websocket connection is null, must setup websocket"
  * Adress: 0x01301CEB    String: "signalr: cannot start() unless connection is disconnected"
  * Adress: 0x01302033    String: "signalr: cannot close when websocket connection is null, must setup websocket"
  * Adress: 0x013023E1    String: "signalr: recv ws message: %s"
  * Adress: 0x01302460    String: "signalr: error parsing json mesage: %s"
  * Adress: 0x013024ED    String: "signalr: connect response is not ok: %s"
  * Adress: 0x013025CE    String: "signalr: could not parse inner message in websocket message: %s"
  * Adress: 0x01302632    String: "signalr: could not parse message id in websocket message: %s"
  * Adress: 0x013028C8    String: "signalr: no subscription for method %s"
  * Adress: 0x01302961    String: "signalr: no subscriptions found for hub %s"
  * Adress: 0x013029F6    String: "signalr: could not parse arguments in websocket message: %s"
  * Adress: 0x01302A10    String: "signalr: could not parse method in websocket message: %s"
  * Adress: 0x01302A2A    String: "signalr: could not parse hub name in websocket message: %s"
  * Adress: 0x01302B24    String: "signalr: received msg of type: %d, it is for connection updates and should not be consumed"
  * Adress: 0x013D624A    String: "FastBackoff, reducing quality"
  * Adress: 0x01434AE2    String: "Attempt to modify a readonly table"
  * Adress: 0x01434BB1    String: "Attempt to modify a readonly table"
  * Adress: 0x01434D45    String: "no calling environment"
  * Adress: 0x01434FD5    String: "Attempt to modify a readonly table"
  * Adress: 0x01436A6A    String: "cannot resume non-suspended coroutine"
  * Adress: 0x01436B7A    String: "cannot resume non-suspended coroutine"
  * Adress: 0x01436CA4    String: "attempt to yield across metamethod/C-call boundary"
  * Adress: 0x0144141F    String: "index out of range"
  * Adress: 0x014415C9    String: "'__tostring' must return a string"
  * Adress: 0x0144165D    String: "nil or boolean"
  * Adress: 0x014427A3    String: "too many results to unpack"
  * Adress: 0x01442886    String: "size out of range"
  * Adress: 0x01442943    String: "index out of range"
  * Adress: 0x014429A3    String: "Attempt to modify a readonly table"
  * Adress: 0x01442D3F    String: "invalid order function for sorting"
  * Adress: 0x01442D55    String: "invalid order function for sorting"
  * Adress: 0x014439E7    String: "string contains zeros"
  * Adress: 0x014439FE    String: "integer overflow"
  * Adress: 0x01443A17    String: "unsigned overflow"
  * Adress: 0x01443A32    String: "string longer than given size"
  * Adress: 0x01443A49    String: "string length does not fit in given size"
  * Adress: 0x01443B19    String: "variable-length format"
  * Adress: 0x01443B31    String: "format result too large"
  * Adress: 0x01443D91    String: "initial position out of string"
  * Adress: 0x01443DA9    String: "data string too short"
  * Adress: 0x01443DC1    String: "unfinished string for format 'z'"
  * Adress: 0x01443DD9    String: "data string too short"
  * Adress: 0x0144455B    String: "string/function/table"
  * Adress: 0x01444A09    String: "invalid format (width or precision too long)"
  * Adress: 0x01444A21    String: "invalid format (repeated flags)"
  * Adress: 0x01444DCD    String: "invalid replacement value (a %s)"
  * Adress: 0x01444DE5    String: "invalid use of '%c' in replacement string"
  * Adress: 0x01444E5D    String: "malformed pattern (missing ']')"
  * Adress: 0x01444F70    String: "invalid next option for option 'X'"
  * Adress: 0x01444F89    String: "format asks for alignment not power of 2"
  * Adress: 0x01444FF7    String: "size specifier is too large"
  * Adress: 0x014451E7    String: "invalid format option '%c'"
  * Adress: 0x01445202    String: "missing size for format option 'c'"
  * Adress: 0x014458FC    String: "pattern too complex"
  * Adress: 0x01445914    String: "malformed pattern (missing arguments to '%%b')"
  * Adress: 0x0144592C    String: "missing '[' after '%%f' in pattern"
  * Adress: 0x01445E53    String: "unfinished capture"
  * Adress: 0x01445E6B    String: "invalid capture index"
  * Adress: 0x01445EEC    String: "invalid capture index"
  * Adress: 0x01445F04    String: "unfinished capture"
  * Adress: 0x01445F5A    String: "too many captures"
  * Adress: 0x01446CFA    String: "position out of range"
  * Adress: 0x01446D14    String: "initial position is a continuation byte"
  * Adress: 0x0144781E    String: "wrong number of arguments"
  * Adress: 0x01447834    String: "interval is empty"
  * Adress: 0x0144784C    String: "interval is empty"
  * Adress: 0x01449E0E    String: "table index is nil"
  * Adress: 0x01449E26    String: "table index is NaN"
  * Adress: 0x0144A758    String: "table overflow"
  * Adress: 0x0144AE87    String: "string length overflow"
  * Adress: 0x0144B176    String: "get length of"
  * Adress: 0x01460A2F    String: "rv_debug_memory_dump"
  * Adress: 0x01460ABD    String: "rv_debug_memory_num_allocations"
  * Adress: 0x01460DB4    String: "rv_frame_unref"
  * Adress: 0x0146169D    String: "rv_packet_unref"
  * Adress: 0x0146176D    String: "rvcodec_close"
  * Adress: 0x0146183D    String: "rvcodec_flush_buffers"
  * Adress: 0x014619BD    String: "rvcodec_open2"
  * Adress: 0x01461ABD    String: "rvcodec_parameters_to_context"
  * Adress: 0x01461B6D    String: "rvcodec_receive_frame"
  * Adress: 0x01461CED    String: "rvcodec_send_packet"
  * Adress: 0x014626CD    String: "vpx_flush"
  * Adress: 0x01462B5D    String: "vorbis_flush"
  * Adress: 0x01462E5F    String: "vorbis_receive_frame"
  * Adress: 0x0146317D    String: "opus_close"
  * Adress: 0x0146322D    String: "opus_flush"
  * Adress: 0x014632D4    String: "opus_init"
  * Adress: 0x0146341D    String: "opus_on_alloc"
  * Adress: 0x0146346D    String: "opus_on_free"
  * Adress: 0x014634AF    String: "opus_receive_frame"
  * Adress: 0x014635FF    String: "opus_send_packet"
  * Adress: 0x01464D6D    String: "webm_close_input"
  * Adress: 0x01464E04    String: "webm_open_input"
  * Adress: 0x0146529F    String: "webm_read_packet"
  * Adress: 0x01465367    String: "webm_read_seek2"
  * Adress: 0x015F31CD    String: "ResetPlaceFilteredVariables resetting %s to %s"
  * Adress: 0x015F3D1A    String: "Invalid value setting Fint variable %s: variable unchanged"
  * Adress: 0x015F3EAF    String: "Invalid value setting FFlag variable %s"
  * Adress: 0x015FDDFD    String: "RBXCRASH: %s"
  * Adress: 0x015FDE38    String: "RBXCRASH"
  * Adress: 0x01A15BD8    String: "[LMS] (post-app-event) event: %d."
  * Adress: 0x01A15C3F    String: "[LMS] (post-app-event) ... stop app timer"
  * Adress: 0x01A15C83    String: "[LMS] (post-app-event) Unsupported event: %d."
  * Adress: 0x01A15CBB    String: "[LMS] (post-app-event) ... start app timer"
  * Adress: 0x01A2BD94    String: "[LMS] (get-recipe) Failed to parse the HTTP response."
  * Adress: 0x01A2BDE9    String: "[LMS] (process-recipe)"
  * Adress: 0x01A2BE63    String: "[LMS] (process-recipe) ... zero 'pulses'. Stop processing."
  * Adress: 0x01A2BE8E    String: "[LMS] (back-to-idle) report submitted:%d"
  * Adress: 0x01A2BF4F    String: "[LMS] (back-to-idle) report submitted:%d"
  * Adress: 0x01A2C0BA    String: "[LMS] (back-to-idle) report submitted:%d"
  * Adress: 0x01A2C6EB    String: "[LMS] (get-recipe)"
  * Adress: 0x01A2D7D1    String: "[LMS] (parse-recipe) The input string was not an JSON object."
  * Adress: 0x01A2DB83    String: "[LMS] (parse-recipe) 'targets' was not an JSON array."
  * Adress: 0x01A3E4C2    String: "GL Renderer: %s"
  * Adress: 0x01A3F9E0    String: "GL Debug: %s"
  * Adress: 0x01A40E37    String: "D3D9 GPU: %s"
  * Adress: 0x01A4190E    String: "D3D9 HWVP device created"
  * Adress: 0x01A41928    String: "D3D9 HWVP device creation failed: %x"
  * Adress: 0x01A4196F    String: "D3D9 SWVP device created"
  * Adress: 0x01A419A4    String: "D3D9 SWVP device creation failed: %x"
  * Adress: 0x01A42674    String: "D3D Frame query timed out, resetting"
  * Adress: 0x01A42DFB    String: "ERROR: Device reset failed; will try again next frame"
  * Adress: 0x01A42E37    String: "ERROR: TestCooperativeLevel succeeds even though device is lost; skipping frame"
  * Adress: 0x01A42E6C    String: "Device lost; releasing resources"
  * Adress: 0x01A42EBD    String: "Device not reset without being lost; releasing resources"
  * Adress: 0x01A42F42    String: "ERROR: Device reset failed; will try again next frame"
  * Adress: 0x01A42F5E    String: "ERROR: Unknown device error %x; skipping frame"
  * Adress: 0x01A44A7D    String: "WARNING: D3D Frame query timed out, has device hung?"
  * Adress: 0x01A44D23    String: "[%s][%s] %s
  "
  * Adress: 0x01A4537F    String: "D3D11 FATAL ERROR: Device removed with reason %x"
  * Adress: 0x01A46B5E    String: "Vulkan Device: %s"
  * Adress: 0x01A49E19    String: "VULKAN %s: [%s] %s"
  * Adress: 0x01A4BAFF    String: "Vulkan: Device %s is blacklisted, skipping"
  * Adress: 0x01A4BB2A    String: "Vulkan: Device %s is incompatible, skipping"
  * Adress: 0x01A4BF5B    String: "Vulkan: destroying window frame buffer"
  * Adress: 0x01A4C0A6    String: "Vulkan: destroying window frame buffer"
  * Adress: 0x01A574B5    String: "Failed to lock texture: %x"
  * Adress: 0x01A5786B    String: "Failed to lock texture: %x"
  * Adress: 0x01A656A1    String: "Vulkan: Skipping pipeline cache (%d bytes) since validation failed"
  * Adress: 0x01A656F7    String: "Vulkan: Failed to create pipeline cache from loaded data, clearing cache"
  * Adress: 0x01A671E1    String: "ERROR: Compute state object creation failed with code %d"
  * Adress: 0x01A68309    String: "ERROR: Pipeline state object creation failed with code %d"
  * Adress: 0x01A6A8A0    String: "VR: %s"
  * Adress: 0x01A6B058    String: "VR: Exiting due to external request"
  * Adress: 0x01A6B09B    String: "VR: Recentering due to external request"
  * Adress: 0x005CF524    String: "WebLogin SetBTID failed"
  * Adress: 0x005DF7EF    String: "CMainFrame::ShareHwnd wnd=%d"
  * Adress: 0x005E59AE    String: "Setting up ImmHandler"
  * Adress: 0x005E6AF2    String: "Updating IME window to enabled"
  * Adress: 0x005E6C33    String: "Disabling IME window"
  * Adress: 0x005E6F1A    String: "WM_IME_ENDCOMPOSITION"
  * Adress: 0x005E6F90    String: "WM_IME_STARTCOMPOSITION"
  * Adress: 0x005E8BBB    String: "RAWINPUT pointer is null"
  * Adress: 0x005E8C13    String: "RIM_TYPEKEYBOARD - shouldSinkKeyboard() returned true"
  * Adress: 0x005E8C4E    String: "RIM_TYPEKEYBOARD - continue"
  * Adress: 0x005ED401    String: "The channel is %s"
  * Adress: 0x005F09D1    String: "Unknown javascript error"
  * Adress: 0x005F0EB6    String: "BrowserServiceDiagnose RbxWebView2::onNavigateComplete spCustomDoc->SetUIHandler(this)"
  * Adress: 0x005F1542    String: "Cannot get web doc object"
  * Adress: 0x005F1594    String: "Cannot get the in place object of web doc"
  * Adress: 0x005F15D4    String: "Cannot set web view area"
  * Adress: 0x005F1E7C    String: "BrowserServiceDiagnose RbxWebView2::onWindowClosing"
  * Adress: 0x005F392D    String: "Open IE version key failed"
  * Adress: 0x005F39BA    String: "BrowserServiceDiagnose can not find "svcVersion", looking for "Version""
  * Adress: 0x005F3A13    String: "BrowserServiceDiagnose Can not find any IE version information"
  * Adress: 0x005F43CF    String: "create FEATURE_BROWSER_EMULATION failed"
  * Adress: 0x005F4403    String: "can not open FEATURE_BROWSER_EMULATION"
  * Adress: 0x005F446A    String: "can not set or delete IE compatible version"
  * Adress: 0x005F44BE    String: "BrowserServiceDiagnose RbxWebView2::setWindowClosingCallback"
  * Adress: 0x00605674    String: "Alt-enter fullscreen is on, ignoring view-aware fullscreen switch"
  * Adress: 0x006056CC    String: "Entering fullscreen resolution"
  * Adress: 0x0060570B    String: "Exiting fullscreen resolution"
  * Adress: 0x006058B6    String: "Alt-enter fullscreen is on, ignoring view-aware fullscreen switch"
  * Adress: 0x00606081    String: "Done View::goToFullscreenResolution"
  * Adress: 0x0060612D    String: "Start View::restoreResolution"
  * Adress: 0x00606241    String: "Done View::restoreResolution"
  * Adress: 0x0060E1F7    String: "Reflection::load %s"
  * Adress: 0x00619862    String: "Closing crashreporter thread on destroy"
  * Adress: 0x006198C2    String: "Closing softhang thread on destroy"
  * Adress: 0x0061D6CA    String: "HangDetection: Unable to get main thread context"
  * Adress: 0x00625C3D    String: "CreateMutex error: %d"
  * Adress: 0x00625EC5    String: "RobloxCrashDumpUploaderMutex already exists. Not uploading logs."
  * Adress: 0x00626A12    String: "Exception while uploading crash analytics"
  * Adress: 0x006279A7    String: "Not uploading %s because it is a full dump"
  * Adress: 0x00628A53    String: "Uploading %s to %s"
  * Adress: 0x0062ACF6    String: "CrashReporter Start"
  * Adress: 0x006362C6    String: "Http initialization"
  * Adress: 0x00646703    String: "Machine id key: [%s]"
  * Adress: 0x00646A9D    String: "Machine is banned"
  * Adress: 0x00646AB7    String: "Machine is not banned"
  * Adress: 0x006473CB    String: "LoadClientSettingsFromLocal group: "%s""
  * Adress: 0x00647567    String: "LoadClientSettingsFromLocal: Couldn't fetch any data from local"
  * Adress: 0x00648A13    String: "Google analytics lottery number = %d"
  * Adress: 0x0065368E    String: "PointsList::push exceeded DFInt::PointsListMaxDataSize"
  * Adress: 0x0065D66D    String: "Info: %s"
  * Adress: 0x0065D6BA    String: "Error: Standard Message Out set with incorrect MessageType %d"
  * Adress: 0x0066B03D    String: "Warning: will use "%s" for HttpRequest, while default is "%s""
  * Adress: 0x006FE9F3    String: "Firing actionEnabledSignal with type %d"
  * Adress: 0x006FEA43    String: "Firing actionTakenSignal with type %d"
  * Adress: 0x0071CEE3    String: "HttpClient destroy begin"
  * Adress: 0x00722B16    String: "Unknown request type: %d"
  * Adress: 0x00759708    String: "BrowserServiceDiagnose BrowserService::closeBrowserWindow"
  * Adress: 0x0075ABA3    String: "BrowserServiceDiagnose BrowserService::onServiceProvider"
  * Adress: 0x0075B16E    String: "BrowserServiceDiagnose BrowserService::openNativeOverlay"
  * Adress: 0x0075B2CC    String: "BrowserServiceDiagnose BrowserService::openWeChatAuthWindow"
  * Adress: 0x007608E1    String: "SoundEffect::onClosingFmod(%p)"
  * Adress: 0x00766578    String: "avgWorldStepFreq= %f"
  * Adress: 0x007667A9    String: "%4.4f, %4.4f, %4.4f, %4.4f"
  * Adress: 0x0076689A    String: "%4.4f, %4.4f, %4.4f, %4.4f"
  * Adress: 0x0078CA61    String: "Failed to convert the 1st argument to string"
  * Adress: 0x0079DA56    String: "GC Job finish, data model: %p"
  * Adress: 0x0079DB5F    String: "Waiting scripts finish, data model: %p"
  * Adress: 0x0079DCC0    String: "Waiting scripts finish, data model: %p"
  * Adress: 0x007F56F4    String: "Releasing FMOD."
  * Adress: 0x007F93B0    String: "FMOD: %s"
  * Adress: 0x007F9BC1    String: "FMOD DEVICELISTCHANGED"
  * Adress: 0x007F9C0A    String: "FMOD DEVICELOST"
  * Adress: 0x007F9C2B    String: "FMOD MEMORYALLOCATIONFAILED"
  * Adress: 0x007F9C4C    String: "FMOD THREADCREATED"
  * Adress: 0x007F9D00    String: "FMOD THREADDESTROYED"
  * Adress: 0x007F9D35    String: "FMOD unknown callback type:%d"
  * Adress: 0x007F9E13    String: "FMOD RECORDLISTCHANGED"
  * Adress: 0x00816248    String: "Failed url on async fetch: %s"
  * Adress: 0x0081631A    String: "Slow Http request: %s"
  * Adress: 0x008585C7    String: "HttpRequestCurl curl op:%s"
  * Adress: 0x00858667    String: "HttpRequestCurl curl op:%s"
  * Adress: 0x008587A7    String: "HttpRequestCurl curl op:%s"
  * Adress: 0x00858D14    String: "HttpRequestCurl curl op:%s"
  * Adress: 0x00858DA4    String: "HttpRequestCurl curl op:%s"
  * Adress: 0x00858DE8    String: "HttpRequestCurl curl op:%s"
  * Adress: 0x00858E2C    String: "HttpRequestCurl curl op:%s"
  * Adress: 0x00858E68    String: "HttpRequestCurl curl op:%s"
  * Adress: 0x0085974A    String: "Locking mutex for data(%d) on CURL handle %p"
  * Adress: 0x008597AA    String: "Unlocking mutex for data(%d) on CURL handle %p"
  * Adress: 0x0085A899    String: "HttpRequestCurl curl op:%s"
  * Adress: 0x0085AACC    String: "HttpRequestCurl curl op:%s"
  * Adress: 0x0085BEAA    String: "HttpRequestCurl curl op:%s"
  * Adress: 0x008625A6    String: "WeakThreadRef::Node::~Node(), node = %p"
  * Adress: 0x00879D39    String: "Resuming waiting threads"
  * Adress: 0x008D1FEA    String: "async writeCache skipped (accumulated %d bytes)"
  * Adress: 0x008D9199    String: "BatchAssetApi created"
  * Adress: 0x008D9807    String: "BatchAssetApi deleted"
  * Adress: 0x008F96A3    String: "Abandoning video %s because VideoFrame is dead"
  * Adress: 0x008FAAC5    String: "Failed to set TimePosition"
  * Adress: 0x008FAC42    String: "Failed to close video"
  * Adress: 0x00931595    String: "ArrowTool created: %p"
  * Adress: 0x009316C5    String: "ArrowTool created: %p"
  * Adress: 0x0093257B    String: "ArrowTool destroyed: %p"
  * Adress: 0x0097D42C    String: "Controller created - %p"
  * Adress: 0x0097D582    String: "Controller destroyed - %p"
  * Adress: 0x0098C6AA    String: "GuiLayerCollector created: %p"
  * Adress: 0x0098CEF8    String: "GuiLayerCollector destroyed: %p"
  * Adress: 0x009CB949    String: "BasePlayerGui created: %p"
  * Adress: 0x009CC014    String: "BasePlayerGui destroyed: %p"
  * Adress: 0x00A251F3    String: "Empty result string"
  * Adress: 0x00ADA20C    String: "New editor for Script %s: %s"
  * Adress: 0x00ADA280    String: "Current editor %s is different than new editor %s"
  * Adress: 0x00ADA2F2    String: "Players::backendProcessing is TRUE. Players exist: %s"
  * Adress: 0x00ADF5CC    String: "GuiItem created: %p"
  * Adress: 0x00ADF7CD    String: "GuiItem destroyed: %p"
  * Adress: 0x00B06520    String: "Gui:ConnectionHealth"
  * Adress: 0x00B06590    String: "Gui:Stats"
  * Adress: 0x00B06632    String: "Gui:NetworkStats"
  * Adress: 0x00B06740    String: "Gui:PhysicsStats"
  * Adress: 0x00B067E1    String: "Gui:RenderStats"
  * Adress: 0x00B06890    String: "Gui:SummaryStats"
  * Adress: 0x00B06900    String: "Gui:ConnectionHealth"
  * Adress: 0x00B50674    String: "Endpoint match %s found in the table %s"
  * Adress: 0x00B50717    String: "Endpoint match is found in the table %s"
  * Adress: 0x00B51644    String: "Successful request url %s. Removing entry for endpoint %s from throttling table"
  * Adress: 0x00B5185D    String: "Request with url %s will be throttled locally. Endpoint that matched %s requestStartTime %f"
  * Adress: 0x00B518A6    String: "Request with url %s will be NOT throttled locally. Endpoint %s entry %s found. RequestStartTime %f "
  * Adress: 0x00B51BA7    String: "Request with url %s will be throttled locally. Endpoint that matched %s requestStartTime %f"
  * Adress: 0x00B51C61    String: "Request with url %s will be NOT throttled locally. Endpoint %s entry %s found. RequestStartTime %f "
  * Adress: 0x00B99AEA    String: "AppConfiguration::fetch(): response: err = '%d'"
  * Adress: 0x00B9B137    String: "AppConfiguration::reset()"
  * Adress: 0x00B9B31F    String: "AppConfiguration::update()"
  * Adress: 0x00B9B5D1    String: "AppConfiguration::updateConfiguration(): type = %u, userId = %lld"
  * Adress: 0x00B9C3BB    String: "Primitive %p created"
  * Adress: 0x00B9C61F    String: "Primitive %p destroyed"
  * Adress: 0x00BAADB2    String: "FMODPlaybackDSP::release() FMOD did not release dsp"
  * Adress: 0x00C096A0    String: "Joint %p created, prim0: %p, prim1: %p"
  * Adress: 0x00C09858    String: "Joint %p created, empty primitives"
  * Adress: 0x00C09A08    String: "Joint %p created, empty primitives"
  * Adress: 0x00C09AD2    String: "Joint %p destroyed"
  * Adress: 0x00C09B79    String: "Joint %p destroyed"
  * Adress: 0x00C09CEB    String: "Joint %p destroyed"
  * Adress: 0x00C0B848    String: "Joint %p, setting primitive %u to %p"
  * Adress: 0x00C1CFE0    String: "JointInstance %p named"
  * Adress: 0x00C1D00D    String: "Name: %s"
  * Adress: 0x00C32A5D    String: "String contains invalid UTF-8 at start of span"
  * Adress: 0x00C32A76    String: "String contains invalid UTF-8 at start of span"
  * Adress: 0x00C32C2C    String: "String contains invalid UTF-8"
  * Adress: 0x00C3327B    String: "max must be greater than min"
  * Adress: 0x00C335BF    String: "invalid UTF-8 code"
  * Adress: 0x00C335D5    String: "Truncated UTF-8 after end of string"
  * Adress: 0x00C5754D    String: "Rocket created - %p"
  * Adress: 0x00C57E44    String: "Rocket destroyed - %p"
  * Adress: 0x00C75CA6    String: "MegaCluster created - %p"
  * Adress: 0x00C83661    String: "Explosion created - %p"
  * Adress: 0x00C838B9    String: "Explosion destroyed - %p"
  * Adress: 0x00C9DD0A    String: "ABTest - added changed-listener to controller"
  * Adress: 0x00C9DE3A    String: "ABTest - removed changed-listener from controller"
  * Adress: 0x00C9E521    String: "ABTest - Cancelling previous request."
  * Adress: 0x00C9F44D    String: "ABTest - Cancelling previous request."
  * Adress: 0x00C9F53A    String: "ABTest - New request sent."
  * Adress: 0x00CB5270    String: "checkForUpdate(): Skipping update check because no response handler was provided."
  * Adress: 0x00CB5346    String: "checkforUpdate(): No adapter set, so responding NotSupported"
  * Adress: 0x00CB587A    String: "Unable to get script context"
  * Adress: 0x00CB5AA3    String: "performManagedUpdate(): No adapter set. Returning false."
  * Adress: 0x00CBAD0E    String: "AdvLuaDragger - doDrag"
  * Adress: 0x00CBB11E    String: "Done dragging"
  * Adress: 0x00CC3B04    String: "FlagStandService created - %p"
  * Adress: 0x00CC3CC9    String: "FlagStandService destroyed - %p"
  * Adress: 0x00CD7BE6    String: "Animator created - %p"
  * Adress: 0x00CD7ED3    String: "Animator destroyed - %p"
  * Adress: 0x00CDEBC8    String: "Clouds created - %p"
  * Adress: 0x00CDEED4    String: "Somehow removing clouds from non-existing Workspace!"
  * Adress: 0x00CDEF13    String: "Somehow removing clouds from Workspace when none was active!"
  * Adress: 0x00CDEF2D    String: "Removing active clouds from Workspace"
  * Adress: 0x00CDEF64    String: "No active clouds in Workspace"
  * Adress: 0x00CDEFA1    String: "Switching to first other clouds instance found in Workspace"
  * Adress: 0x00CDEFD0    String: "Somehow adding clouds to null Workspace"
  * Adress: 0x00CDEFF7    String: "No active clouds yet - it's going go be me!"
  * Adress: 0x00CDF015    String: "This Clouds already exists and already is active, no action taken"
  * Adress: 0x00CDF032    String: "Other Clouds already exists - this one becomes active, the existing one deactivates"
  * Adress: 0x00D45F27    String: "SignalR won't work if the cookie is empty or invalid"
  * Adress: 0x00D47E5D    String: "MessagingService::lockDataModelHelper weakDataMode.lock() null."
  * Adress: 0x00D49391    String: "parseSignalRError: failed to parse jsonErrorData:[%s]."
  * Adress: 0x00DB4762    String: "IMoving::notifyVisuallyMoved wakes part %p"
  * Adress: 0x00DB479F    String: "IMoving::notifyVisuallyMoved wakes part %p"
  * Adress: 0x00DEA5F9    String: "Surface Tool created: %p"
  * Adress: 0x00DEA65B    String: "Surface Tool destroyed: %p"
  * Adress: 0x00E03C63    String: "Attachment Tool created: %p"
  * Adress: 0x00E03E53    String: "Attachment Tool created: %p"
  * Adress: 0x00E0412D    String: "Attachment Tool destroyed: %p"
  * Adress: 0x00E0FE63    String: "ScriptMouseCommand created: %p"
  * Adress: 0x00E0FF4C    String: "ScriptMouseCommand destroyed: %p"
  * Adress: 0x00E0FFF2    String: "ScriptMouseCommand destroyed: %p"
  * Adress: 0x00E1017C    String: "Unable to initialize libsodium."
  * Adress: 0x00E13BDC    String: "Gui:CameraCenter"
  * Adress: 0x00E15130    String: "Gui:EngineStats"
  * Adress: 0x00E15800    String: "Gui:SelectAll"
  * Adress: 0x00E15D1D    String: "Gui:ToggleViewMode"
  * Adress: 0x00E3252C    String: "Parsing sessionId Error: %s from gameSessionId: %s"
  * Adress: 0x00E53327    String: "RequestDataInQueue::processAfterRequested waitEvent null"
  * Adress: 0x00E5387F    String: "RequestDataInQueue::waitEvent null"
  * Adress: 0x00E538B8    String: "RequestDataInQueue Wait start"
  * Adress: 0x00E53904    String: "RequestDataInQueue Wait returned"
  * Adress: 0x00E56DB2    String: "Mapped %.2f MB font from `%s`"
  * Adress: 0x00E56F33    String: "Read %.2f MB font from `%s`"
  * Adress: 0x00E90674    String: "Commit Failure: %s - VersionHistoryCommitCoordinator destroyed"
  * Adress: 0x00E9297D    String: "Commit Failure: %s - Http transport error (%d) %s"
  * Adress: 0x00E92B64    String: "Commit Failure: %s - Http status error (%d) %s"
  * Adress: 0x00ECA649    String: "Failed to allocate audio channel"
  * Adress: 0x00ECA69D    String: "Unrecognized sample format"
  * Adress: 0x00EE8A1F    String: "ModelTool created: %p"
  * Adress: 0x00EE8A8C    String: "ModelTool destroyed: %p"
  * Adress: 0x00EE92DF    String: "PartTool created: %p"
  * Adress: 0x00EE934C    String: "PartTool destroyed: %p"
  * Adress: 0x00EE96C2    String: "HammerTool created: %p"
  * Adress: 0x00EE979F    String: "HammerTool created: %p"
  * Adress: 0x00EE9812    String: "HammerTool destroyed: %p"
  * Adress: 0x00EE9B78    String: "GrabTool created: %p"
  * Adress: 0x00EE9C71    String: "GrabTool created: %p"
  * Adress: 0x00EE9CE2    String: "GrabTool destroyed: %p"
  * Adress: 0x00EEA3E2    String: "CloneTool created: %p"
  * Adress: 0x00EEA5BF    String: "CloneTool created: %p"
  * Adress: 0x00EEA632    String: "CloneTool destroyed: %p"
  * Adress: 0x00EEAB56    String: "GameTool created: %p"
  * Adress: 0x00EEAC33    String: "GameTool created: %p"
  * Adress: 0x00EEACA2    String: "GameTool destroyed: %p"
  * Adress: 0x00EF8952    String: "ERROR: Cannot init free type library"
  * Adress: 0x00EF89C4    String: "ERROR: FontData is empty"
  * Adress: 0x00EF8A0C    String: "ERROR: Cannot create font face from memory"
  * Adress: 0x00F1366B    String: "PartDragTool created: %p"
  * Adress: 0x00F137E2    String: "PartDragTool destroyed: %p"
  * Adress: 0x00F1BFD8    String: "LuaDragTool created: %p"
  * Adress: 0x00F1C1B2    String: "LuaDragTool destroyed: %p"
  * Adress: 0x00F2737E    String: "ScreenTime got invalid user GUID and create one for local usage"
  * Adress: 0x00F28F42    String: "ScreenTime instruction response is empty"
  * Adress: 0x00F29069    String: "ScreenTime client got invalid error code"
  * Adress: 0x00F290B4    String: "The system was unable to report ScreenTime"
  * Adress: 0x00F290D7    String: "The infrastructure is failing to provide important information for the ScreenTime system to work"
  * Adress: 0x00F2928D    String: "ScreenTime instruction response is not current"
  * Adress: 0x00F2CF4D    String: "restartLuaApp called while playing UGC-game, leaving game."
  * Adress: 0x00F2DCB7    String: "BrowserTrackerIdRequest::[Destructor]"
  * Adress: 0x00F2E0E5    String: "BrowserTrackerIdRequest: Btid found in storage = [%lld]."
  * Adress: 0x00F2E19B    String: "BrowserTrackerIdRequest: request Btid from server..."
  * Adress: 0x00F2F68E    String: "StartupController::StartupController:"
  * Adress: 0x00F30C7F    String: "StartupController: getAppSettings..."
  * Adress: 0x00F30CBC    String: "StartupController: getAppSettings... Flags have already been loaded."
  * Adress: 0x00F30F30    String: "StartupController: performDeviceInit..."
  * Adress: 0x00F316F1    String: "StartupController::start: stage = %d."
  * Adress: 0x00F31720    String: "StartupController has been started successfully. Done."
  * Adress: 0x00F317B2    String: "StartupController: The initialization must be in progress. Do nothing."
  * Adress: 0x00F317F8    String: "reportAnalyticsEvents: Submit task to collect device info."
  * Adress: 0x00F336D8    String: "AutoUpgrade: checkForUpdate()"
  * Adress: 0x00F33709    String: "AutoUpgradeController::checkForUpdate(): No callback was specified. Aborting."
  * Adress: 0x00F33746    String: "AutoUpgradeController::checkForUpdate(): Called without being initialized. Aborting."
  * Adress: 0x00F3386F    String: "AutoUpgrade: checkVersionAndPrepare"
  * Adress: 0x00F33D41    String: "AutoUpgrade: initBootstrapperInterface"
  * Adress: 0x00F340A9    String: "AutoUpgrade: found bootstrapper"
  * Adress: 0x00F34139    String: "AutoUpgrade: did not find bootstrapper, auto upgrade not enabled."
  * Adress: 0x00F343D3    String: "AutoUpgrade: checkForUpdate(), marshaller invoked"
  * Adress: 0x00F34D58    String: "AutoUpgrade: performManagedUpdate()"
  * Adress: 0x00F34D89    String: "AutoUpgradeController::performManagedUpdate(): Called without being initialized. Aborting."
  * Adress: 0x00F34DCB    String: "AutoUpgradeController::performManagedUpdate(): Shutdown function not provided. Aborting upgrade."
  * Adress: 0x00F34DF4    String: "AutoUpgradeController::performManagedUpdate(): Bootstrapper failed to start upgrade."
  * Adress: 0x00F353E8    String: "AutoUpgrade: stop"
  * Adress: 0x00F3574B    String: "WebLogin Error: auth ticket is empty"
  * Adress: 0x00F3589E    String: "WebLogin Error: auth URL or ticket is empty"
  * Adress: 0x00F35954    String: "WebLogin SetBTID failed"
  * Adress: 0x00F35AEE    String: "WebLogin cannot run as authentication url or ticket is empty"
  * Adress: 0x00F35B63    String: "WebPlayGameLaunch joinScriptUrl is empty"
  * Adress: 0x00F58D0A    String: "[TracerService] startSpan: The startup span is not created or has finished."
  * Adress: 0x00F5A0ED    String: "AntiAddictionStatus: Warning or Lockout"
  * Adress: 0x00F5A12C    String: "AntiAddictionStatus: Normal"
  * Adress: 0x00F5AF2E    String: "Anti-Addiction heartbeat response: %s"
  * Adress: 0x00F5B736    String: "AntiAddictionJob triggered"
  * Adress: 0x00F5E152    String: "SurfaceController::RenderJob::scheduleRender: No data model. Bind workspace now..."
  * Adress: 0x00F5E57E    String: "SurfaceController::RenderJob::stepDataModelJob: No DM yet. Continue..."
  * Adress: 0x00F61BF7    String: "UGCGameController::~UGCGameController()"
  * Adress: 0x00F6D20C    String: "LuaAppController: onDataModelNotificationLogout"
  * Adress: 0x00F6DD06    String: "LuaAppController: initialize:"
  * Adress: 0x00F6F16B    String: "LuaAppController: onDataModelNotificationLogin"
  * Adress: 0x00F6FED5    String: "ClientSettingsRequest::[Destructor]"
  * Adress: 0x00F70FDD    String: "CheckAppVersionTask::[Destructor]"
  * Adress: 0x00F712C2    String: "BrowserTrackerIdTask::[Destructor]"
  * Adress: 0x00F71422    String: "DeviceInitTaskGroup::[Destructor]"
  * Adress: 0x00F7164C    String: "CheckAppVersionTask: ... got Upgrade-Status = %d."
  * Adress: 0x00F716C4    String: "BrowserTrackerIdTask: ... ABTest load success"
  * Adress: 0x00F71758    String: "BrowserTrackerIdTask: ... ABTest load failed"
  * Adress: 0x00F719D2    String: "DeviceInitTaskGroup::doAllTasksComplete:"
  * Adress: 0x00F71A7D    String: "BrowserTrackerIdTask: ... got BTID %lld."
  * Adress: 0x00F71D39    String: "BrowserTrackerIdTask: request failed with error %d"
  * Adress: 0x00F71D89    String: "BrowserTrackerIdTask::start:"
  * Adress: 0x00F71F59    String: "CheckAppVersionTask::start:"
  * Adress: 0x00F73EA8    String: "RobloxView RenderJob:CONSTRUCTOR"
  * Adress: 0x00F74676    String: "RobloxView requestStopRenderingForBackgroundMode"
  * Adress: 0x00F746AA    String: "RobloxView requestStopRenderingForBackgroundMode Request renderJob to stop."
  * Adress: 0x00F76E1B    String: "AppShellReporter::actionEnabled %d"
  * Adress: 0x00F791FF    String: "Reporting to event stream"
  * Adress: 0x00F79C8F    String: "Disconnecting FPS counter render-stepped"
  * Adress: 0x00F850AF    String: "ABTestEnrollmentsRequest::[Constructor]"
  * Adress: 0x00F855B2    String: "ABTestEnrollmentsRequest::[Destructor]"
  * Adress: 0x00F8583B    String: "ABTest - BrowserTracker enroll/get-enrollments Http-request timed out."
  * Adress: 0x00F85ABF    String: "ABTestEnrollmentsRequest: request from server..."
  * Adress: 0x00F85DEC    String: "MultiRequestGroup::makeHttpRequest: Empty POST body. Do nothing."
  * Adress: 0x00F85E65    String: "ABTestEnrollmentsRequest: request dressed with counters"
  * Adress: 0x00F866D7    String: "CheckAppVersionRequest::[Destructor]"
  * Adress: 0x00F874C3    String: "[AppTracing] report: Error found. Do not report."
  * Adress: 0x00F91335    String: "**** Memory Pressure Increase CRITICAL lastLevel: %u"
  * Adress: 0x00F913A6    String: "<<<**** Memory Pressure Changed newLevel: %u lastLevel: %u>>>"
  * Adress: 0x00F966C8    String: "LocalStorage getting file length is failed"
  * Adress: 0x00F96701    String: "LocalStorage loading file is empty"
  * Adress: 0x00F96794    String: "LocalStorage loading data got invalid operation"
  * Adress: 0x00F9687E    String: "LocalStorage invalid json, not an object"
  * Adress: 0x00F9692A    String: "LocalStorage invalid json member, not a std::string"
  * Adress: 0x00F96A0D    String: "LocalStorage failed to load: %s"
  * Adress: 0x00F96CCB    String: "LocalStorage failed to read from disk"
  * Adress: 0x00F9748B    String: "LocalStorage flushing to path: %s"
  * Adress: 0x00F978C4    String: "LocalStorage flushing (blocking) to path: %s"
  * Adress: 0x00F97D40    String: "LocalStorage failed to write to disk"
  * Adress: 0x00F97DE8    String: "LocalStorage failed to open file for flushing: %s"
  * Adress: 0x00F9884A    String: "LocalStorage loading from path: %s"
  * Adress: 0x00F9A0D1    String: "JobName(%s)"
  * Adress: 0x00F9A1AD    String: "Job Destroyed - this(%p)"
  * Adress: 0x00F9A2E2    String: "Job Destroyed - this(%p)"
  * Adress: 0x00FA6042    String: "Studio failed to get GPU info."
  * Adress: 0x00FA6229    String: "ERROR: getAdapterDesc get factory failed. (result = 0x%08x)"
  * Adress: 0x00FA630E    String: "ERROR: getAdapterDesc failed to get GetDesc info. (result = 0x%08x)"
  * Adress: 0x00FA6350    String: "ERROR: getAdapterDesc pickAdapter(0 failed"
  * Adress: 0x00FB942A    String: "ERROR: already open"
  * Adress: 0x00FB9494    String: "ERROR: failed to open file "%S": %s"
  * Adress: 0x00FB9532    String: "ERROR: failed to get file size "%S": %s"
  * Adress: 0x00FB95DB    String: "ERROR: failed to map empty file "%S"."
  * Adress: 0x00FB963A    String: "ERROR: failed to open file "%S": %s"
  * Adress: 0x00FB96C7    String: "ERROR: failed to map file "%S": %s"
  * Adress: 0x00FB9F34    String: "%s socket creation failed with err: %d"
  * Adress: 0x00FBA038    String: "tcp connect failed, err: %d"
  * Adress: 0x00FBA0B0    String: "%s send failed, err: %d"
  * Adress: 0x00FC0220    String: "tcp task was not scheduled in the threadpool: %s"
  * Adress: 0x00FC0330    String: "udp task was not scheduled in the threadpool: %s"
  * Adress: 0x00FDA1D3    String: "CSGOperations2: csginit failed, out of memory?"
  * Adress: 0x00FDA445    String: "CSGOperations2: destroying csg structure"
  * Adress: 0x00FDDA34    String: "instanceTransform: partOperation scale: ignoring rotation
  "
  * Adress: 0x00FE1E14    String: "startloop %d"
  * Adress: 0x00FE1ED5    String: "loop%d: PLANE ENTIRELY UNSET!"
  * Adress: 0x00FE1F11    String: "endloop %d"
  * Adress: 0x00FE32F7    String: "csgfloat_init: iterations exhausted while calculating epsilon and splitter"
  * Adress: 0x00FE338F    String: "csgfloat_init: iterations exhausted while calculating plane coefficient bounds"
  * Adress: 0x00FE340A    String: "csgfloat_init: iterations exhausted while calculating plane coefficient bounds"
  * Adress: 0x00FE9947    String: "infPoly: invalid dominant axis: %zu"
  * Adress: 0x00FEB640    String: "treeSplit: cutter became a leaf, which is an invariant violation."
  * Adress: 0x00FEBAF6    String: "cutloop %f %f %f %f"
  * Adress: 0x00FEC7B6    String: "splitEdge: unhandled orientation case: %d %d"
  * Adress: 0x00FF07BD    String: "polygonizeFaces: ignored a duplicate vertex in face loop!"
  * Adress: 0x00FF091B    String: "polygonizeFaces: vertex does not exist in the tree!"
  * Adress: 0x010A05BD    String: "ERROR: Cubemap framebuffers are not supported."
  * Adress: 0x010A070A    String: "ERROR: Cubemap framebuffers are not supported."
  * Adress: 0x010B3A03    String: "Video memory size: %lld"
  * Adress: 0x010DDC9A    String: "Image failed to load: %s"
  * Adress: 0x010DFA96    String: "Image timings: decode %d ms, upload %d ms, latency %d ms"
  * Adress: 0x010E157E    String: "rescaleVideo() failed with %d"
  * Adress: 0x010E1603    String: "No texture for VideoTexture"
  * Adress: 0x010E1653    String: "VideoTexture references dead VideoStream"
  * Adress: 0x01101ADA    String: "AdvSky: created"
  * Adress: 0x01101CD3    String: "AdvSky: destroyed"
  * Adress: 0x01108881    String: "Error: shader %s is not available"
  * Adress: 0x011089AC    String: "Error: failed to link shader program %s"
  * Adress: 0x01109521    String: "Error: failed to create shader %s"
  * Adress: 0x0112A7AA    String: "ERROR: Cannot init free type library"
  * Adress: 0x0112AB1C    String: "ERROR: FontData is empty"
  * Adress: 0x0112AB4F    String: "ERROR: Cannot create font face from memory"
  * Adress: 0x0113761F    String: "SceneUpdater bind - start"
  * Adress: 0x01137B58    String: "SceneUpdater bind - end"
  * Adress: 0x0113F7E7    String: "SceneUpdater unbind - start"
  * Adress: 0x0113F856    String: "SceneUpdater unbind - end"
  * Adress: 0x011A4E9A    String: "SceneUpdater bind - start"
  * Adress: 0x011A53D3    String: "SceneUpdater bind - end"
  * Adress: 0x011A9B57    String: "SceneUpdater unbind - start"
  * Adress: 0x011A9BC6    String: "SceneUpdater unbind - end"
  * Adress: 0x011C8E64    String: "    %s %d new micro bone"
  * Adress: 0x011C978D    String: "SkinningIsland::updateBones"
  * Adress: 0x011CA017    String: "    %s %d primary bone"
  * Adress: 0x012207E2    String: "NetworkClient:Create"
  * Adress: 0x012208F4    String: "NetworkClient:Remove"
  * Adress: 0x01226865    String: "Reporting network metric: %s to diag. Time since last metric = %u"
  * Adress: 0x0124F599    String: "SendClusterJob::step"
  * Adress: 0x01260C15    String: "ignore or null root part or filtered or grounded, skipping framebuffers"
  * Adress: 0x01278002    String: "updateStatsJob::updateStats running"
  * Adress: 0x012AB1DD    String: "Raknet rawpeer is detaching Peer plugin"
  * Adress: 0x012AB404    String: "Raknet rawpeer is attaching Peer plugin"
  * Adress: 0x012CC4B8    String: "Wrote join data item for megacluster"
  * Adress: 0x012CED35    String: "ReplicationDataCache::generateDataBlobs : serializing and creating blobs for cacheable instances"
  * Adress: 0x012CFDF4    String: "ReplicationDataCache::invalidateBlob(blob) : marking blob invalid"
  * Adress: 0x012D3D09    String: "Skipping cluster packet for illegal terrain receive"
  * Adress: 0x012D3EBD    String: "Applying cluster chunk (%d, %d, %d) isEmpty=%d"
  * Adress: 0x012D7078    String: "InstanceTypePtr,InstanceTypeName,BlobType,Count,minSize,maxSize,avgSize"
  * Adress: 0x012D74DA    String: "ReplicationDataCache::Copying blob#%d [%p],  compressedStream=%p, numOfRawBytes=%d, numOfCompressedBytes=%d, numOfInstances=%d"
  * Adress: 0x012D77AE    String: "Pushing instance %s[type=%s][guid=%s] with metaDataOffset=%d, indexInParent=%d, numOfChildren=%d into blobIndex=%d"
  * Adress: 0x012D7CD0    String: "Parsing JoinDataItemV2"
  * Adress: 0x012D9778    String: "ProcessPacketsJob running"
  * Adress: 0x012F55D3    String: "SignalR won't work if the cookie is empty or invalid"
  * Adress: 0x012F5C89    String: "SignalR won't work if the cookie is empty or invalid. Starting a workaround thread to wait for cookie availability"
  * Adress: 0x0130058B    String: "signalr: new state: %d, message: %s"
  * Adress: 0x013018E7    String: "signalr: connection token is empty, cannot establish websocket connection"
  * Adress: 0x013DE0EC    String: "Destroying adornable %p"
  * Adress: 0x013DE246    String: "Adornable Collector %p deleted"
  * Adress: 0x01435B2C    String: "invalid argument #%d to '%s' (%s)"
  * Adress: 0x01435B45    String: "invalid argument #%d (%s)"
  * Adress: 0x01435C2E    String: "missing argument #%d"
  * Adress: 0x01435CFD    String: "stack overflow (%s)"
  * Adress: 0x0143653A    String: "C stack overflow"
  * Adress: 0x0143659A    String: "stack overflow"
  * Adress: 0x01436AA3    String: "C stack overflow"
  * Adress: 0x01436BB3    String: "C stack overflow"
  * Adress: 0x0143EC46    String: "C stack overflow"
  * Adress: 0x0143FAAC    String: "initial value"
  * Adress: 0x01440E85    String: "'tostring' must return a string to 'print'"
  * Adress: 0x01440F9C    String: "base out of range"
  * Adress: 0x014410BB    String: "nil or table"
  * Adress: 0x014410D3    String: "cannot change a protected metatable"
  * Adress: 0x014411DE    String: "'setfenv' cannot change environment of given object"
  * Adress: 0x0144152A    String: "%.14g, %.14g, %.14g"
  * Adress: 0x0144175E    String: "invalid level"
  * Adress: 0x0144178D    String: "level must be non-negative"
  * Adress: 0x01441CC3    String: "thread"
  * Adress: 0x01441D50    String: "thread"
  * Adress: 0x01441F64    String: "too many arguments to resume"
  * Adress: 0x01441F7A    String: "too many results to resume"
  * Adress: 0x014422AC    String: "wrong number of arguments to 'insert'"
  * Adress: 0x01442494    String: "destination wrap around"
  * Adress: 0x014424AC    String: "too many elements to move"
  * Adress: 0x014425D7    String: "invalid value (%s) at index %d in table for 'concat'"
  * Adress: 0x014431A3    String: "invalid conversion specifier"
  * Adress: 0x01444183    String: "resulting string too large"
  * Adress: 0x01444261    String: "string slice too long"
  * Adress: 0x01444311    String: "invalid value"
  * Adress: 0x01444E75    String: "malformed pattern (ends with '%%')"
  * Adress: 0x01445961    String: "invalid pattern capture"
  * Adress: 0x014467A8    String: "field cannot be negative"
  * Adress: 0x014467BF    String: "trying to access non-existent bits"
  * Adress: 0x014467D5    String: "width must be positive"
  * Adress: 0x01446911    String: "initial position out of string"
  * Adress: 0x01446929    String: "final position out of string"
  * Adress: 0x01446A2E    String: "out of range"
  * Adress: 0x01446A46    String: "string slice too long"
  * Adress: 0x01446A5C    String: "invalid UTF-8 code"
  * Adress: 0x01446A72    String: "out of range"
  * Adress: 0x01446BB2    String: "value out of range"
  * Adress: 0x01446DF6    String: "value out of range"
  * Adress: 0x01446EAA    String: "invalid UTF-8 code"
  * Adress: 0x01449CA8    String: "invalid key to 'next'"
  * Adress: 0x0144B3C1    String: "loop in gettable"
  * Adress: 0x0144B680    String: "loop in settable"
  * Adress: 0x0144B696    String: "Attempt to modify a readonly table"
  * Adress: 0x0144BD14    String: "memory allocation error: block too big"
  * Adress: 0x01460AFD    String: "rv_frame_alloc"
  * Adress: 0x01460B4D    String: "rv_frame_free"
  * Adress: 0x01460BB3    String: "rv_frame_get_buffer"
  * Adress: 0x01460CEB    String: "rv_image_get_linesize"
  * Adress: 0x01460F9D    String: "rv_image_copy_plane"
  * Adress: 0x014616FD    String: "rvcodec_alloc_context3"
  * Adress: 0x014617BD    String: "rvcodec_find_decoder"
  * Adress: 0x0146188D    String: "rvcodec_free_context"
  * Adress: 0x0146190D    String: "rvcodec_get_context_defaults3"
  * Adress: 0x01461A5D    String: "rvcodec_parameters_free"
  * Adress: 0x01461BE4    String: "rvcodec_register"
  * Adress: 0x01461D4D    String: "rv_read_frame"
  * Adress: 0x01461DAF    String: "rv_register_all"
  * Adress: 0x01461E1D    String: "rvformat_alloc_context"
  * Adress: 0x01461E5D    String: "rvformat_close_input"
  * Adress: 0x01461ECD    String: "rvformat_free_context"
  * Adress: 0x01461F6D    String: "rvformat_network_init"
  * Adress: 0x01461FAE    String: "rvformat_open_input"
  * Adress: 0x01461FF6    String: "rvformat_alloc_context"
  * Adress: 0x014620FD    String: "rvformat_seek_file"
  * Adress: 0x014623BD    String: "rvio_alloc_context"
  * Adress: 0x014624ED    String: "rvs_getCachedContext"
  * Adress: 0x0146257F    String: "rvs_scale"
  * Adress: 0x0146268D    String: "vpx_close"
  * Adress: 0x0146271F    String: "vpx_init"
  * Adress: 0x014627AD    String: "vpx_on_alloc"
  * Adress: 0x0146281D    String: "vpx_on_free"
  * Adress: 0x0146288F    String: "vpx_receive_frame"
  * Adress: 0x014629DD    String: "vpx_send_packet"
  * Adress: 0x01462ACD    String: "vorbis_close"
  * Adress: 0x01462BE2    String: "vorbis_init"
  * Adress: 0x01462DCD    String: "vorbis_on_alloc"
  * Adress: 0x01462E1D    String: "vorbis_on_free"
  * Adress: 0x01462F9F    String: "vorbis_send_packet"
  * Adress: 0x0152B30A    String: "requests"
  * Adress: 0x015FEB98    String: "Error loading settings: [%s] settings size = %d"
  * Adress: 0x015FEE4C    String: "Error loading settings: [%s] settings size = %d"
   */

#define Declare(address, returnValue, callingConvention, ...) (returnValue(callingConvention*)(__VA_ARGS__))(retcheckBypass(x(address)))
#define r_lua_tostring(rL,i)	r_lua_tolstring(rL, (i), NULL)
#define r_lua_pop(rL,n)		r_lua_settop(rL, -(n)-1)
#define r_lua_getglobal(rL,s)	r_lua_getfield(rL, LUA_GLOBALSINDEX, (s))
#define r_lua_newtable(rL) r_lua_createtable(rL, 0, 0)
#define x(x) (x - 0x400000 + (DWORD)GetModuleHandleA(0))

int R_LUA_TUSERDATA = 0;
int R_LUA_TFUNCTION = 0;
int R_LUA_TSTRING = 0;
int R_LUA_TBOOLEAN = 0;
int R_LUA_TNUMBER = 0;
int R_LUA_TTABLE = 0;
int R_LUA_TNIL = 0;
int R_LUA_TTHREAD = 0;
int R_LUA_TLIGHTUSERDATA = 0;
int GDM;

typedef DWORD(getdatamodel2_CCV* gdm2)();
gdm2 getdatamodel2 = (gdm2)(x(Adresses::getdatamodel2_addr));

typedef DWORD(__thiscall* getdatamodel)(DWORD, DWORD);
getdatamodel r_getdatamodel = (getdatamodel)(x(Adresses::getdatamodel_addr));

typedef int(lual_error_CCV* ee)(int e, const char* n, ...);
static ee r_luaL_error = (ee)x(Adresses::lual_error_addr); // 22

typedef void(lua_getfield_CCV* rgetfield)(DWORD rL, int idx, const char* k);
rgetfield r_lua_getfield = (rgetfield)retcheckBypass(x(Adresses::lua_getfield_addr));

typedef int(lua_pushboolean_CCV* rboolean)(unsigned int, int);
rboolean r_lua_pushboolean = (rboolean)(retcheckBypass(x(Adresses::lua_pushboolean_addr)));

typedef char* (lua_tolstring_CCV* rtolstring)(DWORD rL, int idx, size_t* size);
rtolstring r_lua_tolstring = (rtolstring)(retcheckBypass(x(Adresses::lua_tolstring_addr)));

typedef bool(lua_toboolean_CCV* toboolean)(DWORD rL, bool idx);
toboolean r_lua_toboolean = (toboolean)(x(Adresses::lua_toboolean_addr));

typedef void(lua_pushvalue_CCV* pushvalue)(DWORD rL, DWORD idx);
pushvalue r_lua_pushvalue = (pushvalue)(retcheckBypass(x(Adresses::lua_pushvalue_addr)));

typedef double(lua_pushnumber_CCV* pushnumber)(DWORD rL, double idx);
pushnumber r_lua_pushnumber = (pushnumber)(retcheckBypass(x(Adresses::lua_pushnumber_addr)));

typedef void(lua_pushstring_CCV* rpushstring)(DWORD rL, const char*);
rpushstring r_lua_pushstring = (rpushstring)(retcheckBypass(x(Adresses::lua_pushstring_addr)));

typedef int(lua_pcall_CCV* rLua_pcall)(DWORD lst, int nargs, int nresults, int errfunc);
rLua_pcall r_lua_pcall = (rLua_pcall)retcheckBypass(x(Adresses::lua_pcall_addr));

typedef DWORD(lua_next_CCV* next2)(DWORD rL, int idx);
next2 r_lua_next = (next2)(retcheckBypass(x(Adresses::lua_next_addr)));

typedef double(lua_tonumber_CCV* rtonumber)(DWORD, int, int);
rtonumber r_lua_tonumber = (rtonumber)(x(Adresses::lua_tonumber_addr));

typedef void(lua_pushcclosure_CCV* rpushcclosure)(DWORD rL, int fn, int non, int a1, int xd);
rpushcclosure r_lua_pushcclosure = (rpushcclosure)(retcheckBypass(x(Adresses::lua_pushcclosure_addr))); //r_Lua_PushCCloser_Type

typedef void(lua_createtable_CCV* rcreatetable)(DWORD rL, int num, int fix);
rcreatetable r_lua_createtable = (rcreatetable)(retcheckBypass(x(Adresses::lua_createtable_addr)));

typedef DWORD(lua_newthread_CCV* rnewthread)(DWORD);
rnewthread r_lua_newthread = (rnewthread)retcheckBypass(x(Adresses::lua_newthread_addr));

typedef void* (lua_newuserdata_CCV* rnewuserdata)(DWORD, size_t, int);
rnewuserdata r_lua_newuserdata = (rnewuserdata)(retcheckBypass(x(Adresses::lua_newuserdata_addr)));

typedef void(lua_rawgeti_CCV* rrawgeti)(DWORD, DWORD, DWORD);
rrawgeti r_lua_rawgeti = (rrawgeti)retcheckBypass(x(Adresses::lua_rawgeti_addr));

typedef void(lua_rawseti_CCV* rrawgeti)(DWORD, DWORD, DWORD);
rrawgeti r_lua_rawseti = (rrawgeti)retcheckBypass(x(Adresses::lua_rawseti_addr));

typedef void* (lua_getmettable_CCV* rgetmetatable)(DWORD rL, int idx);
rgetmetatable r_lua_getmetatable = (rgetmetatable)(retcheckBypass(x(Adresses::lua_getmettable_addr)));

typedef int (lua_setmetatable_CCV* rsetmetatable)(DWORD rL, int idx);
rsetmetatable r_lua_setmetatable = (rsetmetatable)(retcheckBypass(x(Adresses::lua_setmetatable_addr)));

typedef int(lua_touserdata_CCV* rtouserdata)(DWORD, int);
rtouserdata r_lua_touserdata = (rtouserdata)(retcheckBypass(x(Adresses::lua_touserdata_addr)));

typedef void(fireclickdetector_CCV* fireclick)(DWORD, float, DWORD);
fireclick FireClick = (fireclick)x(Adresses::fireclickdetector_addr);

typedef DWORD(lua_type_CCV* rtype)(DWORD, int);
rtype r_lua_type = (rtype)(x(Adresses::lua_type_addr));

typedef void* (lua_settable_CCV* rsettable)(DWORD rL, int);
rsettable r_lua_settable = (rsettable)(retcheckBypass(x(Adresses::lua_settable_addr)));

typedef DWORD(lual_ref_CCV* rref)(DWORD, DWORD);
rref r_luaL_ref = (rref)(retcheckBypass(x(Adresses::lual_ref_addr)));

int r_lua_gettop(int rL)
{
    return *(DWORD*)(rL + Adresses::top) - *(DWORD*)(rL + Adresses::base) >> 4;
}

typedef void(lua_settop_CCV* rsettop)(DWORD rL, int idx);
rsettop r_lua_settop = (rsettop)(retcheckBypass(x(Adresses::lua_settop_addr)));

typedef void(lua_pushnil_CCV* pushnil)(DWORD);
pushnil r_lua_pushnil = (pushnil)(retcheckBypass(x(Adresses::lua_pushnil_addr)));

typedef void(lua_pushlightuserdata_CCV* rpushlight)(DWORD, void*);
rpushlight r_lua_pushlightuserdata = (rpushlight)(retcheckBypass(x(Adresses::lua_pushlightuserdata_addr)));

typedef bool(flog_getvalue_CCV* FLog)(const std::string& name, std::string& value, bool alsoCheckUnknown);
FLog GetValue = reinterpret_cast<FLog>(x(Adresses::flog_getvalue_addr));

typedef bool(flog_setvalue_CCV* SLog)(const std::string& name, const std::string& value, int Type, bool loadedFromServer);
SLog SetValue = reinterpret_cast<SLog>(x(Adresses::flog_setvalue_addr));

typedef uint32_t(index2adr_CCV* T_index2adr)(uint32_t, uint32_t); // Auto updating convention
T_index2adr r_index2adr;