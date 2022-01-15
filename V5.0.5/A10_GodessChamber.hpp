#ifndef UE4SS_SDK_A10_GodessChamber_HPP
#define UE4SS_SDK_A10_GodessChamber_HPP

class AA10_GodessChamber_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    AEmitter* P_GodPresence_2_ExecuteUbergraph_A10_GodessChamber_RefProperty;
    ABP_Penumbra_C* Boss_A10_Penumbra_0_ExecuteUbergraph_A10_GodessChamber_RefProperty;
    ABP_BossDoor_Queen_C* BP_GoddessDoor_2_ExecuteUbergraph_A10_GodessChamber_RefProperty;

    void InpActEvt_Nine_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Seven_K2Node_InputKeyEvent_0(FKey Key);
    void ExecuteUbergraph_A10_GodessChamber(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess, bool Temp_bool_IsClosed_Variable_1, UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, FKey K2Node_InputKeyEvent_Key, FKey K2Node_InputKeyEvent_Key_1, bool K2Node_SwitchInteger_CmpSuccess_1);
}

#endif
