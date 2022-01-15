#ifndef UE4SS_SDK_Save_WorldStats_HPP
#define UE4SS_SDK_Save_WorldStats_HPP

class USave_WorldStats
{
    bool CurrentLastCheckPoint_43_C5BEBFCD4803BE8A33ADC7BB805F1659;
    TEnumAsByte<CheckPoints::Type> LastCheckpoint_23_FC78BBD844822F9EFD6D35A326CE273E;
    TArray<TEnumAsByte<CheckPoints::Type>> UnlockedCheckpoints_21_6144C2C6487E06CE3693C88352E206EE;
    TArray<TEnumAsByte<StreamingChunks::Type>> VisitedAreas_38_6679BEEF461385E0A7E7F89324644F3E;
    FCheckpointInformation CheckpointInformation_26_C26C68704FEF4AEA139C42BE5D0CC7E5;
    int32 Difficulty_41_05307CF5414F7F60F3190D964F157850;
}

#endif
