// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NaveJefe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveJefe() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveJefe_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveJefe();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ANaveJefe::StaticRegisterNativesANaveJefe()
	{
	}
	UClass* Z_Construct_UClass_ANaveJefe_NoRegister()
	{
		return ANaveJefe::StaticClass();
	}
	struct Z_Construct_UClass_ANaveJefe_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveJefe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveJefe_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveJefe.h" },
		{ "ModuleRelativePath", "NaveJefe.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveJefe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveJefe>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveJefe_Statics::ClassParams = {
		&ANaveJefe::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveJefe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveJefe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveJefe()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveJefe_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveJefe, 2248875926);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANaveJefe>()
	{
		return ANaveJefe::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveJefe(Z_Construct_UClass_ANaveJefe, &ANaveJefe::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ANaveJefe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveJefe);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
