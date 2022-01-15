#ifndef UE4SS_SDK_BubbleSpawner_HPP
#define UE4SS_SDK_BubbleSpawner_HPP

class ABubbleSpawner_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* SM_Reference;
    UArrowComponent* Arrow;
    UStaticMeshComponent* SM_Base;
    USceneComponent* DefaultSceneRoot;
    bool Debug;
    bool BigBubble;
    bool Open;
    bool Static;
    ABubble_C* LastBubble;
    float Speed;
    float Life Time;
    float Spawn Interval;
    bool UseMaxSpeed;
    float MaxSpeed;
    APlayer_Character_BP_C* Player;
    bool BubblesArePossesed;
    bool SpawnAnotherBubble;
    bool VoidExit;

    void SpawnPlant();
    void CheckBubbleDead();
    void ReceiveBeginPlay();
    void Spawn Another Bubble();
    void ReBuild();
    void Void Exit();
    void ReceiveDestroyed();
    void ExecuteUbergraph_BubbleSpawner(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsRobiValid_ReturnValue, float Temp_float_Variable, bool CallFunc_IsRobiValid_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Variable_1, UAkAudioEvent* Temp_object_Variable, UAkAudioEvent* Temp_object_Variable_1, VoidExit__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float K2Node_Select_Default, UBubble_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_2, UAkAudioEvent* K2Node_Select_Default_1, int32 CallFunc_PostEventAtLocation_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, TArray<UPlayer_Character_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, UPlayer_Character_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsRobiValid_ReturnValue_3);
}

#endif
