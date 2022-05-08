#ifndef UE4SS_SDK_NPC_Intro_HPP
#define UE4SS_SDK_NPC_Intro_HPP

class UNPC_Intro_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Text;
    class UImage* Image_50;
    class UTextBlock* NPCName;
    class UOverlay* Overlay_0;
    class UTextBlock* SubTitleText;
    FText NameNPC;
    FText Subtitle;

    void Construct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_NPC_Intro(int32 EntryPoint);
};

#endif
