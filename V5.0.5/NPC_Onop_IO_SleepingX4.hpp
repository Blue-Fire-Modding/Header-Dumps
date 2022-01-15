#ifndef UE4SS_SDK_NPC_Onop_IO_SleepingX4_HPP
#define UE4SS_SDK_NPC_Onop_IO_SleepingX4_HPP

class ANPC_Onop_IO_SleepingX4_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_Z;

    void NPCDialog();
    void Talking1();
    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void ExecuteUbergraph_NPC_Onop_IO_SleepingX4(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const TArray<FText>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1);
}

#endif
