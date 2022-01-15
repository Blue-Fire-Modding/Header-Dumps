#ifndef UE4SS_SDK_BP_CentryWaveSpawner_Forest_HPP
#define UE4SS_SDK_BP_CentryWaveSpawner_Forest_HPP

class ABP_CentryWaveSpawner_Forest_C : UBP_CentryWaveSpawner_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CentryWaveSpawner_Forest(int32 EntryPoint);
}

#endif
