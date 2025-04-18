#ifndef COBJMACROS
#	define COBJMACROS
#endif
#include <Thing.h>

int main(void)
{
	IThing* pThing = NULL;
	if (SUCCEEDED(CreateThing(&IID_IThing, &pThing)))
	{
		IThing_Hello(pThing);
		IThing_Release(pThing);
	}
}
