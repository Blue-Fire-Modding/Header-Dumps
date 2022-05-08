#ifndef UE4SS_SDK_EmoteSlot_HPP
#define UE4SS_SDK_EmoteSlot_HPP

class UEmoteSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* EmoteImg;
    class UTextBlock* EmoteTxt;
    class UImage* Image_0;
    TEnumAsByte<E_Emotes::Type> Emote;
    class UAnimMontage* Montage;
    TEnumAsByte<E_SwordSelection::Type> Sword Selection;

    void Selected();
    void Unselected();
    void Construct();
    void ExecuteUbergraph_EmoteSlot(int32 EntryPoint);
};

#endif
