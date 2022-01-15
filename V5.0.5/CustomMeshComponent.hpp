#ifndef UE4SS_SDK_CustomMeshComponent_HPP
#define UE4SS_SDK_CustomMeshComponent_HPP

class UCustomMeshComponent : UMeshComponent
{

    bool SetCustomMeshTriangles(const TArray<FCustomMeshTriangle>& Triangles);
    void ClearCustomMeshTriangles();
    void AddCustomMeshTriangles(const TArray<FCustomMeshTriangle>& Triangles);
}

struct UCustomMeshTriangle
{
    FVector Vertex0;
    FVector Vertex1;
    FVector Vertex2;
}

#endif
