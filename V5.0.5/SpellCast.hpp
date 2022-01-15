#ifndef UE4SS_SDK_SpellCast_HPP
#define UE4SS_SDK_SpellCast_HPP

class ASpellCast_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    bool Target;
    FVector Location;
    AActor* Actor;

    void Kill();
    void UpdateLocation();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_SpellCast(int32 EntryPoint, FTimerHandle CallFunc_K2_SetTimer_ReturnValue);
}

#endif
