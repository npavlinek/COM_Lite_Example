#include <cstdio>

#include <Thing.h>

int main()
{
	IThing* pThing = nullptr;
	if (SUCCEEDED(CreateThing(IID_PPV_ARGS(&pThing))))
	{
		pThing->Hello();
		pThing->Release();
	}
}
