// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NavesCucarachas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavesCucarachas() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANavesCucarachas_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANavesCucarachas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ANavesCucarachas::StaticRegisterNativesANavesCucarachas()
	{
	}
	UClass* Z_Construct_UClass_ANavesCucarachas_NoRegister()
	{
		return ANavesCucarachas::StaticClass();
	}
	struct Z_Construct_UClass_ANavesCucarachas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavesCucarachas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesCucarachas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavesCucarachas.h" },
		{ "ModuleRelativePath", "NavesCucarachas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavesCucarachas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavesCucarachas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavesCucarachas_Statics::ClassParams = {
		&ANavesCucarachas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANavesCucarachas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesCucarachas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavesCucarachas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavesCucarachas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavesCucarachas, 2477060010);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANavesCucarachas>()
	{
		return ANavesCucarachas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavesCucarachas(Z_Construct_UClass_ANavesCucarachas, &ANavesCucarachas::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ANavesCucarachas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavesCucarachas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
