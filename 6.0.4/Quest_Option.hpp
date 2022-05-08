#ifndef UE4SS_SDK_Quest_Option_HPP
#define UE4SS_SDK_Quest_Option_HPP

class UQuest_Option_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Description;
    class UImage* Image_0;
    class UImage* Image_50;
    class UImage* Image_115;
    class UTextBlock* Name;
    class USizeBox* SizeBox_0;
    TEnumAsByte<Quests::Type> Quest;
    FQuest_Struct QuestStruct;
    bool IsLocked;

    void Build(FSaveQuest_Struct QuestStruct);
    void Select();
    void Unselect();
    void Locked();
    void PreConstruct(bool IsDesignTime);
    void QuestCompletedUI(ESlateVisibility InVisibility);
    void ExecuteUbergraph_Quest_Option(int32 EntryPoint);
};

#endif
