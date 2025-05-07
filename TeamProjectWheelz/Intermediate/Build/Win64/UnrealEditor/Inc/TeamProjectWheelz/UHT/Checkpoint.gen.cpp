// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamProjectWheelz/Checkpoint.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckpoint() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
TEAMPROJECTWHEELZ_API UClass* Z_Construct_UClass_ACheckpoint();
TEAMPROJECTWHEELZ_API UClass* Z_Construct_UClass_ACheckpoint_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamProjectWheelz();
// End Cross Module References

// Begin Class ACheckpoint Function GetAiTargetPoint
struct Z_Construct_UFunction_ACheckpoint_GetAiTargetPoint_Statics
{
	struct Checkpoint_eventGetAiTargetPoint_Parms
	{
		bool IsSmart;
		int32 LocationDeviation;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Ai Target Point\n" },
#endif
		{ "ModuleRelativePath", "Checkpoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Ai Target Point" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_IsSmart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSmart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocationDeviation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACheckpoint_GetAiTargetPoint_Statics::NewProp_IsSmart_SetBit(void* Obj)
{
	((Checkpoint_eventGetAiTargetPoint_Parms*)Obj)->IsSmart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACheckpoint_GetAiTargetPoint_Statics::NewProp_IsSmart = { "IsSmart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Checkpoint_eventGetAiTargetPoint_Parms), &Z_Construct_UFunction_ACheckpoint_GetAiTargetPoint_Statics::NewProp_IsSmart_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACheckpoint_GetAiTargetPoint_Statics::NewProp_LocationDeviation = { "LocationDeviation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Checkpoint_eventGetAiTargetPoint_Parms, LocationDeviation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACheckpoint_GetAiTargetPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Checkpoint_eventGetAiTargetPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACheckpoint_GetAiTargetPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_GetAiTargetPoint_Statics::NewProp_IsSmart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_GetAiTargetPoint_Statics::NewProp_LocationDeviation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_GetAiTargetPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_GetAiTargetPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACheckpoint_GetAiTargetPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACheckpoint, nullptr, "GetAiTargetPoint", nullptr, nullptr, Z_Construct_UFunction_ACheckpoint_GetAiTargetPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_GetAiTargetPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACheckpoint_GetAiTargetPoint_Statics::Checkpoint_eventGetAiTargetPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_GetAiTargetPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACheckpoint_GetAiTargetPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACheckpoint_GetAiTargetPoint_Statics::Checkpoint_eventGetAiTargetPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACheckpoint_GetAiTargetPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACheckpoint_GetAiTargetPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACheckpoint::execGetAiTargetPoint)
{
	P_GET_UBOOL(Z_Param_IsSmart);
	P_GET_PROPERTY(FIntProperty,Z_Param_LocationDeviation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetAiTargetPoint(Z_Param_IsSmart,Z_Param_LocationDeviation);
	P_NATIVE_END;
}
// End Class ACheckpoint Function GetAiTargetPoint

// Begin Class ACheckpoint Function GetBoxHeight
struct Z_Construct_UFunction_ACheckpoint_GetBoxHeight_Statics
{
	struct Checkpoint_eventGetBoxHeight_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get box height\n" },
#endif
		{ "ModuleRelativePath", "Checkpoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get box height" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACheckpoint_GetBoxHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Checkpoint_eventGetBoxHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACheckpoint_GetBoxHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_GetBoxHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_GetBoxHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACheckpoint_GetBoxHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACheckpoint, nullptr, "GetBoxHeight", nullptr, nullptr, Z_Construct_UFunction_ACheckpoint_GetBoxHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_GetBoxHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACheckpoint_GetBoxHeight_Statics::Checkpoint_eventGetBoxHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_GetBoxHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACheckpoint_GetBoxHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACheckpoint_GetBoxHeight_Statics::Checkpoint_eventGetBoxHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACheckpoint_GetBoxHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACheckpoint_GetBoxHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACheckpoint::execGetBoxHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBoxHeight();
	P_NATIVE_END;
}
// End Class ACheckpoint Function GetBoxHeight

// Begin Class ACheckpoint Function OnOverlap
struct Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics
{
	struct Checkpoint_eventOnOverlap_Parms
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
		{ "Comment", "//When the player overlaps the checkpoint\n" },
#endif
		{ "ModuleRelativePath", "Checkpoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When the player overlaps the checkpoint" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Checkpoint_eventOnOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Checkpoint_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Checkpoint_eventOnOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Checkpoint_eventOnOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Checkpoint_eventOnOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Checkpoint_eventOnOverlap_Parms), &Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Checkpoint_eventOnOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACheckpoint, nullptr, "OnOverlap", nullptr, nullptr, Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::Checkpoint_eventOnOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::Checkpoint_eventOnOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACheckpoint_OnOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACheckpoint_OnOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACheckpoint::execOnOverlap)
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
// End Class ACheckpoint Function OnOverlap

// Begin Class ACheckpoint
void ACheckpoint::StaticRegisterNativesACheckpoint()
{
	UClass* Class = ACheckpoint::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAiTargetPoint", &ACheckpoint::execGetAiTargetPoint },
		{ "GetBoxHeight", &ACheckpoint::execGetBoxHeight },
		{ "OnOverlap", &ACheckpoint::execOnOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACheckpoint);
UClass* Z_Construct_UClass_ACheckpoint_NoRegister()
{
	return ACheckpoint::StaticClass();
}
struct Z_Construct_UClass_ACheckpoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Checkpoint.h" },
		{ "ModuleRelativePath", "Checkpoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyBox_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Checkpoint Hitbox\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Checkpoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checkpoint Hitbox" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyMesh_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Checkpoint Mesh\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Checkpoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checkpoint Mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AiTargetPoint_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Checkpoint AI Target Point\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Checkpoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checkpoint AI Target Point" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmartAiTargetPoint_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Checkpoint Smart AI Target Point\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Checkpoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checkpoint Smart AI Target Point" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSpeed_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Checkpoint AI Target Speed\n" },
#endif
		{ "ModuleRelativePath", "Checkpoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checkpoint AI Target Speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointNumber_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Checkpoint Number\n" },
#endif
		{ "ModuleRelativePath", "Checkpoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checkpoint Number" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isLoop_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Checkpoint Loop Check\n" },
#endif
		{ "ModuleRelativePath", "Checkpoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checkpoint Loop Check" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsShortCut_MetaData[] = {
		{ "Category", "Checkpoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Is The Checkpoint A Valid ai Shortcut\n" },
#endif
		{ "ModuleRelativePath", "Checkpoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is The Checkpoint A Valid ai Shortcut" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AiTargetPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmartAiTargetPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CheckpointNumber;
	static void NewProp_isLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isLoop;
	static void NewProp_IsShortCut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsShortCut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACheckpoint_GetAiTargetPoint, "GetAiTargetPoint" }, // 3935008611
		{ &Z_Construct_UFunction_ACheckpoint_GetBoxHeight, "GetBoxHeight" }, // 3278006062
		{ &Z_Construct_UFunction_ACheckpoint_OnOverlap, "OnOverlap" }, // 4181684770
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACheckpoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckpoint_Statics::NewProp_MyBox = { "MyBox", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpoint, MyBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyBox_MetaData), NewProp_MyBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckpoint_Statics::NewProp_MyMesh = { "MyMesh", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpoint, MyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyMesh_MetaData), NewProp_MyMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckpoint_Statics::NewProp_AiTargetPoint = { "AiTargetPoint", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpoint, AiTargetPoint), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AiTargetPoint_MetaData), NewProp_AiTargetPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckpoint_Statics::NewProp_SmartAiTargetPoint = { "SmartAiTargetPoint", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpoint, SmartAiTargetPoint), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmartAiTargetPoint_MetaData), NewProp_SmartAiTargetPoint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACheckpoint_Statics::NewProp_TargetSpeed = { "TargetSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpoint, TargetSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSpeed_MetaData), NewProp_TargetSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACheckpoint_Statics::NewProp_CheckpointNumber = { "CheckpointNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACheckpoint, CheckpointNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckpointNumber_MetaData), NewProp_CheckpointNumber_MetaData) };
void Z_Construct_UClass_ACheckpoint_Statics::NewProp_isLoop_SetBit(void* Obj)
{
	((ACheckpoint*)Obj)->isLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACheckpoint_Statics::NewProp_isLoop = { "isLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACheckpoint), &Z_Construct_UClass_ACheckpoint_Statics::NewProp_isLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isLoop_MetaData), NewProp_isLoop_MetaData) };
void Z_Construct_UClass_ACheckpoint_Statics::NewProp_IsShortCut_SetBit(void* Obj)
{
	((ACheckpoint*)Obj)->IsShortCut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACheckpoint_Statics::NewProp_IsShortCut = { "IsShortCut", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACheckpoint), &Z_Construct_UClass_ACheckpoint_Statics::NewProp_IsShortCut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsShortCut_MetaData), NewProp_IsShortCut_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACheckpoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpoint_Statics::NewProp_MyBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpoint_Statics::NewProp_MyMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpoint_Statics::NewProp_AiTargetPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpoint_Statics::NewProp_SmartAiTargetPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpoint_Statics::NewProp_TargetSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpoint_Statics::NewProp_CheckpointNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpoint_Statics::NewProp_isLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckpoint_Statics::NewProp_IsShortCut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACheckpoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamProjectWheelz,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACheckpoint_Statics::ClassParams = {
	&ACheckpoint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACheckpoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACheckpoint_Statics::Class_MetaDataParams), Z_Construct_UClass_ACheckpoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACheckpoint()
{
	if (!Z_Registration_Info_UClass_ACheckpoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACheckpoint.OuterSingleton, Z_Construct_UClass_ACheckpoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACheckpoint.OuterSingleton;
}
template<> TEAMPROJECTWHEELZ_API UClass* StaticClass<ACheckpoint>()
{
	return ACheckpoint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACheckpoint);
ACheckpoint::~ACheckpoint() {}
// End Class ACheckpoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_Checkpoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACheckpoint, ACheckpoint::StaticClass, TEXT("ACheckpoint"), &Z_Registration_Info_UClass_ACheckpoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACheckpoint), 2946401181U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_Checkpoint_h_2719135314(TEXT("/Script/TeamProjectWheelz"),
	Z_CompiledInDeferFile_FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_Checkpoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_Checkpoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
