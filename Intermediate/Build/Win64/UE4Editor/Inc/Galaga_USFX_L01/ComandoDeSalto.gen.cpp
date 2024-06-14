// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ComandoDeSalto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComandoDeSalto() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AComandoDeSalto_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AComandoDeSalto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UInterfazCommand_NoRegister();
// End Cross Module References
	void AComandoDeSalto::StaticRegisterNativesAComandoDeSalto()
	{
	}
	UClass* Z_Construct_UClass_AComandoDeSalto_NoRegister()
	{
		return AComandoDeSalto::StaticClass();
	}
	struct Z_Construct_UClass_AComandoDeSalto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComandoDeSalto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComandoDeSalto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ComandoDeSalto.h" },
		{ "ModuleRelativePath", "ComandoDeSalto.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AComandoDeSalto_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterfazCommand_NoRegister, (int32)VTABLE_OFFSET(AComandoDeSalto, IInterfazCommand), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComandoDeSalto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComandoDeSalto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AComandoDeSalto_Statics::ClassParams = {
		&AComandoDeSalto::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AComandoDeSalto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AComandoDeSalto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComandoDeSalto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AComandoDeSalto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AComandoDeSalto, 2608606540);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AComandoDeSalto>()
	{
		return AComandoDeSalto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AComandoDeSalto(Z_Construct_UClass_AComandoDeSalto, &AComandoDeSalto::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AComandoDeSalto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComandoDeSalto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
