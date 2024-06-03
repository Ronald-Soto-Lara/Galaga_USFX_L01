// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/StrategyConcrect_1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategyConcrect_1() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AStrategyConcrect_1_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AStrategyConcrect_1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UEstrategy_NoRegister();
// End Cross Module References
	void AStrategyConcrect_1::StaticRegisterNativesAStrategyConcrect_1()
	{
	}
	UClass* Z_Construct_UClass_AStrategyConcrect_1_NoRegister()
	{
		return AStrategyConcrect_1::StaticClass();
	}
	struct Z_Construct_UClass_AStrategyConcrect_1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStrategyConcrect_1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStrategyConcrect_1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StrategyConcrect_1.h" },
		{ "ModuleRelativePath", "StrategyConcrect_1.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStrategyConcrect_1_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstrategy_NoRegister, (int32)VTABLE_OFFSET(AStrategyConcrect_1, IEstrategy), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStrategyConcrect_1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrategyConcrect_1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStrategyConcrect_1_Statics::ClassParams = {
		&AStrategyConcrect_1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStrategyConcrect_1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStrategyConcrect_1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStrategyConcrect_1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStrategyConcrect_1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStrategyConcrect_1, 3552625042);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AStrategyConcrect_1>()
	{
		return AStrategyConcrect_1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStrategyConcrect_1(Z_Construct_UClass_AStrategyConcrect_1, &AStrategyConcrect_1::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AStrategyConcrect_1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStrategyConcrect_1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
