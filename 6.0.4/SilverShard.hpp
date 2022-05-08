#ifndef UE4SS_SDK_SilverShard_HPP
#define UE4SS_SDK_SilverShard_HPP

class ASilverShard_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAkComponent* AkShard;
    class UMaterialBillboardComponent* MaterialBillboard;
    class UStaticMeshComponent* StaticMesh;
    class UPointLightComponent* PointLight;
    class UBoxComponent* Box;
    class UStaticMeshComponent* Sphere;
    class USceneComponent* DefaultSceneRoot;
    float Collect_Scale2_5B6C67AE4563A2D41FFAC0B80D85FE58;
    float Collect_Scale_5B6C67AE4563A2D41FFAC0B80D85FE58;
    float Collect_Light_5B6C67AE4563A2D41FFAC0B80D85FE58;
    TEnumAsByte<ETimelineDirection::Type> Collect__Direction_5B6C67AE4563A2D41FFAC0B80D85FE58;
    class UTimelineComponent* Collect;
    FString ID;
    FLinearColor Color;
    bool Used;
    FSilverShard_CUpdateAmount UpdateAmount;
    void UpdateAmount();
    class APlayer_Character_BP_C* Player ;

    void UserConstructionScript();
    void Collect__FinishedFunc();
    void Collect__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void Construct();
    void Remove Light();
    void ExecuteUbergraph_SilverShard(int32 EntryPoint);
    void UpdateAmount__DelegateSignature();
};

#endif
