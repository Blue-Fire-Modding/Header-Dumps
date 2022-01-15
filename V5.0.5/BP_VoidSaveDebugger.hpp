#ifndef UE4SS_SDK_BP_VoidSaveDebugger_HPP
#define UE4SS_SDK_BP_VoidSaveDebugger_HPP

class ABP_VoidSaveDebugger_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    ABlueFireHud_C* HUD;
    UBlueFire_Game_Instance_C* GameInstance;

    void InpActEvt_V_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_VoidSaveDebugger(int32 EntryPoint, UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool Temp_bool_Variable, AHUD* CallFunc_GetHUD_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UBlueFireHud_C* K2Node_DynamicCast_AsBlue_Fire_Hud, bool K2Node_DynamicCast_bSuccess, FKey K2Node_InputKeyEvent_Key, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess_1);
}

#endif
