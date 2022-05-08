#ifndef UE4SS_SDK_BP_VoidSaveDebugger_HPP
#define UE4SS_SDK_BP_VoidSaveDebugger_HPP

class ABP_VoidSaveDebugger_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class ABlueFireHud_C* HUD;
    class UBlueFire_Game_Instance_C* GameInstance;

    void InpActEvt_V_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_VoidSaveDebugger(int32 EntryPoint);
};

#endif
