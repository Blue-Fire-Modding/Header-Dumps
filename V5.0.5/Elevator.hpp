#ifndef UE4SS_SDK_Elevator_HPP
#define UE4SS_SDK_Elevator_HPP

class AElevator_C : AInteractionMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Box2;
    UAkComponent* ElevatorMusic;
    UStaticMeshComponent* TargetPosIndicator1;
    UChildActorComponent* ChildActor;
    UBoxComponent* Box1;
    USkeletalMeshComponent* SM_Elevator_Door_SkelMesh;
    UAkComponent* Ak;
    UStaticMeshComponent* TargetPosIndicator;
    float Move_Alpha_7775C8D24129DAAFAE1F06B46B18909D;
    TEnumAsByte<ETimelineDirection::Type> Move__Direction_7775C8D24129DAAFAE1F06B46B18909D;
    UTimelineComponent* Move;
    float Distance;
    bool StartBottom;
    float InitialZ;
    float PlayRate;
    bool PlayerInside;
    bool Moving;
    bool IsBottom;
    bool MovingDown;
    bool Active;
    bool ActivatedFromStart;
    FElevator_CCall Elevator Call Elevator;
    void Call Elevator();
    bool DontDestroyIndicator;

    void UserConstructionScript();
    void Move__FinishedFunc();
    void Move__UpdateFunc();
    void Fix();
    void SetText();
    void Call(bool Accend);
    void StartElevatorSound();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BeginOverlapEv();
    void BndEvt__Ak_K2Node_ComponentBoundEvent_1_PhysicsVolumeChanged__DelegateSignature(UPhysicsVolume* NewVolume);
    void BndEvt__Ak_K2Node_ComponentBoundEvent_2_ActorComponentActivatedSignature__DelegateSignature(UActorComponent* Component, bool bReset);
    void Animation(bool Open);
    void PressButton();
    void End(bool VoidMakerCall);
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void AdjustDisplayHeight();
    void ReBuild();
    void ResetPosition();
    void ExecuteUbergraph_Elevator(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_2, FText Temp_text_Variable, FText Temp_text_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_3, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_3, bool CallFunc_IsRobiValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FText K2Node_Select_Default, bool CallFunc_IsPlaying_ReturnValue, bool K2Node_CustomEvent_Accend, UAkAudioEvent* Temp_object_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, float CallFunc_Lerp_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_2, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_2, bool CallFunc_K2_SetActorLocation_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_2, int32 CallFunc_PostAkEvent_ReturnValue, UPhysicsVolume* K2Node_ComponentBoundEvent_NewVolume, UActorComponent* K2Node_ComponentBoundEvent_Component, bool K2Node_ComponentBoundEvent_bReset, bool K2Node_CustomEvent_Open, uint8 K2Node_Select_Default_1, bool CallFunc_IsReversing_ReturnValue, bool K2Node_CustomEvent_VoidMakerCall, UAkAudioEvent* Temp_object_Variable_1, float K2Node_Select_Default_2, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, bool Temp_bool_Variable_3, UAkAudioEvent* K2Node_Select_Default_3, int32 CallFunc_PostAkEvent_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, bool CallFunc_EqualEqual_BoolBool_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, bool CallFunc_IsRobiValid_ReturnValue_3, bool CallFunc_IsRobiValid_ReturnValue_4, int32 CallFunc_PostAkEvent_ReturnValue_2, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_4, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, float CallFunc_BreakVector_X_4, float CallFunc_BreakVector_Y_4, float CallFunc_BreakVector_Z_4, float CallFunc_Add_FloatFloat_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_3, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult);
    void Call Elevator__DelegateSignature();
}

#endif
