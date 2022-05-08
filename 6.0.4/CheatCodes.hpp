#ifndef UE4SS_SDK_CheatCodes_HPP
#define UE4SS_SDK_CheatCodes_HPP

class UCheatCodes_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEditableTextBox* EditableTextBox_112;
    FCheatCodes_CSubmit Submit;
    void Submit(FString String);
    class UBlueFire_Game_Instance_C* GameInstance;

    void Construct();
    void BndEvt__EditableTextBox_112_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void End(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ForceSubmit();
    void BndEvt__EditableTextBox_112_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void ExecuteUbergraph_CheatCodes(int32 EntryPoint);
    void Submit__DelegateSignature(FString String);
};

#endif
