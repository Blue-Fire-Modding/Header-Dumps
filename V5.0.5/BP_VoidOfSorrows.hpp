#ifndef UE4SS_SDK_BP_VoidOfSorrows_HPP
#define UE4SS_SDK_BP_VoidOfSorrows_HPP

class ABP_VoidOfSorrows_C : AInteractionMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* AkSoundLoopShield;
    USphereComponent* Sphere;
    UMaterialBillboardComponent* MB_Glow;
    UParticleSystemComponent* P_VoidOfSorrowsAmbient;
    UStaticMeshComponent* Shield;
    UParticleSystemComponent* P_Void_Idle;
    UParticleSystemComponent* P_Void_Active;
    UPointLightComponent* PointLight;
    USkeletalMeshComponent* SM_VoidStone;
    UAkComponent* AkVoidDLC;
    UArrowComponent* Player Location;
    UAkComponent* Ak;
    float HitGlow_Scale_9178DD3C4B3880AF5F321B85473EFE40;
    float HitGlow_Rotation_9178DD3C4B3880AF5F321B85473EFE40;
    float HitGlow_Glow_9178DD3C4B3880AF5F321B85473EFE40;
    float HitGlow_Opacity_9178DD3C4B3880AF5F321B85473EFE40;
    float HitGlow_Hit_9178DD3C4B3880AF5F321B85473EFE40;
    TEnumAsByte<ETimelineDirection::Type> HitGlow__Direction_9178DD3C4B3880AF5F321B85473EFE40;
    UTimelineComponent* HitGlow;
    float Make_Glow_Statue_Glow_F6D89605483033BD4E544DBF44CB995F;
    TEnumAsByte<ETimelineDirection::Type> Make_Glow_Statue__Direction_F6D89605483033BD4E544DBF44CB995F;
    UTimelineComponent* Make Glow Statue;
    float Dissolve_Shield_Dissolve_78828660471627A62F2C9995E5B97E6E;
    TEnumAsByte<ETimelineDirection::Type> Dissolve_Shield__Direction_78828660471627A62F2C9995E5B97E6E;
    UTimelineComponent* Dissolve Shield;
    float Make_Glow_Chain_Glow_67F7F8AF4B37A3296C5A9B9DF8A2AB72;
    TEnumAsByte<ETimelineDirection::Type> Make_Glow_Chain__Direction_67F7F8AF4B37A3296C5A9B9DF8A2AB72;
    UTimelineComponent* Make Glow Chain;
    float Fade_Color_Lerp_Color_EC491C9E425342CFCE76DCA2AB9C0F0A;
    TEnumAsByte<ETimelineDirection::Type> Fade_Color__Direction_EC491C9E425342CFCE76DCA2AB9C0F0A;
    UTimelineComponent* Fade Color;
    float VoidBlack_Light_Intensity_B33F7B3741D0E0E638374CA9FE8F4A0D;
    float VoidBlack_Glow_B33F7B3741D0E0E638374CA9FE8F4A0D;
    float VoidBlack_Darkness_B33F7B3741D0E0E638374CA9FE8F4A0D;
    TEnumAsByte<ETimelineDirection::Type> VoidBlack__Direction_B33F7B3741D0E0E638374CA9FE8F4A0D;
    UTimelineComponent* VoidBlack;
    bool Debug Shield Open;
    bool Debug Play Last Cutscene;
    AActor* NewLocation;
    TMap<AVoid_Gate_C*, AStaticMeshActor*> ChainMap;
    UVoidStone_AnimBP_C* Anim;
    bool Completed;
    UMaterialInstanceDynamic* MatVoidCenter;
    FLinearColor Color Completed;
    UMaterialInstanceDynamic* MatGlow;
    FLinearColor Color Base;
    UAkComponent* Ak_Sound;
    FBP_VoidOfSorrows_CEvent Event;
    void Event();
    int32 AmountChains;
    TMap<AVoid_Gate_C*, AStaticMeshActor*> StatuesMap;
    UMaterialInstanceDynamic* MatGlowCutscene;
    UMaterialInstanceDynamic* MatShield;
    float Offset Z VFX;
    UStaticMesh* NewMesh;
    bool Debug Void Complete Cutscene;
    int32 Debug Void Cutscene Index;
    TArray<AVoid_Gate_C*> Void Gate Array;
    int32 Amount Voids Completed;
    ULevelSequence* Current Sequence;
    ULevelSequence* Cutscene 5;
    ULevelSequence* Cutscene 10;
    bool WaitingPlayVoidCompleteCutscene;
    FVector OriginalLocation;
    FRotator Rotation;
    FRotator OriginalRotation;
    FVector OriginalScale;
    UAkAudioEvent* HintAudioCutscene;
    TArray<AVoid_Gate_C*> GuardianDoorGates;
    FString GuardianDoorCutsceneID;
    int32 AmountGuardian;
    bool bIsShieldOff;
    bool bIsGuardianDoorCutscene;

    void Change VFX(AActor* Actor, UParticleSystem*& Emitter Template, FVector& Location, FRotator& Rotation, bool Temp_bool_Variable, const FTransform CallFunc_GetTransform_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, UParticleSystem* Temp_object_Variable, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, UParticleSystem* Temp_object_Variable_1, bool CallFunc_BooleanOR_ReturnValue_2, UParticleSystem* K2Node_Select_Default);
    void VoidBlack__FinishedFunc();
    void VoidBlack__UpdateFunc();
    void Fade Color__FinishedFunc();
    void Fade Color__UpdateFunc();
    void Make Glow Chain__FinishedFunc();
    void Make Glow Chain__UpdateFunc();
    void Dissolve Shield__FinishedFunc();
    void Dissolve Shield__UpdateFunc();
    void Make Glow Statue__FinishedFunc();
    void Make Glow Statue__UpdateFunc();
    void HitGlow__FinishedFunc();
    void HitGlow__UpdateFunc();
    void ReceiveBeginPlay();
    void PressButton();
    void ReverseVoid();
    void Set Completed();
    void Wwise Void Loop(bool Play);
    void OverlapEndClean();
    void AlreadyUsed();
    void BreakGate(UVoid_Gate_C* Gate);
    void Custom Begin Overlap();
    void Custom End Overlap();
    void Finished ChainCutscene();
    void Shutdown Shield(bool Play Anim);
    void Finished VoidGateCutscene();
    void Glow Chain(AStaticMeshActor* Static Mesh);
    void Debug Finish Cutscene Chain();
    void Debug Finish Cutscene Final();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Glow Statue(bool Instant, AStaticMeshActor* Static Mesh);
    void Cutscene Voids Completed(bool Debug Mode);
    void Complete Void(bool IsDLC, bool IsChainsBreaking);
    void Finish Void Cutscene();
    void Play Void Complete Cutscene();
    void Shake();
    void Finish Guardian Door Cutscene();
    void ExecuteUbergraph_BP_VoidOfSorrows(int32 EntryPoint, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, FRotator CallFunc_RLerp_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, int32 Temp_int_Array_Index_Variable_1, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, OnCompleted__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Variable, bool CallFunc_IsRobiValid_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UVoidStone_AnimBP_C* K2Node_DynamicCast_AsVoid_Stone_Anim_BP, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_3, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_2, bool K2Node_CustomEvent_Play, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, float CallFunc_Lerp_ReturnValue, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Variable_1, const TArray<FName>& K2Node_MakeArray_Array, const FTransform CallFunc_GetTransform_ReturnValue, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, UVoid_Gate_C* K2Node_CustomEvent_Gate, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, TArray<UVoid_Gate_C*>& CallFunc_Map_Keys_Keys, AStaticMeshActor* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, UVoid_Gate_C* CallFunc_Array_Get_Item, UParticleSystem* CallFunc_Change_VFX_Emitter_Template, FVector CallFunc_Change_VFX_Location, FRotator CallFunc_Change_VFX_Rotation, bool CallFunc_IsRobiValid_ReturnValue_3, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, FString CallFunc_GetDisplayName_ReturnValue, TArray<AStaticMeshActor*>& CallFunc_Map_Values_Values, int32 CallFunc_Map_Length_ReturnValue, AStaticMeshActor* CallFunc_Array_Get_Item_1, FString CallFunc_GetDisplayName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, bool CallFunc_Less_IntInt_ReturnValue, TArray<UVoid_Gate_C*>& CallFunc_Map_Keys_Keys_1, UVoid_Gate_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_4, float CallFunc_Cutscene_OutputPin, float CallFunc_Cutscene_OutputPin_1, TArray<AStaticMeshActor*>& CallFunc_Map_Values_Values_1, ShouldOpenDoor__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, AActor* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool K2Node_CustomEvent_Play_Anim, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor_1, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue_1, float CallFunc_Cutscene_OutputPin_2, AStaticMeshActor* K2Node_CustomEvent_Static_Mesh_1, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, int32 Temp_int_Variable_2, int32 CallFunc_PostAkEvent_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, TArray<UVoid_Gate_C*>& CallFunc_Map_Keys_Keys_2, TArray<AStaticMeshActor*>& CallFunc_Map_Values_Values_2, UVoid_Gate_C* CallFunc_Array_Get_Item_4, AStaticMeshActor* CallFunc_Array_Get_Item_5, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor_2, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue_2, UParticleSystem* CallFunc_Change_VFX_Emitter_Template_1, FVector CallFunc_Change_VFX_Location_1, FRotator CallFunc_Change_VFX_Rotation_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_3, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_3, int32 CallFunc_PostAkEvent_ReturnValue_1, float CallFunc_Cutscene_OutputPin_3, FLinearColor CallFunc_LinearColorLerp_ReturnValue, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor_3, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue_3, float CallFunc_Cutscene_OutputPin_4, int32 Temp_int_Loop_Counter_Variable_4, FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_4, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, bool K2Node_CustomEvent_Instant, AStaticMeshActor* K2Node_CustomEvent_Static_Mesh, AStaticMeshActor* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_3, AStaticMeshActor* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, AStaticMeshActor* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue_6, int32 CallFunc_PostEventAtLocation_ReturnValue_7, int32 CallFunc_PostEventAtLocation_ReturnValue_8, int32 CallFunc_PostEventAtLocation_ReturnValue_9, int32 CallFunc_PostEventAtLocation_ReturnValue_10, int32 CallFunc_PostEventAtLocation_ReturnValue_11, int32 CallFunc_PostEventAtLocation_ReturnValue_12, bool CallFunc_SetStaticMesh_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_2, int32 CallFunc_PostAkEvent_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_13, bool K2Node_CustomEvent_Debug_Mode, AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UVoid_Gate_C* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3, int32 Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_5, bool K2Node_CustomEvent_IsDLC, bool K2Node_CustomEvent_IsChainsBreaking, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, float CallFunc_Cutscene_OutputPin_5, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_Cutscene_OutputPin_6, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor_4, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_5, float CallFunc_Montage_Play_ReturnValue, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult, AActor* CallFunc_GetOwner_ReturnValue_1, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_GetActorRelativeScale3D_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, FVector CallFunc_VLerp_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_14, int32 CallFunc_PostEventAtLocation_ReturnValue_15, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsPackagedForDistribution_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_16, int32 CallFunc_PostEvent_ReturnValue, UVoid_Gate_C* CallFunc_Array_Get_Item_7, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, FString CallFunc_CheckState_Same_ID_3, bool CallFunc_CheckState_Used_3, int32 CallFunc_Array_Length_ReturnValue_5, FString CallFunc_CheckState_Same_ID_4, bool CallFunc_CheckState_Used_4, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_6, float CallFunc_Cutscene_OutputPin_7, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor_5, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue_5, float CallFunc_Cutscene_OutputPin_8);
    void Event__DelegateSignature();
}

#endif
