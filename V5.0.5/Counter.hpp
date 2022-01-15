#ifndef UE4SS_SDK_Counter_HPP
#define UE4SS_SDK_Counter_HPP

class UCounter_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FadeHUD;
    UBorder* Border_13;
    UImage* CounterImg;
    UTextBlock* CounterTxt;
    UImage* Image_98;
    FCounter_CCounterUpdate CounterUpdate;
    void CounterUpdate();
    bool Hidden;

    void Construct();
    void UpdateValue(int32 Amount, bool Has Total, int32 Total);
    void UpdateImageCounter(UMaterialInterface* Material);
    void HideHUD();
    void ShowHUD();
    void Re Construct();
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_Counter(int32 EntryPoint, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool Temp_bool_Variable, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, RemoveUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AddUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_CustomEvent_Amount, bool K2Node_CustomEvent_Has_Total, int32 K2Node_CustomEvent_Total, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString K2Node_Select_Default, UMaterialInterface* K2Node_CustomEvent_Material, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsInViewport_ReturnValue);
    void CounterUpdate__DelegateSignature();
}

#endif
