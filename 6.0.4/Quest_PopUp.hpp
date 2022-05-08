#ifndef UE4SS_SDK_Quest_PopUp_HPP
#define UE4SS_SDK_Quest_PopUp_HPP

class UQuest_PopUp_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* QuickFade;
    class UWidgetAnimation* Text;
    class UBorder* Border_InputQuest;
    class UCanvasPanel* CanvasPanel_Root;
    class UImage* Image_0;
    class UImage* Image_127;
    class UOverlay* Overlay_0;
    class USpacer* Spacer_0;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_8;
    class UTextBlock* TextBlock_78;
    class UTextBlock* TextBlock_88;
    TEnumAsByte<Quests::Type> Quest;
    TEnumAsByte<QuestStatusType::Type> OperationType;
    FQuest_PopUp_CFinished Finished;
    void Finished();

    void Replay();
    void UpdateUI();
    void Finish();
    void QuickExit();
    void Construct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_Quest_PopUp(int32 EntryPoint);
    void Finished__DelegateSignature();
};

#endif
