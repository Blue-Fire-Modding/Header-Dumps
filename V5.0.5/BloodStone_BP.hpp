#ifndef UE4SS_SDK_BloodStone_BP_HPP
#define UE4SS_SDK_BloodStone_BP_HPP

class ABloodStone_BP_C : ANPCBound_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* BloodStone_BaseMesh;
    FText Name;
    FBloodStone_BP_CRead Read;
    void Read();
    TEnumAsByte<Items::Type> ItemType;
    int32 SanctuaryIndex;

    void UserConstructionScript(FString CallFunc_GetDisplayName_ReturnValue);
    void QuickEnd();
    void DialogStartCall();
    void ReceiveBeginPlay();
    void CustomEvent_2();
    void CustomEvent_3();
    void CustomEvent_4();
    void CustomEvent();
    void CustomEvent_1();
    void CustomEvent_5();
    void CustomEvent_6();
    void ExecuteUbergraph_BloodStone_BP(int32 EntryPoint, int32 Temp_int_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_ItemAmount, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, const TArray<FText>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, const TArray<FText>& K2Node_MakeArray_Array_3, const TArray<FText>& K2Node_MakeArray_Array_4, bool K2Node_SwitchInteger_CmpSuccess, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_5, const TArray<FText>& K2Node_MakeArray_Array_6, bool CallFunc_HasCurrency_True, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FString CallFunc_CheckState_Same_ID_3, bool CallFunc_CheckState_Used_3, FString CallFunc_CheckState_Same_ID_4, bool CallFunc_CheckState_Used_4, const TArray<FText>& K2Node_MakeArray_Array_7, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_SwitchInteger_CmpSuccess_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_9, bool Temp_bool_Has_Been_Initd_Variable, const TArray<FText>& K2Node_MakeArray_Array_10, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_11, bool K2Node_SwitchInteger_CmpSuccess_2, const TArray<FText>& K2Node_MakeArray_Array_12, const TArray<FText>& K2Node_MakeArray_Array_13, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_14, const TArray<FText>& K2Node_MakeArray_Array_15, bool CallFunc_UseItem_Success, int32 CallFunc_UseItem_CurrentAmount, const TArray<FText>& K2Node_MakeArray_Array_16, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_17, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_IsClosed_Variable, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FText K2Node_Select_Default, const TArray<FText>& K2Node_MakeArray_Array_18, const TArray<FText>& K2Node_MakeArray_Array_19, FString CallFunc_Concat_StrStr_ReturnValue_1, ExitDialog__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FString CallFunc_CheckState_Same_ID_5, bool CallFunc_CheckState_Used_5, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Conv_TextToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_3);
    void Read__DelegateSignature();
}

#endif
