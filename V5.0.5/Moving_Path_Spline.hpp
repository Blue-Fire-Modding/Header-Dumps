#ifndef UE4SS_SDK_Moving_Path_Spline_HPP
#define UE4SS_SDK_Moving_Path_Spline_HPP

class AMoving_Path_Spline_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard;
    USplineComponent* Spline;
    bool NoTangents;
    bool ShowPath;

    void UserConstructionScript(bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, const FTransform Temp_struct_Variable, int32 Temp_int_Variable, USplineMeshComponent* CallFunc_AddComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, float K2Node_Select_Default, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Location, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Tangent, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Location_1, FVector CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1, bool CallFunc_LessEqual_IntInt_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1);
    void Change Material(bool New Material);
    void Set New Material(UMaterialInterface* Material);
    void ExecuteUbergraph_Moving_Path_Spline(int32 EntryPoint, UMaterialInterface* K2Node_Event_Material, bool K2Node_Event_New_Material);
}

#endif
