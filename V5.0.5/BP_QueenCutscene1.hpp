#ifndef UE4SS_SDK_BP_QueenCutscene1_HPP
#define UE4SS_SDK_BP_QueenCutscene1_HPP

class ABP_QueenCutscene1_C : UCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnNotifyEnd_FD98E2DE44AEA1E25869ECAD739ECA20(FName NotifyName);
    void OnNotifyBegin_FD98E2DE44AEA1E25869ECAD739ECA20(FName NotifyName);
    void OnInterrupted_FD98E2DE44AEA1E25869ECAD739ECA20(FName NotifyName);
    void OnBlendOut_FD98E2DE44AEA1E25869ECAD739ECA20(FName NotifyName);
    void OnCompleted_FD98E2DE44AEA1E25869ECAD739ECA20(FName NotifyName);
    void CutScene1();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_QueenCutscene1(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName Temp_name_Variable, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}

#endif
