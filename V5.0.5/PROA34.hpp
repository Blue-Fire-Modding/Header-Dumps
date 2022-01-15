#ifndef UE4SS_SDK_PROA34_HPP
#define UE4SS_SDK_PROA34_HPP

#include "PROA34_enums.hpp"

class UBFGameInstance : UGameInstance
{
    FString PlayerNickname;
    bool IsUserLogged;
    bool ForceLogin;
    int32 CurrentControllerIndex;
    int32 AmountUsersLogged;

    void SetAchievementStat(FString Stat, int32 Value);
    void OnPlayerUserLoginChanged(bool isLogin, int32 UserId, int32 UserIndex);
    void OnPlayerLogoutComplete(int32 LocalUserNum, bool bWasSuccessful);
    void OnPlayerLogout();
    void OnPlayerLoginStatusChanged(EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus);
    void OnPlayerLoginChanged(int32 PlayerNum);
    void OnPlayerGameSessionIDChanged(FString sessionData);
    void OnControllerDisconectedEvent(int32 Type);
    void OnControllerConnectedEvent(int32 Type);
    void NativeOnPhysicalControllerConnectionEvent(bool IsConnected, int32 PlatformUserId, int32 GameUserId, int32 ControllerIndex);
    void NativeOnPhysicalButtonPressedEvent(int32 ControllerIndex, int32 GameUserId);
    void NativeOnLoginUICloseEvent(int32 LocalPlayerNum);
    void NativeOnControllerPairingEvent(int32 ControllerIndex, int32 NewUserId, int32 OldUserId);
    int32 GetXboxType();
    FString GetOnlineId();
}

class UColoredBoxComponent : UBoxComponent
{
}

class UColoredShapeComponent : UShapeComponent
{
}

class UCopyAndPasteOnClipboard : UBlueprintFunctionLibrary
{

    FString PasteCodeFromClipboard();
    void CopyCodeToClipboard(FString code);
}

class AC_VoidMaker_Actor : AActor
{
    float DistanceInSpline;
    bool bInReverse;

    void SetCollisionByPlayerLocation(float PlayerVectorLenght, UStaticMeshComponent* TargetMeshComponent);
    void MoveActorWithOutLoop(float Speed, USplineComponent* TargetSpline, UStaticMeshComponent* TargetMeshComponent, float RotationSpeed, int32 RotationType);
    void MoveActorWithLoop(float Speed, USplineComponent* TargetSpline, UStaticMeshComponent* TargetMeshComponent, float RotationSpeed, int32 RotationType);
    void MoveActorComplexNoLoop(float Speed, USplineComponent* TargetSpline, AActor* TargetActor, float RotationSpeed, int32 RotationType);
    void MoveActorComplex(float Speed, USplineComponent* TargetSpline, AActor* TargetActor, float RotationSpeed, int32 RotationType);
}

class UPixelArrayToStringArray : UBlueprintAsyncActionBase
{
    FPixelArrayToStringArrayOnSucess OnSucess;
    void ResponseDeleget(FString PixelArray, FString Data);
    FPixelArrayToStringArrayOnFail OnFail;
    void ResponseDeleget(FString PixelArray, FString Data);
    TArray<FColor> TempPixelArray;
    FString TempString;

    UPixelArrayToStringArray* PixelColorToString(const TArray<FColor> PixelColorArray);
}

class APROA34GameModeBase : UGameModeBase
{
}

class UReadStringArrayToColorArray : UBlueprintAsyncActionBase
{
    FReadStringArrayToColorArrayOnSuccess OnSuccess;
    void ResponseDelegett(const TArray<FString>& ColorPixels, FString Data);
    FReadStringArrayToColorArrayOnFail OnFail;
    void ResponseDelegett(const TArray<FString>& ColorPixels, FString Data);
    FString TempString;

    UReadStringArrayToColorArray* ReadStringArray(FString StringArray);
}

class URobiFunctionLibrary : UBlueprintFunctionLibrary
{

    bool IsRobiValid(const UObject* Object);
    bool IsInFrustum(const AActor* Actor);
}

class ARobiObject : AActor
{

    bool IsRobiValid(const UObject* Object);
}

class ARobiTraceHandler : AActor
{

    void TraceHandlerF(FVector Start, FVector End, AActor* ActorToIgnore, DelegateCustomLineTraceByChannelSurface__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void TraceHandlerE(FVector Start, FVector End, AActor* ActorToIgnore, DelegateCustomLineTraceByChannelSurface__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void TraceHandlerD(FVector Start, FVector EndA, FVector EndB, AActor* ActorToIgnore, DelegateCustomLineTraceByChannelSurface__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void TraceHandlerC(FVector Start, FVector End, AActor* ActorToIgnore, DelegateCustomLineTraceByChannelSurface__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void TraceHandlerB(FVector Start, FVector End, AActor* ActorToIgnore, DelegateCustomLineTraceByChannelSurface__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void TraceHandlerA(FVector Start, FVector End, AActor* ActorToIgnore, DelegateCustomLineTraceByChannelSurface__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool TraceForTarget(AActor* ActorPlayer, FVector OffsetLock, AActor* ActorTarget, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void TraceForPickUp(AActor* ActorToIgnore, DelegateCustomLineTraceByChannelSurface__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void SpinAttackHandler(AActor* ActorPlayer, DelegateCustomBoxTrace__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void SpellDamageHandler(FVector SpellDamageLocation, AActor* ActorToIgnore, DelegateCustomBoxTrace__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler19(AActor* ActorPlayer, DelegateCustomLineTraceByChannelSurface__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler18(FVector StartA, FVector EndA, FRotator Orientation, FVector StartB, FVector EndB, AActor* ActorToIgnore, DelegateCustomLineTraceByChannelBoolAndVectors__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler17(FVector Start, FVector End, FVector InVec, FVector CapsuleHitImpactNormal, AActor* ActorPlayer, DelegateCustomLineTraceForObjectsBool__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler16(FVector StartA, FVector EndA, FRotator Orientation, FVector StartB, FVector EndB, AActor* ActorToIgnore, DelegateCustomTrace__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler15(FVector Start, FVector End, FRotator Orientation, bool ComplexTrace, FVector StartA, FVector EndA, FVector StartB, FVector EndB, FVector StartC, FVector EndC, AActor* ActorToIgnore, DelegateCustomLineTraceForObjectsBool__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler14(FVector Start, FVector End, AActor* ActorToIgnore, DelegateCustomLineTraceForObjectsBool__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler13(FVector Start, FVector End, FVector HalfSize, TArray<AActor*> ActorsToIgnore, DelegateCustomTrace__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler12(FVector Start, FVector End, float Radius, AActor* ActorToIgnore, DelegateCustomLineTraceByChannelVectors__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler11(FVector Start, FVector End, float Radius, AActor* ActorToIgnore, DelegateCustomLineTraceByChannelVectors__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler10(FVector Start, FVector End, AActor* ActorToIgnore, DelegateCustomLineTraceByChannelVectors__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler09(FVector Start, FVector End, AActor* ActorToIgnore, DelegateCustomLineTraceByChannelVectors__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler08(FVector Start, FVector End, AActor* ActorToIgnore, DelegateCustomTrace__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler07(FVector Start, FVector End, AActor* ActorToIgnore, DelegateCustomLineTraceByChannelVectors__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler06(FVector Start, FVector End, AActor* ActorToIgnore, DelegateCustomLineTraceByChannelVectors__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler05(FVector StartA, FVector EndA, FVector StartB, FVector EndB, FRotator Orientation, bool Initial, AActor* ActorToIgnore, DelegateCustomLineTraceByChannelVectors__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler04(FVector Start, FVector End, AActor* ActorToIgnore, DelegateCustomLineTraceByChannelVectors__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler03(FVector Start, FVector End, AActor* ActorToIgnore, DelegateCustomLineTraceByChannelVectors__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler02(FVector Start, FVector End, AActor* ActorToIgnore, DelegateCustomLineTraceByChannelVectors__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler01(FVector Start, FVector End, AActor* ActorToIgnore, DelegateCustomLineTraceByChannelVectors__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void HandlerAttackC(FVector Start, FVector End, FVector HalfSize, FRotator Orientation, TArray<AActor*> ActorsToIgnore, DelegateCustomBoxTrace__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void HandlerAttackB(FVector Start, FVector End, FVector HalfSize, FRotator Orientation, TArray<AActor*> ActorsToIgnore, DelegateCustomLineTraceByChannelVectors__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void HandlerAttackA(FVector Start, FVector End, TArray<AActor*> ActorsToIgnore, DelegateCustomLineTraceByChannelVectors__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void EnemyHandler01(AActor* ActorEnemy, AActor* ActorPlayer, DelegateCustomLineTraceForObjectsBool__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void EnemyFunc03(AActor* ActorToIgnore, DelegateCustomEnemy__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void EnemyFunc02(AActor* ActorToIgnore, DelegateCustomEnemy__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void CamTraceHandler02(FVector Start, FVector End, AActor* ActorToIgnore, DelegateCustomLineTraceByChannelSurface__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void CamHandler01(AActor* ActorPlayer, bool HaveHammerKing, DelegateCustomLineTraceForObjectsBool__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void CameraHandlerLogic(FVector StartA, FVector EndA, float RadiusA, FVector StartB, FVector EndB, float RadiusB, TArray<AActor*> ActorsToIgnore, DelegateCustomLineTraceForObjectsBool__DelegateSignature Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
}

class AScreenshotActor : AActor
{
    USceneCaptureComponent2D* Camera;

    void SetCameraToPlayerView(uint8& Outcome);
    void CapturePlayersView(uint8& Outcome, int32 Resolution, TArray<FColor>& ColorData);
}

class AVoidMaker_ControllerC : UCharacter
{
}

class AVoidMaker_Controller_PadreC : UPlayerController
{
}

#endif
