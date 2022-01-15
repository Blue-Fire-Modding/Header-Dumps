#ifndef UE4SS_SDK_Sealed_Land_Teleport_HPP
#define UE4SS_SDK_Sealed_Land_Teleport_HPP

class ASealed_Land_Teleport_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void Credits();
    void Finish();
    void ExecuteUbergraph_Sealed_Land_Teleport(int32 EntryPoint, UCreditsVoidMasterUI_C* CallFunc_Create_ReturnValue, Finish__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, TArray<AGlobal_Controller_C*>& CallFunc_GetAllActorsOfClass_OutActors, AGlobal_Controller_C* CallFunc_Array_Get_Item, ShowCredits__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1);
}

#endif
