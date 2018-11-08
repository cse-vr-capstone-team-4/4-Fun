#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Char[]
struct CharU5BU5D_t3528271667;

struct MLCameraResultExtras_t1014470651 ;
struct MLCameraOutput_t2680920266_marshaled_pinvoke;
struct MLInputControllerTouchpadGesture_t3269538253 ;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef MLCAMERAERROR_T1947259653_H
#define MLCAMERAERROR_T1947259653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLCameraError
struct  MLCameraError_t1947259653 
{
public:
	// System.Int32 UnityEngine.XR.MagicLeap.MLCameraError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MLCameraError_t1947259653, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLCAMERAERROR_T1947259653_H
#ifndef MLINPUTCONTROLLERBUTTON_T2856573125_H
#define MLINPUTCONTROLLERBUTTON_T2856573125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.MagicLeap.MLInputControllerButton
struct  MLInputControllerButton_t2856573125 
{
public:
	// System.UInt32 UnityEngine.XR.MagicLeap.MLInputControllerButton::value__
	uint32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MLInputControllerButton_t2856573125, ___value___1)); }
	inline uint32_t get_value___1() const { return ___value___1; }
	inline uint32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLINPUTCONTROLLERBUTTON_T2856573125_H



extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLCamera_OnDeviceAvailableCallback_m3969742651(intptr_t ___data0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLCamera_OnDeviceUnavailableCallback_m2084882024(intptr_t ___data0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLCamera_OnDeviceOpenedCallback_m638013595(intptr_t ___data0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLCamera_OnDeviceClosedCallback_m2256987599(intptr_t ___data0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLCamera_OnDeviceDisconnectedCallback_m764838951(intptr_t ___data0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLCamera_OnDeviceErrorCallback_m1201638698(int32_t ___error0, intptr_t ___data1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLCamera_OnCaptureStartedCallback_m2701034731(MLCameraResultExtras_t1014470651 * ___extra0, intptr_t ___data1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLCamera_OnCaptureFailedCallback_m2114035890(MLCameraResultExtras_t1014470651 * ___extra0, intptr_t ___data1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLCamera_OnCaptureBufferLostCallback_m1185316435(MLCameraResultExtras_t1014470651 * ___extra0, intptr_t ___data1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLCamera_OnCaptureProgressedCallback_m2172038068(uint64_t ___metadataHandle0, MLCameraResultExtras_t1014470651 * ___extra1, intptr_t ___data2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLCamera_OnCaptureCompletedCallback_m3255642694(uint64_t ___metadataHandle0, MLCameraResultExtras_t1014470651 * ___extra1, intptr_t ___data2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLCamera_OnImageBufferAvailableCallback_m1619805317(MLCameraOutput_t2680920266_marshaled_pinvoke* ___output0, intptr_t ___data1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLInput_OnControllerTouchpadGestureStartNative_m1933966868(uint8_t ___controllerId0, MLInputControllerTouchpadGesture_t3269538253 * ___touchpadGesture1, intptr_t ___data2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLInput_OnControllerTouchpadGestureContinueNative_m1229656175(uint8_t ___controllerId0, MLInputControllerTouchpadGesture_t3269538253 * ___touchpadGesture1, intptr_t ___data2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLInput_OnControllerTouchpadGestureEndNative_m3946959706(uint8_t ___controllerId0, MLInputControllerTouchpadGesture_t3269538253 * ___touchpadGesture1, intptr_t ___data2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLInput_OnControllerButtonDownNative_m3277904802(uint8_t ___controllerId0, uint32_t ___button1, intptr_t ___data2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLInput_OnControllerButtonUpNative_m501076513(uint8_t ___controllerId0, uint32_t ___button1, intptr_t ___data2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLInput_OnControllerConnectNative_m1934554086(uint8_t ___controllerId0, intptr_t ___data1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLInput_OnControllerDisconnectNative_m4196954462(uint8_t ___controllerId0, intptr_t ___data1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLMediaPlayerLumin_PlayerReadyHandler_m3019168940(int32_t ___mediaPlayerID0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLMediaPlayerLumin_PlayerCompleteHandler_m3874404068(int32_t ___mediaPlayerID0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLMediaPlayerLumin_PlayerBufferingUpdateHandler_m975547798(int32_t ___percent0, int32_t ___mediaPlayerID1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLMediaPlayerLumin_PlayerErrorHandler_m929478255(int32_t ___result0, intptr_t ___error1, int32_t ___mediaPlayerID2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLMediaPlayerLumin_PlayerInfoHandler_m693427627(int32_t ___info0, int32_t ___extra1, int32_t ___mediaPlayerID2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLMediaPlayerLumin_PlayerVideoSizeChangedHandler_m4130819638(int32_t ___width0, int32_t ___height1, int32_t ___mediaPlayerID2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MLMediaPlayerLumin_PlayerSeekCompletedHandler_m1169662868(int32_t ___mediaPlayerID0);
extern const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[26] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLCamera_OnDeviceAvailableCallback_m3969742651),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLCamera_OnDeviceUnavailableCallback_m2084882024),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLCamera_OnDeviceOpenedCallback_m638013595),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLCamera_OnDeviceClosedCallback_m2256987599),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLCamera_OnDeviceDisconnectedCallback_m764838951),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLCamera_OnDeviceErrorCallback_m1201638698),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLCamera_OnCaptureStartedCallback_m2701034731),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLCamera_OnCaptureFailedCallback_m2114035890),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLCamera_OnCaptureBufferLostCallback_m1185316435),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLCamera_OnCaptureProgressedCallback_m2172038068),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLCamera_OnCaptureCompletedCallback_m3255642694),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLCamera_OnImageBufferAvailableCallback_m1619805317),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLInput_OnControllerTouchpadGestureStartNative_m1933966868),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLInput_OnControllerTouchpadGestureContinueNative_m1229656175),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLInput_OnControllerTouchpadGestureEndNative_m3946959706),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLInput_OnControllerButtonDownNative_m3277904802),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLInput_OnControllerButtonUpNative_m501076513),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLInput_OnControllerConnectNative_m1934554086),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLInput_OnControllerDisconnectNative_m4196954462),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLMediaPlayerLumin_PlayerReadyHandler_m3019168940),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLMediaPlayerLumin_PlayerCompleteHandler_m3874404068),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLMediaPlayerLumin_PlayerBufferingUpdateHandler_m975547798),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLMediaPlayerLumin_PlayerErrorHandler_m929478255),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLMediaPlayerLumin_PlayerInfoHandler_m693427627),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLMediaPlayerLumin_PlayerVideoSizeChangedHandler_m4130819638),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MLMediaPlayerLumin_PlayerSeekCompletedHandler_m1169662868),
};
