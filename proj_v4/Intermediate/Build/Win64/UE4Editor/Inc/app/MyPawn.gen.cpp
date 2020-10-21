// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "app/MyPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPawn() {}
// Cross Module References
	APP_API UClass* Z_Construct_UClass_AMyPawn_NoRegister();
	APP_API UClass* Z_Construct_UClass_AMyPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_app();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyPawn::execSetMeshVectorZ)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshVectorZ(Z_Param_axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPawn::execSetMeshVectorY)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshVectorY(Z_Param_axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPawn::execSetMeshVectorX)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshVectorX(Z_Param_axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPawn::execSetArmLenght)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArmLenght(Z_Param_axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPawn::execSetCameraPitch)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraPitch(Z_Param_axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPawn::execSetCameraYaw)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraYaw(Z_Param_axis);
		P_NATIVE_END;
	}
	void AMyPawn::StaticRegisterNativesAMyPawn()
	{
		UClass* Class = AMyPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetArmLenght", &AMyPawn::execSetArmLenght },
			{ "SetCameraPitch", &AMyPawn::execSetCameraPitch },
			{ "SetCameraYaw", &AMyPawn::execSetCameraYaw },
			{ "SetMeshVectorX", &AMyPawn::execSetMeshVectorX },
			{ "SetMeshVectorY", &AMyPawn::execSetMeshVectorY },
			{ "SetMeshVectorZ", &AMyPawn::execSetMeshVectorZ },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyPawn_SetArmLenght_Statics
	{
		struct MyPawn_eventSetArmLenght_Parms
		{
			float axis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPawn_SetArmLenght_Statics::NewProp_axis = { "axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPawn_eventSetArmLenght_Parms, axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_SetArmLenght_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_SetArmLenght_Statics::NewProp_axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_SetArmLenght_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_SetArmLenght_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "SetArmLenght", nullptr, nullptr, sizeof(MyPawn_eventSetArmLenght_Parms), Z_Construct_UFunction_AMyPawn_SetArmLenght_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_SetArmLenght_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPawn_SetArmLenght_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_SetArmLenght_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPawn_SetArmLenght()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPawn_SetArmLenght_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPawn_SetCameraPitch_Statics
	{
		struct MyPawn_eventSetCameraPitch_Parms
		{
			float axis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPawn_SetCameraPitch_Statics::NewProp_axis = { "axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPawn_eventSetCameraPitch_Parms, axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_SetCameraPitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_SetCameraPitch_Statics::NewProp_axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_SetCameraPitch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_SetCameraPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "SetCameraPitch", nullptr, nullptr, sizeof(MyPawn_eventSetCameraPitch_Parms), Z_Construct_UFunction_AMyPawn_SetCameraPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_SetCameraPitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPawn_SetCameraPitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_SetCameraPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPawn_SetCameraPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPawn_SetCameraPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPawn_SetCameraYaw_Statics
	{
		struct MyPawn_eventSetCameraYaw_Parms
		{
			float axis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPawn_SetCameraYaw_Statics::NewProp_axis = { "axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPawn_eventSetCameraYaw_Parms, axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_SetCameraYaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_SetCameraYaw_Statics::NewProp_axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_SetCameraYaw_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_SetCameraYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "SetCameraYaw", nullptr, nullptr, sizeof(MyPawn_eventSetCameraYaw_Parms), Z_Construct_UFunction_AMyPawn_SetCameraYaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_SetCameraYaw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPawn_SetCameraYaw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_SetCameraYaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPawn_SetCameraYaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPawn_SetCameraYaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPawn_SetMeshVectorX_Statics
	{
		struct MyPawn_eventSetMeshVectorX_Parms
		{
			float axis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPawn_SetMeshVectorX_Statics::NewProp_axis = { "axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPawn_eventSetMeshVectorX_Parms, axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_SetMeshVectorX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_SetMeshVectorX_Statics::NewProp_axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_SetMeshVectorX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_SetMeshVectorX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "SetMeshVectorX", nullptr, nullptr, sizeof(MyPawn_eventSetMeshVectorX_Parms), Z_Construct_UFunction_AMyPawn_SetMeshVectorX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_SetMeshVectorX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPawn_SetMeshVectorX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_SetMeshVectorX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPawn_SetMeshVectorX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPawn_SetMeshVectorX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPawn_SetMeshVectorY_Statics
	{
		struct MyPawn_eventSetMeshVectorY_Parms
		{
			float axis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPawn_SetMeshVectorY_Statics::NewProp_axis = { "axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPawn_eventSetMeshVectorY_Parms, axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_SetMeshVectorY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_SetMeshVectorY_Statics::NewProp_axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_SetMeshVectorY_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_SetMeshVectorY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "SetMeshVectorY", nullptr, nullptr, sizeof(MyPawn_eventSetMeshVectorY_Parms), Z_Construct_UFunction_AMyPawn_SetMeshVectorY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_SetMeshVectorY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPawn_SetMeshVectorY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_SetMeshVectorY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPawn_SetMeshVectorY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPawn_SetMeshVectorY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPawn_SetMeshVectorZ_Statics
	{
		struct MyPawn_eventSetMeshVectorZ_Parms
		{
			float axis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPawn_SetMeshVectorZ_Statics::NewProp_axis = { "axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPawn_eventSetMeshVectorZ_Parms, axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_SetMeshVectorZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_SetMeshVectorZ_Statics::NewProp_axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_SetMeshVectorZ_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_SetMeshVectorZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "SetMeshVectorZ", nullptr, nullptr, sizeof(MyPawn_eventSetMeshVectorZ_Parms), Z_Construct_UFunction_AMyPawn_SetMeshVectorZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_SetMeshVectorZ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPawn_SetMeshVectorZ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_SetMeshVectorZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPawn_SetMeshVectorZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPawn_SetMeshVectorZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyPawn_NoRegister()
	{
		return AMyPawn::StaticClass();
	}
	struct Z_Construct_UClass_AMyPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_springArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_springArm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_app,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPawn_SetArmLenght, "SetArmLenght" }, // 2055749212
		{ &Z_Construct_UFunction_AMyPawn_SetCameraPitch, "SetCameraPitch" }, // 3280127192
		{ &Z_Construct_UFunction_AMyPawn_SetCameraYaw, "SetCameraYaw" }, // 3812794499
		{ &Z_Construct_UFunction_AMyPawn_SetMeshVectorX, "SetMeshVectorX" }, // 3475431817
		{ &Z_Construct_UFunction_AMyPawn_SetMeshVectorY, "SetMeshVectorY" }, // 920742199
		{ &Z_Construct_UFunction_AMyPawn_SetMeshVectorZ, "SetMeshVectorZ" }, // 4026939169
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPawn.h" },
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "MyPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPawn, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPawn_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_springArm_MetaData[] = {
		{ "Category", "MyPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_springArm = { "springArm", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPawn, springArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPawn_Statics::NewProp_springArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_springArm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_springArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyPawn_Statics::ClassParams = {
		&AMyPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPawn, 4251396810);
	template<> APP_API UClass* StaticClass<AMyPawn>()
	{
		return AMyPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPawn(Z_Construct_UClass_AMyPawn, &AMyPawn::StaticClass, TEXT("/Script/app"), TEXT("AMyPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
