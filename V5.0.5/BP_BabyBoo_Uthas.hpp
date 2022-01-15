#ifndef UE4SS_SDK_BP_BabyBoo_Uthas_HPP
#define UE4SS_SDK_BP_BabyBoo_Uthas_HPP

class ABP_BabyBoo_Uthas_C : UBP_BabyBoo_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BabyBoo_Uthas(int32 EntryPoint);
}

#endif
