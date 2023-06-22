/*** Autogenerated by WIDL 7.0 from include/windows.storage.streams.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __windows_storage_streams_h__
#define __windows_storage_streams_h__

/* Forward declarations */

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
#ifdef __cplusplus
#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer ABI::Windows::Storage::Streams::IBuffer
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IBuffer;
            }
        }
    }
}
#endif /* __cplusplus */
#endif

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory;
#ifdef __cplusplus
#define __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory ABI::Windows::Storage::Streams::IBufferFactory
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IBufferFactory;
            }
        }
    }
}
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <inspectable.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory;
#ifdef __cplusplus
#define __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory ABI::Windows::Storage::Streams::IBufferFactory
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IBufferFactory;
            }
        }
    }
}
#endif /* __cplusplus */
#endif

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
#ifdef __cplusplus
#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer ABI::Windows::Storage::Streams::IBuffer
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IBuffer;
            }
        }
    }
}
#endif /* __cplusplus */
#endif

/*****************************************************************************
 * IBuffer interface
 */
#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_INTERFACE_DEFINED__

DEFINE_GUID(IID___x_ABI_CWindows_CStorage_CStreams_CIBuffer, 0x905a0fe0, 0xbc53, 0x11df, 0x8c,0x49, 0x00,0x1e,0x4f,0xc6,0x86,0xda);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                MIDL_INTERFACE("905a0fe0-bc53-11df-8c49-001e4fc686da")
                IBuffer : public IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE get_Capacity(
                        UINT32 *value) = 0;

                    virtual HRESULT STDMETHODCALLTYPE get_Length(
                        UINT32 *value) = 0;

                    virtual HRESULT STDMETHODCALLTYPE put_Length(
                        UINT32 value) = 0;

                };
            }
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__x_ABI_CWindows_CStorage_CStreams_CIBuffer, 0x905a0fe0, 0xbc53, 0x11df, 0x8c,0x49, 0x00,0x1e,0x4f,0xc6,0x86,0xda)
#endif
#else
typedef struct __x_ABI_CWindows_CStorage_CStreams_CIBufferVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer *This,
        TrustLevel *trustLevel);

    /*** IBuffer methods ***/
    HRESULT (STDMETHODCALLTYPE *get_Capacity)(
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer *This,
        UINT32 *value);

    HRESULT (STDMETHODCALLTYPE *get_Length)(
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer *This,
        UINT32 *value);

    HRESULT (STDMETHODCALLTYPE *put_Length)(
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer *This,
        UINT32 value);

    END_INTERFACE
} __x_ABI_CWindows_CStorage_CStreams_CIBufferVtbl;

interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer {
    CONST_VTBL __x_ABI_CWindows_CStorage_CStreams_CIBufferVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IBuffer methods ***/
#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer_get_Capacity(This,value) (This)->lpVtbl->get_Capacity(This,value)
#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer_get_Length(This,value) (This)->lpVtbl->get_Length(This,value)
#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer_put_Length(This,value) (This)->lpVtbl->put_Length(This,value)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT __x_ABI_CWindows_CStorage_CStreams_CIBuffer_QueryInterface(__x_ABI_CWindows_CStorage_CStreams_CIBuffer* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG __x_ABI_CWindows_CStorage_CStreams_CIBuffer_AddRef(__x_ABI_CWindows_CStorage_CStreams_CIBuffer* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG __x_ABI_CWindows_CStorage_CStreams_CIBuffer_Release(__x_ABI_CWindows_CStorage_CStreams_CIBuffer* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static FORCEINLINE HRESULT __x_ABI_CWindows_CStorage_CStreams_CIBuffer_GetIids(__x_ABI_CWindows_CStorage_CStreams_CIBuffer* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static FORCEINLINE HRESULT __x_ABI_CWindows_CStorage_CStreams_CIBuffer_GetRuntimeClassName(__x_ABI_CWindows_CStorage_CStreams_CIBuffer* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static FORCEINLINE HRESULT __x_ABI_CWindows_CStorage_CStreams_CIBuffer_GetTrustLevel(__x_ABI_CWindows_CStorage_CStreams_CIBuffer* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IBuffer methods ***/
static FORCEINLINE HRESULT __x_ABI_CWindows_CStorage_CStreams_CIBuffer_get_Capacity(__x_ABI_CWindows_CStorage_CStreams_CIBuffer* This,UINT32 *value) {
    return This->lpVtbl->get_Capacity(This,value);
}
static FORCEINLINE HRESULT __x_ABI_CWindows_CStorage_CStreams_CIBuffer_get_Length(__x_ABI_CWindows_CStorage_CStreams_CIBuffer* This,UINT32 *value) {
    return This->lpVtbl->get_Length(This,value);
}
static FORCEINLINE HRESULT __x_ABI_CWindows_CStorage_CStreams_CIBuffer_put_Length(__x_ABI_CWindows_CStorage_CStreams_CIBuffer* This,UINT32 value) {
    return This->lpVtbl->put_Length(This,value);
}
#endif
#ifdef WIDL_using_Windows_Storage_Streams
#define IID_IBuffer IID___x_ABI_CWindows_CStorage_CStreams_CIBuffer
#define IBufferVtbl __x_ABI_CWindows_CStorage_CStreams_CIBufferVtbl
#define IBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer
#define IBuffer_QueryInterface __x_ABI_CWindows_CStorage_CStreams_CIBuffer_QueryInterface
#define IBuffer_AddRef __x_ABI_CWindows_CStorage_CStreams_CIBuffer_AddRef
#define IBuffer_Release __x_ABI_CWindows_CStorage_CStreams_CIBuffer_Release
#define IBuffer_GetIids __x_ABI_CWindows_CStorage_CStreams_CIBuffer_GetIids
#define IBuffer_GetRuntimeClassName __x_ABI_CWindows_CStorage_CStreams_CIBuffer_GetRuntimeClassName
#define IBuffer_GetTrustLevel __x_ABI_CWindows_CStorage_CStreams_CIBuffer_GetTrustLevel
#define IBuffer_get_Capacity __x_ABI_CWindows_CStorage_CStreams_CIBuffer_get_Capacity
#define IBuffer_get_Length __x_ABI_CWindows_CStorage_CStreams_CIBuffer_get_Length
#define IBuffer_put_Length __x_ABI_CWindows_CStorage_CStreams_CIBuffer_put_Length
#endif /* WIDL_using_Windows_Storage_Streams */
#endif

#endif

#endif  /* ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IBufferFactory interface
 */
#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_INTERFACE_DEFINED__

DEFINE_GUID(IID___x_ABI_CWindows_CStorage_CStreams_CIBufferFactory, 0x71af914d, 0xc10f, 0x484b, 0xbc,0x50, 0x14,0xbc,0x62,0x3b,0x3a,0x27);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                MIDL_INTERFACE("71af914d-c10f-484b-bc50-14bc623b3a27")
                IBufferFactory : public IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        UINT32 capacity,
                        ABI::Windows::Storage::Streams::IBuffer **value) = 0;

                };
            }
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__x_ABI_CWindows_CStorage_CStreams_CIBufferFactory, 0x71af914d, 0xc10f, 0x484b, 0xbc,0x50, 0x14,0xbc,0x62,0x3b,0x3a,0x27)
#endif
#else
typedef struct __x_ABI_CWindows_CStorage_CStreams_CIBufferFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory *This,
        TrustLevel *trustLevel);

    /*** IBufferFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *Create)(
        __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory *This,
        UINT32 capacity,
        __x_ABI_CWindows_CStorage_CStreams_CIBuffer **value);

    END_INTERFACE
} __x_ABI_CWindows_CStorage_CStreams_CIBufferFactoryVtbl;

interface __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory {
    CONST_VTBL __x_ABI_CWindows_CStorage_CStreams_CIBufferFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
/*** IBufferFactory methods ***/
#define __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_Create(This,capacity,value) (This)->lpVtbl->Create(This,capacity,value)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_QueryInterface(__x_ABI_CWindows_CStorage_CStreams_CIBufferFactory* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_AddRef(__x_ABI_CWindows_CStorage_CStreams_CIBufferFactory* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_Release(__x_ABI_CWindows_CStorage_CStreams_CIBufferFactory* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static FORCEINLINE HRESULT __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_GetIids(__x_ABI_CWindows_CStorage_CStreams_CIBufferFactory* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static FORCEINLINE HRESULT __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_GetRuntimeClassName(__x_ABI_CWindows_CStorage_CStreams_CIBufferFactory* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static FORCEINLINE HRESULT __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_GetTrustLevel(__x_ABI_CWindows_CStorage_CStreams_CIBufferFactory* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
/*** IBufferFactory methods ***/
static FORCEINLINE HRESULT __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_Create(__x_ABI_CWindows_CStorage_CStreams_CIBufferFactory* This,UINT32 capacity,__x_ABI_CWindows_CStorage_CStreams_CIBuffer **value) {
    return This->lpVtbl->Create(This,capacity,value);
}
#endif
#ifdef WIDL_using_Windows_Storage_Streams
#define IID_IBufferFactory IID___x_ABI_CWindows_CStorage_CStreams_CIBufferFactory
#define IBufferFactoryVtbl __x_ABI_CWindows_CStorage_CStreams_CIBufferFactoryVtbl
#define IBufferFactory __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory
#define IBufferFactory_QueryInterface __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_QueryInterface
#define IBufferFactory_AddRef __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_AddRef
#define IBufferFactory_Release __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_Release
#define IBufferFactory_GetIids __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_GetIids
#define IBufferFactory_GetRuntimeClassName __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_GetRuntimeClassName
#define IBufferFactory_GetTrustLevel __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_GetTrustLevel
#define IBufferFactory_Create __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_Create
#endif /* WIDL_using_Windows_Storage_Streams */
#endif

#endif

#endif  /* ____x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __windows_storage_streams_h__ */
