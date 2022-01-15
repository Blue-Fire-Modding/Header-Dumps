#ifndef UE4SS_SDK_ItemName_HPP
#define UE4SS_SDK_ItemName_HPP

class UItemName_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Background;
    UImage* Image_177;
    UTextBlock* Name;
    TEnumAsByte<Items::Type> Item;
    UWidgetAnimation* Fade;

    void Remove();
    void Set(FText InText, bool Notify);
    void ShowPopUp();
    void Hide();
    void App();
    void TempRemove();
    void TempReAdd();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ItemName(int32 EntryPoint, APawn* CallFunc_GetPlayerPawn_ReturnValue, ESlateVisibility Temp_byte_Variable, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, ESlateVisibility Temp_byte_Variable_1, RemoveUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AddUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FText K2Node_CustomEvent_InText, bool K2Node_CustomEvent_Notify, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, bool K2Node_Event_IsDesignTime);
}

#endif
