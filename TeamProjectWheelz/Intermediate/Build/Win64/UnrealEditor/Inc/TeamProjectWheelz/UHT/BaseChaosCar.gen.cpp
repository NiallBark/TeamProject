// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamProjectWheelz/BaseChaosCar.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseChaosCar() {}

// Begin Cross Module References
CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
TEAMPROJECTWHEELZ_API UClass* Z_Construct_UClass_ABaseChaosCar();
TEAMPROJECTWHEELZ_API UClass* Z_Construct_UClass_ABaseChaosCar_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamProjectWheelz();
// End Cross Module References

// Begin Class ABaseChaosCar
void ABaseChaosCar::StaticRegisterNativesABaseChaosCar()
{
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseChaosCar.h" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingMaxTorque_MetaData[] = {
		{ "Category", "Chaos Vehicles | Engine" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum torque of the engine" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingMaxRPM_MetaData[] = {
		{ "Category", "Chaos Vehicles | Engine" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum RPM of the engine" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingEngineIdleRPM_MetaData[] = {
		{ "Category", "Chaos Vehicles | Engine" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Idle RPM of the engine" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingEngineBrakeEffect_MetaData[] = {
		{ "Category", "Chaos Vehicles | Engine" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Brake effect of the engine" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingEngineRevUpMOI_MetaData[] = {
		{ "Category", "Chaos Vehicles | Engine" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Moment of inertia for engine rev up" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingEngineRevDownRate_MetaData[] = {
		{ "Category", "Chaos Vehicles | Engine" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rate at which the engine revs down" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingChangeUpRPM_MetaData[] = {
		{ "Category", "Chaos Vehicles | Transmission" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RPM at which to change up gears" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingChangeDownRPM_MetaData[] = {
		{ "Category", "Chaos Vehicles | Transmission" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RPM at which to change down gears" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingGearChangeTime_MetaData[] = {
		{ "Category", "Chaos Vehicles | Transmission" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time taken to change gears" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingTransmissionEfficiency_MetaData[] = {
		{ "Category", "Chaos Vehicles | Transmission" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Efficiency of the transmission" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingMass_MetaData[] = {
		{ "Category", "Chaos Vehicles | Vehicle" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mass of the vehicle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingChassisWidth_MetaData[] = {
		{ "Category", "Chaos Vehicles | Vehicle" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Width of the chassis" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingChassisHeight_MetaData[] = {
		{ "Category", "Chaos Vehicles | Vehicle" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Height of the chassis" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingDragCoefficient_MetaData[] = {
		{ "Category", "Chaos Vehicles | Vehicle" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drag coefficient of the vehicle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingDownforceCoefficient_MetaData[] = {
		{ "Category", "Chaos Vehicles | Vehicle" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Downforce coefficient of the vehicle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingSleepThreshold_MetaData[] = {
		{ "Category", "Chaos Vehicles | Vehicle" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sleep threshold of the vehicle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingSleepSlopeLimit_MetaData[] = {
		{ "Category", "Chaos Vehicles | Vehicle" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sleep slope limit of the vehicle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingAngleRatio_MetaData[] = {
		{ "Category", "Chaos Vehicles | Steering" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Angle ratio for steering" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingSteeringCurve_MetaData[] = {
		{ "Category", "Chaos Vehicles | Steering" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Steering curve" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingbArcadeControlEnabled_MetaData[] = {
		{ "Category", "Chaos Vehicles | ArcadeControl" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable arcade control" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingAltitudeHoldZ_MetaData[] = {
		{ "Category", "Chaos Vehicles | ArcadeControl" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Altitude hold Z value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingPositionHoldXY_MetaData[] = {
		{ "Category", "Chaos Vehicles | ArcadeControl" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Position hold XY value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingWheelRadius_MetaData[] = {
		{ "Category", "Chaos Vehicles | Wheels" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radius of the wheels" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingWheelWidth_MetaData[] = {
		{ "Category", "Chaos Vehicles | Wheels" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Width of the wheels" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingWheelMass_MetaData[] = {
		{ "Category", "Chaos Vehicles | Wheels" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mass of the wheels" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingCorneringStiffness_MetaData[] = {
		{ "Category", "Chaos Vehicles | Wheels" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cornering stiffness of the wheels" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingSlideSlipModifier_MetaData[] = {
		{ "Category", "Chaos Vehicles | Wheels" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Slide slip modifier of the wheels" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingVehicleMesh_MetaData[] = {
		{ "Category", "Chaos Vehicles | Meshes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwritingWheelClass_MetaData[] = {
		{ "Category", "Chaos Vehicles | Meshes" },
		{ "ModuleRelativePath", "BaseChaosCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wheel class reference" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingMaxTorque;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingMaxRPM;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingEngineIdleRPM;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingEngineBrakeEffect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingEngineRevUpMOI;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingEngineRevDownRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingChangeUpRPM;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingChangeDownRPM;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingGearChangeTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingTransmissionEfficiency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingMass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingChassisWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingChassisHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingDragCoefficient;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingDownforceCoefficient;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingSleepThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingSleepSlopeLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingAngleRatio;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverwritingSteeringCurve;
	static void NewProp_OverwritingbArcadeControlEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OverwritingbArcadeControlEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingAltitudeHoldZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingPositionHoldXY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingWheelRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingWheelWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingWheelMass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingCorneringStiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverwritingSlideSlipModifier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverwritingVehicleMesh;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OverwritingWheelClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseChaosCar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingMaxTorque = { "OverwritingMaxTorque", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingMaxTorque), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingMaxTorque_MetaData), NewProp_OverwritingMaxTorque_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingMaxRPM = { "OverwritingMaxRPM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingMaxRPM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingMaxRPM_MetaData), NewProp_OverwritingMaxRPM_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingEngineIdleRPM = { "OverwritingEngineIdleRPM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingEngineIdleRPM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingEngineIdleRPM_MetaData), NewProp_OverwritingEngineIdleRPM_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingEngineBrakeEffect = { "OverwritingEngineBrakeEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingEngineBrakeEffect), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingEngineBrakeEffect_MetaData), NewProp_OverwritingEngineBrakeEffect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingEngineRevUpMOI = { "OverwritingEngineRevUpMOI", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingEngineRevUpMOI), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingEngineRevUpMOI_MetaData), NewProp_OverwritingEngineRevUpMOI_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingEngineRevDownRate = { "OverwritingEngineRevDownRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingEngineRevDownRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingEngineRevDownRate_MetaData), NewProp_OverwritingEngineRevDownRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingChangeUpRPM = { "OverwritingChangeUpRPM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingChangeUpRPM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingChangeUpRPM_MetaData), NewProp_OverwritingChangeUpRPM_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingChangeDownRPM = { "OverwritingChangeDownRPM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingChangeDownRPM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingChangeDownRPM_MetaData), NewProp_OverwritingChangeDownRPM_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingGearChangeTime = { "OverwritingGearChangeTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingGearChangeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingGearChangeTime_MetaData), NewProp_OverwritingGearChangeTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingTransmissionEfficiency = { "OverwritingTransmissionEfficiency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingTransmissionEfficiency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingTransmissionEfficiency_MetaData), NewProp_OverwritingTransmissionEfficiency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingMass = { "OverwritingMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingMass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingMass_MetaData), NewProp_OverwritingMass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingChassisWidth = { "OverwritingChassisWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingChassisWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingChassisWidth_MetaData), NewProp_OverwritingChassisWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingChassisHeight = { "OverwritingChassisHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingChassisHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingChassisHeight_MetaData), NewProp_OverwritingChassisHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingDragCoefficient = { "OverwritingDragCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingDragCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingDragCoefficient_MetaData), NewProp_OverwritingDragCoefficient_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingDownforceCoefficient = { "OverwritingDownforceCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingDownforceCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingDownforceCoefficient_MetaData), NewProp_OverwritingDownforceCoefficient_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingSleepThreshold = { "OverwritingSleepThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingSleepThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingSleepThreshold_MetaData), NewProp_OverwritingSleepThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingSleepSlopeLimit = { "OverwritingSleepSlopeLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingSleepSlopeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingSleepSlopeLimit_MetaData), NewProp_OverwritingSleepSlopeLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingAngleRatio = { "OverwritingAngleRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingAngleRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingAngleRatio_MetaData), NewProp_OverwritingAngleRatio_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingSteeringCurve = { "OverwritingSteeringCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingSteeringCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingSteeringCurve_MetaData), NewProp_OverwritingSteeringCurve_MetaData) }; // 762678829
void Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingbArcadeControlEnabled_SetBit(void* Obj)
{
	((ABaseChaosCar*)Obj)->OverwritingbArcadeControlEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingbArcadeControlEnabled = { "OverwritingbArcadeControlEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseChaosCar), &Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingbArcadeControlEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingbArcadeControlEnabled_MetaData), NewProp_OverwritingbArcadeControlEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingAltitudeHoldZ = { "OverwritingAltitudeHoldZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingAltitudeHoldZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingAltitudeHoldZ_MetaData), NewProp_OverwritingAltitudeHoldZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingPositionHoldXY = { "OverwritingPositionHoldXY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingPositionHoldXY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingPositionHoldXY_MetaData), NewProp_OverwritingPositionHoldXY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingWheelRadius = { "OverwritingWheelRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingWheelRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingWheelRadius_MetaData), NewProp_OverwritingWheelRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingWheelWidth = { "OverwritingWheelWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingWheelWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingWheelWidth_MetaData), NewProp_OverwritingWheelWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingWheelMass = { "OverwritingWheelMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingWheelMass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingWheelMass_MetaData), NewProp_OverwritingWheelMass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingCorneringStiffness = { "OverwritingCorneringStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingCorneringStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingCorneringStiffness_MetaData), NewProp_OverwritingCorneringStiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingSlideSlipModifier = { "OverwritingSlideSlipModifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingSlideSlipModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingSlideSlipModifier_MetaData), NewProp_OverwritingSlideSlipModifier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingVehicleMesh = { "OverwritingVehicleMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingVehicleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingVehicleMesh_MetaData), NewProp_OverwritingVehicleMesh_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingWheelClass = { "OverwritingWheelClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseChaosCar, OverwritingWheelClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwritingWheelClass_MetaData), NewProp_OverwritingWheelClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseChaosCar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingMaxTorque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingMaxRPM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingEngineIdleRPM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingEngineBrakeEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingEngineRevUpMOI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingEngineRevDownRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingChangeUpRPM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingChangeDownRPM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingGearChangeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingTransmissionEfficiency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingChassisWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingChassisHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingDragCoefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingDownforceCoefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingSleepThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingSleepSlopeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingAngleRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingSteeringCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingbArcadeControlEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingAltitudeHoldZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingPositionHoldXY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingWheelRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingWheelWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingWheelMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingCorneringStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingSlideSlipModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingVehicleMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseChaosCar_Statics::NewProp_OverwritingWheelClass,
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
	nullptr,
	Z_Construct_UClass_ABaseChaosCar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
ABaseChaosCar::ABaseChaosCar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseChaosCar);
ABaseChaosCar::~ABaseChaosCar() {}
// End Class ABaseChaosCar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseChaosCar, ABaseChaosCar::StaticClass, TEXT("ABaseChaosCar"), &Z_Registration_Info_UClass_ABaseChaosCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseChaosCar), 366360125U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_677605329(TEXT("/Script/TeamProjectWheelz"),
	Z_CompiledInDeferFile_FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_TeamProject_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BaseChaosCar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
