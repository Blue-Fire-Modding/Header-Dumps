#ifndef UE4SS_SDK_Void_CheckPoint_HPP
#define UE4SS_SDK_Void_CheckPoint_HPP

class AVoid_CheckPoint_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_SaveCheckpointVoid;
    UArrowComponent* Arrow;
    UStaticMeshComponent* StaticMesh;
    UBoxComponent* Box1;
    UMaterialInterface* DisappearNewMat;
    UMaterialInterface* Disappear Old Mat;
    bool bOnEasy;
    bool bOnRecommended;
    bool bOnBrutal;

    void Change Material(bool New Material);
    void Set New Material(UMaterialInterface* Material);
    void ReceiveBeginPlay();
    void BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void MakeCurrent();
    void UnMakeCurrent();
    void Reset();
    void ExecuteUbergraph_Void_CheckPoint(int32 EntryPoint, int32 Temp_int_Variable, Die__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_Event_New_Material, UMaterialInterface* K2Node_Event_Material, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInterface* K2Node_Select_Default, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, const FTransform CallFunc_GetTransform_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, TArray<AVoid_CheckPoint_C*>& CallFunc_GetAllActorsOfClass_OutActors, AVoid_CheckPoint_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 Temp_int_Loop_Counter_Variable, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, bool K2Node_Select_Default_1);
}

#endif
