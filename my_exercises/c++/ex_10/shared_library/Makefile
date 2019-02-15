EXE = exe
CXX = c++
LIBSRC = source/hello.cc
LIBOBJ = $(LIBSRC:.cc=.o)
CXXFLAGS = -I include -std=c++11
LFLAGS = -lhello -L shared_lib -Wl,-rpath,shared_lib

all: $(EXE)

install: shared_lib/libhello.so

$(EXE): shared_lib/libhello.so main.cc
	$(CXX) main.cc -o $@ $(CXXFLAGS) $(LFLAGS)

    shared_lib/libhello.so: $(LIBOBJ)
	mkdir shared_lib
	$(CXX) -shared -o $@ $^

%.o:%.cc
	$(CXX) -fpic -o $@ -c $< -I include

src/hello.o: include/hello.h

clean:
	@rm -rf *~ */*~ shared_lib main.o source/*.o

.PHONY: clean all install
