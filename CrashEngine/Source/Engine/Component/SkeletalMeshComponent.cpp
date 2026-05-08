#include "Component/SkeletalMeshComponent.h"
#include "Render/Scene/Proxies/Primitive/SkeletalMeshSceneProxy.h"
#include "Object/ObjectFactory.h"

IMPLEMENT_CLASS(USkeletalMeshComponent, USkinnedMeshComponent)

FPrimitiveProxy* USkeletalMeshComponent::CreateSceneProxy()
{
    return new FSkeletalMeshSceneProxy(this);
}