#ifndef UE4SS_SDK_RTPC_TransitionBox_HPP
#define UE4SS_SDK_RTPC_TransitionBox_HPP

class ARTPC_TransitionBox_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* PointB;
    UBillboardComponent* PointA;
    UBoxComponent* Box;
    USceneComponent* DefaultSceneRoot;
    float AtoB;
    FName RTPC;
    UAkAudioEvent* AkAudioEvent;

    void UserConstructionScript(FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue);
    void ChangeRealTime();
    void ReceiveActorEndOverlap(AActor* OtherActor);
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ExecuteUbergraph_RTPC_TransitionBox(int32 EntryPoint, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, AActor* K2Node_Event_OtherActor_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_FindClosestPointOnSegment_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_2, float CallFunc_VSize_ReturnValue, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, AActor* K2Node_Event_OtherActor, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, int32 CallFunc_PostEvent_ReturnValue);
}

#endif
