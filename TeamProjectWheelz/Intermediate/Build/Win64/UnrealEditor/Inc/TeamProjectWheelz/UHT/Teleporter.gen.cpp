// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamProjectWheelz/Teleporter.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeleporter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
TEAMPROJECTWHEELZ_API UClass* Z_Construct_UClass_ATeleporter();
TEAMPROJECTWHEELZ_API UClass* Z_Construct_UClass_ATeleporter_NoRegister();
TEAMPROJECTWHEELZ_API UScriptStruct* Z_Construct_UScriptStruct_FTeleportLocation();
UPackage* Z_Construct_UPackage__Script_TeamProjectWheelz();
// End Cross Module References

// Begin ScriptStruct FTeleportLocation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TeleportLocation;
class UScriptStruct* FTeleportLocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TeleportLocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TeleportLocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTeleportLocation, (UObject*)Z_Construct_UPackage__Script_TeamProjectWheelz(), TEXT("TeleportLocation"));
	}
	return Z_Registration_Info_UScriptStruct_TeleportLocation.OuterSingleton;
}
template<> TEAMPROJECTWHEELZ_API UScriptStruct* StaticStruct<FTeleportLocation>()
{
	return FTeleportLocation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTeleportLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Teleporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportActor_MetaData[] = {
		{ "Category", "Teleporter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The location and rotation of the teleporter, to use this create a blank actor and place it where you want the actor to be teleported, then drag the actor into the TeleportActor variable. if you're having trouble come ask Gabe or Niall\n" },
#endif
		{ "ModuleRelativePath", "Teleporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The location and rotation of the teleporter, to use this create a blank actor and place it where you want the actor to be teleported, then drag the actor into the TeleportActor variable. if you're having trouble come ask Gabe or Niall" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EjectSpeed_MetaData[] = {
		{ "Category", "Teleporter" },
		{ "ClampMax", "9999.0" },
		{ "ClampMin", "-999.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The speed at which the actor will be ejected\n" },
#endif
		{ "ModuleRelativePath", "Teleporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The speed at which the actor will be ejected" },
#endif
		{ "UIMax", "1500.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EjectRotationOffset_MetaData[] = {
		{ "Category", "Teleporter" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The offset of the rotation of the actor when it is ejected compared to the teleport location rotation\n" },
#endif
		{ "ModuleRelativePath", "Teleporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The offset of the rotation of the actor when it is ejected compared to the teleport location rotation" },
#endif
		{ "UIMax", "90" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeleportActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EjectSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EjectRotationOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTeleportLocation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTeleportLocation_Statics::NewProp_TeleportActor = { "TeleportActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTeleportLocation, TeleportActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportActor_MetaData), NewProp_TeleportActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTeleportLocation_Statics::NewProp_EjectSpeed = { "EjectSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTeleportLocation, EjectSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EjectSpeed_MetaData), NewProp_EjectSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTeleportLocation_Statics::NewProp_EjectRotationOffset = { "EjectRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTeleportLocation, EjectRotationOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EjectRotationOffset_MetaData), NewProp_EjectRotationOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTeleportLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeleportLocation_Statics::NewProp_TeleportActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeleportLocation_Statics::NewProp_EjectSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeleportLocation_Statics::NewProp_EjectRotationOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeleportLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTeleportLocation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TeamProjectWheelz,
	nullptr,
	&NewStructOps,
	"TeleportLocation",
	Z_Construct_UScriptStruct_FTeleportLocation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeleportLocation_Statics::PropPointers),
	sizeof(FTeleportLocation),
	alignof(FTeleportLocation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeleportLocation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTeleportLocation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTeleportLocation()
{
	if (!Z_Registration_Info_UScriptStruct_TeleportLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TeleportLocation.InnerSingleton, Z_Construct_UScriptStruct_FTeleportLocation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TeleportLocation.InnerSingleton;
}
// End ScriptStruct FTeleportLocation

// Begin Class ATeleporter Function OnOverlap
struct Z_Construct_UFunction_ATeleporter_OnOverlap_Statics
{
	struct Teleporter_eventOnOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When a car overlaps the teleporter\n" },
#endif
		{ "ModuleRelativePath", "Teleporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When a car overlaps the teleporter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Teleporter_eventOnOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Teleporter_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Teleporter_eventOnOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Teleporter_eventOnOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Teleporter_eventOnOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Teleporter_eventOnOverlap_Parms), &Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Teleporter_eventOnOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeleporter, nullptr, "OnOverlap", nullptr, nullptr, Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::Teleporter_eventOnOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::Teleporter_eventOnOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATeleporter_OnOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATeleporter_OnOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATeleporter::execOnOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ATeleporter Function OnOverlap

// Begin Class ATeleporter Function TeleportActor
struct Z_Construct_UFunction_ATeleporter_TeleportActor_Statics
{
	struct Teleporter_eventTeleportActor_Parms
	{
		AActor* ActorToTeleport;
		int32 LocationIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teleporter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Teleport the actor\n" },
#endif
		{ "ModuleRelativePath", "Teleporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Teleport the actor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToTeleport;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocationIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeleporter_TeleportActor_Statics::NewProp_ActorToTeleport = { "ActorToTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Teleporter_eventTeleportActor_Parms, ActorToTeleport), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATeleporter_TeleportActor_Statics::NewProp_LocationIndex = { "LocationIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Teleporter_eventTeleportActor_Parms, LocationIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATeleporter_TeleportActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_TeleportActor_Statics::NewProp_ActorToTeleport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporter_TeleportActor_Statics::NewProp_LocationIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_TeleportActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeleporter_TeleportActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeleporter, nullptr, "TeleportActor", nullptr, nullptr, Z_Construct_UFunction_ATeleporter_TeleportActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_TeleportActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATeleporter_TeleportActor_Statics::Teleporter_eventTeleportActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporter_TeleportActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATeleporter_TeleportActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATeleporter_TeleportActor_Statics::Teleporter_eventTeleportActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATeleporter_TeleportActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATeleporter_TeleportActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATeleporter::execTeleportActor)
{
	P_GET_OBJECT(AActor,Z_Param_ActorToTeleport);
	P_GET_PROPERTY(FIntProperty,Z_Param_LocationIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TeleportActor(Z_Param_ActorToTeleport,Z_Param_LocationIndex);
	P_NATIVE_END;
}
// End Class ATeleporter Function TeleportActor

// Begin Class ATeleporter
void ATeleporter::StaticRegisterNativesATeleporter()
{
	UClass* Class = ATeleporter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlap", &ATeleporter::execOnOverlap },
		{ "TeleportActor", &ATeleporter::execTeleportActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeleporter);
UClass* Z_Construct_UClass_ATeleporter_NoRegister()
{
	return ATeleporter::StaticClass();
}
struct Z_Construct_UClass_ATeleporter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Teleporter.h" },
		{ "ModuleRelativePath", "Teleporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[] = {
		{ "Category", "Teleporter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Collision Box\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Teleporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision Box" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportLocations_MetaData[] = {
		{ "Category", "Teleporter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Teleport Location array\n" },
#endif
		{ "ModuleRelativePath", "Teleporter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Teleport Location array" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TeleportLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TeleportLocations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATeleporter_OnOverlap, "OnOverlap" }, // 753747047
		{ &Z_Construct_UFunction_ATeleporter_TeleportActor, "TeleportActor" }, // 1757419770
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeleporter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeleporter_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATeleporter, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionBox_MetaData), NewProp_CollisionBox_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATeleporter_Statics::NewProp_TeleportLocations_Inner = { "TeleportLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTeleportLocation, METADATA_PARAMS(0, nullptr) }; // 3940185295
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATeleporter_Statics::NewProp_TeleportLocations = { "TeleportLocations", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATeleporter, TeleportLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportLocations_MetaData), NewProp_TeleportLocations_MetaData) }; // 3940185295
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeleporter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleporter_Statics::NewProp_CollisionBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleporter_Statics::NewProp_TeleportLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleporter_Statics::NewProp_TeleportLocations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATeleporter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamProjectWheelz,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeleporter_Statics::ClassParams = {
	&ATeleporter::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATeleporter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATeleporter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATeleporter()
{
	if (!Z_Registration_Info_UClass_ATeleporter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeleporter.OuterSingleton, Z_Construct_UClass_ATeleporter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATeleporter.OuterSingleton;
}
template<> TEAMPROJECTWHEELZ_API UClass* StaticClass<ATeleporter>()
{
	return ATeleporter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATeleporter);
ATeleporter::~ATeleporter() {}
// End Class ATeleporter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_100627439_Desktop_Github_TeamProjectWheelz_Source_TeamProjectWheelz_Teleporter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTeleportLocation::StaticStruct, Z_Construct_UScriptStruct_FTeleportLocation_Statics::NewStructOps, TEXT("TeleportLocation"), &Z_Registration_Info_UScriptStruct_TeleportLocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTeleportLocation), 3940185295U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATeleporter, ATeleporter::StaticClass, TEXT("ATeleporter"), &Z_Registration_Info_UClass_ATeleporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeleporter), 1280114307U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_100627439_Desktop_Github_TeamProjectWheelz_Source_TeamProjectWheelz_Teleporter_h_1658096492(TEXT("/Script/TeamProjectWheelz"),
	Z_CompiledInDeferFile_FID_Users_100627439_Desktop_Github_TeamProjectWheelz_Source_TeamProjectWheelz_Teleporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_100627439_Desktop_Github_TeamProjectWheelz_Source_TeamProjectWheelz_Teleporter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_100627439_Desktop_Github_TeamProjectWheelz_Source_TeamProjectWheelz_Teleporter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_100627439_Desktop_Github_TeamProjectWheelz_Source_TeamProjectWheelz_Teleporter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
