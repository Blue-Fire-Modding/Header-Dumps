#ifndef UE4SS_SDK_BP_PlayerGhost_HPP
#define UE4SS_SDK_BP_PlayerGhost_HPP

class ABP_PlayerGhost_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* Play_Spirit_Umbra_Loop;
    UParticleSystemComponent* P_GodPresence_Ghost;
    UStaticMeshComponent* Player_Pose_Birth_Mesh;
    USphereComponent* Collision;
    USceneComponent* DefaultSceneRoot;
    FST_PlayerGhost Data;

    void BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PlayerGhost(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue, FST_PlayerGhost K2Node_MakeStruct_ST_PlayerGhost, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetCurrency_Success, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
}

#endif
