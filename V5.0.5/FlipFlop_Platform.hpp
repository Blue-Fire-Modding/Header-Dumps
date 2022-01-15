#ifndef UE4SS_SDK_FlipFlop_Platform_HPP
#define UE4SS_SDK_FlipFlop_Platform_HPP

class AFlipFlop_Platform_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* AkReforce;
    UBoxComponent* Box;
    UAkComponent* Ak;
    UStaticMeshComponent* Cube;
    USceneComponent* DefaultSceneRoot;
    bool Damage;
    bool canDamage;
    bool Debug;
    bool UseSoundReforce;
    UAkAudioEvent* SoundFlip;
    UAkAudioEvent* SoundFlop;
    bool FixBoundRotation;
    float Sound Time;
    bool UseMeshAsCollision;
    AActor* Player Actor;
    float Activation Time;
    int32 IndexMatToChange;
    FVector Inset;

    void Update State(bool Damage, float Time);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Custom Begin Play();
    void ToggleExtra();
    void PreToggleExtra();
    void BndEvt__Cube_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Start Damage Animation();
    void ExecuteUbergraph_FlipFlop_Platform(int32 EntryPoint, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, bool Temp_bool_Variable_1, uint8 Temp_byte_Variable_4, uint8 Temp_byte_Variable_5, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_IsValid_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool K2Node_CustomEvent_Damage, float K2Node_CustomEvent_Time, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1, bool CallFunc_IsValid_ReturnValue_1, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_GetComponentBounds_Origin, FVector CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, FRotator CallFunc_NegateRotator_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, bool Temp_bool_Variable_3, uint8 K2Node_Select_Default, bool Temp_bool_Variable_4, bool CallFunc_Not_PreBool_ReturnValue_1, uint8 K2Node_Select_Default_1, uint8 K2Node_Select_Default_2, bool CallFunc_IsRobiValid_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_3, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, uint8 Temp_byte_Variable_6, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, float CallFunc_ApplyDamage_ReturnValue, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, int32 CallFunc_PostAkEvent_ReturnValue_2, uint8 Temp_byte_Variable_7, uint8 K2Node_Select_Default_3, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_3, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_3, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostAkEvent_ReturnValue_3);
}

#endif
