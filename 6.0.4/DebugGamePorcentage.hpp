#ifndef UE4SS_SDK_DebugGamePorcentage_HPP
#define UE4SS_SDK_DebugGamePorcentage_HPP

class UDebugGamePorcentage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Chunk;
    class UPercentDebug_C* PercentDebug;
    class UPercentDebug_C* PercentDebug_70;
    class UPercentDebug_C* PercentDebug_136;
    class UPercentDebug_C* PercentDebug_179;
    class UWrapBox* WrapBox_1;
    TArray<FString> All Levels;
    TArray<FString> Visible Levels;
    class UBlueFire_Game_Instance_C* Game Instance;

    void Update(float current, float Total, int32 CurrentInt);
    void Construct();
    void UpdatePercent();
    void ExecuteUbergraph_DebugGamePorcentage(int32 EntryPoint);
};

#endif
