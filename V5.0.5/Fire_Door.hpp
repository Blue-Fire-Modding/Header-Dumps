#ifndef UE4SS_SDK_Fire_Door_HPP
#define UE4SS_SDK_Fire_Door_HPP

class AFire_Door_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* FireD;
    UStaticMeshComponent* FireC;
    UStaticMeshComponent* FireB;
    UStaticMeshComponent* StaticMesh;
    USceneComponent* DefaultSceneRoot;
    int32 Doors;

    void ReceiveBeginPlay();
    void Kill();
    void ExecuteUbergraph_Fire_Door(int32 EntryPoint, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used);
}

#endif
