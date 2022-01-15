#ifndef UE4SS_SDK_NPC_GodUthas_HPP
#define UE4SS_SDK_NPC_GodUthas_HPP

class ANPC_GodUthas_C : UCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* Body Particle;
    UGods_AnimBP_C* GodAnimBP;

    void UserConstructionScript();
    void OnNotifyEnd_1FF754E441648D874475A3AE4C5881D0(FName NotifyName);
    void OnNotifyBegin_1FF754E441648D874475A3AE4C5881D0(FName NotifyName);
    void OnInterrupted_1FF754E441648D874475A3AE4C5881D0(FName NotifyName);
    void OnBlendOut_1FF754E441648D874475A3AE4C5881D0(FName NotifyName);
    void OnCompleted_1FF754E441648D874475A3AE4C5881D0(FName NotifyName);
    void OnNotifyEnd_D82BF520430438599FAD83A5E6E0EB91(FName NotifyName);
    void OnNotifyBegin_D82BF520430438599FAD83A5E6E0EB91(FName NotifyName);
    void OnInterrupted_D82BF520430438599FAD83A5E6E0EB91(FName NotifyName);
    void OnBlendOut_D82BF520430438599FAD83A5E6E0EB91(FName NotifyName);
    void OnCompleted_D82BF520430438599FAD83A5E6E0EB91(FName NotifyName);
    void UthasAnimation();
    void ReceiveBeginPlay();
    void UthasAnimDisappear();
    void ExecuteUbergraph_NPC_GodUthas(int32 EntryPoint, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FName K2Node_CustomEvent_NotifyName_9, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName Temp_name_Variable, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_2, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName K2Node_CustomEvent_NotifyName, FName Temp_name_Variable_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UGods_AnimBP_C* K2Node_DynamicCast_AsGods_Anim_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1);
}

#endif
