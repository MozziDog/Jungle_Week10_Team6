#include "SkeletalMeshSceneProxy.h"
#include "Component/SkeletalMeshComponent.h"

void FSkeletalMeshSceneProxy::UpdateShadow() 
{
    UMeshComponent* Mesh = GetMeshComponent();
    bCastShadow          = Mesh ? Mesh->ShouldCastShadow() : true;
}

UMeshComponent* FSkeletalMeshSceneProxy::GetMeshComponent() const
{
    return static_cast<USkeletalMeshComponent*>(Owner);
}