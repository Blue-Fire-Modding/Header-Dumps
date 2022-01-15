#ifndef UE4SS_SDK_CameraCapture_HPP
#define UE4SS_SDK_CameraCapture_HPP

class ACameraCapture_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard;
    UArrowComponent* Arrow;
    UBoxComponent* Box;
    USceneComponent* DefaultSceneRoot;
    APlayer_Character_BP_C* PlayerRef;
    AActor* CameraPivotRef;
    float Distance;
    float SpeedAdjust;
    float MaxYaw;
    float MaxPitch;
    AActor* Wall;
    bool View;

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ReceiveActorEndOverlap(AActor* OtherActor);
    void ExtraEnable();
    void ExtraDisable();
    void ExecuteUbergraph_CameraCapture(int32 EntryPoint, AActor* K2Node_Event_OtherActor_1, AActor* K2Node_Event_OtherActor, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1);
}

#endif
