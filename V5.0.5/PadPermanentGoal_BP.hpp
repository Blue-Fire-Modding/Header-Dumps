#ifndef UE4SS_SDK_PadPermanentGoal_BP_HPP
#define UE4SS_SDK_PadPermanentGoal_BP_HPP

class APadPermanentGoal_BP_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Box;
    USceneComponent* DefaultSceneRoot;
    AMechanics_Master_C* Target;

    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ExecuteUbergraph_PadPermanentGoal_BP(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, AActor* K2Node_Event_OtherActor, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
}

#endif
