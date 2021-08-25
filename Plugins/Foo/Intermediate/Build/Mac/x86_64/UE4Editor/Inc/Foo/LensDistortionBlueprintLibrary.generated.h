// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFooCameraModel;
class UObject;
class UTextureRenderTarget2D;
#ifdef FOO_LensDistortionBlueprintLibrary_generated_h
#error "LensDistortionBlueprintLibrary.generated.h already included, missing '#pragma once' in LensDistortionBlueprintLibrary.h"
#endif
#define FOO_LensDistortionBlueprintLibrary_generated_h

#define UE4sandbox4_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_SPARSE_DATA
#define UE4sandbox4_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotEqual_CompareLensDistortionModels); \
	DECLARE_FUNCTION(execEqualEqual_CompareLensDistortionModels); \
	DECLARE_FUNCTION(execDrawUVDisplacementToRenderTarget); \
	DECLARE_FUNCTION(execGetUndistortOverscanFactor);


#define UE4sandbox4_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotEqual_CompareLensDistortionModels); \
	DECLARE_FUNCTION(execEqualEqual_CompareLensDistortionModels); \
	DECLARE_FUNCTION(execDrawUVDisplacementToRenderTarget); \
	DECLARE_FUNCTION(execGetUndistortOverscanFactor);


#define UE4sandbox4_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULensDistortionBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULensDistortionBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foo"), FOO_API) \
	DECLARE_SERIALIZER(ULensDistortionBlueprintLibrary)


#define UE4sandbox4_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesULensDistortionBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULensDistortionBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foo"), FOO_API) \
	DECLARE_SERIALIZER(ULensDistortionBlueprintLibrary)


#define UE4sandbox4_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOO_API ULensDistortionBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULensDistortionBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOO_API, ULensDistortionBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensDistortionBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FOO_API ULensDistortionBlueprintLibrary(ULensDistortionBlueprintLibrary&&); \
	FOO_API ULensDistortionBlueprintLibrary(const ULensDistortionBlueprintLibrary&); \
public:


#define UE4sandbox4_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOO_API ULensDistortionBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FOO_API ULensDistortionBlueprintLibrary(ULensDistortionBlueprintLibrary&&); \
	FOO_API ULensDistortionBlueprintLibrary(const ULensDistortionBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOO_API, ULensDistortionBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensDistortionBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULensDistortionBlueprintLibrary)


#define UE4sandbox4_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define UE4sandbox4_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_11_PROLOG
#define UE4sandbox4_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4sandbox4_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	UE4sandbox4_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_SPARSE_DATA \
	UE4sandbox4_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_RPC_WRAPPERS \
	UE4sandbox4_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_INCLASS \
	UE4sandbox4_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4sandbox4_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4sandbox4_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	UE4sandbox4_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_SPARSE_DATA \
	UE4sandbox4_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4sandbox4_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
	UE4sandbox4_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LensDistortionBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOO_API UClass* StaticClass<class ULensDistortionBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4sandbox4_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
