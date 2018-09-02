CXX = clang++
OBJS =  prefix_calculator.o tests.o

all: main

main: $(OBJS)
	$(CXX) $(OBJS)  -o testprefix

clean:
	$(RM) main $(OBJS) core *~

