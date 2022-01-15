#ifndef UE4SS_SDK_Organ_Key_UI_HPP
#define UE4SS_SDK_Organ_Key_UI_HPP

class UOrgan_Key_UI_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* BlackKey;
    UImage* BlackKey_Input;
    UImage* Key;
    UImage* Key_Input;
    bool BlackNote;
    UBlueFire_Game_Instance_C* GameInstance;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void SetKeys(uint8 BlackKey, uint8 Key);
    void KeyToggle(uint8 Key, UImage* Widget);
    void ExecuteUbergraph_Organ_Key_UI(int32 EntryPoint, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRobiValid_ReturnValue, uint8 K2Node_CustomEvent_BlackKey, uint8 K2Node_CustomEvent_Key_1, uint8 K2Node_CustomEvent_Key, UImage* K2Node_CustomEvent_Widget, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UMaterialInstance* CallFunc_GetUIPlatformBasic_UIMaterial, bool CallFunc_GetUIPlatformBasic_NonSquareSize, FVector2D CallFunc_GetUIPlatformBasic_Size, bool K2Node_Event_IsDesignTime);
}

#endif
