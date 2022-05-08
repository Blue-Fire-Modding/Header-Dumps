#ifndef UE4SS_SDK_Chest_Master_HPP
#define UE4SS_SDK_Chest_Master_HPP

class AChest_Master_C : public AInteractionMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* CameraCollision_Open;
    class UBoxComponent* CameraCollision_Close;
    class UStaticMeshComponent* Plane;
    class UParticleSystemComponent* P_Shine_Chest;
    class UStaticMeshComponent* Chest_Inside;
    class UStaticMeshComponent* Chest_Top_Col;
    class UStaticMeshComponent* Chest_Bottom_Col;
    class USkeletalMeshComponent* Chest_Skel;
    float Shine_Glow_Opacity_D36E09D84427519E551F0D82811B26DC;
    TEnumAsByte<ETimelineDirection::Type> Shine_Glow__Direction_D36E09D84427519E551F0D82811B26DC;
    class UTimelineComponent* Shine Glow;
    TEnumAsByte<InventoryItemType::Type> Type;
    TEnumAsByte<Items::Type> Item;
    TEnumAsByte<Spirits::Type> Amulet;
    TEnumAsByte<Weapons::Type> Weapon;
    TEnumAsByte<Tunics::Type> Tunic;
    int32 Amount;
    bool KeyItem;
    bool Used_Chest;
    bool StartHidden;
    bool Open;
    bool AddSword;
    class UMaterialInstanceDynamic* MatChest;
    TEnumAsByte<Abilities::Type> Ability;
    bool Print;
    bool RequiresKey;
    TEnumAsByte<Items::Type> Key;
    TArray<FText> KeyText;
    bool RemoveItemOnUse;
    TArray<FText> NegativeText;
    bool PlaySpecialSoundOnItem;
    class UAkAudioEvent* SoundOpen;
    class UAkAudioEvent* SoundClose;
    class ANPCBound_C* Bound;
    class UMaterialInterface* DisappearNewMat;
    class UMaterialInterface* DisappearOldMat;
    bool NotVoidMakerChest;

    void Shine Glow__FinishedFunc();
    void Shine Glow__UpdateFunc();
    void Show(bool Show VFX);
    void Hide();
    void Resume();
    void CustomEvent();
    void BeginOverlapEv();
    void AlreadyUsed();
    void CustomEvent_14();
    void CustomEvent_22();
    void PlayItemSound();
    void OpenChestVFX();
    void PressButton();
    void ReceiveBeginPlay();
    void UpdateChestSkelRender(float Duration);
    void CustomEvent_1();
    void CustomEvent_2();
    void NegativeFinish();
    void Set New Material(class UMaterialInterface* Material);
    void Change Material(bool New Material);
    void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void CustomEvent_0();
    void Set Open Chest(bool Open);
    void Set Used Chest(bool Used_Chest);
    void Collect Guardian Key();
    void CheckQuest();
    void ExecuteUbergraph_Chest_Master(int32 EntryPoint);
};

#endif
