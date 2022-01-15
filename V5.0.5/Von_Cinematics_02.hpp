#ifndef UE4SS_SDK_Von_Cinematics_02_HPP
#define UE4SS_SDK_Von_Cinematics_02_HPP

class AVon_Cinematics_02_C : UCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDecalComponent* Decal;
    UStaticMeshComponent* Sword1;
    UStaticMeshComponent* Sword;
    UVon_Cinematics_AnimBP_C* AnimBP;
    ALeaveTemple_Controller_C* Cutscene;

    void OnNotifyEnd_D9FFFB3244C421F6F383CABE1DD72518(FName NotifyName);
    void OnNotifyBegin_D9FFFB3244C421F6F383CABE1DD72518(FName NotifyName);
    void OnInterrupted_D9FFFB3244C421F6F383CABE1DD72518(FName NotifyName);
    void OnBlendOut_D9FFFB3244C421F6F383CABE1DD72518(FName NotifyName);
    void OnCompleted_D9FFFB3244C421F6F383CABE1DD72518(FName NotifyName);
    void OnNotifyEnd_1C5D151D4752EC3BA2EC868474FBA115(FName NotifyName);
    void OnNotifyBegin_1C5D151D4752EC3BA2EC868474FBA115(FName NotifyName);
    void OnInterrupted_1C5D151D4752EC3BA2EC868474FBA115(FName NotifyName);
    void OnBlendOut_1C5D151D4752EC3BA2EC868474FBA115(FName NotifyName);
    void OnCompleted_1C5D151D4752EC3BA2EC868474FBA115(FName NotifyName);
    void ReceiveBeginPlay();
    void VonAnim();
    void FinCutscene();
    void VonGiveSanctuary();
    void ExecuteUbergraph_Von_Cinematics_02(int32 EntryPoint, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_9, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName Temp_name_Variable, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName Temp_name_Variable_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UVon_Cinematics_AnimBP_C* K2Node_DynamicCast_AsVon_Cinematics_Anim_BP, bool K2Node_DynamicCast_bSuccess, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue);
}

#endif
