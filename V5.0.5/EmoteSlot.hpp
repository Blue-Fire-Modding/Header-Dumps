#ifndef UE4SS_SDK_EmoteSlot_HPP
#define UE4SS_SDK_EmoteSlot_HPP

class UEmoteSlot_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* EmoteImg;
    UTextBlock* EmoteTxt;
    UImage* Image_0;
    TEnumAsByte<E_Emotes::Type> Emote;
    UAnimMontage* Montage;
    TEnumAsByte<E_SwordSelection::Type> Sword Selection;

    void Selected();
    void Unselected();
    void Construct();
    void ExecuteUbergraph_EmoteSlot(int32 EntryPoint, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, FST_Emotes CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
}

#endif
