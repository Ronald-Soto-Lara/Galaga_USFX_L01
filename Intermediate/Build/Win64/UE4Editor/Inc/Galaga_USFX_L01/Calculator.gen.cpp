// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Calculator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCalculator() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ACalculator_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ACalculator();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AArmarObserver();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ACalculator::StaticRegisterNativesACalculator()
	{
	}
	UClass* Z_Construct_UClass_ACalculator_NoRegister()
	{
		return ACalculator::StaticClass();
	}
	struct Z_Construct_UClass_ACalculator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACalculator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AArmarObserver,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACalculator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Calculator.h" },
		{ "ModuleRelativePath", "Calculator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACalculator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACalculator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACalculator_Statics::ClassParams = {
		&ACalculator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACalculator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACalculator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACalculator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACalculator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACalculator, 4221321481);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ACalculator>()
	{
		return ACalculator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACalculator(Z_Construct_UClass_ACalculator, &ACalculator::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ACalculator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACalculator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
