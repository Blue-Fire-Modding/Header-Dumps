#ifndef UE4SS_SDK_AkAudio_HPP
#define UE4SS_SDK_AkAudio_HPP

#include "AkAudio_enums.hpp"

class AAkAcousticPortal : UVolume
{
    AkAcousticPortalState InitialState;
    float ObstructionRefreshInterval;
    TEnumAsByte<ECollisionChannel> ObstructionCollisionChannel;

    void OpenPortal();
    AkAcousticPortalState GetCurrentState();
    void ClosePortal();
}

class UAkPortalComponent : USceneComponent
{
}

class UAkAudioType : UObject
{
    uint32 ShortID;
    TArray<UObject*> UserData;
}

class UAkAcousticTexture : UAkAudioType
{
}

class AAkAmbientSound : AActor
{
    UAkAudioEvent* AkAudioEvent;
    UAkComponent* AkComponent;
    bool StopWhenOwnerIsDestroyed;
    bool AutoPost;

    void StopAmbientSound();
    void StartAmbientSound();
}

class UAkAndroidInitializationSettings : UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkAndroidAdvancedInitializationSettings AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
}

class UAkPlatformInfo : UObject
{
}

class UAkAndroidPlatformInfo : UAkPlatformInfo
{
}

class UAkAssetData : UObject
{
    uint32 CachedHash;
}

class UAkAssetDataWithMedia : UAkAssetData
{
    TArray<TSoftObjectPtr<UAkMediaAsset>> MediaList;
}

class UAkAssetPlatformData : UObject
{
    UAkAssetData* CurrentAssetData;
}

class UAkAssetBase : UAkAudioType
{
    UAkAssetPlatformData* PlatformAssetData;
}

class UAkAudioBank : UAkAssetBase
{
    bool AutoLoad;
    TMap<FString, TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap;
    TSet<TSoftObjectPtr<UAkAudioEvent>> LinkedAkEvents;
    UAkAssetPlatformData* CurrentLocalizedPlatformAssetData;
}

class UAkAssetDataSwitchContainerData : UObject
{
    TSoftObjectPtr<UAkGroupValue> GroupValue;
    UAkGroupValue* DefaultGroupValue;
    TArray<TSoftObjectPtr<UAkMediaAsset>> MediaList;
    TArray<UAkAssetDataSwitchContainerData*> Children;
}

class UAkAssetDataSwitchContainer : UAkAssetDataWithMedia
{
    TArray<UAkAssetDataSwitchContainerData*> SwitchContainers;
    UAkGroupValue* DefaultGroupValue;
}

class UAkAudioEventData : UAkAssetDataSwitchContainer
{
    float MaxAttenuationRadius;
    bool IsInfinite;
    float MinimumDuration;
    float MaximumDuration;
    TMap<FString, UAkAssetDataSwitchContainer*> LocalizedMedia;
    TSet<UAkAudioEvent*> PostedEvents;
    TSet<UAkAuxBus*> UserDefinedSends;
    TSet<UAkTrigger*> PostedTriggers;
    TSet<UAkGroupValue*> GroupValues;
}

class UAkAudioEvent : UAkAssetBase
{
    TMap<FString, TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap;
    UAkAudioBank* RequiredBank;
    UAkAssetPlatformData* CurrentLocalizedPlatformData;
    float MaxAttenuationRadius;
    bool IsInfinite;
    float MinimumDuration;
    float MaximumDuration;

    float GetMinimumDuration();
    float GetMaximumDuration();
    float GetMaxAttenuationRadius();
    bool GetIsInfinite();
}

class UAkGameObject : USceneComponent
{
    UAkAudioEvent* AkAudioEvent;
    FString EventName;

    void Stop();
    void PostAssociatedAkEventAsync(const UObject* WorldContextObject, int32 CallbackMask, const OnAkPostEventCallback__DelegateSignature& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo, int32& PlayingID);
    int32 PostAssociatedAkEvent(int32 CallbackMask, const OnAkPostEventCallback__DelegateSignature& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources);
    void PostAkEventAsync(const UObject* WorldContextObject, UAkAudioEvent* AkEvent, int32& PlayingID, int32 CallbackMask, const OnAkPostEventCallback__DelegateSignature& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    int32 PostAkEvent(UAkAudioEvent* AkEvent, int32 CallbackMask, const OnAkPostEventCallback__DelegateSignature& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, FString in_EventName);
}

class UAkComponent : UAkGameObject
{
    bool bUseSpatialAudio;
    TEnumAsByte<ECollisionChannel> OcclusionCollisionChannel;
    uint8 EnableSpotReflectors;
    UAkAuxBus* EarlyReflectionAuxBus;
    FString EarlyReflectionAuxBusName;
    int32 EarlyReflectionOrder;
    float EarlyReflectionBusSendGain;
    float EarlyReflectionMaxPathLength;
    float roomReverbAuxBusGain;
    int32 diffractionMaxEdges;
    int32 diffractionMaxPaths;
    float diffractionMaxPathLength;
    uint8 DrawFirstOrderReflections;
    uint8 DrawSecondOrderReflections;
    uint8 DrawHigherOrderReflections;
    uint8 DrawDiffraction;
    bool StopWhenOwnerDestroyed;
    float AttenuationScalingFactor;
    float OcclusionRefreshInterval;
    bool bUseReverbVolumes;

    void UseReverbVolumes(bool inUseReverbVolumes);
    void UseEarlyReflections(UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName);
    void SetSwitch(UAkSwitchValue* SwitchValue, FString SwitchGroup, FString SwitchState);
    void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
    void SetRTPCValue(UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, FString RTPC);
    void SetOutputBusVolume(float BusVolume);
    void SetListeners(const TArray<UAkComponent*>& Listeners);
    void SetEarlyReflectionsVolume(float SendVolume);
    void SetEarlyReflectionsAuxBus(FString AuxBusName);
    void SetAttenuationScalingFactor(float Value);
    void PostTrigger(UAkTrigger* TriggerValue, FString Trigger);
    void PostAssociatedAkEventAndWaitForEndAsync(int32& PlayingID, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    int32 PostAssociatedAkEventAndWaitForEnd(const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    int32 PostAkEventByName(FString in_EventName);
    void PostAkEventAndWaitForEndAsync(UAkAudioEvent* AkEvent, int32& PlayingID, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    int32 PostAkEventAndWaitForEnd(UAkAudioEvent* AkEvent, FString in_EventName, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    void GetRTPCValue(UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, FString RTPC, int32 PlayingID);
    float GetAttenuationRadius();
}

class UAkAudioInputComponent : UAkComponent
{

    int32 PostAssociatedAudioInputEvent();
}

class UAkAuxBus : UAkAssetBase
{
    UAkAudioBank* RequiredBank;
}

class UAkCheckBox : UContentWidget
{
    ECheckBoxState CheckedState;
    FAkCheckBoxCheckedStateDelegate CheckedStateDelegate;
    ECheckBoxState GetCheckBoxState();
    FCheckBoxStyle WidgetStyle;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    bool IsFocusable;
    FAkBoolPropertyToControl ThePropertyToControl;
    FAkWwiseItemToControl ItemToControl;
    FAkCheckBoxAkOnCheckStateChanged AkOnCheckStateChanged;
    void AkOnCheckBoxComponentStateChanged(bool bIsChecked);
    FAkCheckBoxOnItemDropped OnItemDropped;
    void OnWwiseItemDropDetected(FGuid ItemDroppedID);
    FAkCheckBoxOnPropertyDropped OnPropertyDropped;
    void OnBoolPropertyDropDetected(FString PropertyDropped);

    void SetIsChecked(bool InIsChecked);
    void SetCheckedState(ECheckBoxState InCheckedState);
    void SetAkItemId(const FGuid& ItemId);
    void SetAkBoolProperty(FString ItemProperty);
    bool IsPressed();
    bool IsChecked();
    ECheckBoxState GetCheckedState();
    FString GetAkProperty();
    FGuid GetAkItemId();
}

class UAkGameplayStatics : UBlueprintFunctionLibrary
{

    void UseReverbVolumes(bool inUseReverbVolumes, AActor* Actor);
    void UseEarlyReflections(AActor* Actor, UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName);
    void UnloadBankByName(FString BankName);
    void UnloadBankAsync(UAkAudioBank* Bank, const OnAkBankCallback__DelegateSignature& BankUnloadedCallback);
    void UnloadBank(UAkAudioBank* Bank, FString BankName, FLatentActionInfo LatentInfo, UObject* WorldContextObject);
    void StopProfilerCapture();
    void StopOutputCapture();
    void StopAllAmbientSounds(UObject* WorldContextObject);
    void StopAll();
    void StopActor(AActor* Actor);
    void StartProfilerCapture(FString Filename);
    void StartOutputCapture(FString Filename);
    void StartAllAmbientSounds(UObject* WorldContextObject);
    UAkComponent* SpawnAkComponentAtLocation(UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, FString EventName, bool AutoDestroy);
    void SetSwitch(UAkSwitchValue* SwitchValue, AActor* Actor, FName SwitchGroup, FName SwitchState);
    void SetState(UAkStateValue* StateValue, FName StateGroup, FName State);
    void SetSpeakerAngles(const TArray<float>& SpeakerAngles, float HeightAngle, FString DeviceShareset);
    void SetRTPCValue(UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, AActor* Actor, FName RTPC);
    void SetReflectionsOrder(int32 Order, bool RefreshPaths);
    void SetPanningRule(PanningRule PanRule);
    void SetOutputBusVolume(float BusVolume, AActor* Actor);
    void SetOcclusionScalingFactor(float ScalingFactor);
    void SetOcclusionRefreshInterval(float RefreshInterval, AActor* Actor);
    void SetMultiplePositions(UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    void SetMultipleChannelMaskEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    void SetMultipleChannelEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    void SetCurrentAudioCultureAsync(FString AudioCulture, const OnSetCurrentAudioCultureCallback__DelegateSignature& Completed);
    void SetCurrentAudioCulture(FString AudioCulture, FLatentActionInfo LatentInfo, UObject* WorldContextObject);
    void SetBusConfig(FString BusName, AkChannelConfiguration ChannelConfiguration);
    void PostTrigger(UAkTrigger* TriggerValue, AActor* Actor, FName Trigger);
    void PostEventByName(FString EventName, AActor* Actor, bool bStopWhenAttachedToDestroyed);
    int32 PostEventAttached(UAkAudioEvent* AkEvent, AActor* Actor, FName AttachPointName, bool bStopWhenAttachedToDestroyed, FString EventName);
    void PostEventAtLocationByName(FString EventName, FVector Location, FRotator Orientation, UObject* WorldContextObject);
    int32 PostEventAtLocation(UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, FString EventName, UObject* WorldContextObject);
    int32 PostEvent(UAkAudioEvent* AkEvent, AActor* Actor, int32 CallbackMask, const OnAkPostEventCallback__DelegateSignature& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, FString EventName);
    void PostAndWaitForEndOfEventAsync(UAkAudioEvent* AkEvent, AActor* Actor, int32& PlayingID, bool bStopWhenAttachedToDestroyed, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    int32 PostAndWaitForEndOfEvent(UAkAudioEvent* AkEvent, AActor* Actor, bool bStopWhenAttachedToDestroyed, const TArray<FAkExternalSourceInfo>& ExternalSources, FString EventName, FLatentActionInfo LatentInfo);
    void LoadInitBank();
    void LoadBanks(const TArray<UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks);
    void LoadBankByName(FString BankName);
    void LoadBankAsync(UAkAudioBank* Bank, const OnAkBankCallback__DelegateSignature& BankLoadedCallback);
    void LoadBank(UAkAudioBank* Bank, FString BankName, FLatentActionInfo LatentInfo, UObject* WorldContextObject);
    bool IsGame(UObject* WorldContextObject);
    bool IsEditor();
    void GetSpeakerAngles(TArray<float>& SpeakerAngles, float& HeightAngle, FString DeviceShareset);
    void GetRTPCValue(UAkRtpc* RTPCValue, int32 PlayingID, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, AActor* Actor, FName RTPC);
    float GetOcclusionScalingFactor();
    FString GetCurrentAudioCulture();
    TArray<FString> GetAvailableAudioCultures();
    UObject* GetAkMediaAssetUserData(const UAkMediaAsset* Instance, const TSubclassOf<UObject> Type);
    UAkComponent* GetAkComponent(USceneComponent* AttachToComponent, bool& ComponentCreated, FName AttachPointName, FVector Location, uint8 LocationType);
    UObject* GetAkAudioTypeUserData(const UAkAudioType* Instance, const TSubclassOf<UObject> Type);
    void ExecuteActionOnPlayingID(AkActionOnEventType ActionType, int32 PlayingID, int32 TransitionDuration, EAkCurveInterpolation FadeCurve);
    void ExecuteActionOnEvent(UAkAudioEvent* AkEvent, AkActionOnEventType ActionType, AActor* Actor, int32 TransitionDuration, EAkCurveInterpolation FadeCurve, int32 PlayingID);
    void ClearBanks();
    void CancelEventCallback(const OnAkPostEventCallback__DelegateSignature& PostEventCallback);
    void AddOutputCaptureMarker(FString MarkerText);
}

class UAkCallbackInfo : UObject
{
    UAkComponent* AkComponent;
}

class UAkEventCallbackInfo : UAkCallbackInfo
{
    int32 PlayingID;
    int32 EventId;
}

class UAkMIDIEventCallbackInfo : UAkEventCallbackInfo
{

    EAkMidiEventType GetType();
    bool GetProgramChange(FAkMidiProgramChange& AsProgramChange);
    bool GetPitchBend(FAkMidiPitchBend& AsPitchBend);
    bool GetNoteOn(FAkMidiNoteOnOff& AsNoteOn);
    bool GetNoteOff(FAkMidiNoteOnOff& AsNoteOff);
    bool GetNoteAftertouch(FAkMidiNoteAftertouch& AsNoteAftertouch);
    bool GetGeneric(FAkMidiGeneric& AsGeneric);
    bool GetChannelAftertouch(FAkMidiChannelAftertouch& AsChannelAftertouch);
    uint8 GetChannel();
    bool GetCc(FAkMidiCc& AsCc);
}

class UAkMarkerCallbackInfo : UAkEventCallbackInfo
{
    int32 Identifier;
    int32 Position;
    FString Label;
}

class UAkDurationCallbackInfo : UAkEventCallbackInfo
{
    float Duration;
    float EstimatedDuration;
    int32 AudioNodeID;
    int32 MediaID;
    bool bStreaming;
}

class UAkMusicSyncCallbackInfo : UAkCallbackInfo
{
    int32 PlayingID;
    FAkSegmentInfo SegmentInfo;
    EAkCallbackType MusicSyncType;
    FString UserCueName;
}

class UAkGeometryComponent : USceneComponent
{
    AkMeshType MeshType;
    int32 LOD;
    float WeldingThreshold;
    TMap<UMaterialInterface*, FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;
    FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride;
    uint8 bEnableDiffraction;
    uint8 bEnableDiffractionOnBoundaryEdges;
    AActor* AssociatedRoom;
    FAkGeometryData GeometryData;

    void UpdateGeometry();
    void RemoveGeometry();
    void ConvertMesh();
}

class UAkGroupValue : UAkAudioType
{
    uint32 GroupShortID;
}

class UAkHololensInitializationSettings : UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkHololensAdvancedInitializationSettings AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
}

class UAkHololensPlatformInfo : UAkPlatformInfo
{
}

class UAkInitBankAssetData : UAkAssetDataWithMedia
{
    TArray<FAkPluginInfo> PluginInfos;
}

class UAkInitBank : UAkAssetBase
{
    TArray<FString> AvailableAudioCultures;
    FString DefaultLanguage;
}

class UAkIOSInitializationSettings : UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkAudioSession AudioSession;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkAdvancedInitializationSettings AdvancedSettings;
}

class UAkIOSPlatformInfo : UAkPlatformInfo
{
}

class UAkItemBoolPropertiesConv : UBlueprintFunctionLibrary
{

    FText Conv_FAkBoolPropertyToControlToText(const FAkBoolPropertyToControl& INAkBoolPropertyToControl);
    FString Conv_FAkBoolPropertyToControlToString(const FAkBoolPropertyToControl& INAkBoolPropertyToControl);
}

class UAkItemBoolProperties : UWidget
{
    FAkItemBoolPropertiesOnSelectionChanged OnSelectionChanged;
    void OnItemBoolPropertySelectionChanged(FString PropertySelected);
    FAkItemBoolPropertiesOnPropertyDragged OnPropertyDragged;
    void OnItemBoolPropertyDragDetected(FString PropertyDragged);

    void SetSearchText(FString newText);
    FString GetSelectedProperty();
    FString GetSearchText();
}

class UAkItemPropertiesConv : UBlueprintFunctionLibrary
{

    FText Conv_FAkPropertyToControlToText(const FAkPropertyToControl& INAkPropertyToControl);
    FString Conv_FAkPropertyToControlToString(const FAkPropertyToControl& INAkPropertyToControl);
}

class UAkItemProperties : UWidget
{
    FAkItemPropertiesOnSelectionChanged OnSelectionChanged;
    void OnItemPropertySelectionChanged(FString PropertySelected);
    FAkItemPropertiesOnPropertyDragged OnPropertyDragged;
    void OnItemPropertyDragDetected(FString PropertyDragged);

    void SetSearchText(FString newText);
    FString GetSelectedProperty();
    FString GetSearchText();
}

class UAkLateReverbComponent : USceneComponent
{
    uint8 bEnable;
    UAkAuxBus* AuxBus;
    FString AuxBusName;
    float SendLevel;
    float FadeRate;
    float Priority;
    UAkLateReverbComponent* NextLowerPriorityComponent;
}

class UAkLinuxInitializationSettings : UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
}

class UAkLinuxPlatformInfo : UAkPlatformInfo
{
}

class UAkLuminInitializationSettings : UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
}

class UAkLuminPlatformInfo : UAkPlatformInfo
{
}

class UAkMacInitializationSettings : UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
}

class UAkMacPlatformInfo : UAkPlatformInfo
{
}

class UAkMediaAssetData : UObject
{
    bool IsStreamed;
    bool UseDeviceMemory;
}

class UAkMediaAsset : UObject
{
    uint32 ID;
    TArray<UObject*> UserData;
    UAkMediaAssetData* CurrentMediaAssetData;
}

class UAkLocalizedMediaAsset : UAkMediaAsset
{
}

class UAkExternalMediaAsset : UAkMediaAsset
{
}

class UAkPS4InitializationSettings : UObject
{
    FAkCommonInitializationSettings CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkPS4AdvancedInitializationSettings AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
}

class UAkPS4PlatformInfo : UAkPlatformInfo
{
}

class AAkReverbVolume : UVolume
{
    uint8 bEnabled;
    UAkAuxBus* AuxBus;
    FString AuxBusName;
    float SendLevel;
    float FadeRate;
    float Priority;
    UAkLateReverbComponent* LateReverbComponent;
}

class UAkRoomComponent : UAkGameObject
{
    uint8 bEnable;
    UAkRoomComponent* NextLowerPriorityComponent;
    float Priority;
    float WallOcclusion;
    float AuxSendLevel;
    bool AutoPost;
}

class UAkRtpc : UAkAudioType
{
}

class UAkSettings : UObject
{
    uint8 MaxSimultaneousReverbVolumes;
    FFilePath WwiseProjectPath;
    FDirectoryPath WwiseSoundDataFolder;
    bool bAutoConnectToWAAPI;
    TEnumAsByte<ECollisionChannel> DefaultOcclusionCollisionChannel;
    TMap<TSoftObjectPtr<UPhysicalMaterial>, FAkGeometrySurfacePropertiesToMap> AkGeometryMap;
    bool SplitSwitchContainerMedia;
    bool SplitMediaPerFolder;
    bool UseEventBasedPackaging;
    bool EnableAutomaticAssetSynchronization;
    FString CommandletCommitMessage;
    TMap<FString, FString> UnrealCultureToWwiseCulture;
    bool AskedToUseNewAssetManagement;
    bool bEnableMultiCoreRendering;
    bool MigratedEnableMultiCoreRendering;
    bool FixupRedirectorsDuringMigration;
    FDirectoryPath WwiseWindowsInstallationPath;
    FFilePath WwiseMacInstallationPath;
}

class UAkSettingsPerUser : UObject
{
    FDirectoryPath WwiseWindowsInstallationPath;
    FFilePath WwiseMacInstallationPath;
    bool EnableAutomaticAssetSynchronization;
    FString WaapiIPAddress;
    uint32 WaapiPort;
    bool bAutoConnectToWAAPI;
    bool AutoSyncSelection;
    bool SuppressWwiseProjectPathWarnings;
    bool SoundDataGenerationSkipLanguage;
}

class UAkSlider : UWidget
{
    float Value;
    FAkSliderValueDelegate ValueDelegate;
    float GetFloat();
    FSliderStyle WidgetStyle;
    TEnumAsByte<EOrientation> Orientation;
    FLinearColor SliderBarColor;
    FLinearColor SliderHandleColor;
    bool IndentHandle;
    bool Locked;
    float StepSize;
    bool IsFocusable;
    FAkPropertyToControl ThePropertyToControl;
    FAkWwiseItemToControl ItemToControl;
    FAkSliderOnValueChanged OnValueChanged;
    void AkOnFloatValueChangedEvent(float Value);
    FAkSliderOnItemDropped OnItemDropped;
    void OnItemDropDetected(FGuid ItemDroppedID);
    FAkSliderOnPropertyDropped OnPropertyDropped;
    void OnPropertyDropDetected(FString PropertyDropped);

    void SetValue(float InValue);
    void SetStepSize(float InValue);
    void SetSliderHandleColor(FLinearColor InValue);
    void SetSliderBarColor(FLinearColor InValue);
    void SetLocked(bool InValue);
    void SetIndentHandle(bool InValue);
    void SetAkSliderItemProperty(FString ItemProperty);
    void SetAkSliderItemId(const FGuid& ItemId);
    float GetValue();
    FString GetAkSliderItemProperty();
    FGuid GetAkSliderItemId();
}

class AAkSpatialAudioVolume : UVolume
{
    UAkSurfaceReflectorSetComponent* SurfaceReflectorSet;
    UAkLateReverbComponent* LateReverb;
    UAkRoomComponent* Room;
}

class AAkSpotReflector : AActor
{
    UAkAuxBus* EarlyReflectionAuxBus;
    FString EarlyReflectionAuxBusName;
    UAkAcousticTexture* AcousticTexture;
    float DistanceScalingFactor;
    float Level;
}

class UAkStadiaInitializationSettings : UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;
}

class UAkQuailInitializationSettings : UAkStadiaInitializationSettings
{
}

class UAkStadiaPlatformInfo : UAkPlatformInfo
{
}

class UAkQuailPlatformInfo : UAkStadiaPlatformInfo
{
}

class UAkStateValue : UAkGroupValue
{
}

class UAkSurfaceReflectorSetComponent : USceneComponent
{
    uint8 bEnableSurfaceReflectors;
    TArray<FAkPoly> AcousticPolys;
    uint8 bEnableDiffraction;
    uint8 bEnableDiffractionOnBoundaryEdges;
    AActor* AssociatedRoom;

    void UpdateSurfaceReflectorSet();
    void SendSurfaceReflectorSet();
    void RemoveSurfaceReflectorSet();
}

class UAkSwitchInitializationSettings : UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithCommSelection CommunicationSettings;
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
}

class UAkSwitchPlatformInfo : UAkPlatformInfo
{
}

class UAkSwitchValue : UAkGroupValue
{
}

class UAkTrigger : UAkAudioType
{
}

class UAkTVOSInitializationSettings : UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkAudioSession AudioSession;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkAdvancedInitializationSettings AdvancedSettings;
}

class UAkTVOSPlatformInfo : UAkPlatformInfo
{
}

class UAkWaapiCalls : UBlueprintFunctionLibrary
{

    FAKWaapiJsonObject Unsubscribe(const FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone);
    FAKWaapiJsonObject SubscribeToWaapi(const FAkWaapiUri& WaapiUri, const FAKWaapiJsonObject& WaapiOptions, const OnEventCallback__DelegateSignature& Callback, FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone);
    void SetSubscriptionID(const FAkWaapiSubscriptionId& Subscription, int32 ID);
    bool RegisterWaapiProjectLoadedCallback(const OnWaapiProjectLoaded__DelegateSignature& Callback);
    bool RegisterWaapiConnectionLostCallback(const OnWaapiConnectionLost__DelegateSignature& Callback);
    int32 GetSubscriptionID(const FAkWaapiSubscriptionId& Subscription);
    FText Conv_FAkWaapiSubscriptionIdToText(const FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
    FString Conv_FAkWaapiSubscriptionIdToString(const FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
    FAKWaapiJsonObject CallWaapi(const FAkWaapiUri& WaapiUri, const FAKWaapiJsonObject& WaapiArgs, const FAKWaapiJsonObject& WaapiOptions);
}

class USAkWaapiFieldNamesConv : UBlueprintFunctionLibrary
{

    FText Conv_FAkWaapiFieldNamesToText(const FAkWaapiFieldNames& INAkWaapiFieldNames);
    FString Conv_FAkWaapiFieldNamesToString(const FAkWaapiFieldNames& INAkWaapiFieldNames);
}

class UAkWaapiJsonManager : UBlueprintFunctionLibrary
{

    FAKWaapiJsonObject SetStringField(const FAkWaapiFieldNames& FieldName, FString FieldValue, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetObjectField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject FieldValue, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetNumberField(const FAkWaapiFieldNames& FieldName, float FieldValue, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetBoolField(const FAkWaapiFieldNames& FieldName, bool FieldValue, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetArrayStringFields(const FAkWaapiFieldNames& FieldName, const TArray<FString>& FieldStringValues, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetArrayObjectFields(const FAkWaapiFieldNames& FieldName, const TArray<FAKWaapiJsonObject>& FieldObjectValues, FAKWaapiJsonObject Target);
    FString GetStringField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject GetObjectField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    float GetNumberField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    int32 GetIntegerField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    bool GetBoolField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    TArray<FAKWaapiJsonObject> GetArrayField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    FText Conv_FAKWaapiJsonObjectToText(FAKWaapiJsonObject INAKWaapiJsonObject);
    FString Conv_FAKWaapiJsonObjectToString(FAKWaapiJsonObject INAKWaapiJsonObject);
}

class UAkWaapiUriConv : UBlueprintFunctionLibrary
{

    FText Conv_FAkWaapiUriToText(const FAkWaapiUri& INAkWaapiUri);
    FString Conv_FAkWaapiUriToString(const FAkWaapiUri& INAkWaapiUri);
}

class UAkWindowsInitializationSettings : UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkWindowsAdvancedInitializationSettings AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
}

class UAkWin32PlatformInfo : UAkPlatformInfo
{
}

class UAkWin64PlatformInfo : UAkPlatformInfo
{
}

class UAkWindowsPlatformInfo : UAkWin64PlatformInfo
{
}

class UAkWinGDKInitializationSettings : UObject
{
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkWinGDKAdvancedInitializationSettings AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
}

class UAkWinAnvilInitializationSettings : UAkWinGDKInitializationSettings
{
}

class UAkWinGDKPlatformInfo : UAkPlatformInfo
{
}

class UAkWinAnvilPlatformInfo : UAkWinGDKPlatformInfo
{
}

class UAkWwiseTree : UWidget
{
    FAkWwiseTreeOnSelectionChanged OnSelectionChanged;
    void OnItemSelectionChanged(FGuid ItemSelectedID);
    FAkWwiseTreeOnItemDragged OnItemDragged;
    void OnItemDragDetected(FGuid ItemDraggedID, FString ItemDraggedName);

    void SetSearchText(FString newText);
    FAkWwiseObjectDetails GetSelectedItem();
    FString GetSearchText();
}

class UAkWwiseTreeSelector : UWidget
{
    FAkWwiseTreeSelectorOnSelectionChanged OnSelectionChanged;
    void OnItemSelectionChanged(FGuid ItemSelectedID);
    FAkWwiseTreeSelectorOnItemDragged OnItemDragged;
    void OnItemDragDetected(FGuid ItemDraggedID, FString ItemDraggedName);
}

class UAkXboxOneGDKInitializationSettings : UObject
{
    FAkCommonInitializationSettings CommonSettings;
    FAkXboxOneGDKApuHeapInitializationSettings ApuHeapSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
}

class UAkXboxOneAnvilInitializationSettings : UAkXboxOneGDKInitializationSettings
{
}

class UAkXboxOneGDKPlatformInfo : UAkPlatformInfo
{
}

class UAkXboxOneAnvilPlatformInfo : UAkXboxOneGDKPlatformInfo
{
}

class UAkXboxOneInitializationSettings : UObject
{
    FAkCommonInitializationSettings CommonSettings;
    FAkXboxOneApuHeapInitializationSettings ApuHeapSettings;
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    FAkXboxOneAdvancedInitializationSettings AdvancedSettings;

    void MigrateMultiCoreRendering(bool NewValue);
}

class UAkXboxOnePlatformInfo : UAkPlatformInfo
{
}

class UInterpTrackAkAudioEvent : UInterpTrackVectorBase
{
    TArray<FAkAudioEventTrackKey> Events;
    uint8 bContinueEventOnMatineeEnd;
}

class UInterpTrackAkAudioRTPC : UInterpTrackFloatBase
{
    FString Param;
    uint8 bPlayOnReverse;
    uint8 bContinueRTPCOnMatineeEnd;
}

class UInterpTrackInstAkAudioEvent : UInterpTrackInst
{
    float LastUpdatePosition;
}

class UInterpTrackInstAkAudioRTPC : UInterpTrackInst
{
    float LastUpdatePosition;
}

class UMovieSceneAkAudioEventSection : UMovieSceneSection
{
    UAkAudioEvent* Event;
    bool RetriggerEvent;
    int32 ScrubTailLengthMs;
    bool StopAtSectionEnd;
    FString EventName;
    float MaxSourceDuration;
    FString MaxDurationSourceID;
}

class UMovieSceneAkTrack : UMovieSceneTrack
{
    TArray<UMovieSceneSection*> Sections;
    uint8 bIsAMasterTrack;
}

class UMovieSceneAkAudioEventTrack : UMovieSceneAkTrack
{
}

class UMovieSceneAkAudioRTPCSection : UMovieSceneSection
{
    UAkRtpc* RTPC;
    FString Name;
    FRichCurve FloatCurve;
    FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper;
    FMovieSceneFloatChannel RTPCChannel;
}

class UMovieSceneAkAudioRTPCTrack : UMovieSceneAkTrack
{
}

class UPostEventAsync : UBlueprintAsyncActionBase
{
    FPostEventAsyncCompleted Completed;
    void PostEventAsyncOutputPin(int32 PlayingID);

    UPostEventAsync* PostEventAsync(const UObject* WorldContextObject, UAkAudioEvent* AkEvent, AActor* Actor, int32 CallbackMask, const OnAkPostEventCallback__DelegateSignature& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed);
    void PollPostEventFuture();
}

class UPostEventAtLocationAsync : UBlueprintAsyncActionBase
{
    FPostEventAtLocationAsyncCompleted Completed;
    void PostEventAtLocationAsyncOutputPin(int32 PlayingID);

    UPostEventAtLocationAsync* PostEventAtLocationAsync(const UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation);
    void PollPostEventFuture();
}

struct UAKWaapiJsonObject
{
}

struct UAkWaapiSubscriptionId
{
}

struct UAkAmbSoundCheckpointRecord
{
    bool bCurrentlyPlaying;
}

struct UAkAdvancedInitializationSettings
{
    uint32 IO_MemorySize;
    uint32 IO_Granularity;
    float TargetAutoStreamBufferLength;
    bool UseStreamCache;
    uint32 MaximumPinnedBytesInCache;
    bool EnableGameSyncPreparation;
    uint32 ContinuousPlaybackLookAhead;
    uint32 MonitorQueuePoolSize;
    uint32 MaximumHardwareTimeoutMs;
    bool DebugOutOfRangeCheckEnabled;
    float DebugOutOfRangeLimit;
    FAkAdvancedSpatialAudioSettings SpatialAudioSettings;
}

struct UAkAdvancedSpatialAudioSettings
{
    float DiffractionShadowAttenuationFactor;
    float DiffractionShadowDegrees;
}

struct UAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings
{
    bool EnableMultiCoreRendering;
}

struct UAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint32 AudioAPI;
    bool RoundFrameSizeToHardwareSize;
}

struct UAkAudioSession
{
    EAkAudioSessionCategory AudioSessionCategory;
    uint32 AudioSessionCategoryOptions;
    EAkAudioSessionMode AudioSessionMode;
}

struct UAkExternalSourceInfo
{
    FString ExternalSrcName;
    AkCodecId CodecID;
    FString Filename;
    UAkExternalMediaAsset* ExternalSourceAsset;
    bool IsStreamed;
}

struct UAkSegmentInfo
{
    int32 CurrentPosition;
    int32 PreEntryDuration;
    int32 ActiveDuration;
    int32 PostExitDuration;
    int32 RemainingLookAheadTime;
    float BeatDuration;
    float BarDuration;
    float GridDuration;
    float GridOffset;
}

struct UAkMidiEventBase
{
    EAkMidiEventType Type;
    uint8 Chan;
}

struct UAkMidiProgramChange : FAkMidiEventBase
{
    uint8 ProgramNum;
}

struct UAkMidiChannelAftertouch : FAkMidiEventBase
{
    uint8 Value;
}

struct UAkMidiNoteAftertouch : FAkMidiEventBase
{
    uint8 Note;
    uint8 Value;
}

struct UAkMidiPitchBend : FAkMidiEventBase
{
    uint8 ValueLsb;
    uint8 ValueMsb;
    int32 FullValue;
}

struct UAkMidiCc : FAkMidiEventBase
{
    EAkMidiCcValues Cc;
    uint8 Value;
}

struct UAkMidiNoteOnOff : FAkMidiEventBase
{
    uint8 Note;
    uint8 Velocity;
}

struct UAkMidiGeneric : FAkMidiEventBase
{
    uint8 Param1;
    uint8 Param2;
}

struct UAkChannelMask
{
    int32 ChannelMask;
}

struct UAkGeometrySurfaceOverride
{
    UAkAcousticTexture* AcousticTexture;
    uint8 bEnableOcclusionOverride;
    float OcclusionValue;
}

struct UAkGeometryData
{
    TArray<FVector> Vertices;
    TArray<FAkAcousticSurface> Surfaces;
    TArray<FAkTriangle> Triangles;
    TArray<UPhysicalMaterial*> ToOverrideAcousticTexture;
    TArray<UPhysicalMaterial*> ToOverrideOcclusion;
}

struct UAkTriangle
{
    uint16 Point0;
    uint16 Point1;
    uint16 Point2;
    uint16 Surface;
}

struct UAkAcousticSurface
{
    uint32 Texture;
    float Occlusion;
    FString Name;
}

struct UAkHololensAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint32 AudioAPI;
    bool GlobalFocus;
    bool UseHeadMountedDisplayAudioDevice;
}

struct UAkPluginInfo
{
    FString Name;
    uint32 PluginID;
    FString dll;
}

struct UAkCommonInitializationSettings
{
    uint32 MaximumNumberOfMemoryPools;
    uint32 MaximumNumberOfPositioningPaths;
    uint32 CommandQueueSize;
    uint32 SamplesPerFrame;
    FAkMainOutputSettings MainOutputSettings;
    float StreamingLookAheadRatio;
    uint16 NumberOfRefillsInVoice;
    FAkSpatialAudioSettings SpatialAudioSettings;
}

struct UAkSpatialAudioSettings
{
    uint32 MaxSoundPropagationDepth;
    uint32 DiffractionFlags;
    float MovementThreshold;
    uint32 NumberOfPrimaryRays;
    uint32 ReflectionOrder;
    bool EnableDiffractionOnReflections;
    bool EnableDirectPathDiffraction;
    float MaximumPathLength;
    bool EnableTransmission;
}

struct UAkMainOutputSettings
{
    FString AudioDeviceShareset;
    uint32 DeviceID;
    EAkPanningRule PanningRule;
    EAkChannelConfigType ChannelConfigType;
    uint32 ChannelMask;
    uint32 NumberOfChannels;
}

struct UAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings
{
    uint32 SampleRate;
}

struct UAkCommunicationSettings
{
    uint32 PoolSize;
    uint16 DiscoveryBroadcastPort;
    uint16 CommandPort;
    uint16 NotificationPort;
    FString NetworkName;
}

struct UAkCommunicationSettingsWithCommSelection : FAkCommunicationSettings
{
    EAkCommSystem CommunicationSystem;
}

struct UAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings
{
    bool InitializeSystemComms;
}

struct UAkBoolPropertyToControl
{
    FString ItemProperty;
}

struct UAkPropertyToControl
{
    FString ItemProperty;
}

struct UAkPS4AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint32 ACPBatchBufferSize;
    bool UseHardwareCodecLowLatencyMode;
}

struct UAkGeometrySurfacePropertiesToMap
{
    TSoftObjectPtr<UAkAcousticTexture> AcousticTexture;
    float OcclusionValue;
}

struct UAkWwiseItemToControl
{
    FAkWwiseObjectDetails ItemPicked;
    FString ItemPath;
}

struct UAkWwiseObjectDetails
{
    FString ItemName;
    FString ItemPath;
    FString ItemId;
}

struct UAkPoly
{
    UAkAcousticTexture* Texture;
    float Occlusion;
    bool EnableSurface;
}

struct UAkWaapiFieldNames
{
    FString FieldName;
}

struct UAkWaapiUri
{
    FString Uri;
}

struct UAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint32 AudioAPI;
    bool GlobalFocus;
    bool UseHeadMountedDisplayAudioDevice;
}

struct UAkWinGDKAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint32 AudioAPI;
    bool GlobalFocus;
    bool UseHeadMountedDisplayAudioDevice;
}

struct UAkXboxOneGDKApuHeapInitializationSettings
{
    uint32 CachedSize;
    uint32 NonCachedSize;
}

struct UAkXboxOneGDKAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint16 MaximumNumberOfXMAVoices;
    bool UseHardwareCodecLowLatencyMode;
}

struct UAkXboxOneApuHeapInitializationSettings
{
    uint32 CachedSize;
    uint32 NonCachedSize;
}

struct UAkXboxOneAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
    uint16 MaximumNumberOfXMAVoices;
    bool UseHardwareCodecLowLatencyMode;
}

struct UAkAudioEventTrackKey
{
    float Time;
    UAkAudioEvent* AkAudioEvent;
    FString EventName;
}

struct UMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate
{
    UMovieSceneAkAudioEventSection* Section;
}

struct UMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate
{
    UMovieSceneAkAudioRTPCSection* Section;
}

struct UMovieSceneFloatChannelSerializationHelper
{
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;
    TArray<int32> Times;
    TArray<FMovieSceneFloatValueSerializationHelper> Values;
    float DefaultValue;
    bool bHasDefaultValue;
}

struct UMovieSceneFloatValueSerializationHelper
{
    float Value;
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    TEnumAsByte<ERichCurveTangentMode> TangentMode;
    FMovieSceneTangentDataSerializationHelper Tangent;
}

struct UMovieSceneTangentDataSerializationHelper
{
    float ArriveTangent;
    float LeaveTangent;
    TEnumAsByte<ERichCurveTangentWeightMode> TangentWeightMode;
    float ArriveTangentWeight;
    float LeaveTangentWeight;
}

#endif
