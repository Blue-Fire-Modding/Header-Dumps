#ifndef UE4SS_SDK_BP_BeiraShards_HPP
#define UE4SS_SDK_BP_BeiraShards_HPP

class ABP_BeiraShards_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_Beira_Shard;
    UParticleSystemComponent* P_SpawnBeiraShard;
    UMaterialBillboardComponent* MaterialBillboard;
    UAkComponent* Ak;
    UStaticMeshComponent* StaticMesh;
    UPointLightComponent* PointLight;
    UBoxComponent* Box;
    UStaticMeshComponent* Sphere;
    USceneComponent* DefaultSceneRoot;
    float Collect_Scale2_078DAE2642666593E9F579ABDB9A128C;
    float Collect_Scale_078DAE2642666593E9F579ABDB9A128C;
    float Collect_Light_078DAE2642666593E9F579ABDB9A128C;
    TEnumAsByte<ETimelineDirection::Type> Collect__Direction_078DAE2642666593E9F579ABDB9A128C;
    UTimelineComponent* Collect;
    FString ID;
    FLinearColor Color;
    FBP_BeiraShards_CUpdateAmount UpdateAmount;
    void UpdateAmount();

    void UserConstructionScript(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FMaterialSpriteElement K2Node_MakeStruct_MaterialSpriteElement, const TArray<FMaterialSpriteElement>& K2Node_MakeArray_Array, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, FRotator CallFunc_RandomRotator_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult);
    void Collect__FinishedFunc();
    void Collect__UpdateFunc();
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ReceiveBeginPlay();
    void Finish(bool Success);
    void Change Visibility(bool Visible, bool Animate);
    void Reset();
    void ExecuteUbergraph_BP_BeiraShards(int32 EntryPoint, FVector CallFunc_MakeVector_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, FName CallFunc_Conv_StringToName_ReturnValue, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, FItem CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, AActor* K2Node_Event_OtherActor, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, bool K2Node_CustomEvent_Success, bool K2Node_CustomEvent_Visible, bool K2Node_CustomEvent_Animate, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsRobiValid_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue);
    void UpdateAmount__DelegateSignature();
}

#endif
