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
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyCamera::execMakeDataset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MakeDataset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execToCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToCancel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execToStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToStop();
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
		P_GET_PROPERTY(FIntProperty,Z_Param_screenCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveCamera(Z_Param_screenCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execGetAspectRatioHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAspectRatioHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execGetAspectRatioWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAspectRatioWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execGetWhiteTint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWhiteTint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execGetWhiteTemp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWhiteTemp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execGetMFStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMFStop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execGetFStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFStop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execGetFocalDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFocalDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execGetISO)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetISO();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execGetArmLenght)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetArmLenght();
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
	DEFINE_FUNCTION(AMyCamera::execSetAspectRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAspectRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execSetAspectRatioHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAspectRatioHeight(Z_Param_axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execSetAspectRatioWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAspectRatioWidth(Z_Param_axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execSetWhiteTint)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWhiteTint(Z_Param_axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execSetWhiteTemp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWhiteTemp(Z_Param_axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execSetMFStop)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMFStop(Z_Param_axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execSetFStop)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFStop(Z_Param_axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execSetFocalDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFocalDistance(Z_Param_axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCamera::execSetISO)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetISO(Z_Param_axis);
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
			{ "GetArmLenght", &AMyCamera::execGetArmLenght },
			{ "GetAspectRatioHeight", &AMyCamera::execGetAspectRatioHeight },
			{ "GetAspectRatioWidth", &AMyCamera::execGetAspectRatioWidth },
			{ "GetFocalDistance", &AMyCamera::execGetFocalDistance },
			{ "GetFStop", &AMyCamera::execGetFStop },
			{ "GetISO", &AMyCamera::execGetISO },
			{ "GetMeshCoordX", &AMyCamera::execGetMeshCoordX },
			{ "GetMeshCoordY", &AMyCamera::execGetMeshCoordY },
			{ "GetMeshCoordZ", &AMyCamera::execGetMeshCoordZ },
			{ "GetMFStop", &AMyCamera::execGetMFStop },
			{ "GetViewAngleX", &AMyCamera::execGetViewAngleX },
			{ "GetViewAngleY", &AMyCamera::execGetViewAngleY },
			{ "GetViewAngleZ", &AMyCamera::execGetViewAngleZ },
			{ "GetWhiteTemp", &AMyCamera::execGetWhiteTemp },
			{ "GetWhiteTint", &AMyCamera::execGetWhiteTint },
			{ "MakeDataset", &AMyCamera::execMakeDataset },
			{ "MoveCamera", &AMyCamera::execMoveCamera },
			{ "SetArmLenght", &AMyCamera::execSetArmLenght },
			{ "SetAspectRatio", &AMyCamera::execSetAspectRatio },
			{ "SetAspectRatioHeight", &AMyCamera::execSetAspectRatioHeight },
			{ "SetAspectRatioWidth", &AMyCamera::execSetAspectRatioWidth },
			{ "SetCameraPitch", &AMyCamera::execSetCameraPitch },
			{ "SetCameraRoll", &AMyCamera::execSetCameraRoll },
			{ "SetCameraYaw", &AMyCamera::execSetCameraYaw },
			{ "SetFocalDistance", &AMyCamera::execSetFocalDistance },
			{ "SetFStop", &AMyCamera::execSetFStop },
			{ "SetISO", &AMyCamera::execSetISO },
			{ "SetMeshVectorX", &AMyCamera::execSetMeshVectorX },
			{ "SetMeshVectorY", &AMyCamera::execSetMeshVectorY },
			{ "SetMeshVectorZ", &AMyCamera::execSetMeshVectorZ },
			{ "SetMFStop", &AMyCamera::execSetMFStop },
			{ "SetWhiteTemp", &AMyCamera::execSetWhiteTemp },
			{ "SetWhiteTint", &AMyCamera::execSetWhiteTint },
			{ "StopMoveCamera", &AMyCamera::execStopMoveCamera },
			{ "ToCancel", &AMyCamera::execToCancel },
			{ "ToDL", &AMyCamera::execToDL },
			{ "ToDown", &AMyCamera::execToDown },
			{ "ToDR", &AMyCamera::execToDR },
			{ "ToLeft", &AMyCamera::execToLeft },
			{ "ToRight", &AMyCamera::execToRight },
			{ "ToStop", &AMyCamera::execToStop },
			{ "ToUL", &AMyCamera::execToUL },
			{ "ToUp", &AMyCamera::execToUp },
			{ "ToUR", &AMyCamera::execToUR },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyCamera_GetArmLenght_Statics
	{
		struct MyCamera_eventGetArmLenght_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_GetArmLenght_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventGetArmLenght_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_GetArmLenght_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_GetArmLenght_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_GetArmLenght_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_GetArmLenght_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "GetArmLenght", nullptr, nullptr, sizeof(MyCamera_eventGetArmLenght_Parms), Z_Construct_UFunction_AMyCamera_GetArmLenght_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetArmLenght_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_GetArmLenght_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetArmLenght_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_GetArmLenght()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_GetArmLenght_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_GetAspectRatioHeight_Statics
	{
		struct MyCamera_eventGetAspectRatioHeight_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_GetAspectRatioHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventGetAspectRatioHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_GetAspectRatioHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_GetAspectRatioHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_GetAspectRatioHeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_GetAspectRatioHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "GetAspectRatioHeight", nullptr, nullptr, sizeof(MyCamera_eventGetAspectRatioHeight_Parms), Z_Construct_UFunction_AMyCamera_GetAspectRatioHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetAspectRatioHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_GetAspectRatioHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetAspectRatioHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_GetAspectRatioHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_GetAspectRatioHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_GetAspectRatioWidth_Statics
	{
		struct MyCamera_eventGetAspectRatioWidth_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_GetAspectRatioWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventGetAspectRatioWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_GetAspectRatioWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_GetAspectRatioWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_GetAspectRatioWidth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_GetAspectRatioWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "GetAspectRatioWidth", nullptr, nullptr, sizeof(MyCamera_eventGetAspectRatioWidth_Parms), Z_Construct_UFunction_AMyCamera_GetAspectRatioWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetAspectRatioWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_GetAspectRatioWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetAspectRatioWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_GetAspectRatioWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_GetAspectRatioWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_GetFocalDistance_Statics
	{
		struct MyCamera_eventGetFocalDistance_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_GetFocalDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventGetFocalDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_GetFocalDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_GetFocalDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_GetFocalDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_GetFocalDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "GetFocalDistance", nullptr, nullptr, sizeof(MyCamera_eventGetFocalDistance_Parms), Z_Construct_UFunction_AMyCamera_GetFocalDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetFocalDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_GetFocalDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetFocalDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_GetFocalDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_GetFocalDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_GetFStop_Statics
	{
		struct MyCamera_eventGetFStop_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_GetFStop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventGetFStop_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_GetFStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_GetFStop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_GetFStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_GetFStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "GetFStop", nullptr, nullptr, sizeof(MyCamera_eventGetFStop_Parms), Z_Construct_UFunction_AMyCamera_GetFStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetFStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_GetFStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetFStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_GetFStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_GetFStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_GetISO_Statics
	{
		struct MyCamera_eventGetISO_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_GetISO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventGetISO_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_GetISO_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_GetISO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_GetISO_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_GetISO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "GetISO", nullptr, nullptr, sizeof(MyCamera_eventGetISO_Parms), Z_Construct_UFunction_AMyCamera_GetISO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetISO_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_GetISO_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetISO_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_GetISO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_GetISO_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_AMyCamera_GetMFStop_Statics
	{
		struct MyCamera_eventGetMFStop_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_GetMFStop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventGetMFStop_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_GetMFStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_GetMFStop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_GetMFStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_GetMFStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "GetMFStop", nullptr, nullptr, sizeof(MyCamera_eventGetMFStop_Parms), Z_Construct_UFunction_AMyCamera_GetMFStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetMFStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_GetMFStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetMFStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_GetMFStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_GetMFStop_Statics::FuncParams);
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
	struct Z_Construct_UFunction_AMyCamera_GetWhiteTemp_Statics
	{
		struct MyCamera_eventGetWhiteTemp_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_GetWhiteTemp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventGetWhiteTemp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_GetWhiteTemp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_GetWhiteTemp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_GetWhiteTemp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_GetWhiteTemp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "GetWhiteTemp", nullptr, nullptr, sizeof(MyCamera_eventGetWhiteTemp_Parms), Z_Construct_UFunction_AMyCamera_GetWhiteTemp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetWhiteTemp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_GetWhiteTemp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetWhiteTemp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_GetWhiteTemp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_GetWhiteTemp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_GetWhiteTint_Statics
	{
		struct MyCamera_eventGetWhiteTint_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_GetWhiteTint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventGetWhiteTint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_GetWhiteTint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_GetWhiteTint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_GetWhiteTint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_GetWhiteTint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "GetWhiteTint", nullptr, nullptr, sizeof(MyCamera_eventGetWhiteTint_Parms), Z_Construct_UFunction_AMyCamera_GetWhiteTint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetWhiteTint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_GetWhiteTint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_GetWhiteTint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_GetWhiteTint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_GetWhiteTint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_MakeDataset_Statics
	{
		struct MyCamera_eventMakeDataset_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMyCamera_MakeDataset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyCamera_eventMakeDataset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyCamera_MakeDataset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyCamera_eventMakeDataset_Parms), &Z_Construct_UFunction_AMyCamera_MakeDataset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_MakeDataset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_MakeDataset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_MakeDataset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_MakeDataset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "MakeDataset", nullptr, nullptr, sizeof(MyCamera_eventMakeDataset_Parms), Z_Construct_UFunction_AMyCamera_MakeDataset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_MakeDataset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_MakeDataset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_MakeDataset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_MakeDataset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_MakeDataset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_MoveCamera_Statics
	{
		struct MyCamera_eventMoveCamera_Parms
		{
			int32 screenCount;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_screenCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyCamera_MoveCamera_Statics::NewProp_screenCount = { "screenCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventMoveCamera_Parms, screenCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_MoveCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_MoveCamera_Statics::NewProp_screenCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_MoveCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_MoveCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "MoveCamera", nullptr, nullptr, sizeof(MyCamera_eventMoveCamera_Parms), Z_Construct_UFunction_AMyCamera_MoveCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_MoveCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_MoveCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_MoveCamera_Statics::Function_MetaDataParams)) };
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
	struct Z_Construct_UFunction_AMyCamera_SetAspectRatio_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_SetAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_SetAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "SetAspectRatio", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_SetAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_SetAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_SetAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_SetAspectRatioHeight_Statics
	{
		struct MyCamera_eventSetAspectRatioHeight_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_SetAspectRatioHeight_Statics::NewProp_axis = { "axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventSetAspectRatioHeight_Parms, axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_SetAspectRatioHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_SetAspectRatioHeight_Statics::NewProp_axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_SetAspectRatioHeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_SetAspectRatioHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "SetAspectRatioHeight", nullptr, nullptr, sizeof(MyCamera_eventSetAspectRatioHeight_Parms), Z_Construct_UFunction_AMyCamera_SetAspectRatioHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetAspectRatioHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_SetAspectRatioHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetAspectRatioHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_SetAspectRatioHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_SetAspectRatioHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_SetAspectRatioWidth_Statics
	{
		struct MyCamera_eventSetAspectRatioWidth_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_SetAspectRatioWidth_Statics::NewProp_axis = { "axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventSetAspectRatioWidth_Parms, axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_SetAspectRatioWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_SetAspectRatioWidth_Statics::NewProp_axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_SetAspectRatioWidth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_SetAspectRatioWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "SetAspectRatioWidth", nullptr, nullptr, sizeof(MyCamera_eventSetAspectRatioWidth_Parms), Z_Construct_UFunction_AMyCamera_SetAspectRatioWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetAspectRatioWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_SetAspectRatioWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetAspectRatioWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_SetAspectRatioWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_SetAspectRatioWidth_Statics::FuncParams);
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
	struct Z_Construct_UFunction_AMyCamera_SetFocalDistance_Statics
	{
		struct MyCamera_eventSetFocalDistance_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_SetFocalDistance_Statics::NewProp_axis = { "axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventSetFocalDistance_Parms, axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_SetFocalDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_SetFocalDistance_Statics::NewProp_axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_SetFocalDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_SetFocalDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "SetFocalDistance", nullptr, nullptr, sizeof(MyCamera_eventSetFocalDistance_Parms), Z_Construct_UFunction_AMyCamera_SetFocalDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetFocalDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_SetFocalDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetFocalDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_SetFocalDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_SetFocalDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_SetFStop_Statics
	{
		struct MyCamera_eventSetFStop_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_SetFStop_Statics::NewProp_axis = { "axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventSetFStop_Parms, axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_SetFStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_SetFStop_Statics::NewProp_axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_SetFStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_SetFStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "SetFStop", nullptr, nullptr, sizeof(MyCamera_eventSetFStop_Parms), Z_Construct_UFunction_AMyCamera_SetFStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetFStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_SetFStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetFStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_SetFStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_SetFStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_SetISO_Statics
	{
		struct MyCamera_eventSetISO_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_SetISO_Statics::NewProp_axis = { "axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventSetISO_Parms, axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_SetISO_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_SetISO_Statics::NewProp_axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_SetISO_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_SetISO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "SetISO", nullptr, nullptr, sizeof(MyCamera_eventSetISO_Parms), Z_Construct_UFunction_AMyCamera_SetISO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetISO_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_SetISO_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetISO_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_SetISO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_SetISO_Statics::FuncParams);
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
	struct Z_Construct_UFunction_AMyCamera_SetMFStop_Statics
	{
		struct MyCamera_eventSetMFStop_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_SetMFStop_Statics::NewProp_axis = { "axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventSetMFStop_Parms, axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_SetMFStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_SetMFStop_Statics::NewProp_axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_SetMFStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_SetMFStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "SetMFStop", nullptr, nullptr, sizeof(MyCamera_eventSetMFStop_Parms), Z_Construct_UFunction_AMyCamera_SetMFStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetMFStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_SetMFStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetMFStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_SetMFStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_SetMFStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_SetWhiteTemp_Statics
	{
		struct MyCamera_eventSetWhiteTemp_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_SetWhiteTemp_Statics::NewProp_axis = { "axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventSetWhiteTemp_Parms, axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_SetWhiteTemp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_SetWhiteTemp_Statics::NewProp_axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_SetWhiteTemp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_SetWhiteTemp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "SetWhiteTemp", nullptr, nullptr, sizeof(MyCamera_eventSetWhiteTemp_Parms), Z_Construct_UFunction_AMyCamera_SetWhiteTemp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetWhiteTemp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_SetWhiteTemp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetWhiteTemp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_SetWhiteTemp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_SetWhiteTemp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCamera_SetWhiteTint_Statics
	{
		struct MyCamera_eventSetWhiteTint_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCamera_SetWhiteTint_Statics::NewProp_axis = { "axis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyCamera_eventSetWhiteTint_Parms, axis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_SetWhiteTint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_SetWhiteTint_Statics::NewProp_axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_SetWhiteTint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_SetWhiteTint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "SetWhiteTint", nullptr, nullptr, sizeof(MyCamera_eventSetWhiteTint_Parms), Z_Construct_UFunction_AMyCamera_SetWhiteTint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetWhiteTint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_SetWhiteTint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_SetWhiteTint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_SetWhiteTint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_SetWhiteTint_Statics::FuncParams);
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
	struct Z_Construct_UFunction_AMyCamera_ToStop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_ToStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_ToStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, nullptr, "ToStop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_ToStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_ToStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_ToStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_ToStop_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_springArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_springArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_app,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCamera_GetArmLenght, "GetArmLenght" }, // 1743287399
		{ &Z_Construct_UFunction_AMyCamera_GetAspectRatioHeight, "GetAspectRatioHeight" }, // 4110668236
		{ &Z_Construct_UFunction_AMyCamera_GetAspectRatioWidth, "GetAspectRatioWidth" }, // 2235660511
		{ &Z_Construct_UFunction_AMyCamera_GetFocalDistance, "GetFocalDistance" }, // 2700636302
		{ &Z_Construct_UFunction_AMyCamera_GetFStop, "GetFStop" }, // 4002550296
		{ &Z_Construct_UFunction_AMyCamera_GetISO, "GetISO" }, // 1388159274
		{ &Z_Construct_UFunction_AMyCamera_GetMeshCoordX, "GetMeshCoordX" }, // 800249446
		{ &Z_Construct_UFunction_AMyCamera_GetMeshCoordY, "GetMeshCoordY" }, // 3509575103
		{ &Z_Construct_UFunction_AMyCamera_GetMeshCoordZ, "GetMeshCoordZ" }, // 536317647
		{ &Z_Construct_UFunction_AMyCamera_GetMFStop, "GetMFStop" }, // 1626220924
		{ &Z_Construct_UFunction_AMyCamera_GetViewAngleX, "GetViewAngleX" }, // 1682193999
		{ &Z_Construct_UFunction_AMyCamera_GetViewAngleY, "GetViewAngleY" }, // 3425989526
		{ &Z_Construct_UFunction_AMyCamera_GetViewAngleZ, "GetViewAngleZ" }, // 273367340
		{ &Z_Construct_UFunction_AMyCamera_GetWhiteTemp, "GetWhiteTemp" }, // 966558432
		{ &Z_Construct_UFunction_AMyCamera_GetWhiteTint, "GetWhiteTint" }, // 2839016787
		{ &Z_Construct_UFunction_AMyCamera_MakeDataset, "MakeDataset" }, // 1450489850
		{ &Z_Construct_UFunction_AMyCamera_MoveCamera, "MoveCamera" }, // 2958672117
		{ &Z_Construct_UFunction_AMyCamera_SetArmLenght, "SetArmLenght" }, // 4082588666
		{ &Z_Construct_UFunction_AMyCamera_SetAspectRatio, "SetAspectRatio" }, // 3088412811
		{ &Z_Construct_UFunction_AMyCamera_SetAspectRatioHeight, "SetAspectRatioHeight" }, // 2578124981
		{ &Z_Construct_UFunction_AMyCamera_SetAspectRatioWidth, "SetAspectRatioWidth" }, // 850446442
		{ &Z_Construct_UFunction_AMyCamera_SetCameraPitch, "SetCameraPitch" }, // 2816099008
		{ &Z_Construct_UFunction_AMyCamera_SetCameraRoll, "SetCameraRoll" }, // 4287717183
		{ &Z_Construct_UFunction_AMyCamera_SetCameraYaw, "SetCameraYaw" }, // 3685863145
		{ &Z_Construct_UFunction_AMyCamera_SetFocalDistance, "SetFocalDistance" }, // 3391473246
		{ &Z_Construct_UFunction_AMyCamera_SetFStop, "SetFStop" }, // 3007244937
		{ &Z_Construct_UFunction_AMyCamera_SetISO, "SetISO" }, // 276890877
		{ &Z_Construct_UFunction_AMyCamera_SetMeshVectorX, "SetMeshVectorX" }, // 3999014795
		{ &Z_Construct_UFunction_AMyCamera_SetMeshVectorY, "SetMeshVectorY" }, // 500938352
		{ &Z_Construct_UFunction_AMyCamera_SetMeshVectorZ, "SetMeshVectorZ" }, // 2456696094
		{ &Z_Construct_UFunction_AMyCamera_SetMFStop, "SetMFStop" }, // 3248640776
		{ &Z_Construct_UFunction_AMyCamera_SetWhiteTemp, "SetWhiteTemp" }, // 2764010719
		{ &Z_Construct_UFunction_AMyCamera_SetWhiteTint, "SetWhiteTint" }, // 2243097105
		{ &Z_Construct_UFunction_AMyCamera_StopMoveCamera, "StopMoveCamera" }, // 1283478056
		{ &Z_Construct_UFunction_AMyCamera_ToCancel, "ToCancel" }, // 113063873
		{ &Z_Construct_UFunction_AMyCamera_ToDL, "ToDL" }, // 2380999899
		{ &Z_Construct_UFunction_AMyCamera_ToDown, "ToDown" }, // 2497346028
		{ &Z_Construct_UFunction_AMyCamera_ToDR, "ToDR" }, // 4103827215
		{ &Z_Construct_UFunction_AMyCamera_ToLeft, "ToLeft" }, // 2979707430
		{ &Z_Construct_UFunction_AMyCamera_ToRight, "ToRight" }, // 3825287315
		{ &Z_Construct_UFunction_AMyCamera_ToStop, "ToStop" }, // 1968657718
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCamera_Statics::NewProp_springArm_MetaData[] = {
		{ "Category", "MyCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCamera_Statics::NewProp_springArm = { "springArm", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCamera, springArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCamera_Statics::NewProp_springArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCamera_Statics::NewProp_springArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCamera_Statics::NewProp_camera_MetaData[] = {
		{ "Category", "MyCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCamera_Statics::NewProp_camera = { "camera", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCamera, camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCamera_Statics::NewProp_camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCamera_Statics::NewProp_camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCamera_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "MyCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCamera_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCamera, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCamera_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCamera_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCamera_Statics::NewProp_springArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCamera_Statics::NewProp_camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCamera_Statics::NewProp_mesh,
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
	IMPLEMENT_CLASS(AMyCamera, 622307801);
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
