

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0620 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for C:\Users\carmines\AppData\Local\Temp\MixedRemoteViewCompositor.idl-dc9448ec:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0620 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CPlugin_CIClosedEventHandler,0x742c3239,0x1cf3,0x40bb,0x98,0xc8,0x73,0x27,0x0e,0x0e,0x33,0x7f);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CPlugin_CIModule,0x2edeb3fb,0x8008,0x4a13,0xb8,0xd3,0x70,0x81,0xfd,0x11,0x44,0x3f);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CPlugin_CIModuleManager,0xee26ebc8,0x2eba,0x4476,0xbe,0x2a,0x4b,0xf9,0x38,0x95,0x90,0xbc);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CPlugin_CIModuleManagerStatics,0x5feb052c,0xd722,0x4f2a,0x8b,0xf5,0x7d,0x03,0xba,0x80,0x87,0x94);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CPlugin_CIPluginManager,0xc9630182,0xdd7a,0x4fe8,0xb7,0x97,0x14,0xaa,0x4d,0xaf,0x29,0x7a);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CPlugin_CIPluginManagerStatics,0x172d17ad,0x464c,0x4da4,0xad,0x26,0x34,0xd2,0xa7,0x0d,0x4f,0x07);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CPlugin_CIDirectXManager,0x712c3f26,0xea19,0x44a2,0xb9,0x47,0x03,0x13,0xc7,0xd4,0x1a,0x2b);


MIDL_DEFINE_GUID(IID, IID___FIIterator_1_MixedRemoteViewCompositor__CNetwork__CDataBuffer,0x7e9b41f5,0x30a7,0x5d4d,0x8e,0x8f,0x93,0xfa,0xdf,0x03,0x38,0x72);


MIDL_DEFINE_GUID(IID, IID___FIIterable_1_MixedRemoteViewCompositor__CNetwork__CDataBuffer,0x0c2a67f0,0x2c4d,0x52a4,0xaf,0xad,0xa3,0xf0,0x8f,0x9f,0x34,0x42);


MIDL_DEFINE_GUID(IID, IID___FIVectorView_1_MixedRemoteViewCompositor__CNetwork__CDataBuffer,0xfb647465,0x6cc2,0x5259,0x8a,0x0f,0x9d,0xba,0xcd,0x87,0x8c,0x7e);


MIDL_DEFINE_GUID(IID, IID___FIVector_1_MixedRemoteViewCompositor__CNetwork__CDataBuffer,0xf1aac163,0x3e3d,0x5594,0x98,0xf3,0xff,0xef,0xde,0x4a,0x94,0x30);


MIDL_DEFINE_GUID(IID, IID___FIAsyncOperationCompletedHandler_1_MixedRemoteViewCompositor__CNetwork__CConnection,0x52bbae84,0xbb36,0x50ff,0xb9,0xde,0x11,0xed,0x4a,0xca,0x36,0x55);


MIDL_DEFINE_GUID(IID, IID___FIAsyncOperation_1_MixedRemoteViewCompositor__CNetwork__CConnection,0x66fae8a0,0xb7d7,0x5d93,0xb8,0x33,0x6d,0x4b,0x4b,0xe2,0x9d,0xf6);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CNetwork_CIDisconnectedEventHandler,0x7f6533cb,0x58a5,0x4634,0xa0,0xca,0x1a,0xf1,0x2e,0x82,0xf5,0x08);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CNetwork_CIBundleReceivedEventHandler,0x351aade9,0x5b42,0x4ae8,0x9d,0x72,0xdd,0x5b,0x76,0x5d,0x34,0x20);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CNetwork_CIConnectedEventHandler,0x6f17b4ae,0xf506,0x4d6e,0xa6,0x66,0x89,0x36,0x38,0x58,0x1b,0x19);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CNetwork_CIDataPacket,0x3fcabce1,0xd85d,0x4990,0x93,0xcc,0x64,0xb2,0x6b,0x8b,0x95,0x05);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CNetwork_CIDataBuffer,0x2fffa1dc,0xaa9b,0x4f0f,0xa6,0x7c,0x41,0x4d,0xa4,0x76,0x13,0xb8);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CNetwork_CIDataBufferStatics,0xeb453df3,0xe098,0x4fcb,0xb7,0x6c,0xef,0x38,0x38,0x58,0x30,0x33);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CNetwork_CIDataBufferLock,0x4375ee9d,0x0302,0x416b,0xaf,0x1a,0x2b,0x8f,0xf6,0x32,0xa0,0x6f);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CNetwork_CIDataBundle,0x049cd02e,0x12ec,0x45dc,0x8f,0x58,0x93,0x1c,0x34,0x20,0x87,0xed);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CNetwork_CIDataBundleStatics,0xbac3c09b,0x76ca,0x44d9,0xad,0x40,0x08,0x0f,0x31,0x01,0x88,0x4a);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CNetwork_CIBundleReceivedArgs,0xc0d9ad8e,0xf586,0x4314,0xaf,0x4d,0x69,0xb8,0x05,0x13,0xb4,0x70);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CNetwork_CIBundleReceivedArgsStatics,0x3fa67b47,0x6b91,0x42ad,0x91,0x2c,0xdd,0xd9,0x7c,0xe0,0x2d,0x50);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CNetwork_CIConnection,0x027d0a6d,0x3ffb,0x480e,0x9e,0x68,0x25,0x5c,0xba,0x26,0x4d,0x40);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CNetwork_CIConnectionInternal,0x7e41360e,0x7307,0x4ee3,0x8f,0x5d,0xb6,0x44,0xe7,0xe5,0xc5,0x5a);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CNetwork_CIConnectionStatics,0xb3c719f9,0xb1c6,0x425a,0x9b,0x21,0x8a,0x36,0xea,0xac,0x7b,0xe4);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CNetwork_CIListener,0x887397c7,0xce0f,0x4ced,0x86,0xf1,0x54,0xf4,0xee,0x07,0x9d,0x0b);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CNetwork_CIListenerStatics,0x0cfcc430,0x07f5,0x49c1,0xb8,0x6a,0x12,0x3d,0xa1,0x70,0x30,0xb5);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CNetwork_CIConnector,0x4d3288f4,0xb509,0x4ffe,0x84,0x8d,0x20,0x02,0x18,0x02,0x90,0x96);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CNetwork_CIConnectorStatics,0x5af2e9f2,0x5052,0x46f5,0xa1,0x18,0x85,0xd2,0x81,0xb1,0x13,0x14);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CMedia_CIFormatChangedEventHandler,0x7b2c1549,0xc998,0x4d37,0xa3,0x79,0xe0,0xb5,0x12,0x51,0xa5,0x2c);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CMedia_CIFormatChangedEventArgs,0xaa65736c,0x5842,0x4510,0x94,0x90,0xfa,0x43,0xdc,0x9f,0x37,0xd4);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CMedia_CISampleUpdatedEventHandler,0x1003b11c,0xdebe,0x48a6,0xb1,0xba,0x0f,0xd0,0xea,0x5d,0x06,0xe4);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CMedia_CISampleUpdatedEventArgs,0xc8968fde,0x7644,0x497c,0xb0,0x3c,0x1c,0x11,0xca,0x62,0x6d,0xd3);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CMedia_CIMrvcSchemeHandler,0x5a4a9427,0x1f66,0x40c6,0xad,0x6a,0xb3,0xdf,0x73,0x37,0x01,0x12);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CMedia_CINetworkMediaSourceStream,0x43c188c7,0x387b,0x45a9,0xae,0x18,0x54,0x7a,0x4a,0x0e,0xf4,0x8e);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CMedia_CINetworkMediaSource,0xe63951ce,0xa61e,0x494b,0x80,0x10,0x33,0x84,0x7c,0x6d,0xa0,0x0b);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CMedia_CINetworkMediaSourceStatics,0xd4238dfb,0x9849,0x485b,0xab,0xca,0x22,0x6d,0x75,0x30,0xaa,0xed);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CMedia_CIPlaybackEngine,0xb55bf4f3,0x2883,0x4c09,0xa2,0x31,0x7e,0x75,0xbd,0x59,0xbf,0x9e);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CMedia_CIPlaybackEngineStatics,0x22708031,0x4143,0x44e9,0x98,0xaa,0xca,0x3d,0x9b,0x83,0x6f,0x6a);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CMedia_CINetworkMediaSink,0xc9fff32c,0x31f3,0x452f,0xb1,0x26,0x3c,0x5c,0x6d,0xa5,0x72,0x06);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CMedia_CIMrcAudioEffectDefinition,0xced68fe5,0x28d7,0x4d99,0xb8,0x37,0xb7,0xb3,0x80,0x3e,0x2b,0x23);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CMedia_CIMrcVideoEffectDefinition,0x8d37f003,0xfbf7,0x4b94,0x85,0x30,0xbe,0x34,0xe2,0x6c,0x94,0x3a);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CMedia_CICaptureEngine,0x5e9858a9,0x5ef5,0x4b84,0x96,0x45,0xeb,0x3c,0x11,0x61,0x0a,0x17);


MIDL_DEFINE_GUID(IID, IID___FIAsyncOperationCompletedHandler_1_MixedRemoteViewCompositor__CMedia__CCaptureEngine,0x9358bb05,0xe2b4,0x5bc5,0x81,0x8a,0x33,0xac,0x45,0x19,0xf6,0xb7);


MIDL_DEFINE_GUID(IID, IID___FIAsyncOperation_1_MixedRemoteViewCompositor__CMedia__CCaptureEngine,0xd0bb5d7e,0xacff,0x54f8,0xb8,0x28,0xaf,0x4c,0xbc,0xbf,0x64,0x13);


MIDL_DEFINE_GUID(IID, IID___x_ABI_CMixedRemoteViewCompositor_CMedia_CICaptureEngineStatics,0xda706722,0x7bf4,0x4527,0xad,0x4c,0x22,0x22,0xcb,0x81,0xa7,0xab);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



