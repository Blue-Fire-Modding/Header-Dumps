#ifndef UE4SS_SDK_NPCBound_Elevator_HPP
#define UE4SS_SDK_NPCBound_Elevator_HPP

class ANPCBound_Elevator_C : ANPCBound_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FText> Text;
    FText Name;
    FNPCBound_Elevator_CRead Read;
    void Read();
    bool Item;
    TEnumAsByte<Items::Type> ItemType;
    bool SaveEvent;
    bool Custom Size;
    FVector Box Size;

    void UserConstructionScript(FString CallFunc_GetDisplayName_ReturnValue);
    void CustomEvent();
    void DialogStartCall();
    void QuickEnd();
    void ExecuteUbergraph_NPCBound_Elevator(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ExitDialog__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_GetItem_Success, bool CallFunc_GetItem_SpecialPopUp, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array);
    void Read__DelegateSignature();
}

#endif
