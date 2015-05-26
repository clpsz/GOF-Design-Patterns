CXX = g++
CFLAGS = -Wall
LDFLAGS = 

target = _main
srcs = main.cpp AbstractProductA.cpp AbstractProductB.cpp \
    ProductA1.cpp ProductA2.cpp ProductB1.cpp ProductB2.cpp \
    AbstractFactory.cpp ConcreteFactory1.cpp ConcreteFactory2.cpp
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

