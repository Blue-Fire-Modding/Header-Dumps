#ifndef UE4SS_SDK_Floorpad_BP_HPP
#define UE4SS_SDK_Floorpad_BP_HPP

class AFloorpad_BP_C : AMechanics_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Box;
    UStaticMeshComponent* Switch_Platform_SM;
    UStaticMeshComponent* StaticMesh;
    bool Timed;
    AMechanics_Master_C* Target;
    FFloorpad_BP_CPress Press;
    void Press();
    float Duration;
    bool Statue;
    FLinearColor Color;
    bool ShouldChangeMatWithStatue;

    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Reset();
    void SetPermanent();
    void ReceiveBeginPlay();
    void Pressed();
    void ExecuteUbergraph_Floorpad_BP(int32 EntryPoint, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Variable, UMaterialInterface* Temp_object_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsRobiValid_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, ULifeStatue_C* K2Node_DynamicCast_AsLife_Statue, bool K2Node_DynamicCast_bSuccess_1, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, FString CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, UMaterialInterface* Temp_object_Variable_1, bool CallFunc_IsRobiValid_ReturnValue_2, FString CallFunc_GetDisplayName_ReturnValue_1, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, int32 CallFunc_PostEventAtLocation_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_3, bool Temp_bool_IsClosed_Variable, UMaterialInterface* Temp_object_Variable_2, UMaterialInterface* K2Node_Select_Default, UMaterialInterface* K2Node_Select_Default_1);
    void Press__DelegateSignature();
}

#endif
