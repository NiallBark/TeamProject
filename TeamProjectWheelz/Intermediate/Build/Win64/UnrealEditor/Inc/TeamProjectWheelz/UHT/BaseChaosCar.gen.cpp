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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
TEAMPROJECTWHEELZ_API UClass* Z_Construct_UClass_ABaseChaosCar();
TEAMPROJECTWHEELZ_API UClass* Z_Construct_UClass_ABaseChaosCar_NoRegister();
TEAMPROJECTWHEELZ_API UClass* Z_Construct_UClass_ACheckpoint_NoRegister();
TEAMPROJECTWHEELZ_API UClass* Z_Construct_UClass_ACheckpointManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamProjectWheelz();
// End Cross Module References

// Begin Class ABaseChaosCar Function DriveForward
struct Z_Construct_UFunction_ABaseChaosCar_DriveForward_Statics
{
	struct BaseChaosCar_eventDriveForward_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Expose DriveForward function to Blueprints\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Expose DriveForward function to Blueprints" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseChaosCar_DriveForward_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseChaosCar_eventDriveForward_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseChaosCar_DriveForward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseChaosCar_DriveForward_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseChaosCar_DriveForward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseChaosCar_DriveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseChaosCar, nullptr, "DriveForward", nullptr, nullptr, Z_Construct_UFunction_ABaseChaosCar_DriveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseChaosCar_DriveForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseChaosCar_DriveForward_Statics::BaseChaosCar_eventDriveForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseChaosCar_DriveForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseChaosCar_DriveForward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseChaosCar_DriveForward_Statics::BaseChaosCar_eventDriveForward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseChaosCar_DriveForward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseChaosCar_DriveForward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseChaosCar::execDriveForward)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DriveForward(Z_Param_Value);
	P_NATIVE_END;
}
// End Class ABaseChaosCar Function DriveForward

// Begin Class ABaseChaosCar Function Turning
struct Z_Construct_UFunction_ABaseChaosCar_Turning_Statics
{
	struct BaseChaosCar_eventTurning_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Car" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Expose Turning function to Blueprints\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Expose Turning function to Blueprints" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseChaosCar_Turning_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseChaosCar_eventTurning_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseChaosCar_Turning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseChaosCar_Turning_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseChaosCar_Turning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseChaosCar_Turning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseChaosCar, nullptr, "Turning", nullptr, nullptr, Z_Construct_UFunction_ABaseChaosCar_Turning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseChaosCar_Turning_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseChaosCar_Turning_Statics::BaseChaosCar_eventTurning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseChaosCar_Turning_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseChaosCar_Turning_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseChaosCar_Turning_Statics::BaseChaosCar_eventTurning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseChaosCar_Turning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseChaosCar_Turning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseChaosCar::execTurning)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Turning(Z_Param_Value);
	P_NATIVE_END;
}
// End Class ABaseChaosCar Function Turning

// Begin Class ABaseChaosCar
void ABaseChaosCar::StaticRegisterNativesABaseChaosCar()
{
	UClass* Class = ABaseChaosCar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DriveForward", &ABaseChaosCar::execDriveForward },
		{ "Turning", &ABaseChaosCar::execTurning },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsAI_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI Check\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI Check" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsAISmart_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIShortcutChance_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Chance for the AI to take a shortcut from 0 to 10\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chance for the AI to take a shortcut from 0 to 10" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIShortcutRoll_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Chance roll for the AI to take a shortcut from 0 to 10\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chance roll for the AI to take a shortcut from 0 to 10" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationDeviation_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ai's Target Point Deviation value\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ai's Target Point Deviation value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSpeed_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Target Speed\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target Speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPoint_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Target point for the AI to move towards\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target point for the AI to move towards" },
#endif
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InternalTimer_MetaData[] = {
		{ "Category", "Others" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Internal Timer\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal Timer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayTimer_MetaData[] = {
		{ "Category", "Others" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Display Timer\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Display Timer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BestLapTime_MetaData[] = {
		{ "Category", "Others" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Best Lap Time\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Best Lap Time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointCounter_MetaData[] = {
		{ "Category", "Others" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Checkpoint Counter\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checkpoint Counter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointLimit_MetaData[] = {
		{ "Category", "Others" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Checkpoint Limit\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checkpoint Limit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointManager_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCheckpoint_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextCheckpoint_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LapCounter_MetaData[] = {
		{ "Category", "Others" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lap Counter\n" },
#endif
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lap Counter" },
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
	static void NewProp_IsAI_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAI;
	static void NewProp_IsAISmart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAISmart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AIShortcutChance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AIShortcutRoll;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocationDeviation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPoint;
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InternalTimer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DisplayTimer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BestLapTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CheckpointCounter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CheckpointLimit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckpointManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCheckpoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextCheckpoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DriftFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DriftingFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFriction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackLeftTireFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackLeftTireFXPosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackRightTireFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackRightTireFXPosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoostFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoostFXPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LapCounter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackLeftTireFXComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackRightTireFXComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoostFXComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseChaosCar_DriveForward, "DriveForward" }, // 2221511458
		{ &Z_Construct_UFunction_ABaseChaosCar_Turning, "Turning" }, // 4214318950
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseChaosCar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_IsAI_SetBit(void* Obj)
{
	((ABaseChaosCar*)Obj)->IsAI = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_IsAI = { "IsAI", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseChaosCar), &Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_IsAI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsAI_MetaData), NewProp_IsAI_MetaData) };
void Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_IsAISmart_SetBit(void* Obj)
{
	((ABaseChaosCar*)Obj)->IsAISmart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_IsAISmart = { "IsAISmart", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseChaosCar), &Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_IsAISmart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsAISmart_MetaData), NewProp_IsAISmart_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_AIShortcutChance = { "AIShortcutChance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, AIShortcutChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIShortcutChance_MetaData), NewProp_AIShortcutChance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_AIShortcutRoll = { "AIShortcutRoll", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, AIShortcutRoll), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIShortcutRoll_MetaData), NewProp_AIShortcutRoll_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_LocationDeviation = { "LocationDeviation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, LocationDeviation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationDeviation_MetaData), NewProp_LocationDeviation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_TargetSpeed = { "TargetSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, TargetSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSpeed_MetaData), NewProp_TargetSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_TargetPoint = { "TargetPoint", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, TargetPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPoint_MetaData), NewProp_TargetPoint_MetaData) };
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_InternalTimer = { "InternalTimer", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, InternalTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InternalTimer_MetaData), NewProp_InternalTimer_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DisplayTimer = { "DisplayTimer", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, DisplayTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayTimer_MetaData), NewProp_DisplayTimer_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BestLapTime = { "BestLapTime", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, BestLapTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BestLapTime_MetaData), NewProp_BestLapTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_CheckpointCounter = { "CheckpointCounter", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, CheckpointCounter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckpointCounter_MetaData), NewProp_CheckpointCounter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_CheckpointLimit = { "CheckpointLimit", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, CheckpointLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckpointLimit_MetaData), NewProp_CheckpointLimit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_CheckpointManager = { "CheckpointManager", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, CheckpointManager), Z_Construct_UClass_ACheckpointManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckpointManager_MetaData), NewProp_CheckpointManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_CurrentCheckpoint = { "CurrentCheckpoint", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, CurrentCheckpoint), Z_Construct_UClass_ACheckpoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCheckpoint_MetaData), NewProp_CurrentCheckpoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_NextCheckpoint = { "NextCheckpoint", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, NextCheckpoint), Z_Construct_UClass_ACheckpoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextCheckpoint_MetaData), NewProp_NextCheckpoint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DriftFriction = { "DriftFriction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, DriftFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriftFriction_MetaData), NewProp_DriftFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DriftingFriction = { "DriftingFriction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, DriftingFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriftingFriction_MetaData), NewProp_DriftingFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DefaultFriction = { "DefaultFriction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, DefaultFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFriction_MetaData), NewProp_DefaultFriction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BackLeftTireFX = { "BackLeftTireFX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, BackLeftTireFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackLeftTireFX_MetaData), NewProp_BackLeftTireFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BackLeftTireFXPosition = { "BackLeftTireFXPosition", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, BackLeftTireFXPosition), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackLeftTireFXPosition_MetaData), NewProp_BackLeftTireFXPosition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BackRightTireFX = { "BackRightTireFX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, BackRightTireFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackRightTireFX_MetaData), NewProp_BackRightTireFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BackRightTireFXPosition = { "BackRightTireFXPosition", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, BackRightTireFXPosition), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackRightTireFXPosition_MetaData), NewProp_BackRightTireFXPosition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BoostFX = { "BoostFX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, BoostFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoostFX_MetaData), NewProp_BoostFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BoostFXPosition = { "BoostFXPosition", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, BoostFXPosition), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoostFXPosition_MetaData), NewProp_BoostFXPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_LapCounter = { "LapCounter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, LapCounter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LapCounter_MetaData), NewProp_LapCounter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BackLeftTireFXComponent = { "BackLeftTireFXComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, BackLeftTireFXComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackLeftTireFXComponent_MetaData), NewProp_BackLeftTireFXComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BackRightTireFXComponent = { "BackRightTireFXComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, BackRightTireFXComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackRightTireFXComponent_MetaData), NewProp_BackRightTireFXComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BoostFXComponent = { "BoostFXComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, BoostFXComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoostFXComponent_MetaData), NewProp_BoostFXComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_ParticleColor = { "ParticleColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, ParticleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleColor_MetaData), NewProp_ParticleColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseChaosCar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_IsAI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_IsAISmart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_AIShortcutChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_AIShortcutRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_LocationDeviation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_TargetSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_TargetPoint,
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
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_InternalTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DisplayTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BestLapTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_CheckpointCounter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_CheckpointLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_CheckpointManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_CurrentCheckpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_NextCheckpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DriftFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DriftingFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_DefaultFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BackLeftTireFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BackLeftTireFXPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BackRightTireFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BackRightTireFXPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BoostFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_BoostFXPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_LapCounter,
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
struct Z_CompiledInDeferFile_FID_Github_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseChaosCar, ABaseChaosCar::StaticClass, TEXT("ABaseChaosCar"), &Z_Registration_Info_UClass_ABaseChaosCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseChaosCar), 2040117029U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_3048547028(TEXT("/Script/TeamProjectWheelz"),
	Z_CompiledInDeferFile_FID_Github_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
