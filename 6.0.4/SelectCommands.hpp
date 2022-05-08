#ifndef UE4SS_SDK_SelectCommands_HPP
#define UE4SS_SDK_SelectCommands_HPP

class USelectCommands_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_0;
    class UImage* FirstImage;
    class UTextBlock* FirstText;
    class UHorizontalBox* HorizontalBox_206;
    class UImage* SecondImage;
    class UTextBlock* SecondText;
    class UImage* ThirdImage;
    class UTextBlock* ThirdText;
    FText SecondTex;
    FText FirstTex;
    int32 Amount;
    FText ThirdTex;
    TEnumAsByte<PlatformInput::Type> FirstInput;
    TEnumAsByte<PlatformInput::Type> SecondInput;
    TEnumAsByte<PlatformInput::Type> ThirdInput;
    class UBlueFire_Game_Instance_C* BlueFireGameInstance;

    void PreConstruct(bool IsDesignTime);
    void Build();
    void Construct();
    void SetOpacity(float Opacity1, float Opacity2, float Opacity3);
    void Adjust(int32 Amount, TEnumAsByte<PlatformInput::Type> FirstInput, FText FirstTex, TEnumAsByte<PlatformInput::Type> SecondInput, FText SecondTex);
    void MyVoidsR();
    void ExecuteUbergraph_SelectCommands(int32 EntryPoint);
};

#endif
