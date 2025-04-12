// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamProjectWheelz/BoostPad.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoostPad() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
TEAMPROJECTWHEELZ_API UClass* Z_Construct_UClass_ABoostPad();
TEAMPROJECTWHEELZ_API UClass* Z_Construct_UClass_ABoostPad_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamProjectWheelz();
// End Cross Module References

// Begin Class ABoostPad Function OnOverlap
struct Z_Construct_UFunction_ABoostPad_OnOverlap_Statics
{
	struct BoostPad_eventOnOverlap_Parms
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
		{ "Comment", "//When a car overlaps the boost pad\n" },
#endif
		{ "ModuleRelativePath", "BoostPad.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When a car overlaps the boost pad" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoostPad_eventOnOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoostPad_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoostPad_eventOnOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoostPad_eventOnOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((BoostPad_eventOnOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BoostPad_eventOnOverlap_Parms), &Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoostPad_eventOnOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoostPad, nullptr, "OnOverlap", nullptr, nullptr, Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::BoostPad_eventOnOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::BoostPad_eventOnOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABoostPad_OnOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoostPad_OnOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABoostPad::execOnOverlap)
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
// End Class ABoostPad Function OnOverlap

// Begin Class ABoostPad
void ABoostPad::StaticRegisterNativesABoostPad()
{
	UClass* Class = ABoostPad::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlap", &ABoostPad::execOnOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoostPad);
UClass* Z_Construct_UClass_ABoostPad_NoRegister()
{
	return ABoostPad::StaticClass();
}
struct Z_Construct_UClass_ABoostPad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BoostPad.h" },
		{ "ModuleRelativePath", "BoostPad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyBox_MetaData[] = {
		{ "Category", "BoostPad" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Collision Box\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoostPad.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision Box" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoostAmount_MetaData[] = {
		{ "Category", "BoostPad" },
		{ "ClampMax", "9999.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Boost Amount\n" },
#endif
		{ "ModuleRelativePath", "BoostPad.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Boost Amount" },
#endif
		{ "UIMax", "1500.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyBox;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoostAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoostPad_OnOverlap, "OnOverlap" }, // 2691559478
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoostPad>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoostPad_Statics::NewProp_MyBox = { "MyBox", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoostPad, MyBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyBox_MetaData), NewProp_MyBox_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoostPad_Statics::NewProp_BoostAmount = { "BoostAmount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoostPad, BoostAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoostAmount_MetaData), NewProp_BoostAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoostPad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoostPad_Statics::NewProp_MyBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoostPad_Statics::NewProp_BoostAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoostPad_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABoostPad_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamProjectWheelz,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoostPad_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoostPad_Statics::ClassParams = {
	&ABoostPad::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABoostPad_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABoostPad_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoostPad_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoostPad_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABoostPad()
{
	if (!Z_Registration_Info_UClass_ABoostPad.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoostPad.OuterSingleton, Z_Construct_UClass_ABoostPad_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABoostPad.OuterSingleton;
}
template<> TEAMPROJECTWHEELZ_API UClass* StaticClass<ABoostPad>()
{
	return ABoostPad::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABoostPad);
ABoostPad::~ABoostPad() {}
// End Class ABoostPad

// Begin Registration
struct Z_CompiledInDeferFile_FID_Temp_Github_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BoostPad_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABoostPad, ABoostPad::StaticClass, TEXT("ABoostPad"), &Z_Registration_Info_UClass_ABoostPad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoostPad), 1687258403U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Temp_Github_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BoostPad_h_4050991298(TEXT("/Script/TeamProjectWheelz"),
	Z_CompiledInDeferFile_FID_Temp_Github_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BoostPad_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Temp_Github_TeamProject_TeamProjectWheelz_Source_TeamProjectWheelz_BoostPad_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
