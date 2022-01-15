#ifndef UE4SS_SDK_State_Trigger_Int_Ext_Ambiences_HPP
#define UE4SS_SDK_State_Trigger_Int_Ext_Ambiences_HPP

class AState_Trigger_Int_Ext_Ambiences_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* Ak;
    UStaticMeshComponent* Bo;
    UBillboardComponent* PointA;
    UBillboardComponent* PointB;
    UBillboardComponent* Billboard;
    UBoxComponent* Box;
    USceneComponent* DefaultSceneRoot;
    UAkAudioEvent* Ak Event;

    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ExecuteUbergraph_State_Trigger_Int_Ext_Ambiences(int32 EntryPoint, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, APawn* CallFunc_GetPlayerPawn_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, AActor* K2Node_Event_OtherActor, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_FindClosestPointOnSegment_ReturnValue, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, float CallFunc_VSize_ReturnValue, float CallFunc_VSize_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
}

#endif
