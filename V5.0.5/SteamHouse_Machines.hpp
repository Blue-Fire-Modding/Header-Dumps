#ifndef UE4SS_SDK_SteamHouse_Machines_HPP
#define UE4SS_SDK_SteamHouse_Machines_HPP

class ASteamHouse_Machines_C : AMechanics_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard;
    bool DebugMode;
    TArray<ASteamHouseActioner_C*> Hits;
    int32 Amount;
    AAreaTransition_Elevator_C* Elevator;
    ANPC_Mira_C* Mira;

    void Count(bool Silent);
    void ReceiveBeginPlay();
    void Update Quest();
    void ExecuteUbergraph_SteamHouse_Machines(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, UMessage_PopUp_C* CallFunc_Create_ReturnValue, UMessage_PopUp_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Variable_2, bool K2Node_CustomEvent_Silent, FText CallFunc_MakeLiteralText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, const FText Temp_text_Variable, int32 CallFunc_Array_Length_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable_3, int32 CallFunc_Subtract_IntInt_ReturnValue_1, FString CallFunc_Conv_IntToString_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FText CallFunc_Conv_StringToText_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, FString CallFunc_CheckState_Same_ID_3, bool CallFunc_CheckState_Used_3, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_4);
}

#endif
