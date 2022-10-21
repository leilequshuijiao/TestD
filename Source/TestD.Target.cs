// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class TestDTarget : TargetRules
{
    public TestDTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        ExtraModuleNames.AddRange(new string[] { "TestD" });
       // GlobalDefinitions.Add("EXCLUDE_NONPAK_UE_EXTENSIONS = 0");
    }
}
