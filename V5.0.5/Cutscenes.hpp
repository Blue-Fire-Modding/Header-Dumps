#ifndef UE4SS_SDK_Cutscenes_HPP
#define UE4SS_SDK_Cutscenes_HPP

class UCutscenes_C : UBlueprintFunctionLibrary
{

    void ToggleHud(bool Enable, UObject* __WorldContext, UPlayerController* CallFunc_GetPlayerController_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UBlueFireHud_C* K2Node_DynamicCast_AsBlue_Fire_Hud, bool K2Node_DynamicCast_bSuccess_1, AHUD* CallFunc_GetHUD_ReturnValue_1, UBlueFireHud_C* K2Node_DynamicCast_AsBlue_Fire_Hud_1, bool K2Node_DynamicCast_bSuccess_2);
    void GetInput(UObject* __WorldContext, bool& Input, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess);
    void InputCutscene(bool Enable, bool Hide/Show HUD, bool CamAllowed, bool KeepEnemiesFrozen, bool AffectTimer, bool LoseSpinCharge, bool DontDisableWallGrab, UObject* __WorldContext, UPlayer_Character_BP_C* Player, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_3, bool CallFunc_IsRobiValid_ReturnValue_4, bool CallFunc_IsRobiValid_ReturnValue_5, bool CallFunc_IsRobiValid_ReturnValue_6, bool CallFunc_IsRobiValid_ReturnValue_7, bool CallFunc_IsRobiValid_ReturnValue_8, bool CallFunc_IsRobiValid_ReturnValue_9, bool CallFunc_IsRobiValid_ReturnValue_10, bool CallFunc_IsRobiValid_ReturnValue_11);
}

#endif
