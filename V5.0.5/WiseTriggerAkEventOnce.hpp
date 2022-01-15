#ifndef UE4SS_SDK_WiseTriggerAkEventOnce_HPP
#define UE4SS_SDK_WiseTriggerAkEventOnce_HPP

class AWiseTriggerAkEventOnce_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* Ak;
    UBoxComponent* Box;
    USceneComponent* DefaultSceneRoot;
    UAkAudioEvent* Ak Event;

    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ExecuteUbergraph_WiseTriggerAkEventOnce(int32 EntryPoint, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, AActor* K2Node_Event_OtherActor, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue);
}

#endif
