#ifndef UE4SS_SDK_NPC_Von_HPP
#define UE4SS_SDK_NPC_Von_HPP

class ANPC_Von_C : UNPC_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* StaticMesh1;
    UStaticMeshComponent* StaticMesh;
    UVon_AnimBP_C* AnimBP;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_NPC_Von(int32 EntryPoint, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UVon_AnimBP_C* K2Node_DynamicCast_AsVon_Anim_BP, bool K2Node_DynamicCast_bSuccess);
}

#endif
