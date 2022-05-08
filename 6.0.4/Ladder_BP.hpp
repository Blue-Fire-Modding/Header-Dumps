#ifndef UE4SS_SDK_Ladder_BP_HPP
#define UE4SS_SDK_Ladder_BP_HPP

class ALadder_BP_C : public AInteractionMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box1;
    class UArrowComponent* Arrow;
    bool Climbing;
    float ClimbSpeed;
    float ZTop;
    float ZBottom;
    class UCurveFloat* Curve;

    void UserConstructionScript();
    void OnNotifyEnd_84978A064A37662385C647B8A742FA5F(FName NotifyName);
    void OnNotifyBegin_84978A064A37662385C647B8A742FA5F(FName NotifyName);
    void OnInterrupted_84978A064A37662385C647B8A742FA5F(FName NotifyName);
    void OnBlendOut_84978A064A37662385C647B8A742FA5F(FName NotifyName);
    void OnCompleted_84978A064A37662385C647B8A742FA5F(FName NotifyName);
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_Gamepad_Jump_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_PC_Jump_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Gamepad_Emote_Menu_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_PC_Emote_Menu_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void PressButton();
    void OverlapEndClean();
    void Hit(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    void CheckLocationLimits();
    void InpAxisEvt_Generic_Motion_Y_Axis_K2Node_InputAxisEvent_0(float AxisValue);
    void Fall Water Death();
    void SFXSlide();
    void SFXDrop();
    void ExecuteUbergraph_Ladder_BP(int32 EntryPoint);
};

#endif
