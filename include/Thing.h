

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for src\Thing.idl:
    Oicf, W3, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef ___Thing_COM_h__
#define ___Thing_COM_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IThing_FWD_DEFINED__
#define __IThing_FWD_DEFINED__
typedef interface IThing IThing;

#endif 	/* __IThing_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IThing_INTERFACE_DEFINED__
#define __IThing_INTERFACE_DEFINED__

/* interface IThing */
/* [uuid][object] */ 


EXTERN_C __declspec(selectany) const IID IID_IThing = {0x0e18b4ce,0xe30c,0x4098,{0x9a,0xe4,0x61,0xd9,0xb1,0x84,0xbb,0xea}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0e18b4ce-e30c-4098-9ae4-61d9b184bbea")
    IThing : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Hello( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IThingVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IThing * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IThing * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IThing * This);
        
        DECLSPEC_XFGVIRT(IThing, Hello)
        HRESULT ( STDMETHODCALLTYPE *Hello )( 
            IThing * This);
        
        END_INTERFACE
    } IThingVtbl;

    interface IThing
    {
        CONST_VTBL struct IThingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IThing_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IThing_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IThing_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IThing_Hello(This)	\
    ( (This)->lpVtbl -> Hello(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IThing_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


#ifndef THING_FACTORY_H
#define THING_FACTORY_H

#ifdef __cplusplus
extern "C" {
#endif

__declspec(dllexport) HRESULT CreateThing(REFIID riid, void** ppThing);

#ifdef __cplusplus
}
#endif

#endif /* THING_FACTORY_H */
