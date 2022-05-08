#ifndef UE4SS_SDK_GameAnalytics_HPP
#define UE4SS_SDK_GameAnalytics_HPP

#include "GameAnalytics_enums.hpp"

class UGameAnalytics : public UObject
{

    void SetCustomDimension03(FString CustomDimension);
    void SetCustomDimension02(FString CustomDimension);
    void SetCustomDimension01(FString CustomDimension);
    void OnQuit();
    bool IsRemoteConfigsReady();
    FString GetRemoteConfigsValueAsStringWithDefaultValue(FString Key, FString DefaultValue);
    FString GetRemoteConfigsValueAsString(FString Key);
    FString GetRemoteConfigsContentAsString();
    FString GetABTestingVariantId();
    FString GetABTestingId();
    void AddResourceEvent(EGAResourceFlowType FlowType, FString Currency, float Amount, FString ItemType, FString ItemId);
    void AddProgressionEventWithOneTwoThreeAndScore(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, FString Progression03, int32 Score);
    void AddProgressionEventWithOneTwoAndThree(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, FString Progression03);
    void AddProgressionEventWithOneTwoAndScore(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, int32 Score);
    void AddProgressionEventWithOneAndTwo(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02);
    void AddProgressionEventWithOneAndScore(EGAProgressionStatus ProgressionStatus, FString Progression01, int32 Score);
    void AddProgressionEventWithOne(EGAProgressionStatus ProgressionStatus, FString Progression01);
    void AddErrorEvent(EGAErrorSeverity Severity, FString Message);
    void AddDesignEventWithValue(FString EventId, float Value);
    void AddDesignEvent(FString EventId);
    void AddBusinessEventIOS(FString Currency, int32 Amount, FString ItemType, FString ItemId, FString CartType, FString Receipt);
    void AddBusinessEventAndroid(FString Currency, int32 Amount, FString ItemType, FString ItemId, FString CartType, FString Receipt, FString Signature);
    void AddBusinessEventAndAutoFetchReceipt(FString Currency, int32 Amount, FString ItemType, FString ItemId, FString CartType);
    void AddBusinessEvent(FString Currency, int32 Amount, FString ItemType, FString ItemId, FString CartType);
    void AddAdEventWithNoAdReason(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, EGAAdError noAdReason);
    void AddAdEventWithDuration(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, int64 Duration);
    void AddAdEvent(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement);
};

#endif
