#ifndef UE4SS_SDK_EmoteStatue_BP_HPP
#define UE4SS_SDK_EmoteStatue_BP_HPP

class AEmoteStatue_BP_C : ANPCBound_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* ScenePOI;
    UStaticMeshComponent* BloodStone_BaseMesh;
    FEmoteStatue_BP_CRead Read;
    void Read();
    TEnumAsByte<E_Emotes::Type> Emote;
    UMaterialInstanceDynamic* Material Statue;

    void UserConstructionScript(FString CallFunc_GetDisplayName_ReturnValue);
    void QuickEnd();
    void ReceiveBeginPlay();
    void CustomEvent_2();
    void CustomEvent_5();
    void DialogStartCall();
    void Close();
    void CustomEvent_0();
    void ExecuteUbergraph_EmoteStatue_BP(int32 EntryPoint, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, const TArray<FText>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, const TArray<FText>& K2Node_MakeArray_Array_3, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_SwitchInteger_CmpSuccess, const TArray<FText>& K2Node_MakeArray_Array_4, const TArray<FText>& K2Node_MakeArray_Array_5, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_6, const TArray<FText>& K2Node_MakeArray_Array_7, bool CallFunc_HasCurrency_True, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, int32 CallFunc_PostEventAtLocation_ReturnValue, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_8, const TArray<FText>& K2Node_MakeArray_Array_9);
    void Read__DelegateSignature();
}

#endif
