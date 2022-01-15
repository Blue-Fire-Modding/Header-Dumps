#ifndef UE4SS_SDK_Booster_HPP
#define UE4SS_SDK_Booster_HPP

class ABooster_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* SM_Booster;
    UBoxComponent* Box;
    USkeletalMeshComponent* SkeletalMesh;
    USceneComponent* DefaultSceneRoot;
    float Launch;
    UMaterialInstanceDynamic* Mat;
    APlayer_Character_BP_C* Player;
    float ResetTime;
    UMaterialInterface* DisappearNewMat;
    UBlueFire_Game_Instance_C* GameInstance;
    UMaterialInstanceDynamic* MatLowRes;

    void OnNotifyEnd_676363BD4A1DAF346D3110B1E218006B(FName NotifyName);
    void OnNotifyBegin_676363BD4A1DAF346D3110B1E218006B(FName NotifyName);
    void OnInterrupted_676363BD4A1DAF346D3110B1E218006B(FName NotifyName);
    void OnBlendOut_676363BD4A1DAF346D3110B1E218006B(FName NotifyName);
    void OnCompleted_676363BD4A1DAF346D3110B1E218006B(FName NotifyName);
    void Change Material(bool New Material);
    void Set New Material(UMaterialInterface* Material);
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void Reset();
    void ReceiveBeginPlay();
    void CheckPlayerDistance();
    void RetryPlayerCast();
    void ExecuteUbergraph_Booster(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName Temp_name_Variable, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool Temp_bool_Variable_2, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_Event_New_Material, UMaterialInterface* K2Node_Event_Material, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, AActor* K2Node_Event_OtherActor, UMaterialInterface* K2Node_Select_Default, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool Temp_bool_Variable_3, UMaterialInterface* K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_PostEventAtLocation_ReturnValue, TArray<UPlayer_Character_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, UPlayer_Character_BP_C* CallFunc_Array_Get_Item, APawn* CallFunc_GetPlayerPawn_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, float K2Node_Select_Default_2, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float K2Node_Select_Default_3, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_2, bool Temp_bool_IsClosed_Variable, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess_1);
}

#endif
