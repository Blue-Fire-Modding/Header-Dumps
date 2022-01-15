#ifndef UE4SS_SDK_AmuletSlot_HPP
#define UE4SS_SDK_AmuletSlot_HPP

class UAmuletSlot_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_0;
    bool Used;
    TEnumAsByte<Spirits::Type> Amulet;

    void Construct();
    void ExecuteUbergraph_AmuletSlot(int32 EntryPoint, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, FSpiritsInfo CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
}

#endif
