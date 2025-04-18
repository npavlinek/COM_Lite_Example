#include <atomic>
#include <cstdio>

#include <Thing.h>

class Thing : public IThing
{
public:
	// IUnknown
	IFACEMETHODIMP QueryInterface(REFIID riid, void** ppvObject);
	IFACEMETHODIMP_(ULONG) AddRef();
	IFACEMETHODIMP_(ULONG) Release();

	// IThing
	IFACEMETHODIMP Hello();

protected:
	std::atomic<ULONG> m_refCount;
};

// IUnknown {{{
IFACEMETHODIMP Thing::QueryInterface(REFIID riid, void** ppvObject)
{
	if (ppvObject == nullptr)
	{
		return E_INVALIDARG;
	}

	*ppvObject = nullptr;
	if (riid == IID_IUnknown || riid == IID_IThing)
	{
		*ppvObject = this;
		AddRef();
		return S_OK;
	}

	return E_NOINTERFACE;
}

IFACEMETHODIMP_(ULONG) Thing::AddRef()
{
	return ++m_refCount;
}

IFACEMETHODIMP_(ULONG) Thing::Release()
{
	const auto newRefCount = --m_refCount;
	if (newRefCount == 0)
	{
		delete this;
	}
	return newRefCount;
}
// }}}

// IThing {{{
IFACEMETHODIMP Thing::Hello()
{
	puts("Hello, world!");
	return S_OK;
}
// }}}

HRESULT CreateThing(REFIID riid, void** ppThing)
{
	if (ppThing == nullptr)
	{
		return E_INVALIDARG;
	}

	*ppThing = new Thing;
	if (*ppThing == nullptr)
	{
		return E_OUTOFMEMORY;
	}

	return static_cast<IThing*>(*ppThing)->QueryInterface(riid, ppThing);
}
