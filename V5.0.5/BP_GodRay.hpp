#ifndef UE4SS_SDK_BP_GodRay_HPP
#define UE4SS_SDK_BP_GodRay_HPP

class ABP_GodRay_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* GodRay;
    USceneComponent* DefaultSceneRoot;
    FLinearColor Color;
    float Fade Distance;
    float Opacity;
    float Speed;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Build();
    void ExecuteUbergraph_BP_GodRay(int32 EntryPoint, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
}

#endif
