#ifndef UE4SS_SDK_Von_Cinematics_03_HPP
#define UE4SS_SDK_Von_Cinematics_03_HPP

class AVon_Cinematics_03_C : UCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDecalComponent* Decal;
    UStaticMeshComponent* Sword1;
    UStaticMeshComponent* Sword;
    UVon_Cinematics_AnimBP_C* AnimBP;
    ALeaveTemple_Controller_C* Cutscene;

    void OnNotifyEnd_2633B6944B5BD7A4610652A40C8F00C5(FName NotifyName);
    void OnNotifyBegin_2633B6944B5BD7A4610652A40C8F00C5(FName NotifyName);
    void OnInterrupted_2633B6944B5BD7A4610652A40C8F00C5(FName NotifyName);
    void OnBlendOut_2633B6944B5BD7A4610652A40C8F00C5(FName NotifyName);
    void OnCompleted_2633B6944B5BD7A4610652A40C8F00C5(FName NotifyName);
    void ReceiveBeginPlay();
    void VonAnim();
    void FinCutscene();
    void ExecuteUbergraph_Von_Cinematics_03(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName Temp_name_Variable, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UVon_Cinematics_AnimBP_C* K2Node_DynamicCast_AsVon_Cinematics_Anim_BP, bool K2Node_DynamicCast_bSuccess, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used);
}

#endif
