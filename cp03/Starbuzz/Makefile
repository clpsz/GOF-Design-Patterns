CXX = g++
CFLAGS = -Wall
LDFLAGS = 

target = _main
srcs = main.cpp
objs = $(srcs:.cpp=.o)

.PHONY: all
all: $(target)

$(target): $(objs) FORCE
	$(CXX) $(LDFLAGS) -o _main $(srcs)

$(objs):%.o:%.cpp
	$(CXX) $(CFLAGS) -c -o $@ $<

.PHONY: FROCE
FORCE:  

clean:
	rm -f _main *.o

