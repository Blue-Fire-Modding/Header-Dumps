#ifndef UE4SS_SDK_A02_GameIntro_MemorialEnd_HPP
#define UE4SS_SDK_A02_GameIntro_MemorialEnd_HPP

class AA02_GameIntro_MemorialEnd_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    AAreaExit_C* AreaExit_Keep-Arcane_ExecuteUbergraph_A02_GameIntro_MemorialEnd_RefProperty;

    void ReceiveBeginPlay();
    void SearchGameInstance();
    void ExecuteUbergraph_A02_GameIntro_MemorialEnd(int32 EntryPoint, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRobiValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
}

#endif
