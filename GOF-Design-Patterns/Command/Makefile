CXX = g++
CFLAGS = -Wall
LDFLAGS = 

target = _main
srcs = main.cpp Command.cpp ConcreteCommand1.cpp ConcreteCommand2.cpp Invoker.cpp Receiver.cpp
objs = $(srcs:.cpp=.o)
headers = $(wildcard *.h)


.PHONY: all
all: $(target)

$(target): $(objs) $(headers) FORCE
	$(CXX) -o $@ $(objs) $(LDFLAGS)

$(objs):%.o:%.cpp
	$(CXX) $(CFLAGS) -c -o $@ $<

.PHONY: FORCE
FORCE: 

clean:
	rm -f $(target) *.o

