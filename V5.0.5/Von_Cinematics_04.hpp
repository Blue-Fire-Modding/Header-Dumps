#ifndef UE4SS_SDK_Von_Cinematics_04_HPP
#define UE4SS_SDK_Von_Cinematics_04_HPP

class AVon_Cinematics_04_C : UCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* LocationVFX;
    UDecalComponent* Decal;
    UStaticMeshComponent* Sword1;
    UStaticMeshComponent* Sword;
    UVon_Cinematics_AnimBP_C* AnimBP;
    ALeaveTemple_Controller_C* Cutscene;

    void OnNotifyEnd_47907EBC412ADC40FF6676A8735D54A2(FName NotifyName);
    void OnNotifyBegin_47907EBC412ADC40FF6676A8735D54A2(FName NotifyName);
    void OnInterrupted_47907EBC412ADC40FF6676A8735D54A2(FName NotifyName);
    void OnBlendOut_47907EBC412ADC40FF6676A8735D54A2(FName NotifyName);
    void OnCompleted_47907EBC412ADC40FF6676A8735D54A2(FName NotifyName);
    void OnNotifyEnd_C2C66C3F4D52463AC062679CB6A01F10(FName NotifyName);
    void OnNotifyBegin_C2C66C3F4D52463AC062679CB6A01F10(FName NotifyName);
    void OnInterrupted_C2C66C3F4D52463AC062679CB6A01F10(FName NotifyName);
    void OnBlendOut_C2C66C3F4D52463AC062679CB6A01F10(FName NotifyName);
    void OnCompleted_C2C66C3F4D52463AC062679CB6A01F10(FName NotifyName);
    void VonTurn();
    void Destroy Actor();
    void ReceiveBeginPlay();
    void VonGiveVessel();
    void ExecuteUbergraph_Von_Cinematics_04(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue, FName K2Node_CustomEvent_NotifyName_9, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName Temp_name_Variable, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName Temp_name_Variable_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UVon_Cinematics_AnimBP_C* K2Node_DynamicCast_AsVon_Cinematics_Anim_BP, bool K2Node_DynamicCast_bSuccess, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
}

#endif
