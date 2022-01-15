#ifndef UE4SS_SDK_SilverShard_HPP
#define UE4SS_SDK_SilverShard_HPP

class ASilverShard_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* AkShard;
    UMaterialBillboardComponent* MaterialBillboard;
    UStaticMeshComponent* StaticMesh;
    UPointLightComponent* PointLight;
    UBoxComponent* Box;
    UStaticMeshComponent* Sphere;
    USceneComponent* DefaultSceneRoot;
    float Collect_Scale2_5B6C67AE4563A2D41FFAC0B80D85FE58;
    float Collect_Scale_5B6C67AE4563A2D41FFAC0B80D85FE58;
    float Collect_Light_5B6C67AE4563A2D41FFAC0B80D85FE58;
    TEnumAsByte<ETimelineDirection::Type> Collect__Direction_5B6C67AE4563A2D41FFAC0B80D85FE58;
    UTimelineComponent* Collect;
    FString ID;
    FLinearColor Color;
    bool Used;
    FSilverShard_CUpdateAmount UpdateAmount;
    void UpdateAmount();
    APlayer_Character_BP_C* Player ;

    void UserConstructionScript(FString CallFunc_GetDisplayName_ReturnValue);
    void Collect__FinishedFunc();
    void Collect__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void Construct();
    void ExecuteUbergraph_SilverShard(int32 EntryPoint, bool Temp_bool_Variable, FLinearColor Temp_struct_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, float Temp_float_Variable, float Temp_float_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, FVector CallFunc_MakeVector_ReturnValue, AActor* K2Node_Event_OtherActor, bool Temp_bool_Has_Been_Initd_Variable, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_GetItem_Success, bool CallFunc_GetItem_SpecialPopUp, FVector CallFunc_MakeVector_ReturnValue_1, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FRotator CallFunc_RandomRotator_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, FLinearColor K2Node_Select_Default, float K2Node_Select_Default_1, float K2Node_Select_Default_2, FMaterialSpriteElement K2Node_MakeStruct_MaterialSpriteElement, const TArray<FMaterialSpriteElement>& K2Node_MakeArray_Array, bool Temp_bool_IsClosed_Variable, int32 CallFunc_PostAssociatedAkEvent_ReturnValue);
    void UpdateAmount__DelegateSignature();
}

#endif
