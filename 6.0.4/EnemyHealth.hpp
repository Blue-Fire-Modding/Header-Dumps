#ifndef UE4SS_SDK_EnemyHealth_HPP
#define UE4SS_SDK_EnemyHealth_HPP

class UEnemyHealth_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* LifeFXBar;
    class USizeBox* SizeBox_1;
    class UMaterialInstanceDynamic* LifeBarMat;
    float Percent;
    float LerpPercent;
    float Size;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetHealth(float Health, float Max Health);
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_EnemyHealth(int32 EntryPoint);
};

#endif
