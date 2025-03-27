// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamProjectWheelz/BaseChaosCar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseChaosCar() {}

// Begin Cross Module References
CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
TEAMPROJECTWHEELZ_API UClass* Z_Construct_UClass_ABaseChaosCar();
TEAMPROJECTWHEELZ_API UClass* Z_Construct_UClass_ABaseChaosCar_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamProjectWheelz();
// End Cross Module References

// Begin Class ABaseChaosCar Function MoveRightCPlus
struct Z_Construct_UFunction_ABaseChaosCar_MoveRightCPlus_Statics
{
	struct BaseChaosCar_eventMoveRightCPlus_Parms
	{
		float Val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Car" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseChaosCar_MoveRightCPlus_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseChaosCar_eventMoveRightCPlus_Parms, Val), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseChaosCar_MoveRightCPlus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseChaosCar_MoveRightCPlus_Statics::NewProp_Val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseChaosCar_MoveRightCPlus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseChaosCar_MoveRightCPlus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseChaosCar, nullptr, "MoveRightCPlus", nullptr, nullptr, Z_Construct_UFunction_ABaseChaosCar_MoveRightCPlus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseChaosCar_MoveRightCPlus_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseChaosCar_MoveRightCPlus_Statics::BaseChaosCar_eventMoveRightCPlus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseChaosCar_MoveRightCPlus_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseChaosCar_MoveRightCPlus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseChaosCar_MoveRightCPlus_Statics::BaseChaosCar_eventMoveRightCPlus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseChaosCar_MoveRightCPlus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseChaosCar_MoveRightCPlus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseChaosCar::execMoveRightCPlus)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveRightCPlus(Z_Param_Val);
	P_NATIVE_END;
}
// End Class ABaseChaosCar Function MoveRightCPlus

// Begin Class ABaseChaosCar Function ThrottleCPlus
struct Z_Construct_UFunction_ABaseChaosCar_ThrottleCPlus_Statics
{
	struct BaseChaosCar_eventThrottleCPlus_Parms
	{
		float Val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Car" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseChaosCar_ThrottleCPlus_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseChaosCar_eventThrottleCPlus_Parms, Val), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseChaosCar_ThrottleCPlus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseChaosCar_ThrottleCPlus_Statics::NewProp_Val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseChaosCar_ThrottleCPlus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseChaosCar_ThrottleCPlus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseChaosCar, nullptr, "ThrottleCPlus", nullptr, nullptr, Z_Construct_UFunction_ABaseChaosCar_ThrottleCPlus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseChaosCar_ThrottleCPlus_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseChaosCar_ThrottleCPlus_Statics::BaseChaosCar_eventThrottleCPlus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseChaosCar_ThrottleCPlus_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseChaosCar_ThrottleCPlus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseChaosCar_ThrottleCPlus_Statics::BaseChaosCar_eventThrottleCPlus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseChaosCar_ThrottleCPlus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseChaosCar_ThrottleCPlus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseChaosCar::execThrottleCPlus)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ThrottleCPlus(Z_Param_Val);
	P_NATIVE_END;
}
// End Class ABaseChaosCar Function ThrottleCPlus

// Begin Class ABaseChaosCar
void ABaseChaosCar::StaticRegisterNativesABaseChaosCar()
{
	UClass* Class = ABaseChaosCar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MoveRightCPlus", &ABaseChaosCar::execMoveRightCPlus },
		{ "ThrottleCPlus", &ABaseChaosCar::execThrottleCPlus },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseChaosCar);
UClass* Z_Construct_UClass_ABaseChaosCar_NoRegister()
{
	return ABaseChaosCar::StaticClass();
}
struct Z_Construct_UClass_ABaseChaosCar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseChaosCar.h" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrueSpeed_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Car True Speed\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Car True Speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplaySpeed_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Car Display Speed\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Car Display Speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportCooldownTimer_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Car's Teleport Cooldown Timer To Prevent Multiple Teleports In The Same Teleporter\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Car's Teleport Cooldown Timer To Prevent Multiple Teleports In The Same Teleporter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarCamera_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Car Camera\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Car Camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarSpringArm_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Car Spring Arm\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Car Spring Arm" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriftTimer_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Drift Timer\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drift Timer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDrifting_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Car Drift Bool\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Car Drift Bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriftCooldown_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Drift Cooldown\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drift Cooldown" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanDrift_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Can Drift Bool\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can Drift Bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriftMaxTime_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Drift Max Time\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drift Max Time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFriction_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Car Current Friction\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Car Current Friction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriftFriction_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Car Inital Drift Friction\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Car Inital Drift Friction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriftingFriction_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Car Drifting Friction\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Car Drifting Friction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFriction_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Car Default Friction\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Car Default Friction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackLeftTireFX_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NiagaraFX Component Back Left Tire\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NiagaraFX Component Back Left Tire" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackLeftTireFXPosition_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NiagaraFX Component Back Left Tire Position\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NiagaraFX Component Back Left Tire Position" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackRightTireFX_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NiagaraFX Component Back Right Tire\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NiagaraFX Component Back Right Tire" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackRightTireFXPosition_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NiagaraFX Component Back Right Tire Position\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NiagaraFX Component Back Right Tire Position" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoostFX_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NiagaraFX Boost\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NiagaraFX Boost" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoostFXPosition_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NiagaraFX Boost Position\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NiagaraFX Boost Position" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackLeftTireFXComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// References to the spawned Niagara components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "References to the spawned Niagara components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackRightTireFXComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoostFXComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleColor_MetaData[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Main Particle Color\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main Particle Color" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrueSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplaySpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportCooldownTimer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CarCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CarSpringArm;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DriftTimer;
	static void NewProp_bIsDrifting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDrifting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DriftCooldown;
	static void NewProp_bCanDrift_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDrift;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DriftMaxTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DriftFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DriftingFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFriction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackLeftTireFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackLeftTireFXPosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackRightTireFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackRightTireFXPosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoostFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoostFXPosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackLeftTireFXComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackRightTireFXComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoostFXComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseChaosCar_MoveRightCPlus, "MoveRightCPlus" }, // 926985876
		{ &Z_Construct_UFunction_ABaseChaosCar_ThrottleCPlus, "ThrottleCPlus" }, // 3643080086
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseChaosCar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_TrueSpeed = { "TrueSpeed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, TrueSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrueSpeed_MetaData), NewProp_TrueSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DisplaySpeed = { "DisplaySpeed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, DisplaySpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplaySpeed_MetaData), NewProp_DisplaySpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_TeleportCooldownTimer = { "TeleportCooldownTimer", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, TeleportCooldownTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportCooldownTimer_MetaData), NewProp_TeleportCooldownTimer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_CarCamera = { "CarCamera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, CarCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarCamera_MetaData), NewProp_CarCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_CarSpringArm = { "CarSpringArm", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, CarSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarSpringArm_MetaData), NewProp_CarSpringArm_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DriftTimer = { "DriftTimer", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, DriftTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriftTimer_MetaData), NewProp_DriftTimer_MetaData) };
void Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_bIsDrifting_SetBit(void* Obj)
{
	((ABaseChaosCar*)Obj)->bIsDrifting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_bIsDrifting = { "bIsDrifting", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseChaosCar), &Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_bIsDrifting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDrifting_MetaData), NewProp_bIsDrifting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DriftCooldown = { "DriftCooldown", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, DriftCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriftCooldown_MetaData), NewProp_DriftCooldown_MetaData) };
void Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_bCanDrift_SetBit(void* Obj)
{
	((ABaseChaosCar*)Obj)->bCanDrift = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_bCanDrift = { "bCanDrift", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseChaosCar), &Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_bCanDrift_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanDrift_MetaData), NewProp_bCanDrift_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DriftMaxTime = { "DriftMaxTime", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, DriftMaxTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriftMaxTime_MetaData), NewProp_DriftMaxTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_CurrentFriction = { "CurrentFriction", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, CurrentFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentFriction_MetaData), NewProp_CurrentFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DriftFriction = { "DriftFriction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, DriftFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriftFriction_MetaData), NewProp_DriftFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DriftingFriction = { "DriftingFriction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, DriftingFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriftingFriction_MetaData), NewProp_DriftingFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DefaultFriction = { "DefaultFriction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, DefaultFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFriction_MetaData), NewProp_DefaultFriction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BackLeftTireFX = { "BackLeftTireFX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, BackLeftTireFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackLeftTireFX_MetaData), NewProp_BackLeftTireFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BackLeftTireFXPosition = { "BackLeftTireFXPosition", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, BackLeftTireFXPosition), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackLeftTireFXPosition_MetaData), NewProp_BackLeftTireFXPosition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BackRightTireFX = { "BackRightTireFX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, BackRightTireFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackRightTireFX_MetaData), NewProp_BackRightTireFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BackRightTireFXPosition = { "BackRightTireFXPosition", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, BackRightTireFXPosition), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackRightTireFXPosition_MetaData), NewProp_BackRightTireFXPosition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BoostFX = { "BoostFX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, BoostFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoostFX_MetaData), NewProp_BoostFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BoostFXPosition = { "BoostFXPosition", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, BoostFXPosition), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoostFXPosition_MetaData), NewProp_BoostFXPosition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BackLeftTireFXComponent = { "BackLeftTireFXComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, BackLeftTireFXComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackLeftTireFXComponent_MetaData), NewProp_BackLeftTireFXComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BackRightTireFXComponent = { "BackRightTireFXComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, BackRightTireFXComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackRightTireFXComponent_MetaData), NewProp_BackRightTireFXComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BoostFXComponent = { "BoostFXComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, BoostFXComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoostFXComponent_MetaData), NewProp_BoostFXComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_ParticleColor = { "ParticleColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, ParticleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleColor_MetaData), NewProp_ParticleColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseChaosCar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_TrueSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DisplaySpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_TeleportCooldownTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_CarCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_CarSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DriftTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_bIsDrifting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DriftCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_bCanDrift,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DriftMaxTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_CurrentFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DriftFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DriftingFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DefaultFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BackLeftTireFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BackLeftTireFXPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BackRightTireFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BackRightTireFXPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BoostFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BoostFXPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BackLeftTireFXComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BackRightTireFXComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BoostFXComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_ParticleColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseChaosCar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseChaosCar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWheeledVehiclePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamProjectWheelz,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseChaosCar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseChaosCar_Statics::ClassParams = {
	&ABaseChaosCar::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABaseChaosCar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseChaosCar_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseChaosCar_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseChaosCar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseChaosCar()
{
	if (!Z_Registration_Info_UClass_ABaseChaosCar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseChaosCar.OuterSingleton, Z_Construct_UClass_ABaseChaosCar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseChaosCar.OuterSingleton;
}
template<> TEAMPROJECTWHEELZ_API UClass* StaticClass<ABaseChaosCar>()
{
	return ABaseChaosCar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseChaosCar);
ABaseChaosCar::~ABaseChaosCar() {}
// End Class ABaseChaosCar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_100627439_Desktop_Github_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseChaosCar, ABaseChaosCar::StaticClass, TEXT("ABaseChaosCar"), &Z_Registration_Info_UClass_ABaseChaosCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseChaosCar), 3636255149U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_100627439_Desktop_Github_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_1199860628(TEXT("/Script/TeamProjectWheelz"),
	Z_CompiledInDeferFile_FID_Users_100627439_Desktop_Github_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_100627439_Desktop_Github_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
