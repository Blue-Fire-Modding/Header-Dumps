#ifndef UE4SS_SDK_NewWind_BP_Void_HPP
#define UE4SS_SDK_NewWind_BP_Void_HPP

class ANewWind_BP_Void_C : ANewWind_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* AkFanLoop;
    float SineMovement_Lerp_7DD2FE6A4C6175696EC538AB168FC0E9;
    TEnumAsByte<ETimelineDirection::Type> SineMovement__Direction_7DD2FE6A4C6175696EC538AB168FC0E9;
    UTimelineComponent* SineMovement;
    FVector StartPosition;
    float Sine Speed;
    float MaxPosition;
    UAkComponent* Ak;
    UMaterialInterface* DisappearNewMat;
    TArray<UMaterialInterface*> DisappearOldMat;

    void SineMovement__FinishedFunc();
    void SineMovement__UpdateFunc();
    void Change Material(bool New Material);
    void Set New Material(UMaterialInterface* Material);
    void ReceiveBeginPlay();
    void PlaySine();
    void StopSine();
    void ExecuteUbergraph_NewWind_BP_Void(int32 EntryPoint, bool Temp_bool_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_New_Material, UMaterialInterface* K2Node_Event_Material, bool CallFunc_Not_PreBool_ReturnValue, TArray<UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, UMaterialInterface* K2Node_Select_Default, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Lerp_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, int32 CallFunc_PostAssociatedAkEvent_ReturnValue_1);
}

#endif
