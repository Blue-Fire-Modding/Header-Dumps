#ifndef UE4SS_SDK_Bubble_HPP
#define UE4SS_SDK_Bubble_HPP

class ABubble_C : UCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* Play_Bubble_Outside_Loop_MN;
    UTextRenderComponent* SpeedTxt;
    UParticleSystemComponent* P_BubbleSpawn;
    UParticleSystemComponent* P_BubbleDrips;
    UParticleSystemComponent* P_Bubble;
    UStaticMeshComponent* StaticMesh;
    float GrowTimeline2_Scale_544D64EC40AAD1F53D0F698B490174AC;
    TEnumAsByte<ETimelineDirection::Type> GrowTimeline2__Direction_544D64EC40AAD1F53D0F698B490174AC;
    UTimelineComponent* GrowTimeline2;
    float PopTimeline_Pop_97A18F7342B99C95C94AEB994F611FF9;
    TEnumAsByte<ETimelineDirection::Type> PopTimeline__Direction_97A18F7342B99C95C94AEB994F611FF9;
    UTimelineComponent* PopTimeline;
    bool Debug;
    APlayer_Character_BP_C* Player;
    bool Possesed;
    bool BigBubble;
    bool Static;
    UMaterialInstanceDynamic* BubbleMaterial;
    UExtraInput_UI_C* UIInput;
    ABubble_Control_C* BubbleController;
    FVector Direction;
    float Speed;
    float Life Time;
    bool UseMaxSpeed;
    float MaxSpeed;
    FBubble_CStartControl StartControl;
    void StartControl(bool IsPossesed);
    ABubbleSpawner_C* BubbleSpawner;

    void PlayerHaveSprint(bool& Result);
    void UserConstructionScript();
    void PopTimeline__FinishedFunc();
    void PopTimeline__UpdateFunc();
    void GrowTimeline2__FinishedFunc();
    void GrowTimeline2__UpdateFunc();
    void GrowTimeline2__Spawn Emitter__EventFunc();
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void Pop();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void Gravity();
    void PopAnim();
    void MoveUpwards();
    void Grow();
    void GravityOn();
    void GravityOff();
    void NormalSpeed();
    void FastSpeed();
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Void Exit();
    void Bind OnPlayerDie(bool Bind);
    void Pop OnPlayerDie();
    void ExecuteUbergraph_Bubble(int32 EntryPoint, bool Temp_bool_Variable, UAkAudioEvent* Temp_object_Variable, UAkAudioEvent* Temp_object_Variable_1, FVector CallFunc_Conv_FloatToVector_ReturnValue, bool Temp_bool_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, VoidExit__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, Die__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, FVector CallFunc_K2_GetActorLocation_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, TSubclassOf<UDamageType> CallFunc_GetObjectClass_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool Temp_bool_Variable_2, FTransform CallFunc_MakeTransform_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABubble_Control_C* CallFunc_FinishSpawningActor_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, FHitResult CallFunc_K2_SetActorRelativeLocation_SweepHitResult, FRotator CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, float K2Node_Select_Default, FVector CallFunc_Conv_FloatToVector_ReturnValue_1, float CallFunc_VSize_ReturnValue, FString CallFunc_Conv_FloatToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, UAkAudioEvent* K2Node_Select_Default_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEvent_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue, float K2Node_Select_Default_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_2, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_3, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue_2, APawn* CallFunc_GetPlayerPawn_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, UPlayer_Character_BP_C* CallFunc_GetActorOfClass_ReturnValue, bool K2Node_CustomEvent_Bind);
    void StartControl__DelegateSignature(bool IsPossesed);
}

#endif
