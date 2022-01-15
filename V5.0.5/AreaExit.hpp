#ifndef UE4SS_SDK_AreaExit_HPP
#define UE4SS_SDK_AreaExit_HPP

class AAreaExit_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Box;
    UCameraComponent* Camera;
    UArrowComponent* Arrow;
    UStaticMeshComponent* Cube;
    USceneComponent* DefaultSceneRoot;
    bool OnlyTeleport;
    TArray<FName> VisibleLevels;
    TEnumAsByte<StreamingChunks::Type> NewChunk;
    bool Use Actor Location;
    AActor* NewLocation;
    FTransform NewLoc;
    float CameraBlendTime;
    float Shader Offset Y;
    float Shader Height;
    float Shader Radius;
    float Shader Density;
    FLinearColor Shader Color;
    UMaterialInstanceDynamic* Material;
    UTexture* Shader Texture;
    UTexture* Shader Image;
    bool ReCookTarget;
    APlayer_Character_BP_C* Player;
    bool IsDLC;
    ACinematic_Controller_Master_C* CinematicAreaIntro;
    bool CallAreaIntroInstant;

    void UserConstructionScript(FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, const TArray<uint8>& K2Node_MakeArray_Array, const TArray<AActor*>& Temp_object_Variable, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FHitResult CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue);
    void OnNotifyEnd_E142104A429ADC66A085AFBF130B2205(FName NotifyName);
    void OnNotifyBegin_E142104A429ADC66A085AFBF130B2205(FName NotifyName);
    void OnInterrupted_E142104A429ADC66A085AFBF130B2205(FName NotifyName);
    void OnBlendOut_E142104A429ADC66A085AFBF130B2205(FName NotifyName);
    void OnCompleted_E142104A429ADC66A085AFBF130B2205(FName NotifyName);
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ReceiveBeginPlay();
    void Show Cutscene();
    void ExecuteUbergraph_AreaExit(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName Temp_name_Variable, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const FName Temp_name_Variable_1, LevelLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, AActor* K2Node_Event_OtherActor, bool Temp_bool_Variable, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, const FTransform CallFunc_GetTransform_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, const FTransform K2Node_Select_Default, int32 CallFunc_PostEventAtLocation_ReturnValue_1, FName K2Node_CustomEvent_NotifyName_3, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, FRotator CallFunc_MakeRotator_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1, bool CallFunc_K2_SetActorRotation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_2, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, FName CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<AGlobal_Controller_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_IsRobiValid_ReturnValue, AGlobal_Controller_C* CallFunc_Array_Get_Item_1);
}

#endif
