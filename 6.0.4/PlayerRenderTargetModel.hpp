#ifndef UE4SS_SDK_PlayerRenderTargetModel_HPP
#define UE4SS_SDK_PlayerRenderTargetModel_HPP

class APlayerRenderTargetModel_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneCaptureComponent2D* SceneCaptureComponent2D;
    class USceneComponent* Scene;
    class USkeletalMeshComponent* Hair_SkelM;
    class UStaticMeshComponent* Hair_SM;
    class UStaticMeshComponent* IdleSword_L;
    class UStaticMeshComponent* Sword_R;
    class UStaticMeshComponent* Sword_L;
    class UStaticMeshComponent* IdleSword_R;
    class UStaticMeshComponent* Mask;
    class UPointLightComponent* SelfLight;
    float Rot_Alpha_744134A547C9E5E5004FDDB2DBB96929;
    TEnumAsByte<ETimelineDirection::Type> Rot__Direction_744134A547C9E5E5004FDDB2DBB96929;
    class UTimelineComponent* Rot;
    class UMaterialInstanceDynamic* Face_Mat;
    class UMaterialInstanceDynamic* Clothes_Mat;
    class UMaterialInstanceDynamic* Body_Mat;
    class UMaterialInstanceDynamic* Sword_Mat;
    class UMaterialInstanceDynamic* BodMat;
    class UMaterialInstanceDynamic* HairMat;
    FRotator RotStart;

    void UserConstructionScript();
    void Rot__FinishedFunc();
    void Rot__UpdateFunc();
    void ReceiveBeginPlay();
    void RefreshPlayer(bool Swords, TEnumAsByte<Weapons::Type> Sword, TEnumAsByte<Tunics::Type> Tunic, bool Both);
    void RotateNewPosition(FRotator Rot);
    void ExecuteUbergraph_PlayerRenderTargetModel(int32 EntryPoint);
};

#endif
