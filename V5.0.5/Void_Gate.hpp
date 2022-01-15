#ifndef UE4SS_SDK_Void_Gate_HPP
#define UE4SS_SDK_Void_Gate_HPP

class AVoid_Gate_C : AInteractionMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UArrowComponent* Player Location;
    UAkComponent* Ak;
    UParticleSystemComponent* P_Void_Active;
    UParticleSystemComponent* P_Void_Idle;
    UMaterialBillboardComponent* MB_Glow;
    USkeletalMeshComponent* SM_VoidStone;
    UBoxComponent* Box1;
    UPointLightComponent* PointLight;
    float Fade_Color_Lerp_Color_6B489A5348FAED9D05BE6A855E3143F2;
    TEnumAsByte<ETimelineDirection::Type> Fade_Color__Direction_6B489A5348FAED9D05BE6A855E3143F2;
    UTimelineComponent* Fade Color;
    float VoidBlack_Light_Intensity_08E361ED4C8FD105E6587A8640732F6A;
    float VoidBlack_Glow_08E361ED4C8FD105E6587A8640732F6A;
    float VoidBlack_Mesh_Size_08E361ED4C8FD105E6587A8640732F6A;
    float VoidBlack_Darkness_08E361ED4C8FD105E6587A8640732F6A;
    TEnumAsByte<ETimelineDirection::Type> VoidBlack__Direction_08E361ED4C8FD105E6587A8640732F6A;
    UTimelineComponent* VoidBlack;
    AStaticMeshActor* Von Statue;
    AVoid_Location_C* TargetVoid;
    UVoidStone_AnimBP_C* Anim;
    bool Completed;
    FName LevelName;
    TEnumAsByte<Areas::Type> Area;
    FTransform DestinationTransform;
    UMaterialInstanceDynamic* MatVoidCenter;
    FLinearColor Color Completed;
    UMaterialInstanceDynamic* MatGlow;
    FLinearColor Color Base;
    FText VoidName;
    UAkComponent* Ak_Sound;
    int32 Difficulty;
    FVoid_Gate_CEvent Event;
    void Event();
    FLinearColor DifficultyColor;
    UTexture2D* Image;
    ADoor_BP_C* Door;
    UMaterialInstanceDynamic* Statue Eyes;
    UVoidUI_C* VoidUI;
    FVoid_Gate_CStingerTrigger StingerTrigger;
    void StingerTrigger();
    FVoid_Gate_CShouldOpenDoor ShouldOpenDoor;
    void ShouldOpenDoor(UVoid_Gate_C* Gate);
    bool IsDLC;
    bool IsChainsBreaking;
    ULevelSequence* ChainSequence;
    TEnumAsByte<VoidMusicType::Type> VoidTypeEnterSound;
    bool IsOldVoid;
    AActor* OldFence;
    AActor* GodRay;
    FLinearColor Color DLC;
    TArray<AStaticMeshActor*> GlowMeshes;
    FVoid_Gate_COnCompleted OnCompleted;
    void OnCompleted(bool IsDLC, bool IsChainsBreaking);
    AMusic_Trigger_Enter_Exit_2_C* Music Trigger;

    void UserConstructionScript();
    void VoidBlack__FinishedFunc();
    void VoidBlack__UpdateFunc();
    void Fade Color__FinishedFunc();
    void Fade Color__UpdateFunc();
    void ReceiveBeginPlay();
    void PressButton();
    void BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Check State Door();
    void BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReverseVoid();
    void Set Completed();
    void ResumeColision();
    void End();
    void VFX Show();
    void VFX Hide();
    void Wwise Void Loop(bool Play);
    void RemoveVoidUI();
    void ReaddVoidUI();
    void OverlapEndClean();
    void Custom Press Button(FName Level Name);
    void AlreadyUsed();
    void Glow Eyes();
    void Open Door();
    void Callback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    void CustomRemovePickupUI(bool bRemove);
    void ExecuteUbergraph_Void_Gate(int32 EntryPoint, bool CallFunc_IsRobiValid_ReturnValue, UAkAudioEvent* Temp_object_Variable, uint8 Temp_byte_Variable, UAkAudioEvent* Temp_object_Variable_1, UAkAudioEvent* Temp_object_Variable_2, UAkAudioEvent* Temp_object_Variable_3, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, UMaterialInterface* Temp_object_Variable_4, UMaterialInterface* Temp_object_Variable_5, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRobiValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, UAkAudioEvent* Temp_object_Variable_6, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_IsRobiValid_ReturnValue_2, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UVoidStone_AnimBP_C* K2Node_DynamicCast_AsVoid_Stone_Anim_BP, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, UAkAudioEvent* Temp_object_Variable_7, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, uint8 Temp_byte_Variable_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, UVoidUI_C* CallFunc_Create_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UVoidUI_C* CallFunc_Create_ReturnValue_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue_3, UVoidUI_C* CallFunc_Create_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_3, FLinearColor CallFunc_LinearColorLerp_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_4, FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_4, int32 CallFunc_PostAkEvent_ReturnValue, bool K2Node_CustomEvent_Play, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FName K2Node_CustomEvent_Level_Name, float CallFunc_PlayAnimMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, FString CallFunc_GetDisplayName_ReturnValue_1, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, bool CallFunc_IsRobiValid_ReturnValue_5, bool CallFunc_IsRobiValid_ReturnValue_6, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_7, bool CallFunc_IsRobiValid_ReturnValue_8, bool CallFunc_IsRobiValid_ReturnValue_9, bool CallFunc_IsRobiValid_ReturnValue_10, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, EAkCallbackType K2Node_CustomEvent_CallbackType, UAkCallbackInfo* K2Node_CustomEvent_CallbackInfo, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_PostEventAtLocation_ReturnValue_3, UAkAudioEvent* K2Node_Select_Default, UAkAudioEvent* K2Node_Select_Default_1, int32 CallFunc_PostEventAtLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_5, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, int32 CallFunc_PostAkEvent_ReturnValue_1, AStaticMeshActor* CallFunc_Array_Get_Item, UMaterialInterface* K2Node_Select_Default_2, int32 CallFunc_Array_Length_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FLinearColor K2Node_Select_Default_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_11, bool K2Node_Event_bRemove);
    void OnCompleted__DelegateSignature(bool IsDLC, bool IsChainsBreaking);
    void ShouldOpenDoor__DelegateSignature(UVoid_Gate_C* Gate);
    void StingerTrigger__DelegateSignature();
    void Event__DelegateSignature();
}

#endif
