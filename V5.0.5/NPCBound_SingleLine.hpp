#ifndef UE4SS_SDK_NPCBound_SingleLine_HPP
#define UE4SS_SDK_NPCBound_SingleLine_HPP

class ANPCBound_SingleLine_C : ANPCBound_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FText> Text;
    FText Name;
    FNPCBound_SingleLine_CRead Read;
    void Read();
    bool Item;
    TEnumAsByte<Items::Type> ItemType;
    bool SaveEvent;
    bool FadeStyle;
    bool ItemPopUp;

    void CustomEvent();
    void DialogStartCall();
    void QuickEnd();
    void ReceiveBeginPlay();
    void Custom Construction Extra();
    void ExecuteUbergraph_NPCBound_SingleLine(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ExitDialog__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, bool CallFunc_GetItem_Success, bool CallFunc_GetItem_SpecialPopUp, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, FString CallFunc_GetDisplayName_ReturnValue);
    void Read__DelegateSignature();
}

#endif