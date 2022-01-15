#ifndef UE4SS_SDK_State_Trigger_Enter_Exit_HPP
#define UE4SS_SDK_State_Trigger_Enter_Exit_HPP

class AState_Trigger_Enter_Exit_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCapsuleComponent* Capsule;
    UAkComponent* Ak_Component;
    UBoxComponent* Box;
    USceneComponent* DefaultSceneRoot;
    UAkAudioEvent* Ak_Event_Start;
    UAkAudioEvent* AkEventStart2;
    UAkAudioEvent* Ak_Event_Stop;
    UAkAudioEvent* AkEventStop2;
    TSubclassOf<UAkComponent> Component;
    bool UseCapsuleCollision;
    bool HideInEditor;
    bool DebugPrint;

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ReceiveActorEndOverlap(AActor* OtherActor);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(uint8 EndPlayReason);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_State_Trigger_Enter_Exit(int32 EntryPoint, AActor* K2Node_Event_OtherActor_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, AActor* K2Node_Event_OtherActor, TArray<AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, uint8 K2Node_Event_EndPlayReason, int32 CallFunc_Array_Length_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_3, AActor* K2Node_ComponentBoundEvent_OtherActor_3, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_3, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_3, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1, bool CallFunc_Less_IntInt_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, AActor* K2Node_ComponentBoundEvent_OtherActor_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, AActor* CallFunc_Array_Get_Item, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsRobiValid_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3);
}

#endif
