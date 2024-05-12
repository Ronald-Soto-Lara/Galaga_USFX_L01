// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NaveJefe_Nivel_3.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveJefe_Nivel_3() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveJefe_Nivel_3_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveJefe_Nivel_3();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UGrupoNavesBuilder_NoRegister();
// End Cross Module References
	void ANaveJefe_Nivel_3::StaticRegisterNativesANaveJefe_Nivel_3()
	{
	}
	UClass* Z_Construct_UClass_ANaveJefe_Nivel_3_NoRegister()
	{
		return ANaveJefe_Nivel_3::StaticClass();
	}
	struct Z_Construct_UClass_ANaveJefe_Nivel_3_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveJefe_Nivel_3_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveJefe_Nivel_3_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveJefe_Nivel_3.h" },
		{ "ModuleRelativePath", "NaveJefe_Nivel_3.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANaveJefe_Nivel_3_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGrupoNavesBuilder_NoRegister, (int32)VTABLE_OFFSET(ANaveJefe_Nivel_3, IGrupoNavesBuilder), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveJefe_Nivel_3_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveJefe_Nivel_3>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveJefe_Nivel_3_Statics::ClassParams = {
		&ANaveJefe_Nivel_3::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveJefe_Nivel_3_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveJefe_Nivel_3_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveJefe_Nivel_3()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveJefe_Nivel_3_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveJefe_Nivel_3, 2391180281);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANaveJefe_Nivel_3>()
	{
		return ANaveJefe_Nivel_3::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveJefe_Nivel_3(Z_Construct_UClass_ANaveJefe_Nivel_3, &ANaveJefe_Nivel_3::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ANaveJefe_Nivel_3"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveJefe_Nivel_3);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
