// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Director_NJ.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirector_NJ() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ADirector_NJ_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ADirector_NJ();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ADirector_NJ::StaticRegisterNativesADirector_NJ()
	{
	}
	UClass* Z_Construct_UClass_ADirector_NJ_NoRegister()
	{
		return ADirector_NJ::StaticClass();
	}
	struct Z_Construct_UClass_ADirector_NJ_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADirector_NJ_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADirector_NJ_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Director_NJ.h" },
		{ "ModuleRelativePath", "Director_NJ.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADirector_NJ_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADirector_NJ>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADirector_NJ_Statics::ClassParams = {
		&ADirector_NJ::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADirector_NJ_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADirector_NJ_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADirector_NJ()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADirector_NJ_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADirector_NJ, 2277307162);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ADirector_NJ>()
	{
		return ADirector_NJ::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADirector_NJ(Z_Construct_UClass_ADirector_NJ, &ADirector_NJ::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ADirector_NJ"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADirector_NJ);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
