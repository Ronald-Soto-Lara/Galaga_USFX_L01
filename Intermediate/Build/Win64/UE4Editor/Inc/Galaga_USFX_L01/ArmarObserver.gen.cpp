// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ArmarObserver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmarObserver() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AArmarObserver_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AArmarObserver();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AArmarObserver::StaticRegisterNativesAArmarObserver()
	{
	}
	UClass* Z_Construct_UClass_AArmarObserver_NoRegister()
	{
		return AArmarObserver::StaticClass();
	}
	struct Z_Construct_UClass_AArmarObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Suscriptores_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suscriptores_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Suscriptores;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmarObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmarObserver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArmarObserver.h" },
		{ "ModuleRelativePath", "ArmarObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArmarObserver_Statics::NewProp_Suscriptores_Inner = { "Suscriptores", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmarObserver_Statics::NewProp_Suscriptores_MetaData[] = {
		{ "Category", "Publicador Observer" },
		{ "ModuleRelativePath", "ArmarObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AArmarObserver_Statics::NewProp_Suscriptores = { "Suscriptores", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmarObserver, Suscriptores), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AArmarObserver_Statics::NewProp_Suscriptores_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArmarObserver_Statics::NewProp_Suscriptores_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArmarObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmarObserver_Statics::NewProp_Suscriptores_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmarObserver_Statics::NewProp_Suscriptores,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmarObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmarObserver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmarObserver_Statics::ClassParams = {
		&AArmarObserver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArmarObserver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AArmarObserver_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArmarObserver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArmarObserver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmarObserver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmarObserver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmarObserver, 3975205466);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AArmarObserver>()
	{
		return AArmarObserver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmarObserver(Z_Construct_UClass_AArmarObserver, &AArmarObserver::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AArmarObserver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmarObserver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
