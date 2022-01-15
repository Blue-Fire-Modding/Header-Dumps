#ifndef UE4SS_SDK_CamOffset_HPP
#define UE4SS_SDK_CamOffset_HPP

class ACamOffset_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Box;
    USceneComponent* DefaultSceneRoot;
    float Offset;
    bool MasterOffset;

    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ReceiveActorEndOverlap(AActor* OtherActor);
    void ExecuteUbergraph_CamOffset(int32 EntryPoint, AActor* K2Node_Event_OtherActor_1, AActor* K2Node_Event_OtherActor, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1);
}

#endif
