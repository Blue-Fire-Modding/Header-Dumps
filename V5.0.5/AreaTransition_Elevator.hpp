#ifndef UE4SS_SDK_AreaTransition_Elevator_HPP
#define UE4SS_SDK_AreaTransition_Elevator_HPP

class AAreaTransition_Elevator_C : AInteractionMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* TargetPosIndicator1;
    UBoxComponent* Box1;
    UAkComponent* AkClose;
    UAkComponent* AkOpen;
    UArrowComponent* Arrow_Direction;
    UChildActorComponent* ChildActor;
    USkeletalMeshComponent* SM_Elevator_Door_SkelMesh;
    UAkComponent* Ak;
    float Move_Alpha_F29FC58245A289BA1525E2A766CD41D7;
    TEnumAsByte<ETimelineDirection::Type> Move__Direction_F29FC58245A289BA1525E2A766CD41D7;
    UTimelineComponent* Move;
    AActor* Camera;
    bool Start Bottom;
    float PlayRate;
    float Distance;
    float InitialZ;
    bool PlayerInside;
    bool Moving;
    bool MovingDown;
    bool Active;
    bool ActivatedFromStart;
    TEnumAsByte<StreamingChunks::Type> CurrentChunk;
    TEnumAsByte<StreamingChunks::Type> NewChunk;
    FTransform NewLoc;
    TArray<FName> VisibleLevels;
    bool IsSpecialRespawn;
    bool Start HUD;
    FVector Player Offset;
    FAreaTransition_Elevator_CTriggerPlayer TriggerPlayer;
    void TriggerPlayer();
    UAkAudioEvent* TravelSound;
    FString Elevator ID;
    EDetachmentRule Detach Scale Rule;
    EAttachmentRule Attach Scale Rule;
    UAkAudioEvent* TravelSoundGo;
    UAkAudioEvent* TravelSoundArrive;
    UAkAudioEvent* AudioHitArrived;
    UAkAudioEvent* ElevatorLoopSound;
    UAkAudioEvent* StopElevatorLoopSound;
    bool PreLoadTravel;
    bool Show Area Name;
    TArray<UMaterialInterface*> Materials;
    UStaticMesh* NewMesh;
    UStaticMesh* OriginalMesh;
    bool SwitchMesh;

    void UserConstructionScript(bool CallFunc_IsPackagedForDistribution_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z);
    void Move__FinishedFunc();
    void Move__UpdateFunc();
    void Move__AudioHit__EventFunc();
    void ReceiveBeginPlay();
    void PressButton();
    void Fix();
    void SetText();
    void StartElevatorSound();
    void Animation(bool Open, bool Instant);
    void End();
    void SpecialRespawn();
    void Special Press Button();
    void Restart();
    void OverlapEndClean();
    void BeginOverlapEv();
    void Change Mesh(bool Set Original);
    void ExecuteUbergraph_AreaTransition_Elevator(int32 EntryPoint, float Temp_float_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, SpecialAreaTravel__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FString CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, FString CallFunc_Concat_StrStr_ReturnValue_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, bool Temp_bool_Variable_2, float Temp_float_Variable_1, float Temp_float_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, FText Temp_text_Variable, bool Temp_bool_Variable_5, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_IsRobiValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_CustomEvent_Open, bool K2Node_CustomEvent_Instant, float K2Node_Select_Default, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, float Temp_float_Variable_3, bool Temp_bool_Variable_6, float K2Node_Select_Default_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_GetActorRightVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Cutscene_OutputPin, float CallFunc_Cutscene_OutputPin_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_Cutscene_OutputPin_2, bool CallFunc_K2_SetActorRotation_ReturnValue, uint8 Temp_byte_Variable, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, FVector CallFunc_Add_VectorVector_ReturnValue, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable_7, uint8 K2Node_Select_Default_2, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_3, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, int32 CallFunc_PostAssociatedAkEvent_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_4, bool CallFunc_IsRobiValid_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, bool CallFunc_IsRobiValid_ReturnValue_6, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 Temp_int_Array_Index_Variable, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, bool K2Node_CustomEvent_Set_Original, TArray<UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UMaterialInterface* CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, int32 Temp_int_Array_Index_Variable_1, UMaterialInterface* CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, UAkAudioEvent* Temp_object_Variable, UAkAudioEvent* Temp_object_Variable_1, bool Temp_bool_Variable_8, UAkAudioEvent* K2Node_Select_Default_3, FVector CallFunc_MakeVector_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_2, float K2Node_Select_Default_4, FVector CallFunc_MakeVector_ReturnValue_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float K2Node_Select_Default_5, float K2Node_Select_Default_6, float K2Node_Select_Default_7, FVector CallFunc_MakeVector_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_7, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_4, FText Temp_text_Variable_1, bool CallFunc_IsRobiValid_ReturnValue_8, FText K2Node_Select_Default_8, int32 CallFunc_PostEventAtLocation_ReturnValue_5);
    void TriggerPlayer__DelegateSignature();
}

#endif
