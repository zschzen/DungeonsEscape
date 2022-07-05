// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DungeonsEscape : ModuleRules
{
	public DungeonsEscape(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
