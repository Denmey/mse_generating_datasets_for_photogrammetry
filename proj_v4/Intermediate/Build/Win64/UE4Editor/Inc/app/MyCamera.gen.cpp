// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "app/MyCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCamera() {}
// Cross Module References
	APP_API UClass* Z_Construct_UClass_AMyCamera_NoRegister();
	APP_API UClass* Z_Construct_UClass_AMyCamera();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_app();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyCamera::execToCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToCancel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execToRand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToRand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execToDL)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToDL();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execToDR)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToDR();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execToUL)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToUL();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execToUR)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToUR();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execToDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execToUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execToLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execToRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execStopMoveCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopMoveCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execMoveCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execGetMeshCoordZ)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMeshCoordZ();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execGetMeshCoordY)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMeshCoordY();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execGetMeshCoordX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMeshCoordX();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execGetViewAngleZ)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetViewAngleZ();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execGetViewAngleY)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetViewAngleY();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execGetViewAngleX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetViewAngleX();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execSetMeshVectorZ)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshVectorZ(Z_Param_axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execSetMeshVectorY)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshVectorY(Z_Param_axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execSetMeshVectorX)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshVectorX(Z_Param_axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execSetArmLenght)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArmLenght(Z_Param_axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execSetCameraRoll)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraRoll(Z_Param_axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execSetCameraPitch)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraPitch(Z_Param_axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execSetCameraYaw)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraYaw(Z_Param_axis);
		P_NATIVE_END;
	}
	void AMyCamera::StaticRegisterNativesAMyCamera()
	{
		UClass* Class = AMyCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMeshCoordX", &AMyCamera::execGetMeshCoordX },
			{ "GetMeshCoordY", &AMyCamera::execGetMeshCoordY },
			{ "GetMeshCoordZ", &AMyCamera::execGetMeshCoordZ },
			{ "GetViewAngleX", &AMyCamera::execGetViewAngleX },
			{ "GetViewAngleY", &AMyCamera::execGetViewAngleY },
			{ "GetViewAngleZ", &AMyCamera::execGetViewAngleZ },
			{ "MoveCamera", &AMyCamera::execMoveCamera },
			{ "SetArmLenght", &AMyCamera::execSetArmLenght },
			{ "SetCameraPitch", &AMyCamera::execSetCameraPitch },
			{ "SetCameraRoll", &AMyCamera::execSetCameraRoll },
			{ "SetCameraYaw", &AMyCamera::execSetCameraYaw },
			{ "SetMeshVectorX", &AMyCamera::execSetMeshVectorX },
			{ "SetMeshVectorY", &AMyCamera::execSetMeshVectorY },
			{ "SetMeshVectorZ", &AMyCamera::execSetMeshVectorZ },
			{ "StopMoveCamera", &AMyCamera::execStopMoveCamera },
			{ "ToCancel", &AMyCamera::execToCancel },
			{ "ToDL", &AMyCamera::execToDL },
			{ "ToDown", &AMyCamera::execToDown },
			{ "ToDR", &AMyCamera::execToDR },
			{ "ToLeft", &AMyCamera::execToLeft },
			{ "ToRand", &AMyCamera::execToRand },
			{ "ToRight", &AMyCamera::execToRight },
			{ "ToUL", &AMyCamera::execToUL },
			{ "ToUp", &AMyCamera::execToUp },
			{ "ToUR", &AMyCamera::execToUR },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyCamera_GetMeshCoordX_Statics
	{
		struct MyCamera_eventGetMeshCoordX_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_GetMeshCoordX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventGetMeshCoordX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_GetMeshCoordX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_GetMeshCoordX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_GetMeshCoordX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_GetMeshCoordX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "GetMeshCoordX", nullptr, nullptr, sizeof(MyCamera_eventGetMeshCoordX_Parms), Z_Construct_UFunction_AMyCamera_GetMeshCoordX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetMeshCoordX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_GetMeshCoordX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetMeshCoordX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_GetMeshCoordX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_GetMeshCoordX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_GetMeshCoordY_Statics
	{
		struct MyCamera_eventGetMeshCoordY_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_GetMeshCoordY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventGetMeshCoordY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_GetMeshCoordY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_GetMeshCoordY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_GetMeshCoordY_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_GetMeshCoordY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "GetMeshCoordY", nullptr, nullptr, sizeof(MyCamera_eventGetMeshCoordY_Parms), Z_Construct_UFunction_AMyCamera_GetMeshCoordY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetMeshCoordY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_GetMeshCoordY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetMeshCoordY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_GetMeshCoordY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_GetMeshCoordY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_GetMeshCoordZ_Statics
	{
		struct MyCamera_eventGetMeshCoordZ_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_GetMeshCoordZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventGetMeshCoordZ_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_GetMeshCoordZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_GetMeshCoordZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_GetMeshCoordZ_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_GetMeshCoordZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "GetMeshCoordZ", nullptr, nullptr, sizeof(MyCamera_eventGetMeshCoordZ_Parms), Z_Construct_UFunction_AMyCamera_GetMeshCoordZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetMeshCoordZ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_GetMeshCoordZ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetMeshCoordZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_GetMeshCoordZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_GetMeshCoordZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_GetViewAngleX_Statics
	{
		struct MyCamera_eventGetViewAngleX_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_GetViewAngleX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventGetViewAngleX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_GetViewAngleX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_GetViewAngleX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_GetViewAngleX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_GetViewAngleX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "GetViewAngleX", nullptr, nullptr, sizeof(MyCamera_eventGetViewAngleX_Parms), Z_Construct_UFunction_AMyCamera_GetViewAngleX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetViewAngleX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_GetViewAngleX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetViewAngleX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_GetViewAngleX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_GetViewAngleX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_GetViewAngleY_Statics
	{
		struct MyCamera_eventGetViewAngleY_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_GetViewAngleY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventGetViewAngleY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_GetViewAngleY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_GetViewAngleY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_GetViewAngleY_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_GetViewAngleY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "GetViewAngleY", nullptr, nullptr, sizeof(MyCamera_eventGetViewAngleY_Parms), Z_Construct_UFunction_AMyCamera_GetViewAngleY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetViewAngleY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_GetViewAngleY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetViewAngleY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_GetViewAngleY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_GetViewAngleY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_GetViewAngleZ_Statics
	{
		struct MyCamera_eventGetViewAngleZ_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_GetViewAngleZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventGetViewAngleZ_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_GetViewAngleZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_GetViewAngleZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_GetViewAngleZ_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_GetViewAngleZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "GetViewAngleZ", nullptr, nullptr, sizeof(MyCamera_eventGetViewAngleZ_Parms), Z_Construct_UFunction_AMyCamera_GetViewAngleZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetViewAngleZ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_GetViewAngleZ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetViewAngleZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_GetViewAngleZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_GetViewAngleZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_MoveCamera_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_MoveCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_MoveCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "MoveCamera", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_MoveCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_MoveCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_MoveCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_MoveCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_SetArmLenght_Statics
	{
		struct MyCamera_eventSetArmLenght_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_SetArmLenght_Statics::NewProp_axis = { "axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventSetArmLenght_Parms, axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_SetArmLenght_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_SetArmLenght_Statics::NewProp_axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_SetArmLenght_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_SetArmLenght_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "SetArmLenght", nullptr, nullptr, sizeof(MyCamera_eventSetArmLenght_Parms), Z_Construct_UFunction_AMyCamera_SetArmLenght_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetArmLenght_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_SetArmLenght_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetArmLenght_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_SetArmLenght()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_SetArmLenght_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_SetCameraPitch_Statics
	{
		struct MyCamera_eventSetCameraPitch_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_SetCameraPitch_Statics::NewProp_axis = { "axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventSetCameraPitch_Parms, axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_SetCameraPitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_SetCameraPitch_Statics::NewProp_axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_SetCameraPitch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_SetCameraPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "SetCameraPitch", nullptr, nullptr, sizeof(MyCamera_eventSetCameraPitch_Parms), Z_Construct_UFunction_AMyCamera_SetCameraPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetCameraPitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_SetCameraPitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetCameraPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_SetCameraPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_SetCameraPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_SetCameraRoll_Statics
	{
		struct MyCamera_eventSetCameraRoll_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_SetCameraRoll_Statics::NewProp_axis = { "axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventSetCameraRoll_Parms, axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_SetCameraRoll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_SetCameraRoll_Statics::NewProp_axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_SetCameraRoll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_SetCameraRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "SetCameraRoll", nullptr, nullptr, sizeof(MyCamera_eventSetCameraRoll_Parms), Z_Construct_UFunction_AMyCamera_SetCameraRoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetCameraRoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_SetCameraRoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetCameraRoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_SetCameraRoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_SetCameraRoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_SetCameraYaw_Statics
	{
		struct MyCamera_eventSetCameraYaw_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_SetCameraYaw_Statics::NewProp_axis = { "axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventSetCameraYaw_Parms, axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_SetCameraYaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_SetCameraYaw_Statics::NewProp_axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_SetCameraYaw_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_SetCameraYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "SetCameraYaw", nullptr, nullptr, sizeof(MyCamera_eventSetCameraYaw_Parms), Z_Construct_UFunction_AMyCamera_SetCameraYaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetCameraYaw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_SetCameraYaw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetCameraYaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_SetCameraYaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_SetCameraYaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_SetMeshVectorX_Statics
	{
		struct MyCamera_eventSetMeshVectorX_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_SetMeshVectorX_Statics::NewProp_axis = { "axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventSetMeshVectorX_Parms, axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_SetMeshVectorX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_SetMeshVectorX_Statics::NewProp_axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_SetMeshVectorX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_SetMeshVectorX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "SetMeshVectorX", nullptr, nullptr, sizeof(MyCamera_eventSetMeshVectorX_Parms), Z_Construct_UFunction_AMyCamera_SetMeshVectorX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetMeshVectorX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_SetMeshVectorX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetMeshVectorX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_SetMeshVectorX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_SetMeshVectorX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_SetMeshVectorY_Statics
	{
		struct MyCamera_eventSetMeshVectorY_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_SetMeshVectorY_Statics::NewProp_axis = { "axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventSetMeshVectorY_Parms, axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_SetMeshVectorY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_SetMeshVectorY_Statics::NewProp_axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_SetMeshVectorY_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_SetMeshVectorY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "SetMeshVectorY", nullptr, nullptr, sizeof(MyCamera_eventSetMeshVectorY_Parms), Z_Construct_UFunction_AMyCamera_SetMeshVectorY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetMeshVectorY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_SetMeshVectorY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetMeshVectorY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_SetMeshVectorY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_SetMeshVectorY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_SetMeshVectorZ_Statics
	{
		struct MyCamera_eventSetMeshVectorZ_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_SetMeshVectorZ_Statics::NewProp_axis = { "axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventSetMeshVectorZ_Parms, axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_SetMeshVectorZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_SetMeshVectorZ_Statics::NewProp_axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_SetMeshVectorZ_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_SetMeshVectorZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "SetMeshVectorZ", nullptr, nullptr, sizeof(MyCamera_eventSetMeshVectorZ_Parms), Z_Construct_UFunction_AMyCamera_SetMeshVectorZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetMeshVectorZ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_SetMeshVectorZ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetMeshVectorZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_SetMeshVectorZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_SetMeshVectorZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_StopMoveCamera_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_StopMoveCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_StopMoveCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "StopMoveCamera", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_StopMoveCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_StopMoveCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_StopMoveCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_StopMoveCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_ToCancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_ToCancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_ToCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "ToCancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_ToCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_ToCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_ToCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_ToCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_ToDL_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_ToDL_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_ToDL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "ToDL", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_ToDL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_ToDL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_ToDL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_ToDL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_ToDown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_ToDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_ToDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "ToDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_ToDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_ToDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_ToDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_ToDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_ToDR_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_ToDR_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_ToDR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "ToDR", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_ToDR_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_ToDR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_ToDR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_ToDR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_ToLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_ToLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_ToLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "ToLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_ToLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_ToLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_ToLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_ToLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_ToRand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_ToRand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_ToRand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "ToRand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_ToRand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_ToRand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_ToRand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_ToRand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_ToRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_ToRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_ToRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "ToRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_ToRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_ToRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_ToRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_ToRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_ToUL_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_ToUL_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_ToUL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "ToUL", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_ToUL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_ToUL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_ToUL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_ToUL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_ToUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_ToUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_ToUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "ToUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_ToUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_ToUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_ToUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_ToUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_ToUR_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_ToUR_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_ToUR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "ToUR", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_ToUR_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_ToUR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_ToUR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_ToUR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyCamera_NoRegister()
	{
		return AMyCamera::StaticClass();
	}
	struct Z_Construct_UClass_AMyCamera_Statics
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
	UObject* (*const Z_Construct_UClass_AMyCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_app,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCamera_GetMeshCoordX, "GetMeshCoordX" }, // 800249446
		{ &Z_Construct_UFunction_AMyCamera_GetMeshCoordY, "GetMeshCoordY" }, // 3509575103
		{ &Z_Construct_UFunction_AMyCamera_GetMeshCoordZ, "GetMeshCoordZ" }, // 536317647
		{ &Z_Construct_UFunction_AMyCamera_GetViewAngleX, "GetViewAngleX" }, // 1682193999
		{ &Z_Construct_UFunction_AMyCamera_GetViewAngleY, "GetViewAngleY" }, // 3425989526
		{ &Z_Construct_UFunction_AMyCamera_GetViewAngleZ, "GetViewAngleZ" }, // 273367340
		{ &Z_Construct_UFunction_AMyCamera_MoveCamera, "MoveCamera" }, // 3930372668
		{ &Z_Construct_UFunction_AMyCamera_SetArmLenght, "SetArmLenght" }, // 4082588666
		{ &Z_Construct_UFunction_AMyCamera_SetCameraPitch, "SetCameraPitch" }, // 2816099008
		{ &Z_Construct_UFunction_AMyCamera_SetCameraRoll, "SetCameraRoll" }, // 4287717183
		{ &Z_Construct_UFunction_AMyCamera_SetCameraYaw, "SetCameraYaw" }, // 3685863145
		{ &Z_Construct_UFunction_AMyCamera_SetMeshVectorX, "SetMeshVectorX" }, // 3999014795
		{ &Z_Construct_UFunction_AMyCamera_SetMeshVectorY, "SetMeshVectorY" }, // 500938352
		{ &Z_Construct_UFunction_AMyCamera_SetMeshVectorZ, "SetMeshVectorZ" }, // 2456696094
		{ &Z_Construct_UFunction_AMyCamera_StopMoveCamera, "StopMoveCamera" }, // 1283478056
		{ &Z_Construct_UFunction_AMyCamera_ToCancel, "ToCancel" }, // 113063873
		{ &Z_Construct_UFunction_AMyCamera_ToDL, "ToDL" }, // 2380999899
		{ &Z_Construct_UFunction_AMyCamera_ToDown, "ToDown" }, // 2497346028
		{ &Z_Construct_UFunction_AMyCamera_ToDR, "ToDR" }, // 4103827215
		{ &Z_Construct_UFunction_AMyCamera_ToLeft, "ToLeft" }, // 2979707430
		{ &Z_Construct_UFunction_AMyCamera_ToRand, "ToRand" }, // 351738365
		{ &Z_Construct_UFunction_AMyCamera_ToRight, "ToRight" }, // 3825287315
		{ &Z_Construct_UFunction_AMyCamera_ToUL, "ToUL" }, // 2772498810
		{ &Z_Construct_UFunction_AMyCamera_ToUp, "ToUp" }, // 971531898
		{ &Z_Construct_UFunction_AMyCamera_ToUR, "ToUR" }, // 3451931717
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCamera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCamera.h" },
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCamera_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "MyCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCamera_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCamera, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCamera_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCamera_Statics::NewProp_mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCamera_Statics::NewProp_springArm_MetaData[] = {
		{ "Category", "MyCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCamera_Statics::NewProp_springArm = { "springArm", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCamera, springArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCamera_Statics::NewProp_springArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCamera_Statics::NewProp_springArm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCamera_Statics::NewProp_mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCamera_Statics::NewProp_springArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCamera_Statics::ClassParams = {
		&AMyCamera::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyCamera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCamera, 1275446951);
	template<> APP_API UClass* StaticClass<AMyCamera>()
	{
		return AMyCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCamera(Z_Construct_UClass_AMyCamera, &AMyCamera::StaticClass, TEXT("/Script/app"), TEXT("AMyCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
