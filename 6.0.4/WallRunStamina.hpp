#ifndef UE4SS_SDK_WallRunStamina_HPP
#define UE4SS_SDK_WallRunStamina_HPP

class UWallRunStamina_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Bar;
    class UMaterialInstanceDynamic* Material;
    float Value;
    float LerpValue;
    bool InVoid;

    void Construct();
    void Update(float Value);
    void StartUpdate(bool Void);
    void UpdateLocation();
    void StopUpdate();
    void Hit(float AmountReduce);
    void Land(bool Instant);
    void Refill();
    void Hide();
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_WallRunStamina(int32 EntryPoint);
};

#endif
