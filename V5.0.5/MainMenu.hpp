#ifndef UE4SS_SDK_MainMenu_HPP
#define UE4SS_SDK_MainMenu_HPP

class AMainMenu_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBlueFire_Game_Instance_C* BlueFireGameInstance;
    FMainMenu_CPCGamepadSwitch PCGamepadSwitch;
    void PCGamepadSwitch();

    void ReceiveBeginPlay();
    void ExecuteUbergraph_MainMenu(int32 EntryPoint, UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2);
    void PCGamepadSwitch__DelegateSignature();
}

#endif
