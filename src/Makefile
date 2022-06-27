cxx			:= clang++
cxxflags	:= -std=c++20 -fno-signed-zeros -fsanitize=address -Ofast -lncurses -Wall

src			:= main.cpp output.cpp
hdr			:= output.hpp

exec		:= textoverse

all: $(exec)

$(exec): $(builddir) $(src:.cpp=.o) $(src) $(hdr) Makefile
	$(cxx) -o $@ $(src:.cpp=.o) $(cxxflags)
	chmod +x $(exec)

clean:
	rm -rf *.o $(exec)
