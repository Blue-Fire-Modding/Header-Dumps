#ifndef UE4SS_SDK_Paper2D_HPP
#define UE4SS_SDK_Paper2D_HPP

#include "Paper2D_enums.hpp"

class UMaterialExpressionSpriteTextureSampler : UMaterialExpressionTextureSampleParameter2D
{
    bool bSampleAdditionalTextures;
    int32 AdditionalSlotIndex;
    FText SlotDisplayName;
}

class APaperCharacter : UCharacter
{
    UPaperFlipbookComponent* Sprite;
}

class UPaperFlipbook : UObject
{
    float FramesPerSecond;
    TArray<FPaperFlipbookKeyFrame> KeyFrames;
    UMaterialInterface* DefaultMaterial;
    TEnumAsByte<EFlipbookCollisionMode::Type> CollisionSource;

    bool IsValidKeyFrameIndex(int32 Index);
    float GetTotalDuration();
    UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds);
    UPaperSprite* GetSpriteAtFrame(int32 FrameIndex);
    int32 GetNumKeyFrames();
    int32 GetNumFrames();
    int32 GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);
}

class APaperFlipbookActor : AActor
{
    UPaperFlipbookComponent* RenderComponent;
}

class UPaperFlipbookComponent : UMeshComponent
{
    UPaperFlipbook* SourceFlipbook;
    UMaterialInterface* Material;
    float PlayRate;
    uint8 bLooping;
    uint8 bReversePlayback;
    uint8 bPlaying;
    float AccumulatedTime;
    int32 CachedFrameIndex;
    FLinearColor SpriteColor;
    UBodySetup* CachedBodySetup;
    FPaperFlipbookComponentOnFinishedPlaying OnFinishedPlaying;
    void FlipbookFinishedPlaySignature();

    void Stop();
    void SetSpriteColor(FLinearColor NewColor);
    void SetPlayRate(float NewRate);
    void SetPlaybackPositionInFrames(int32 NewFramePosition, bool bFireEvents);
    void SetPlaybackPosition(float NewPosition, bool bFireEvents);
    void SetNewTime(float NewTime);
    void SetLooping(bool bNewLooping);
    bool SetFlipbook(UPaperFlipbook* NewFlipbook);
    void ReverseFromEnd();
    void Reverse();
    void PlayFromStart();
    void Play();
    void OnRep_SourceFlipbook(UPaperFlipbook* OldFlipbook);
    bool IsReversing();
    bool IsPlaying();
    bool IsLooping();
    float GetPlayRate();
    int32 GetPlaybackPositionInFrames();
    float GetPlaybackPosition();
    int32 GetFlipbookLengthInFrames();
    float GetFlipbookLength();
    float GetFlipbookFramerate();
    UPaperFlipbook* GetFlipbook();
}

class APaperGroupedSpriteActor : AActor
{
    UPaperGroupedSpriteComponent* RenderComponent;
}

class UPaperGroupedSpriteComponent : UMeshComponent
{
    TArray<UMaterialInterface*> InstanceMaterials;
    TArray<FSpriteInstanceData> PerInstanceSpriteData;

    bool UpdateInstanceTransform(int32 InstanceIndex, const FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    bool UpdateInstanceColor(int32 InstanceIndex, FLinearColor NewInstanceColor, bool bMarkRenderStateDirty);
    void SortInstancesAlongAxis(FVector WorldSpaceSortAxis);
    bool RemoveInstance(int32 InstanceIndex);
    bool GetInstanceTransform(int32 InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace);
    int32 GetInstanceCount();
    void ClearInstances();
    int32 AddInstance(const FTransform& Transform, UPaperSprite* Sprite, bool bWorldSpace, FLinearColor Color);
}

class UPaperRuntimeSettings : UObject
{
    bool bEnableSpriteAtlasGroups;
    bool bEnableTerrainSplineEditing;
    bool bResizeSpriteDataToMatchTextures;
}

class UPaperSprite : UObject
{
    TArray<UTexture*> AdditionalSourceTextures;
    FVector2D BakedSourceUV;
    FVector2D BakedSourceDimension;
    UTexture2D* BakedSourceTexture;
    UMaterialInterface* DefaultMaterial;
    UMaterialInterface* AlternateMaterial;
    TArray<FPaperSpriteSocket> Sockets;
    TEnumAsByte<ESpriteCollisionMode::Type> SpriteCollisionDomain;
    float PixelsPerUnrealUnit;
    UBodySetup* BodySetup;
    int32 AlternateMaterialSplitIndex;
    TArray<FVector4> BakedRenderData;
}

class APaperSpriteActor : AActor
{
    UPaperSpriteComponent* RenderComponent;
}

class UPaperSpriteAtlas : UObject
{
}

class UPaperSpriteBlueprintLibrary : UBlueprintFunctionLibrary
{

    FSlateBrush MakeBrushFromSprite(UPaperSprite* Sprite, int32 Width, int32 Height);
}

class UPaperSpriteComponent : UMeshComponent
{
    UPaperSprite* SourceSprite;
    UMaterialInterface* MaterialOverride;
    FLinearColor SpriteColor;

    void SetSpriteColor(FLinearColor NewColor);
    bool SetSprite(UPaperSprite* NewSprite);
    UPaperSprite* GetSprite();
}

class APaperTerrainActor : AActor
{
    USceneComponent* DummyRoot;
    UPaperTerrainSplineComponent* SplineComponent;
    UPaperTerrainComponent* RenderComponent;
}

class UPaperTerrainComponent : UPrimitiveComponent
{
    UPaperTerrainMaterial* TerrainMaterial;
    bool bClosedSpline;
    bool bFilledSpline;
    UPaperTerrainSplineComponent* AssociatedSpline;
    int32 RandomSeed;
    float SegmentOverlapAmount;
    FLinearColor TerrainColor;
    int32 ReparamStepsPerSegment;
    TEnumAsByte<ESpriteCollisionMode::Type> SpriteCollisionDomain;
    float CollisionThickness;
    UBodySetup* CachedBodySetup;

    void SetTerrainColor(FLinearColor NewColor);
}

class UPaperTerrainMaterial : UDataAsset
{
    TArray<FPaperTerrainMaterialRule> Rules;
    UPaperSprite* InteriorFill;
}

class UPaperTerrainSplineComponent : USplineComponent
{
}

class UPaperTileLayer : UObject
{
    FText LayerName;
    int32 LayerWidth;
    int32 LayerHeight;
    uint8 bHiddenInGame;
    uint8 bLayerCollides;
    uint8 bOverrideCollisionThickness;
    uint8 bOverrideCollisionOffset;
    float CollisionThicknessOverride;
    float CollisionOffsetOverride;
    FLinearColor LayerColor;
    int32 AllocatedWidth;
    int32 AllocatedHeight;
    TArray<FPaperTileInfo> AllocatedCells;
    UPaperTileSet* TileSet;
    TArray<int32> AllocatedGrid;
}

class UPaperTileMap : UObject
{
    int32 MapWidth;
    int32 MapHeight;
    int32 TileWidth;
    int32 TileHeight;
    float PixelsPerUnrealUnit;
    float SeparationPerTileX;
    float SeparationPerTileY;
    float SeparationPerLayer;
    TSoftObjectPtr<UPaperTileSet> SelectedTileSet;
    UMaterialInterface* Material;
    TArray<UPaperTileLayer*> TileLayers;
    float CollisionThickness;
    TEnumAsByte<ESpriteCollisionMode::Type> SpriteCollisionDomain;
    TEnumAsByte<ETileMapProjectionMode::Type> ProjectionMode;
    int32 HexSideLength;
    UBodySetup* BodySetup;
    int32 LayerNameIndex;
}

class APaperTileMapActor : AActor
{
    UPaperTileMapComponent* RenderComponent;
}

class UPaperTileMapComponent : UMeshComponent
{
    int32 MapWidth;
    int32 MapHeight;
    int32 TileWidth;
    int32 TileHeight;
    UPaperTileSet* DefaultLayerTileSet;
    UMaterialInterface* Material;
    TArray<UPaperTileLayer*> TileLayers;
    FLinearColor TileMapColor;
    int32 UseSingleLayerIndex;
    bool bUseSingleLayer;
    UPaperTileMap* TileMap;

    void SetTileMapColor(FLinearColor NewColor);
    bool SetTileMap(UPaperTileMap* NewTileMap);
    void SetTile(int32 X, int32 Y, int32 Layer, FPaperTileInfo NewValue);
    void SetLayerColor(FLinearColor NewColor, int32 Layer);
    void SetLayerCollision(int32 Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);
    void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);
    void ResizeMap(int32 NewWidthInTiles, int32 NewHeightInTiles);
    void RebuildCollision();
    bool OwnsTileMap();
    void MakeTileMapEditable();
    void GetTilePolygon(int32 TileX, int32 TileY, TArray<FVector>& Points, int32 LayerIndex, bool bWorldSpace);
    FLinearColor GetTileMapColor();
    FVector GetTileCornerPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace);
    FVector GetTileCenterPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace);
    FPaperTileInfo GetTile(int32 X, int32 Y, int32 Layer);
    void GetMapSize(int32& MapWidth, int32& MapHeight, int32& NumLayers);
    FLinearColor GetLayerColor(int32 Layer);
    void CreateNewTileMap(int32 MapWidth, int32 MapHeight, int32 TileWidth, int32 TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);
    UPaperTileLayer* AddNewLayer();
}

class UPaperTileSet : UObject
{
    FIntPoint TileSize;
    UTexture2D* TileSheet;
    TArray<UTexture*> AdditionalSourceTextures;
    FIntMargin BorderMargin;
    FIntPoint PerTileSpacing;
    FIntPoint DrawingOffset;
    int32 WidthInTiles;
    int32 HeightInTiles;
    int32 AllocatedWidth;
    int32 AllocatedHeight;
    TArray<FPaperTileMetadata> PerTileData;
    TArray<FPaperTileSetTerrain> Terrains;
    int32 TileWidth;
    int32 TileHeight;
    int32 Margin;
    int32 Spacing;
}

class UTileMapBlueprintLibrary : UBlueprintFunctionLibrary
{

    FPaperTileInfo MakeTile(int32 TileIndex, UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);
    FName GetTileUserData(FPaperTileInfo Tile);
    FTransform GetTileTransform(FPaperTileInfo Tile);
    void BreakTile(FPaperTileInfo Tile, int32& TileIndex, UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD);
}

struct UIntMargin
{
    int32 Left;
    int32 Top;
    int32 Right;
    int32 Bottom;
}

struct UPaperFlipbookKeyFrame
{
    UPaperSprite* Sprite;
    int32 FrameRun;
}

struct USpriteInstanceData
{
    FMatrix Transform;
    UPaperSprite* SourceSprite;
    FColor VertexColor;
    int32 MaterialIndex;
}

struct UPaperSpriteSocket
{
    FTransform LocalTransform;
    FName SocketName;
}

struct UPaperSpriteAtlasSlot
{
    TSoftObjectPtr<UPaperSprite> SpriteRef;
    int32 AtlasIndex;
    int32 X;
    int32 Y;
    int32 Width;
    int32 Height;
}

struct UPaperTerrainMaterialRule
{
    UPaperSprite* StartCap;
    TArray<UPaperSprite*> Body;
    UPaperSprite* EndCap;
    float MinimumAngle;
    float MaximumAngle;
    bool bEnableCollision;
    float CollisionOffset;
    int32 DrawOrder;
}

struct UPaperTileInfo
{
    UPaperTileSet* TileSet;
    int32 PackedTileIndex;
}

struct UPaperTileSetTerrain
{
    FString TerrainName;
    int32 CenterTileIndex;
}

struct UPaperTileMetadata
{
    FName UserDataName;
    FSpriteGeometryCollection CollisionData;
    uint8 TerrainMembership;
}

struct USpriteGeometryCollection
{
    TArray<FSpriteGeometryShape> Shapes;
    TEnumAsByte<ESpritePolygonMode::Type> GeometryType;
    int32 PixelsPerSubdivisionX;
    int32 PixelsPerSubdivisionY;
    bool bAvoidVertexMerging;
    float AlphaThreshold;
    float DetailAmount;
    float SimplifyEpsilon;
}

struct USpriteGeometryShape
{
    ESpriteShapeType ShapeType;
    TArray<FVector2D> Vertices;
    FVector2D BoxSize;
    FVector2D BoxPosition;
    float Rotation;
    bool bNegativeWinding;
}

struct USpriteDrawCallRecord
{
    FVector Destination;
    UTexture* BaseTexture;
    FColor Color;
}

struct USpriteAssetInitParameters
{
}

#endif
