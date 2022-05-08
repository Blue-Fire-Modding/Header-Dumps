#ifndef UE4SS_SDK_LoadScreen_HPP
#define UE4SS_SDK_LoadScreen_HPP

class ULoadScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Hint;
    class UWidgetAnimation* Fade;
    class UTextBlock* HintText;
    class UImage* Image_0;
    class UImage* Image_111;
    class UImage* Image_128;
    class UImage* Image_193;
    class UTextBlock* LoadText;
    class UTextBlock* TextBlock_401;
    FLoadScreen_CPlay Play;
    void Play();
    bool ReadyToPlay;
    float Delay Start Input;
    class UBlueFire_Game_Instance_C* GameInstance;
    TArray<FText> Hints;
    class ALoadScreenInput_C* Input;

    void Load();
    void Construct();
    void ChangeInput();
    void ChangeHint();
    void FirstHint();
    void PreConstruct(bool IsDesignTime);
    void Start LoadScreen();
    void ExecuteUbergraph_LoadScreen(int32 EntryPoint);
    void Play__DelegateSignature();
};

#endif
