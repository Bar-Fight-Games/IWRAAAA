#include "CustomShadersModule.h"
#include "Misc/Paths.h"
#include "ShaderCore.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_MODULE(FCustomShaders, CustomShaders);

void FCustomShaders::StartupModule()
{
	FString ShaderDirectory = FPaths::ProjectContentDir() / TEXT("OceanWater/USHFile");

	AddShaderSourceDirectoryMapping(
		TEXT("/OceanWater"), 
		ShaderDirectory
	);
}

void FCustomShaders::ShutdownModule()
{
	ResetAllShaderSourceDirectoryMappings();
}
