CXX = g++
CFLAGS = -Wall
LDFLAGS = 

target = _main
srcs = main.cpp
objs = $(srcs:.cpp=.o)
headers = $(wildcard *.h)


.PHONY: all
all: $(target)

$(target): $(objs) $(headers)
	$(CXX) $(LDFLAGS) -o _main $(objs)

$(objs):%.o:%.cpp
	$(CXX) $(CFLAGS) -c -o $@ $<

clean:
	rm -f _main *.o

