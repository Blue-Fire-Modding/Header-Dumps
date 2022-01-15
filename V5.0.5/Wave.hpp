#ifndef UE4SS_SDK_Wave_HPP
#define UE4SS_SDK_Wave_HPP

class AWave_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* WaveMesh;
    USceneComponent* DefaultSceneRoot;
    float Dissolve_Dissolve_02092BD04226B7A879D22E83B1BFD19A;
    TEnumAsByte<ETimelineDirection::Type> Dissolve__Direction_02092BD04226B7A879D22E83B1BFD19A;
    UTimelineComponent* Dissolve;
    float Expand_Dissolve_DBC59CA34352729BC3EC548C736EA22D;
    float Expand_Glow_DBC59CA34352729BC3EC548C736EA22D;
    float Expand_Scale_DBC59CA34352729BC3EC548C736EA22D;
    TEnumAsByte<ETimelineDirection::Type> Expand__Direction_DBC59CA34352729BC3EC548C736EA22D;
    UTimelineComponent* Expand;
    float Duration;
    float Size;
    UCurveFloat* CurveFade;
    FWave_CDeactivate Deactivate;
    void Deactivate(AWave_C* SelfRef);
    UMaterialInstanceDynamic* Material;
    float Damage;
    bool Is White;
    UMaterialInterface* WaveMaterial;
    bool Tick;
    bool HasDissolve;
    APlayer_Character_BP_C* Player;
    UBlueFire_Game_Instance_C* GameInstance;

    void Expand__FinishedFunc();
    void Expand__UpdateFunc();
    void Dissolve__FinishedFunc();
    void Dissolve__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void CustomEvent(FVector NewLocation, bool Custom Rotation, bool Custom Forward Vector, FVector Forward Vector);
    void Deactivate LineWave();
    void MoveTick();
    void Play(FVector New Location, FRotator NewRotation);
    void CustomEvent_2(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void DissolveEvent();
    void ExecuteUbergraph_Wave(int32 EntryPoint, FVector CallFunc_MakeVector_ReturnValue, bool Temp_bool_Variable, UMaterialInterface* Temp_object_Variable, float CallFunc_Lerp_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Variable_1, float K2Node_Event_DeltaSeconds_1, FVector CallFunc_GetActorScale3D_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector K2Node_CustomEvent_NewLocation, bool K2Node_CustomEvent_Custom_Rotation, bool K2Node_CustomEvent_Custom_Forward_Vector, FVector K2Node_CustomEvent_Forward_Vector, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FVector K2Node_CustomEvent_New_Location, FRotator K2Node_CustomEvent_NewRotation, bool CallFunc_K2_SetActorRotation_ReturnValue, UMaterialInterface* K2Node_Select_Default, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_ApplyDamage_ReturnValue, float K2Node_Event_DeltaSeconds, bool Temp_bool_IsClosed_Variable, AActor* K2Node_Event_OtherActor, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetPlaybackPosition_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, FVector CallFunc_GetClosestPointOnCollision_OutPointOnBody, float CallFunc_GetClosestPointOnCollision_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_2, FVector K2Node_Select_Default_1);
    void Deactivate__DelegateSignature(AWave_C* SelfRef);
}

#endif
