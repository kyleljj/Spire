#include "VRContext.h"

namespace RealtimeEngine
{
	class VRContext : public IVRContext
	{
	public:
		virtual void Initialize() override
		{

		}
		virtual VREyeView GetEyeView(int /*eye*/) override
		{
			return VREyeView();
		}
		virtual void SetEyeRenderResult(int /*eye*/, GL::Texture2D /*texColor*/, GL::Texture2D /*texDepth*/) override
		{

		}
		virtual void PresentFrame() override
		{

		}
	};

	IVRContext * RealtimeEngine::CreateVRContext()
	{
		return new VRContext();
	}
	void DeleteVRContext(IVRContext * ctx)
	{
		delete ctx;
	}
}