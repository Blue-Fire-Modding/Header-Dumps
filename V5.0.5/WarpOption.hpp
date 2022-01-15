#ifndef UE4SS_SDK_WarpOption_HPP
#define UE4SS_SDK_WarpOption_HPP

class UWarpOption_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_0;
    UImage* Image_83;
    UTextBlock* TextBlock_1;
    TEnumAsByte<CheckPoints::Type> CheckPoint;
    TEnumAsByte<Areas::Type> Area;
    bool NotActive;

    void SetText(FText InText);
    void Selected();
    void Unselected();
    void PreConstruct(bool IsDesignTime);
    void Undiscovered();
    void Set Checkpoint(uint8 CheckPoint);
    void ExecuteUbergraph_WarpOption(int32 EntryPoint, uint8 K2Node_CustomEvent_CheckPoint, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, uint8 Temp_byte_Variable_4, uint8 Temp_byte_Variable_5, uint8 Temp_byte_Variable_6, uint8 Temp_byte_Variable_7, uint8 Temp_byte_Variable_8, uint8 Temp_byte_Variable_9, FText K2Node_CustomEvent_InText, bool K2Node_Event_IsDesignTime, uint8 K2Node_Select_Default, FText CallFunc_GetChunkName_Name);
}

#endif
