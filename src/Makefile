CC=g++
CF=-O0
INCLUDES=

SRCS=$(shell find . -name '*.cpp')
OBJS=$(SRCS:.cpp=.o)
EXES=$(OBJS:.o=)

all : $(OBJS) $(EXES)

.PHONY : clean

% : %.o
	$(CC) $(CF) -o $@ $< $(INCLUDES)

%.o : %.cpp
	$(CC) $(CF) -c $<

clean :
	rm -f $(OBJS) $(EXES)
