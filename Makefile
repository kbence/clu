.PHONY: all

CLU_SRC = $(shell find src -name "*.cpp")
CLU_OBJ = $(CLU_SRC:.cpp=.o)

all: clu

clean:
	rm -f clu $(CLU_OBJ)

clu: $(CLU_OBJ)
	g++ $^ -o $@

%.o: %.cpp
	g++ -c -std=c++11 $< -o $@
