#ifndef UE4SS_SDK_MagicLeapARPin_HPP
#define UE4SS_SDK_MagicLeapARPin_HPP

#include "MagicLeapARPin_enums.hpp"

struct FMagicLeapARPinState
{
    float Confidence;
    float ValidRadius;
    float RotationError;
    float TranslationError;

};

class UMagicLeapARPinComponent : public USceneComponent
{
    FString ObjectUID;
    int32 UserIndex;
    EMagicLeapAutoPinType AutoPinType;
    bool bShouldPinActor;
    TSubclassOf<class UMagicLeapARPinSaveGame> PinDataClass;
    FMagicLeapARPinComponentOnPersistentEntityPinned OnPersistentEntityPinned;
    void PersistentEntityPinned(bool bRestoredOrSynced);
    FMagicLeapARPinComponentOnPersistentEntityPinLost OnPersistentEntityPinLost;
    void PersistentEntityPinLost();
    FGuid PinnedCFUID;
    class USceneComponent* PinnedSceneComponent;
    class UMagicLeapARPinSaveGame* PinData;

    void UnPin();
    bool PinSceneComponent(class USceneComponent* ComponentToPin);
    bool PinRestoredOrSynced();
    bool PinActor(class AActor* ActorToPin);
    void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);
    void PersistentEntityPinLost__DelegateSignature();
    bool IsPinned();
    bool GetPinState(FMagicLeapARPinState& State);
    bool GetPinnedPinID(FGuid& PinID);
    class UMagicLeapARPinSaveGame* GetPinData(TSubclassOf<class UMagicLeapARPinSaveGame> PinDataClass);
};

class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{

    void UnBindToOnMagicLeapARPinUpdatedDelegate(const FUnBindToOnMagicLeapARPinUpdatedDelegateDelegate& Delegate);
    bool IsTrackerValid();
    EMagicLeapPassableWorldError GetNumAvailableARPins(int32& Count);
    EMagicLeapPassableWorldError GetClosestARPin(const FVector& SearchPoint, FGuid& PinID);
    EMagicLeapPassableWorldError GetAvailableARPins(int32 NumRequested, TArray<FGuid>& Pins);
    FString GetARPinStateToString(const FMagicLeapARPinState& State);
    EMagicLeapPassableWorldError GetARPinState(const FGuid& PinID, FMagicLeapARPinState& State);
    bool GetARPinPositionAndOrientation_TrackingSpace(const FGuid& PinID, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment);
    bool GetARPinPositionAndOrientation(const FGuid& PinID, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment);
    EMagicLeapPassableWorldError DestroyTracker();
    EMagicLeapPassableWorldError CreateTracker();
    void BindToOnMagicLeapARPinUpdatedDelegate(const FBindToOnMagicLeapARPinUpdatedDelegateDelegate& Delegate);
};

class UMagicLeapARPinSettings : public UObject
{
    float UpdateCheckFrequency;
    FMagicLeapARPinState OnUpdatedEventTriggerDelta;

};

class UMagicLeapARPinSaveGame : public USaveGame
{
    FGuid PinnedID;
    FTransform ComponentWorldTransform;
    FTransform PinTransform;

};

#endif
