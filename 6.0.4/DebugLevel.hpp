#ifndef UE4SS_SDK_DebugLevel_HPP
#define UE4SS_SDK_DebugLevel_HPP

class UDebugLevel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Chunk;
    class UTextBlock* VisibleLevels;
    TArray<FString> All Levels;
    TArray<FString> Visible Levels;

    void Update(const TEnumAsByte<StreamingChunks::Type> Chunk, const FName Void Name, const TArray<FName>& Custom Names);
    void ExecuteUbergraph_DebugLevel(int32 EntryPoint);
};

#endif
