#define USE_WINRT 0
#if USE_WINRT
#	include <winrt/base.h>
#endif

#include <Thing.h>

int main()
{
#if USE_WINRT
	winrt::com_ptr<IThing> pThing;
	if (SUCCEEDED(CreateThing(IID_PPV_ARGS(&pThing))))
	{
		pThing->Hello();
	}
#else
	IThing* pThing = nullptr;
	if (SUCCEEDED(CreateThing(IID_PPV_ARGS(&pThing))))
	{
		pThing->Hello();
		pThing->Release();
	}
#endif
}
