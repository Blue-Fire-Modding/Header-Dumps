#ifndef UE4SS_SDK_GameMenuTitle_HPP
#define UE4SS_SDK_GameMenuTitle_HPP

class UGameMenuTitle_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* SelectAnim;
    UImage* DifficultyImg;
    UImage* Image_0;
    UOverlay* Overlay_0;
    UTextBlock* Text;
    FText Title;
    bool Selected;
    bool NotAvailable;
    bool DifficultyShow;
    int32 Difficulty;
    FString StringTravel;
    FText Description;

    void PreConstruct(bool IsDesignTime);
    void Select();
    void Unselect();
    void NoAvailableCall();
    void Update Text(FText InText);
    void ExecuteUbergraph_GameMenuTitle(int32 EntryPoint, int32 Temp_int_Variable, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, UTexture2D* Temp_object_Variable_2, bool K2Node_Event_IsDesignTime, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UTexture2D* K2Node_Select_Default, FText K2Node_CustomEvent_InText);
}

#endif
