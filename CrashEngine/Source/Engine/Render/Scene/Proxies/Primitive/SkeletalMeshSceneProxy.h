#pragma once
#include "MeshSceneProxy.h"

class USkeletalMeshComponent;

struct FSkeletalDebugBone
{
    FMatrix WorldMatrix = FMatrix::Identity;
    int32   ParentIndex = -1;
    FColor  Color       = FColor(255, 255, 255);
};

struct FSkeletalDebugInstance
{
    TArray<FSkeletalDebugBone> Bones;
};

class FSkeletalMeshSceneProxy : public FMeshSceneProxy {
public:
    FSkeletalMeshSceneProxy(USkeletalMeshComponent* InComponent);
	void UpdateShadow() override;
    void UpdateLOD(uint32 LODLevel) override { /* SkeletalMesh does not support LOD for now */ };
	void BuildSkeletalDebugInstance(FSkeletalDebugInstance& OutInstance) const;

protected:
	UMeshComponent* GetMeshComponent() const override;
    void RebuildSectionRenderData() override;

private:
	FSkeletalDebugInstance DebugInstance;
};