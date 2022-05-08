#ifndef UE4SS_SDK_PlayerRenderTargetModelAlpha_HPP
#define UE4SS_SDK_PlayerRenderTargetModelAlpha_HPP

class APlayerRenderTargetModelAlpha_C : public ACharacter
{
    class USceneCaptureComponent2D* Alpha;
    class USceneComponent* Scene;
    class UMaterialInstanceDynamic* Face_Mat;
    class UMaterialInstanceDynamic* Clothes_Mat;
    class UMaterialInstanceDynamic* Body_Mat;
    class UMaterialInstanceDynamic* Sword_Mat;
    class UMaterialInstanceDynamic* BodMat;
    class UMaterialInstanceDynamic* HairMat;

};

#endif
