// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPlugin/Public/MyActor2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor2() {}
// Cross Module References
	MYPLUGIN_API UClass* Z_Construct_UClass_AMyActor2_NoRegister();
	MYPLUGIN_API UClass* Z_Construct_UClass_AMyActor2();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyPlugin();
// End Cross Module References
	void AMyActor2::StaticRegisterNativesAMyActor2()
	{
	}
	UClass* Z_Construct_UClass_AMyActor2_NoRegister()
	{
		return AMyActor2::StaticClass();
	}
	struct Z_Construct_UClass_AMyActor2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActor2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor2.h" },
		{ "ModuleRelativePath", "Public/MyActor2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActor2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyActor2_Statics::ClassParams = {
		&AMyActor2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyActor2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyActor2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyActor2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyActor2, 4025241428);
	template<> MYPLUGIN_API UClass* StaticClass<AMyActor2>()
	{
		return AMyActor2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyActor2(Z_Construct_UClass_AMyActor2, &AMyActor2::StaticClass, TEXT("/Script/MyPlugin"), TEXT("AMyActor2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
