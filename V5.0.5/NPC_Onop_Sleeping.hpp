#ifndef UE4SS_SDK_NPC_Onop_Sleeping_HPP
#define UE4SS_SDK_NPC_Onop_Sleeping_HPP

class ANPC_Onop_Sleeping_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Talking1();
    void NPCDialog();
    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void ExecuteUbergraph_NPC_Onop_Sleeping(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const TArray<FText>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1);
}

#endif
