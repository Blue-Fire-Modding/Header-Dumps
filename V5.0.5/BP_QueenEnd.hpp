#ifndef UE4SS_SDK_BP_QueenEnd_HPP
#define UE4SS_SDK_BP_QueenEnd_HPP

class ABP_QueenEnd_C : UCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnNotifyEnd_EFDD45D047253082C36EE2985A5866C7(FName NotifyName);
    void OnNotifyBegin_EFDD45D047253082C36EE2985A5866C7(FName NotifyName);
    void OnInterrupted_EFDD45D047253082C36EE2985A5866C7(FName NotifyName);
    void OnBlendOut_EFDD45D047253082C36EE2985A5866C7(FName NotifyName);
    void OnCompleted_EFDD45D047253082C36EE2985A5866C7(FName NotifyName);
    void CutSceneDeath();
    void ExecuteUbergraph_BP_QueenEnd(int32 EntryPoint, FVector CallFunc_GetSocketLocation_ReturnValue, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName Temp_name_Variable, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}

#endif
