// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NaveGalapago.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveGalapago() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveGalapago_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveGalapago();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ANaveGalapago::StaticRegisterNativesANaveGalapago()
	{
	}
	UClass* Z_Construct_UClass_ANaveGalapago_NoRegister()
	{
		return ANaveGalapago::StaticClass();
	}
	struct Z_Construct_UClass_ANaveGalapago_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveGalapago_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveGalapago_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveGalapago.h" },
		{ "ModuleRelativePath", "NaveGalapago.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveGalapago_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveGalapago>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveGalapago_Statics::ClassParams = {
		&ANaveGalapago::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveGalapago_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveGalapago_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveGalapago()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveGalapago_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveGalapago, 3885169540);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANaveGalapago>()
	{
		return ANaveGalapago::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveGalapago(Z_Construct_UClass_ANaveGalapago, &ANaveGalapago::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ANaveGalapago"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveGalapago);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
