#ifndef UE4SS_SDK_BP_TempleBell_HPP
#define UE4SS_SDK_BP_TempleBell_HPP

class ABP_TempleBell_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* TempCollision;
    USkeletalMeshComponent* SM_TempleBell;
    USceneComponent* DefaultSceneRoot;
    UTempleBellAnimBP_C* Anim;

    void OnNotifyEnd_683DD26A476E05B00627B0B8F712B166(FName NotifyName);
    void OnNotifyBegin_683DD26A476E05B00627B0B8F712B166(FName NotifyName);
    void OnInterrupted_683DD26A476E05B00627B0B8F712B166(FName NotifyName);
    void OnBlendOut_683DD26A476E05B00627B0B8F712B166(FName NotifyName);
    void OnCompleted_683DD26A476E05B00627B0B8F712B166(FName NotifyName);
    void Activate(bool Activate);
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void CutSceneBELL();
    void ExecuteUbergraph_BP_TempleBell(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName Temp_name_Variable, bool K2Node_CustomEvent_Activate, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UTempleBellAnimBP_C* K2Node_DynamicCast_AsTemple_Bell_Anim_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser);
}

#endif
