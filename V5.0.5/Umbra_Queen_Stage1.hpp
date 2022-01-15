#ifndef UE4SS_SDK_Umbra_Queen_Stage1_HPP
#define UE4SS_SDK_Umbra_Queen_Stage1_HPP

class AUmbra_Queen_Stage1_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard_0;
    APlayer_Character_BP_C* Player;
    ANPCBound_C* NPCBound;

    void OnNotifyEnd_22937D564127DFDEC934D081CC4DC218(FName NotifyName);
    void OnNotifyBegin_22937D564127DFDEC934D081CC4DC218(FName NotifyName);
    void OnInterrupted_22937D564127DFDEC934D081CC4DC218(FName NotifyName);
    void OnBlendOut_22937D564127DFDEC934D081CC4DC218(FName NotifyName);
    void OnCompleted_22937D564127DFDEC934D081CC4DC218(FName NotifyName);
    void ReceiveBeginPlay();
    void UmbraIdle();
    void UmbraEnd();
    void UmbraReact();
    void UmbraReLocation();
    void UmbraQuiet();
    void ExecuteUbergraph_Umbra_Queen_Stage1(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName Temp_name_Variable, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}

#endif
