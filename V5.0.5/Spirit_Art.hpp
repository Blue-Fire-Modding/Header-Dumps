#ifndef UE4SS_SDK_Spirit_Art_HPP
#define UE4SS_SDK_Spirit_Art_HPP

class ASpirit_Art_C : AActor
{
    USkeletalMeshComponent* SkeletalMesh;
    UMaterialBillboardComponent* MB_Glow;
    USceneComponent* Scene;
    TEnumAsByte<Spirits::Type> Spirit;
    FString ID;
    UPickUp_Action_UI_C* ActionWidget;
    APlayer_Character_BP_C* Player;
}

#endif
