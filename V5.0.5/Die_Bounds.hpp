#ifndef UE4SS_SDK_Die_Bounds_HPP
#define UE4SS_SDK_Die_Bounds_HPP

class ADie_Bounds_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* Ak1;
    UAkComponent* Ak3;
    UAkComponent* Ak2;
    UAkComponent* Ak;
    UStaticMeshComponent* Collider;
    UStaticMeshComponent* Mesh;
    USceneComponent* DefaultSceneRoot;
    TSubclassOf<UDamageType> DamageType;
    UParticleSystem* VFX;
    bool Launch Player - Deprecated;
    bool Custom;
    AActor* Character;
    TEnumAsByte<E_DieBound_Sound::Type> SurfaceSoundDamage;
    bool UseAkComponents;
    float SetCustomOcclusionSound;
    bool UseReverbVolumes;
    float AkComponentScalingFactor;
    UMaterialInterface* DisappearNewMat;
    UMaterialInterface* DisappearOldMat0;
    UMaterialInterface* DisappearOldMat1;
    bool Stage01Music;
    bool UsingComponents;

    void Change Material(bool New Material);
    void Set New Material(UMaterialInterface* Material);
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void Spawn VFX();
    void ReceiveBeginPlay();
    void ScalingFactor(UAkComponent* Ak);
    void ExecuteUbergraph_Die_Bounds(int32 EntryPoint, bool CallFunc_EqualEqual_ClassClass_ReturnValue, UAkAudioEvent* Temp_object_Variable, bool CallFunc_Not_PreBool_ReturnValue, UAkAudioEvent* Temp_object_Variable_1, UAkAudioEvent* Temp_object_Variable_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, int32 Temp_int_Array_Index_Variable, bool K2Node_Select_Default, bool Temp_bool_Variable_4, bool K2Node_Event_New_Material, UMaterialInterface* K2Node_Event_Material, UMaterialInterface* K2Node_Select_Default_1, UMaterialInterface* K2Node_Select_Default_2, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, AActor* K2Node_Event_OtherActor, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UEnemy_Character_Parent_C* K2Node_DynamicCast_AsEnemy_Character_Parent, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, TArray<UAkComponent*>& K2Node_MakeArray_Array, UAkComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, UAkComponent* K2Node_CustomEvent_Ak, bool CallFunc_IsRobiValid_ReturnValue_1, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UAkAudioEvent* Temp_object_Variable_3, uint8 Temp_byte_Variable, UAkAudioEvent* K2Node_Select_Default_3, bool CallFunc_IsRobiValid_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_2);
}

#endif
