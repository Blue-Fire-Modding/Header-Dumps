#ifndef UE4SS_SDK_DemoLimits_HPP
#define UE4SS_SDK_DemoLimits_HPP

class ADemoLimits_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Box;
    UStaticMeshComponent* StaticMesh;
    USceneComponent* DefaultSceneRoot;
    UMessage_PopUp_C* Demo;

    void ReceiveBeginPlay();
    void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ExecuteUbergraph_DemoLimits(int32 EntryPoint, AActor* K2Node_Event_OtherActor, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, UPrimitiveComponent* K2Node_Event_MyComp, AActor* K2Node_Event_Other, UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, FVector K2Node_Event_HitLocation, FVector K2Node_Event_HitNormal, FVector K2Node_Event_NormalImpulse, const FHitResult K2Node_Event_Hit, const FText Temp_text_Variable, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, UMessage_PopUp_C* CallFunc_Create_ReturnValue);
}

#endif
