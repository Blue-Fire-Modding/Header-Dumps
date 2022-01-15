#ifndef UE4SS_SDK_Mechanics_Master_HPP
#define UE4SS_SDK_Mechanics_Master_HPP

class AMechanics_Master_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    bool Persistent;
    FString ID;
    bool Active;

    void UserConstructionScript(FString CallFunc_GetDisplayName_ReturnValue);
    void Activate(bool ExternalControl, bool BeginPlay, bool ChangeCamera, bool Instant, bool Is Cutscene, bool Affect Timer);
    void Deactivate(bool Instant, bool Change Camera);
    void AlreadyUsed();
    void SetPermanent();
    void ExecuteUbergraph_Mechanics_Master(int32 EntryPoint, bool K2Node_CustomEvent_ExternalControl, bool K2Node_CustomEvent_BeginPlay, bool K2Node_CustomEvent_ChangeCamera, bool K2Node_CustomEvent_Instant_1, bool K2Node_CustomEvent_Is_Cutscene, bool K2Node_CustomEvent_Affect_Timer, bool K2Node_CustomEvent_Instant, bool K2Node_CustomEvent_Change_Camera);
}

#endif
