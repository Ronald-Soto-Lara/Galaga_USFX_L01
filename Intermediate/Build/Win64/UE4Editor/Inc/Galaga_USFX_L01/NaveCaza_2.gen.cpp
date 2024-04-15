// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NaveCaza_2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveCaza_2() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveCaza_2_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveCaza_2();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveCaza();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ANaveCaza_2::StaticRegisterNativesANaveCaza_2()
	{
	}
	UClass* Z_Construct_UClass_ANaveCaza_2_NoRegister()
	{
		return ANaveCaza_2::StaticClass();
	}
	struct Z_Construct_UClass_ANaveCaza_2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BombaDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BombaDist;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveCaza_2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveCaza,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveCaza_2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "NaveCaza_2.h" },
		{ "ModuleRelativePath", "NaveCaza_2.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveCaza_2_Statics::NewProp_BombaDist_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "NaveCaza_2.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANaveCaza_2_Statics::NewProp_BombaDist = { "BombaDist", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveCaza_2, BombaDist), METADATA_PARAMS(Z_Construct_UClass_ANaveCaza_2_Statics::NewProp_BombaDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveCaza_2_Statics::NewProp_BombaDist_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveCaza_2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveCaza_2_Statics::NewProp_BombaDist,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveCaza_2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveCaza_2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveCaza_2_Statics::ClassParams = {
		&ANaveCaza_2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveCaza_2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveCaza_2_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveCaza_2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveCaza_2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveCaza_2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveCaza_2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveCaza_2, 908248021);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANaveCaza_2>()
	{
		return ANaveCaza_2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveCaza_2(Z_Construct_UClass_ANaveCaza_2, &ANaveCaza_2::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ANaveCaza_2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveCaza_2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
