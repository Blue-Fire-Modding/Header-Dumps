#ifndef UE4SS_SDK_PROA34_HPP
#define UE4SS_SDK_PROA34_HPP

#include "PROA34_enums.hpp"

class UBFGameInstance : public UGameInstance
{
    FString PlayerNickname;
    bool IsUserLogged;
    bool ForceLogin;
    int32 CurrentControllerIndex;
    int32 AmountUsersLogged;

    void ShowLoginUI(bool isSwitchProfile);
    void SetAchievementStat(FString Stat, int32 Value);
    void OnPlayerUserLoginChanged(bool isLogin, int32 UserId, int32 UserIndex);
    void OnPlayerLogoutComplete(int32 LocalUserNum, bool bWasSuccessful);
    void OnPlayerLogout();
    void OnPlayerLoginStatusChanged(EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus);
    void OnPlayerLoginChanged(int32 PlayerNum);
    void OnPlayerGameSessionIDChanged(FString sessionData);
    void OnControllerDisconectedEvent(int32 UserId, int32 ControllerId);
    void OnControllerConnectedEvent(int32 UserId, int32 ControllerId);
    void NativeOnPhysicalControllerConnectionEvent(bool IsConnected, int32 PlatformUserId, int32 GameUserId, int32 ControllerIndex);
    void NativeOnPhysicalButtonPressedEvent(int32 ControllerIndex, int32 GameUserId);
    void NativeOnLoginUICloseEvent(int32 LocalPlayerNum);
    void NativeOnControllerPairingEvent(int32 ControllerIndex, int32 NewUserId, int32 OldUserId);
    void Login();
    int32 GetXboxType();
    FString GetOnlineId();
};

class UBlueFireFunctionLibrary : public UBlueprintFunctionLibrary
{

    void WaitForLoadCompleted(bool& bIsLoadCompleted, class UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    void StopLoadingScreen();
    void PlayLoadingScreen(bool bPlayUntilStopped, float PlayTime);
};

class UCopyAndPasteOnClipboard : public UBlueprintFunctionLibrary
{

    FString PasteCodeFromClipboard();
    void CopyCodeToClipboard(FString code);
};

struct FVoidMakerActorParamStruct : public FTableRowBase
{
    FText Name;
    TEnumAsByte<EVoidMaker_ActorParam::Type> Type;
    float Min;
    float Max;
    float Value;
    float Steps;
    bool bBool;
    FString Text;
    bool bUseTextArrayForText;
    TArray<FText> TextArrayForInt;
    bool bHidden;
    FText Description;

};

struct FVoidMakerAssetStruct : public FTableRowBase
{
    FString InternalName;
    TSubclassOf<class AActor> Class;
    TEnumAsByte<EVoidMaker_AssetType::Type> Type;
    class UTexture2D* Thumbnail;
    class UStaticMesh* Mesh;
    TSubclassOf<class AActor> ChildActor;
    TArray<FVoidMakerActorParamStruct> Params;
    float PerformanceSize;
    FText Name;
    float MinScale;
    float MaxScale;
    bool bCanAssignToSimplePath;
    bool bCanAddComplexPathOverride;
    bool bIgnoreMat;
    int32 IgnoringMat;
    TEnumAsByte<EVoidMaker_AssetCategories::Type> Category;

};

class AC_VoidMaker_Actor : public AActor
{
    float DistanceInSpline;
    bool bInReverse;
    FC_VoidMaker_ActorOnLoaded OnLoaded;
    void DelegateOnLoaded();
    TArray<class AVoidMaker_ControllerC*> VMController;

    void SetCollisionByPlayerLocation(float PlayerVectorLenght, class UStaticMeshComponent* TargetMeshComponent);
    void MoveActorWithOutLoop(float Speed, class USplineComponent* TargetSpline, class UStaticMeshComponent* TargetMeshComponent, float RotationSpeed, int32 RotationType);
    void MoveActorWithLoop(float Speed, class USplineComponent* TargetSpline, class UStaticMeshComponent* TargetMeshComponent, float RotationSpeed, int32 RotationType);
    void MoveActorComplexNoLoop(float Speed, class USplineComponent* TargetSpline, class AActor* TargetActor, float RotationSpeed, int32 RotationType);
    void MoveActorComplex(float Speed, class USplineComponent* TargetSpline, class AActor* TargetActor, float RotationSpeed, int32 RotationType);
    void InitializeActor(FTransform Transform, FVoidMakerAssetStruct LevelData, class AVoidMaker_ControllerC* VoidMakerController);
    void BindToStartPlayMode(class AVoidMaker_ControllerC* VoidMakerController);
};

class UPixelArrayToStringArray : public UBlueprintAsyncActionBase
{
    FPixelArrayToStringArrayOnSucess OnSucess;
    void ResponseDeleget(FString PixelArray, FString Data);
    FPixelArrayToStringArrayOnFail OnFail;
    void ResponseDeleget(FString PixelArray, FString Data);
    TArray<FColor> TempPixelArray;
    FString TempString;

    class UPixelArrayToStringArray* PixelColorToString(const TArray<FColor> PixelColorArray);
};

class APROA34GameModeBase : public AGameModeBase
{
};

class UReadStringArrayToColorArray : public UBlueprintAsyncActionBase
{
    FReadStringArrayToColorArrayOnSuccess OnSuccess;
    void ResponseDelegett(const TArray<FString>& ColorPixels, FString Data);
    FReadStringArrayToColorArrayOnFail OnFail;
    void ResponseDelegett(const TArray<FString>& ColorPixels, FString Data);
    FString TempString;

    class UReadStringArrayToColorArray* ReadStringArray(FString StringArray);
};

class URobiFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool IsRobiValid(const class UObject* Object);
    bool IsInFrustum(const class AActor* Actor);
};

class ARobiObject : public AActor
{

    bool IsRobiValid(const class UObject* Object);
};

class ARobiTraceHandler : public AActor
{

    void TraceHandlerF(FVector Start, FVector End, class AActor* ActorToIgnore, FTraceHandlerFCallback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void TraceHandlerE(FVector Start, FVector End, class AActor* ActorToIgnore, FTraceHandlerECallback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void TraceHandlerD(FVector Start, FVector EndA, FVector EndB, class AActor* ActorToIgnore, FTraceHandlerDCallback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void TraceHandlerC(FVector Start, FVector End, class AActor* ActorToIgnore, FTraceHandlerCCallback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void TraceHandlerB(FVector Start, FVector End, class AActor* ActorToIgnore, FTraceHandlerBCallback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void TraceHandlerA(FVector Start, FVector End, class AActor* ActorToIgnore, FTraceHandlerACallback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool TraceForTarget(class AActor* ActorPlayer, FVector OffsetLock, class AActor* ActorTarget, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void TraceForPickUp(class AActor* ActorToIgnore, FTraceForPickUpCallback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void SpinAttackHandler(class AActor* ActorPlayer, FSpinAttackHandlerCallback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void SpellDamageHandler(FVector SpellDamageLocation, class AActor* ActorToIgnore, FSpellDamageHandlerCallback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler19(class AActor* ActorPlayer, FPlayerHandler19Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler18(FVector StartA, FVector EndA, FRotator Orientation, FVector StartB, FVector EndB, class AActor* ActorToIgnore, FPlayerHandler18Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler17(FVector Start, FVector End, FVector InVec, FVector CapsuleHitImpactNormal, class AActor* ActorPlayer, FPlayerHandler17Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler16(FVector StartA, FVector EndA, FRotator Orientation, FVector StartB, FVector EndB, class AActor* ActorToIgnore, FPlayerHandler16Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler15(FVector Start, FVector End, FRotator Orientation, bool ComplexTrace, FVector StartA, FVector EndA, FVector StartB, FVector EndB, FVector StartC, FVector EndC, class AActor* ActorToIgnore, FPlayerHandler15Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler14(FVector Start, FVector End, class AActor* ActorToIgnore, FPlayerHandler14Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler13(FVector Start, FVector End, FVector HalfSize, TArray<class AActor*> ActorsToIgnore, FPlayerHandler13Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler12(FVector Start, FVector End, float Radius, class AActor* ActorToIgnore, FPlayerHandler12Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler11(FVector Start, FVector End, float Radius, class AActor* ActorToIgnore, FPlayerHandler11Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler10(FVector Start, FVector End, class AActor* ActorToIgnore, FPlayerHandler10Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler09(FVector Start, FVector End, class AActor* ActorToIgnore, FPlayerHandler09Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler08(FVector Start, FVector End, class AActor* ActorToIgnore, FPlayerHandler08Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler07(FVector Start, FVector End, class AActor* ActorToIgnore, FPlayerHandler07Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler06(FVector Start, FVector End, class AActor* ActorToIgnore, FPlayerHandler06Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler05(FVector StartA, FVector EndA, FVector StartB, FVector EndB, FRotator Orientation, bool Initial, class AActor* ActorToIgnore, FPlayerHandler05Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler04(FVector Start, FVector End, class AActor* ActorToIgnore, FPlayerHandler04Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler03(FVector Start, FVector End, class AActor* ActorToIgnore, FPlayerHandler03Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler02(FVector Start, FVector End, class AActor* ActorToIgnore, FPlayerHandler02Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void PlayerHandler01(FVector Start, FVector End, class AActor* ActorToIgnore, FPlayerHandler01Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void HandlerAttackC(FVector Start, FVector End, FVector HalfSize, FRotator Orientation, TArray<class AActor*> ActorsToIgnore, FHandlerAttackCCallback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void HandlerAttackB(FVector Start, FVector End, FVector HalfSize, FRotator Orientation, TArray<class AActor*> ActorsToIgnore, FHandlerAttackBCallback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void HandlerAttackA(FVector Start, FVector End, TArray<class AActor*> ActorsToIgnore, FHandlerAttackACallback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void EnemyHandler01(class AActor* ActorEnemy, class AActor* ActorPlayer, FEnemyHandler01Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void EnemyFunc03(class AActor* ActorToIgnore, FEnemyFunc03Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void EnemyFunc02(class AActor* ActorToIgnore, FEnemyFunc02Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void CamTraceHandler02(FVector Start, FVector End, class AActor* ActorToIgnore, FCamTraceHandler02Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void CamHandler01(class AActor* ActorPlayer, bool HaveHammerKing, FCamHandler01Callback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void CameraHandlerLogic(FVector StartA, FVector EndA, float RadiusA, FVector StartB, FVector EndB, float RadiusB, TArray<class AActor*> ActorsToIgnore, FCameraHandlerLogicCallback Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
};

class UVoidMakerFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool IsActorInsideObject(class AActor*& Actor, TArray<class AActor*> ActorsToIgnore, FVector SizeDetection);
    FTransform GetJSONFieldTransform(FString& Source, int32 SearchLimit);
    FString GetJSONFieldString(FString& Source, FString FieldName, TEnumAsByte<EFieldState>& FieldState, int32 SearchLimit, bool bIsArray);
    int32 GetJSONFieldInt(FString& Source, FString FieldName, TEnumAsByte<EFieldState>& FieldState, int32 SearchLimit, bool bIsArray);
    float GetJSONFieldFloat(FString& Source, FString FieldName, TEnumAsByte<EFieldState>& FieldState, int32 SearchLimit, bool bIsArray);
    bool GetJSONFieldBool(FString& Source, FString FieldName, TEnumAsByte<EFieldState>& FieldState, int32 SearchLimit, bool bIsArray);
    bool ContainsProfanity_Text(FText& Word, uint8 InMinimumSeverity);
    bool ContainsProfanity_String(FString& Word, uint8 InMinimumSeverity);
    bool ContainsProfanity_Name(FName& Word, uint8 InMinimumSeverity);
};

class UVoidMakerUICPP : public UUserWidget
{
    class UTexture2D* MyScreenshot;

    void UpdateLoadingCount(int32 current, int32 Max);
    FColor HexToColor(FString HexString);
    FString getWindowsNoEditorDir();
    class UTexture2D* GetTextureFromPixels(const int32 SrcWidth, const int32 SrcHeight, const TArray<FColor>& SrcData, const bool UseAlpha);
    FString getRootDir();
    TArray<FColor> GetPixelArray(class UTexture2D* MyTexture);
    FString getGameRootDir();
    FDateTime getDatetimeFromInt64(FString datetimeString);
    FString getBinaryLocation();
    FString getBinaryDir();
};

struct FVoidMakerComplexPathStruct : public FTableRowBase
{
    TArray<FTransform> ComplexPathPointsTransforms;
    FTransform ComplexPathTransform;
    int32 StructObjectIndex;
    int32 ComplexPointsCount;
    TArray<FVoidMakerActorParamStruct> ComplexPathParameters;

};

struct FVoidMakerLevelStruct : public FTableRowBase
{
    TArray<FTransform> ObjectsPlacedTransform;
    FString UniqueId;
    FString LevelName;
    FText Description;
    int32 ThemeIndex;
    int32 GameType;
    int32 Music;
    int32 TimerIndex;
    FString DateOfCreation;
    TArray<FVoidMakerAssetStruct> ObjectsPlacedStruct;
    TArray<class TSubclassOf<AActor>> ObjectsPlaced;
    bool bIsLevelEditable;
    bool bLocalLevel;
    bool bInfiniteStamina;
    TArray<FVoidMakerComplexPathStruct> ComplexPathMap;
    TArray<TEnumAsByte<EBlueFireSpirits::Type>> ActivatedSpirits;
    FString ThumbnailLocalPath;
    bool bIsValid;

};

class AVoidMaker_ControllerC : public ACharacter
{
    FVoidMaker_ControllerCOnStartPlayMode OnStartPlayMode;
    void DelegateStartPlayMode(bool bIsStart);
    FVoidMakerLevelStruct CurrentLevelData;
    class UVoidMakerUICPP* VoidMakerUICPP;
    TArray<class AC_VoidMaker_Actor*> PlacedVMActors;
    float PerformanceCountCPP;
    bool bIsActorLoaded;

    void UpdateThemeCPP(const TEnumAsByte<EVoidMaker_InfoSettings::Type>& Setting, const bool bAll);
    void LoadMapFromDownloadCPP(FVoidMakerLevelStruct LevelData);
    void FinishLoadMap();
    void AddSpiritsToPlayer(const TArray<TEnumAsByte<EBlueFireSpirits::Type>>& Spirits);
};

class AVoidMaker_Controller_PadreC : public APlayerController
{
};

struct FBlueFireFogSettingsStruct : public FTableRowBase
{
    FString Name;
    FLinearColor FogColor;
    float FogDensity;
    float HeightFalloff;
    float StartDistance;
    float MaxOpacity;
    float WorldLocation;

};

struct FProfaneWordStruct : public FTableRowBase
{
    FName Language;
    uint8 Severity;
    FString Word;

};

struct FVoidMakerVoidPreviewStruct : public FTableRowBase
{
    FString ID;
    FString Name;
    FString Theme;
    FString GameMode;
    FString Music;
    FString InfiniteStamina;
    FString Editable;
    TEnumAsByte<EVoidMaker_LevelTags::Type> Tags;
    FString ShareCode;
    FString CreatorID;
    FString DateUploaded;
    FString Rating;
    FString ThumbnailPath;
    bool bIsOnline;
    TEnumAsByte<EBlueFireSpirits::Type> Spirits;
    bool bIsValid;
    FString Username;
    int32 ProfilePictureIndex;
    int32 NumberOfObjects;
    FString RecordHolderID;
    int32 RecordHolderProfilePicture;
    FString RecordHolderUsername;
    float RecordHolderTime;

};

struct FVoidMakerCategoryArrayStruct : public FTableRowBase
{
    TArray<FString> StringArray;

};

struct FVoidMakerProfilePictureStruct : public FTableRowBase
{
    int32 ProfileIndex;
    FString Name;
    class UTexture2D* Picture;

};

struct FVoidMakerMaterialsStruct : public FTableRowBase
{
    FString Name;
    class UMaterialInstance* Material;
    class UTexture2D* Thumbnail;

};

struct FVoidMakerInfoStruct : public FTableRowBase
{
    FString Display;
    FBlueFireFogSettingsStruct FogSettings;
    class UMaterialInstance* SkyMaterial;
    FColor LightColor;
    FColor MainColor;
    bool bBlackGrid;
    class UMaterialInstance* FloorMaterial;
    bool bHasFloor;
    float VoidReverbDarken;
    float VoidReverbSize;
    FName StateMusicRecommendedName;

};

struct FVoidMakerAssetCategoryStruct : public FTableRowBase
{
    FText Name;
    class UTexture2D* Background;

};

#endif
