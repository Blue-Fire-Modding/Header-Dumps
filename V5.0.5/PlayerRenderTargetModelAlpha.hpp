#ifndef UE4SS_SDK_PlayerRenderTargetModelAlpha_HPP
#define UE4SS_SDK_PlayerRenderTargetModelAlpha_HPP

class APlayerRenderTargetModelAlpha_C : UCharacter
{
    USceneCaptureComponent2D* Alpha;
    USceneComponent* Scene;
    UMaterialInstanceDynamic* Face_Mat;
    UMaterialInstanceDynamic* Clothes_Mat;
    UMaterialInstanceDynamic* Body_Mat;
    UMaterialInstanceDynamic* Sword_Mat;
    UMaterialInstanceDynamic* BodMat;
    UMaterialInstanceDynamic* HairMat;
}

#endif
