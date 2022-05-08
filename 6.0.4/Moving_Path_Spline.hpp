#ifndef UE4SS_SDK_Moving_Path_Spline_HPP
#define UE4SS_SDK_Moving_Path_Spline_HPP

class AMoving_Path_Spline_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* Billboard;
    class USplineComponent* Spline;
    bool NoTangents;
    bool ShowPath;

    void UserConstructionScript();
    void Change Material(bool New Material);
    void Set New Material(class UMaterialInterface* Material);
    void ExecuteUbergraph_Moving_Path_Spline(int32 EntryPoint);
};

#endif
