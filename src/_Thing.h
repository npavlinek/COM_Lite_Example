#ifndef THING_FACTORY_H
#define THING_FACTORY_H

#ifdef __cplusplus
extern "C" {
#endif

__declspec(dllexport) HRESULT CreateThing(REFIID riid, void** ppThing);

#ifdef __cplusplus
}
#endif

#endif /* THING_FACTORY_H */
