#ifndef UE4SS_SDK_MoveInputToPlayer_HPP
#define UE4SS_SDK_MoveInputToPlayer_HPP

class UMoveInputToPlayer_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    TEnumAsByte<E_TypeCheck::Type> Type Check;
    bool OnlyCheckRadius;
    float Radius;
    float TimeToCheck;
    bool UpdatePlayerPosition;
    bool Trace to Update Location;
    FVector Target;
    class AEnemy_Character_Parent_C* EnemyParent;
    bool UsePlayerZ;
    float Delay;
    float PlayerZTargetOffset;
    int32 MovementNumber;
    class APlayer_Character_BP_C* Player;
    bool Wait For Player is Ground;
    float CurrentTimeRadius;
    bool MinDistanceBasedOnDirection;
    float MinDistance;
    bool Enable Tick;
    bool IgnoreNavMesh;
    bool RandomDelay;
    FVector2D DelayRange;
    bool IsFlying;

    void OnFail_D2719AF2429A097A7E2E6C89C3F071F6(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_D2719AF2429A097A7E2E6C89C3F071F6(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
    void UpdateLocation();
    void ReceiveAbort(class AActor* OwnerActor);
    void ReceiveExecute(class AActor* OwnerActor);
    void ExecuteUbergraph_MoveInputToPlayer(int32 EntryPoint);
};

#endif
