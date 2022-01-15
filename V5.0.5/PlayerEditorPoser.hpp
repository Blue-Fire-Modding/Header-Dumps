#ifndef UE4SS_SDK_PlayerEditorPoser_HPP
#define UE4SS_SDK_PlayerEditorPoser_HPP

class APlayerEditorPoser_C : UCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* StaticMeshL;
    UStaticMeshComponent* StaticMeshR;
    UArrowComponent* Arrow1;
    UStaticMeshComponent* SwordL2;
    UStaticMeshComponent* SwordR2;
    USceneComponent* SwordSceneL;
    USceneComponent* SwordSceneR;
    UStaticMeshComponent* IdleSwordL2;
    USceneComponent* IdleSwordSceneL;
    UStaticMeshComponent* IdleSword_R2;
    USceneComponent* IdleSwordSceneR;
    USkeletalMeshComponent* Hair_SkelM;
    UStaticMeshComponent* Hair_SM;
    UStaticMeshComponent* Mask;
    UMaterialInstanceDynamic* Face_Mat;
    UMaterialInstanceDynamic* Clothes_Mat;
    UMaterialInstanceDynamic* Body_Mat;
    UMaterialInstanceDynamic* Sword_Mat;
    UMaterialInstanceDynamic* BodMat;
    UMaterialInstanceDynamic* HairMat;
    TEnumAsByte<Weapons::Type> Swords;
    TEnumAsByte<Tunics::Type> Tunic;
    bool SwordsOnBack;
    bool SwordsOnHand;
    FTransform SwordLT;
    FTransform SwordRT;
    FTransform IdleSwordR;
    FTransform IdleSwordL;
    float Start;
    FRotator HeadRotation;
    FRotator TorsoRot;
    FRotator ArmRRot;
    FRotator ArmLRot;
    UAnimSequenceBase* Anim;
    UEditorScreen_AnimBP_C* EditorScreen;

    void Set(USceneComponent* Target, FName InSocketName, USceneComponent* Target1, const FTransform& NewTransform, bool RotFollow, FRotator CallFunc_GetSocketRotation_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeTransform_SweepHitResult);
    void UserConstructionScript();
    void RefreshPlayer(bool Swords, uint8 Sword, uint8 Tunic);
    void ExecuteUbergraph_PlayerEditorPoser(int32 EntryPoint, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UEditorScreen_AnimBP_C* K2Node_DynamicCast_AsEditor_Screen_Anim_BP, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_Swords, uint8 K2Node_CustomEvent_Sword, uint8 K2Node_CustomEvent_Tunic, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FName CallFunc_Conv_StringToName_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, FTunicsInfo CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue_1, FWeaponsInfo CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue_3);
}

#endif
