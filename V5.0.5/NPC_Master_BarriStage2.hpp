#ifndef UE4SS_SDK_NPC_Master_BarriStage2_HPP
#define UE4SS_SDK_NPC_Master_BarriStage2_HPP

class ANPC_Master_BarriStage2_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Hat_Barri;
    UBarriAnimBlueprint_C* BarriAnimBP;
    bool GetFlower;

    void CustomEvent_5();
    void ReceiveBeginPlay();
    void CustomEvent_6();
    void CustomEvent();
    void NPCDialog();
    void ExecuteUbergraph_NPC_Master_BarriStage2(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UBarriAnimBlueprint_C* K2Node_DynamicCast_AsBarri_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, bool CallFunc_GetAsset_Success, int32 CallFunc_GetAsset_Index, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, const TArray<FText>& K2Node_MakeArray_Array_1, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, const TArray<FText>& K2Node_MakeArray_Array_3, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2);
}

#endif
