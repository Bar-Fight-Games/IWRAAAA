using UnrealBuildTool;

public class CustomShaders: ModuleRules
{
    public CustomShaders(ReadOnlyTargetRules Target) : base(Target)
    {
        PrivateDependencyModuleNames.AddRange(new string[] {"Core", "CoreUObject", "Engine", "RenderCore"});
    }
}
