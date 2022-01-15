#ifndef UE4SS_SDK_SpiritCharge_HPP
#define UE4SS_SDK_SpiritCharge_HPP

class USpiritCharge_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Anim;
    UImage* Image_96;
    TEnumAsByte<Spirits::Type> Spirit;
    UMaterialInstanceDynamic* Mat;

    void PreConstruct(bool IsDesignTime);
    void Set(uint8 Spirit);
    void Charge();
    void RechargeEv(uint8 Spirit, bool Use);
    void ExecuteUbergraph_SpiritCharge(int32 EntryPoint, uint8 K2Node_CustomEvent_Spirit, bool K2Node_CustomEvent_Use, uint8 Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, float Temp_float_Variable_8, float Temp_float_Variable_9, float Temp_float_Variable_10, float Temp_float_Variable_11, float Temp_float_Variable_12, float Temp_float_Variable_13, float Temp_float_Variable_14, float Temp_float_Variable_15, float Temp_float_Variable_16, float Temp_float_Variable_17, float Temp_float_Variable_18, float Temp_float_Variable_19, float Temp_float_Variable_20, float Temp_float_Variable_21, float Temp_float_Variable_22, float Temp_float_Variable_23, float Temp_float_Variable_24, float Temp_float_Variable_25, float Temp_float_Variable_26, float Temp_float_Variable_27, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, SpiritRecharge__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, uint8 K2Node_CustomEvent_Spirit_1, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, FSpiritsInfo CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, UPlayer_Character_BP_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
