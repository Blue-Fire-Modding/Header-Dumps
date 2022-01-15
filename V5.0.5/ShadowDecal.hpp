#ifndef UE4SS_SDK_ShadowDecal_HPP
#define UE4SS_SDK_ShadowDecal_HPP

class AShadowDecal_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDecalComponent* Decal;
    USceneComponent* DefaultSceneRoot;
    UMaterialInstanceDynamic* ShadowDecal;

    void ReceiveBeginPlay();
    void UpdateSize(float Value);
    void ExecuteUbergraph_ShadowDecal(int32 EntryPoint, float K2Node_CustomEvent_Value, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
}

#endif
