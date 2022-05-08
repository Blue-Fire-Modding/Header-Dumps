#ifndef UE4SS_SDK_SpellCast_HPP
#define UE4SS_SDK_SpellCast_HPP

class ASpellCast_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    bool Target;
    FVector Location;
    class AActor* Actor;

    void Kill();
    void UpdateLocation();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_SpellCast(int32 EntryPoint);
};

#endif
