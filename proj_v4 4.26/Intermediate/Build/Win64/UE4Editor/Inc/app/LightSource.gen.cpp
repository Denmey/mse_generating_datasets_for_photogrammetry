// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "app/LightSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightSource() {}
// Cross Module References
	APP_API UClass* Z_Construct_UClass_ALightSource_NoRegister();
	APP_API UClass* Z_Construct_UClass_ALightSource();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_app();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALightSource::execsetModelPoint)
	{
		P_GET_STRUCT(FVector,Z_Param_model);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setModelPoint(Z_Param_model);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightSource::execchangeAngle_z)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->changeAngle_z(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightSource::execchangeAngle_y)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->changeAngle_y(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightSource::execchangeAngle_x)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->changeAngle_x(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightSource::execchangeColor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->changeColor(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightSource::execgetZ)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->getZ();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightSource::execchangeIntensity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->changeIntensity(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightSource::execsetCoord_z)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->setCoord_z(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightSource::execsetCoord_y)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->setCoord_y(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightSource::execsetCoord_x)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->setCoord_x(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightSource::execquickChange_height)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->quickChange_height(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightSource::execquickChange_distance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->quickChange_distance(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightSource::execquickChange_rotation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->quickChange_rotation(Z_Param_value);
		P_NATIVE_END;
	}
	void ALightSource::StaticRegisterNativesALightSource()
	{
		UClass* Class = ALightSource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "changeAngle_x", &ALightSource::execchangeAngle_x },
			{ "changeAngle_y", &ALightSource::execchangeAngle_y },
			{ "changeAngle_z", &ALightSource::execchangeAngle_z },
			{ "changeColor", &ALightSource::execchangeColor },
			{ "changeIntensity", &ALightSource::execchangeIntensity },
			{ "getZ", &ALightSource::execgetZ },
			{ "quickChange_distance", &ALightSource::execquickChange_distance },
			{ "quickChange_height", &ALightSource::execquickChange_height },
			{ "quickChange_rotation", &ALightSource::execquickChange_rotation },
			{ "setCoord_x", &ALightSource::execsetCoord_x },
			{ "setCoord_y", &ALightSource::execsetCoord_y },
			{ "setCoord_z", &ALightSource::execsetCoord_z },
			{ "setModelPoint", &ALightSource::execsetModelPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALightSource_changeAngle_x_Statics
	{
		struct LightSource_eventchangeAngle_x_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALightSource_changeAngle_x_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightSource_eventchangeAngle_x_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightSource_changeAngle_x_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightSource_changeAngle_x_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightSource_changeAngle_x_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LightSource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightSource_changeAngle_x_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightSource, nullptr, "changeAngle_x", nullptr, nullptr, sizeof(LightSource_eventchangeAngle_x_Parms), Z_Construct_UFunction_ALightSource_changeAngle_x_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_changeAngle_x_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightSource_changeAngle_x_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_changeAngle_x_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightSource_changeAngle_x()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightSource_changeAngle_x_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightSource_changeAngle_y_Statics
	{
		struct LightSource_eventchangeAngle_y_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALightSource_changeAngle_y_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightSource_eventchangeAngle_y_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightSource_changeAngle_y_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightSource_changeAngle_y_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightSource_changeAngle_y_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LightSource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightSource_changeAngle_y_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightSource, nullptr, "changeAngle_y", nullptr, nullptr, sizeof(LightSource_eventchangeAngle_y_Parms), Z_Construct_UFunction_ALightSource_changeAngle_y_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_changeAngle_y_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightSource_changeAngle_y_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_changeAngle_y_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightSource_changeAngle_y()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightSource_changeAngle_y_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightSource_changeAngle_z_Statics
	{
		struct LightSource_eventchangeAngle_z_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALightSource_changeAngle_z_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightSource_eventchangeAngle_z_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightSource_changeAngle_z_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightSource_changeAngle_z_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightSource_changeAngle_z_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LightSource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightSource_changeAngle_z_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightSource, nullptr, "changeAngle_z", nullptr, nullptr, sizeof(LightSource_eventchangeAngle_z_Parms), Z_Construct_UFunction_ALightSource_changeAngle_z_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_changeAngle_z_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightSource_changeAngle_z_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_changeAngle_z_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightSource_changeAngle_z()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightSource_changeAngle_z_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightSource_changeColor_Statics
	{
		struct LightSource_eventchangeColor_Parms
		{
			FString value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALightSource_changeColor_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightSource_eventchangeColor_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightSource_changeColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightSource_changeColor_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightSource_changeColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LightSource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightSource_changeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightSource, nullptr, "changeColor", nullptr, nullptr, sizeof(LightSource_eventchangeColor_Parms), Z_Construct_UFunction_ALightSource_changeColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_changeColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightSource_changeColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_changeColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightSource_changeColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightSource_changeColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightSource_changeIntensity_Statics
	{
		struct LightSource_eventchangeIntensity_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALightSource_changeIntensity_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightSource_eventchangeIntensity_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightSource_changeIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightSource_changeIntensity_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightSource_changeIntensity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LightSource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightSource_changeIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightSource, nullptr, "changeIntensity", nullptr, nullptr, sizeof(LightSource_eventchangeIntensity_Parms), Z_Construct_UFunction_ALightSource_changeIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_changeIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightSource_changeIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_changeIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightSource_changeIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightSource_changeIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightSource_getZ_Statics
	{
		struct LightSource_eventgetZ_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALightSource_getZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightSource_eventgetZ_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightSource_getZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightSource_getZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightSource_getZ_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LightSource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightSource_getZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightSource, nullptr, "getZ", nullptr, nullptr, sizeof(LightSource_eventgetZ_Parms), Z_Construct_UFunction_ALightSource_getZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_getZ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightSource_getZ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_getZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightSource_getZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightSource_getZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightSource_quickChange_distance_Statics
	{
		struct LightSource_eventquickChange_distance_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALightSource_quickChange_distance_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightSource_eventquickChange_distance_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightSource_quickChange_distance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightSource_quickChange_distance_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightSource_quickChange_distance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LightSource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightSource_quickChange_distance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightSource, nullptr, "quickChange_distance", nullptr, nullptr, sizeof(LightSource_eventquickChange_distance_Parms), Z_Construct_UFunction_ALightSource_quickChange_distance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_quickChange_distance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightSource_quickChange_distance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_quickChange_distance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightSource_quickChange_distance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightSource_quickChange_distance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightSource_quickChange_height_Statics
	{
		struct LightSource_eventquickChange_height_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALightSource_quickChange_height_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightSource_eventquickChange_height_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightSource_quickChange_height_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightSource_quickChange_height_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightSource_quickChange_height_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LightSource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightSource_quickChange_height_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightSource, nullptr, "quickChange_height", nullptr, nullptr, sizeof(LightSource_eventquickChange_height_Parms), Z_Construct_UFunction_ALightSource_quickChange_height_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_quickChange_height_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightSource_quickChange_height_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_quickChange_height_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightSource_quickChange_height()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightSource_quickChange_height_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightSource_quickChange_rotation_Statics
	{
		struct LightSource_eventquickChange_rotation_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALightSource_quickChange_rotation_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightSource_eventquickChange_rotation_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightSource_quickChange_rotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightSource_quickChange_rotation_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightSource_quickChange_rotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LightSource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightSource_quickChange_rotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightSource, nullptr, "quickChange_rotation", nullptr, nullptr, sizeof(LightSource_eventquickChange_rotation_Parms), Z_Construct_UFunction_ALightSource_quickChange_rotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_quickChange_rotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightSource_quickChange_rotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_quickChange_rotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightSource_quickChange_rotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightSource_quickChange_rotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightSource_setCoord_x_Statics
	{
		struct LightSource_eventsetCoord_x_Parms
		{
			float value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALightSource_setCoord_x_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightSource_eventsetCoord_x_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALightSource_setCoord_x_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LightSource_eventsetCoord_x_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALightSource_setCoord_x_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LightSource_eventsetCoord_x_Parms), &Z_Construct_UFunction_ALightSource_setCoord_x_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightSource_setCoord_x_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightSource_setCoord_x_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightSource_setCoord_x_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightSource_setCoord_x_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LightSource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightSource_setCoord_x_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightSource, nullptr, "setCoord_x", nullptr, nullptr, sizeof(LightSource_eventsetCoord_x_Parms), Z_Construct_UFunction_ALightSource_setCoord_x_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_setCoord_x_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightSource_setCoord_x_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_setCoord_x_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightSource_setCoord_x()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightSource_setCoord_x_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightSource_setCoord_y_Statics
	{
		struct LightSource_eventsetCoord_y_Parms
		{
			float value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALightSource_setCoord_y_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightSource_eventsetCoord_y_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALightSource_setCoord_y_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LightSource_eventsetCoord_y_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALightSource_setCoord_y_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LightSource_eventsetCoord_y_Parms), &Z_Construct_UFunction_ALightSource_setCoord_y_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightSource_setCoord_y_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightSource_setCoord_y_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightSource_setCoord_y_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightSource_setCoord_y_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LightSource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightSource_setCoord_y_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightSource, nullptr, "setCoord_y", nullptr, nullptr, sizeof(LightSource_eventsetCoord_y_Parms), Z_Construct_UFunction_ALightSource_setCoord_y_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_setCoord_y_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightSource_setCoord_y_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_setCoord_y_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightSource_setCoord_y()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightSource_setCoord_y_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightSource_setCoord_z_Statics
	{
		struct LightSource_eventsetCoord_z_Parms
		{
			float value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALightSource_setCoord_z_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightSource_eventsetCoord_z_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALightSource_setCoord_z_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LightSource_eventsetCoord_z_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALightSource_setCoord_z_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LightSource_eventsetCoord_z_Parms), &Z_Construct_UFunction_ALightSource_setCoord_z_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightSource_setCoord_z_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightSource_setCoord_z_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightSource_setCoord_z_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightSource_setCoord_z_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LightSource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightSource_setCoord_z_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightSource, nullptr, "setCoord_z", nullptr, nullptr, sizeof(LightSource_eventsetCoord_z_Parms), Z_Construct_UFunction_ALightSource_setCoord_z_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_setCoord_z_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightSource_setCoord_z_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_setCoord_z_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightSource_setCoord_z()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightSource_setCoord_z_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightSource_setModelPoint_Statics
	{
		struct LightSource_eventsetModelPoint_Parms
		{
			FVector model;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_model;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALightSource_setModelPoint_Statics::NewProp_model = { "model", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightSource_eventsetModelPoint_Parms, model), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightSource_setModelPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightSource_setModelPoint_Statics::NewProp_model,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightSource_setModelPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LightSource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightSource_setModelPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightSource, nullptr, "setModelPoint", nullptr, nullptr, sizeof(LightSource_eventsetModelPoint_Parms), Z_Construct_UFunction_ALightSource_setModelPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_setModelPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightSource_setModelPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightSource_setModelPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightSource_setModelPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightSource_setModelPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALightSource_NoRegister()
	{
		return ALightSource::StaticClass();
	}
	struct Z_Construct_UClass_ALightSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_myLight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_app,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALightSource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALightSource_changeAngle_x, "changeAngle_x" }, // 3924385765
		{ &Z_Construct_UFunction_ALightSource_changeAngle_y, "changeAngle_y" }, // 1614493251
		{ &Z_Construct_UFunction_ALightSource_changeAngle_z, "changeAngle_z" }, // 2847738660
		{ &Z_Construct_UFunction_ALightSource_changeColor, "changeColor" }, // 94234753
		{ &Z_Construct_UFunction_ALightSource_changeIntensity, "changeIntensity" }, // 2323081667
		{ &Z_Construct_UFunction_ALightSource_getZ, "getZ" }, // 3604329934
		{ &Z_Construct_UFunction_ALightSource_quickChange_distance, "quickChange_distance" }, // 1660550902
		{ &Z_Construct_UFunction_ALightSource_quickChange_height, "quickChange_height" }, // 3164232773
		{ &Z_Construct_UFunction_ALightSource_quickChange_rotation, "quickChange_rotation" }, // 1081343009
		{ &Z_Construct_UFunction_ALightSource_setCoord_x, "setCoord_x" }, // 4224095908
		{ &Z_Construct_UFunction_ALightSource_setCoord_y, "setCoord_y" }, // 3949473187
		{ &Z_Construct_UFunction_ALightSource_setCoord_z, "setCoord_z" }, // 506981974
		{ &Z_Construct_UFunction_ALightSource_setModelPoint, "setModelPoint" }, // 491954959
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightSource_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "LightSource.h" },
		{ "ModuleRelativePath", "LightSource.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightSource_Statics::NewProp_myLight_MetaData[] = {
		{ "Category", "LightSource" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LightSource.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightSource_Statics::NewProp_myLight = { "myLight", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightSource, myLight), Z_Construct_UClass_UDirectionalLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightSource_Statics::NewProp_myLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightSource_Statics::NewProp_myLight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightSource_Statics::NewProp_myLight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALightSource_Statics::ClassParams = {
		&ALightSource::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALightSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALightSource_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALightSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALightSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALightSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALightSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALightSource, 2147567811);
	template<> APP_API UClass* StaticClass<ALightSource>()
	{
		return ALightSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALightSource(Z_Construct_UClass_ALightSource, &ALightSource::StaticClass, TEXT("/Script/app"), TEXT("ALightSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
