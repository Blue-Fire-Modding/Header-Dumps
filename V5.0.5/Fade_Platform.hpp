#ifndef UE4SS_SDK_Fade_Platform_HPP
#define UE4SS_SDK_Fade_Platform_HPP

class AFade_Platform_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* ShadowCatcher;
    UStaticMeshComponent* Temp_Collider;
    UBoxComponent* Box;
    USkeletalMeshComponent* SM_Stone;
    USceneComponent* DefaultSceneRoot;
    float Fade_Out_Dither_095918134E975EFBBAB074AFC24A6B38;
    float Fade_Out_Fade_095918134E975EFBBAB074AFC24A6B38;
    TEnumAsByte<ETimelineDirection::Type> Fade_Out__Direction_095918134E975EFBBAB074AFC24A6B38;
    UTimelineComponent* Fade Out;
    float Fade_In_Rtcp_3BCE97654C34E05A6816C58376EC3E06;
    float Fade_In_Fade_3BCE97654C34E05A6816C58376EC3E06;
    TEnumAsByte<ETimelineDirection::Type> Fade_In__Direction_3BCE97654C34E05A6816C58376EC3E06;
    UTimelineComponent* Fade In;
    bool IsFading;
    float Duration;
    float Respawn Time;
    UFadePlatfom_AnimBP_C* Anim;
    UMaterialInstanceDynamic* MatCenter;
    UMaterialInstanceDynamic* MatPlatform;
    UMaterialInterface* RockPlatformMat;
    FLinearColor Color;
    UForceFeedbackComponent* DashEffect;
    UMaterialInterface* DisappearNewMat;
    UMaterialInterface* DisappearOldMat0;
    UMaterialInterface* DisappearOldMat1;
    APlayer_Character_BP_C* Player;

    void Fade In__FinishedFunc();
    void Fade In__UpdateFunc();
    void Fade Out__FinishedFunc();
    void Fade Out__UpdateFunc();
    void Fade Out__Return__EventFunc();
    void BndEvt__Cube_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Respawn();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(uint8 EndPlayReason);
    void Set New Material(UMaterialInterface* Material);
    void Change Material(bool New Material);
    void StopVib();
    void ForceRespawn();
    void StartTimer();
    void Delay01();
    void Delay02();
    void Delay03();
    void ExecuteUbergraph_Fade_Platform(int32 EntryPoint, int32 Temp_int_Variable, FRotator Temp_struct_Variable, FRotator Temp_struct_Variable_1, FRotator Temp_struct_Variable_2, FRotator Temp_struct_Variable_3, FRotator Temp_struct_Variable_4, FRotator Temp_struct_Variable_5, bool Temp_bool_Variable, VibrateStop__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UForceFeedbackComponent* CallFunc_SpawnForceFeedbackAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool Temp_bool_Variable_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UFadePlatfom_AnimBP_C* K2Node_DynamicCast_AsFade_Platfom_Anim_BP, bool K2Node_DynamicCast_bSuccess_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, FRotator K2Node_Select_Default, uint8 K2Node_Event_EndPlayReason, UMaterialInterface* K2Node_Event_Material, bool K2Node_Event_New_Material, UMaterialInterface* K2Node_Select_Default_1, UMaterialInterface* K2Node_Select_Default_2, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FRotator CallFunc_ComposeRotators_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_2, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_3, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_4, bool CallFunc_IsRobiValid_ReturnValue_2, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
}

#endif
