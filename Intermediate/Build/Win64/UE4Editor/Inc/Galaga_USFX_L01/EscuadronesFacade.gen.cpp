// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/EscuadronesFacade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscuadronesFacade() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEscuadronesFacade_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEscuadronesFacade();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AEscuadronesFacade::StaticRegisterNativesAEscuadronesFacade()
	{
	}
	UClass* Z_Construct_UClass_AEscuadronesFacade_NoRegister()
	{
		return AEscuadronesFacade::StaticClass();
	}
	struct Z_Construct_UClass_AEscuadronesFacade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscuadronesFacade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscuadronesFacade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EscuadronesFacade.h" },
		{ "ModuleRelativePath", "EscuadronesFacade.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscuadronesFacade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscuadronesFacade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscuadronesFacade_Statics::ClassParams = {
		&AEscuadronesFacade::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEscuadronesFacade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscuadronesFacade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscuadronesFacade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscuadronesFacade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscuadronesFacade, 1531428286);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AEscuadronesFacade>()
	{
		return AEscuadronesFacade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscuadronesFacade(Z_Construct_UClass_AEscuadronesFacade, &AEscuadronesFacade::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AEscuadronesFacade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscuadronesFacade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
