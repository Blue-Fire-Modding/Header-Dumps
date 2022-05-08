#ifndef UE4SS_SDK_ChangeSpeed_HPP
#define UE4SS_SDK_ChangeSpeed_HPP

class UChangeSpeed_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float NewSpeed;
    bool Fly;
    FVector2D RandomVariation;

    void ReceiveExecute(class AActor* OwnerActor);
    void ExecuteUbergraph_ChangeSpeed(int32 EntryPoint);
};

#endif
