#include "Render/Execute/Registry/RenderPassTypes.h"
#include "Render/Execute/Passes/Editor/SkeletalDebugPass.h"
#include "Render/Execute/Context/RenderPipelineContext.h"
#include "Render/Submission/Command/DrawCommandList.h"
#include "Render/Submission/Command/BuildDrawCommand.h"
#include "Render/Scene/Proxies/Primitive/PrimitiveProxy.h"

void FSkeletalDebugPass::PrepareInputs(FRenderPipelineContext& Context)
{

}

void FSkeletalDebugPass::PrepareTargets(FRenderPipelineContext& Context)
{
	ID3D11RenderTargetView* RTV = Context.GetViewportRTV();
	ID3D11DepthStencilView* DSV = Context.GetViewportDSV();
	Context.Context->OMSetRenderTargets(1, &RTV, DSV);
}