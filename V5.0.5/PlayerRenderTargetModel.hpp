#ifndef UE4SS_SDK_PlayerRenderTargetModel_HPP
#define UE4SS_SDK_PlayerRenderTargetModel_HPP

class APlayerRenderTargetModel_C : UCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneCaptureComponent2D* SceneCaptureComponent2D;
    USceneComponent* Scene;
    USkeletalMeshComponent* Hair_SkelM;
    UStaticMeshComponent* Hair_SM;
    UStaticMeshComponent* IdleSword_L;
    UStaticMeshComponent* Sword_R;
    UStaticMeshComponent* Sword_L;
    UStaticMeshComponent* IdleSword_R;
    UStaticMeshComponent* Mask;
    UPointLightComponent* SelfLight;
    float Rot_Alpha_744134A547C9E5E5004FDDB2DBB96929;
    TEnumAsByte<ETimelineDirection::Type> Rot__Direction_744134A547C9E5E5004FDDB2DBB96929;
    UTimelineComponent* Rot;
    UMaterialInstanceDynamic* Face_Mat;
    UMaterialInstanceDynamic* Clothes_Mat;
    UMaterialInstanceDynamic* Body_Mat;
    UMaterialInstanceDynamic* Sword_Mat;
    UMaterialInstanceDynamic* BodMat;
    UMaterialInstanceDynamic* HairMat;
    FRotator RotStart;

    void UserConstructionScript();
    void Rot__FinishedFunc();
    void Rot__UpdateFunc();
    void ReceiveBeginPlay();
    void RefreshPlayer(bool Swords, uint8 Sword, uint8 Tunic, bool Both);
    void RotateNewPosition(FRotator Rot);
    void ExecuteUbergraph_PlayerRenderTargetModel(int32 EntryPoint, bool Temp_bool_Variable, UMaterialInstance* Temp_object_Variable, UMaterialInstance* Temp_object_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_CustomEvent_Swords, uint8 K2Node_CustomEvent_Sword, uint8 K2Node_CustomEvent_Tunic, bool K2Node_CustomEvent_Both, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FName CallFunc_Conv_StringToName_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, FTunicsInfo CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue_1, FWeaponsInfo CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstance* K2Node_Select_Default, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, UMaterialInstance* K2Node_Select_Default_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue_3, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, FPostProcessSettings K2Node_MakeStruct_PostProcessSettings, uint8 CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ByteByte_ReturnValue, uint8 CallFunc_Array_Get_Item_1, FRotator K2Node_CustomEvent_Rot, FRotator CallFunc_RLerp_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult);
}

#endif
