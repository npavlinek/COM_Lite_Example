all: Thing.dll include\Thing.h test\client.exe

Thing.dll: src\Thing.cpp include\Thing.h
	$(CXX) -nologo -W4 -std:c++20 -O2 -Iinclude $(filteri %.cpp,$**) -LD -Fe:$* ole32.lib

include\Thing.h: src\_Thing_COM.h src\_Thing.h
	copy src\_Thing_COM.h + src\_Thing.h $@

test\client.exe: test\main.cpp
	$(CXX) -nologo -W4 -std:c++20 -O2 -Iinclude $(filteri %.cpp,$**) -Fe:$* Thing.lib

src\_Thing_COM.h: src\Thing.idl
	midl -nologo -W3 -define_guids -header $@ $**

clean:
	del *.dll *.exp *.lib *.obj dlldata.c Thing_i.c Thing_p.c src\_Thing_COM.h
