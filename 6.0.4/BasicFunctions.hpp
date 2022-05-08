#ifndef UE4SS_SDK_BasicFunctions_HPP
#define UE4SS_SDK_BasicFunctions_HPP

class UBasicFunctions_C : public UBlueprintFunctionLibrary
{

    void CoinTextLoc(int32 AmountCoins, FText Reason, class UObject* __WorldContext, FText& Coins, FText& ReasonOut);
    void Get Language String(int32& Index, class UBlueFire_Game_Instance_C* Game Instance, class UObject* __WorldContext, FString& String);
    void Get Language Index(FString String, class UBlueFire_Game_Instance_C* Game Instance, class UObject* __WorldContext, int32& Index);
    void GetBlueFireLanguageBasic(bool UseDefaultLanguage, class UBlueFire_Game_Instance_C* Game Instance, class UObject* __WorldContext, int32& Index, FString& Language);
    void SaveSettings(class UBlueFire_Game_Instance_C* GameInstance, class UObject* __WorldContext);
    void StadiaFPS(class UBlueFire_Game_Instance_C* BFGameInstance, class UObject* __WorldContext);
    void StadiaInputFix(bool LoadPrevious, class UObject* __WorldContext);
    void ChangeKeyboardLayout(TEnumAsByte<KeyboardType::Type> NewKeyboard, bool DebugIgnoreStadia, class UObject* __WorldContext);
    void SetDefaultInputOkAndBackBasic(class UBlueFire_Game_Instance_C* Blue Fire Game Instance, class UObject* __WorldContext);
    void GetChunkNameBasic(TEnumAsByte<StreamingChunks::Type> Area, class UObject* __WorldContext, FText& Name);
    void GetUIPlatformBasic(class UBlueFire_Game_Instance_C* Blue Fire Game Instance, TEnumAsByte<PlatformInput::Type> Action - OldINPUT, class UObject* __WorldContext, class UMaterialInstance*& UIMaterial, bool& NonSquareSize, FVector2D& Size);
    void SaveGameBasic(bool HiddenSave, class UObject* __WorldContext);
};

#endif
