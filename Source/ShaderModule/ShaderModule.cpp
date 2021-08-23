// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShaderModule.h"
#include "Modules/ModuleManager.h"

void ShaderModule::StartupModule()
{
#if (ENGINE_MINOR_VERSION >= 21)
    FString ShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shader"));
    if(!AllShaderSourceDirectoryMappings().Contains("/Project"))
        AddShaderSourceDirectoryMapping("/Project", ShaderDirectory);
#endif
}

void ShaderModule::ShutdownModule()
{
}

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, UE4sandbox, "ShaderModule" );
