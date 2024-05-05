// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/GrupoNavesBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrupoNavesBuilder() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UGrupoNavesBuilder_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UGrupoNavesBuilder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void UGrupoNavesBuilder::StaticRegisterNativesUGrupoNavesBuilder()
	{
	}
	UClass* Z_Construct_UClass_UGrupoNavesBuilder_NoRegister()
	{
		return UGrupoNavesBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UGrupoNavesBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrupoNavesBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrupoNavesBuilder_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "GrupoNavesBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrupoNavesBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGrupoNavesBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrupoNavesBuilder_Statics::ClassParams = {
		&UGrupoNavesBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGrupoNavesBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrupoNavesBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrupoNavesBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrupoNavesBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrupoNavesBuilder, 217179915);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UGrupoNavesBuilder>()
	{
		return UGrupoNavesBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrupoNavesBuilder(Z_Construct_UClass_UGrupoNavesBuilder, &UGrupoNavesBuilder::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("UGrupoNavesBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrupoNavesBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
