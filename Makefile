.PHONY: all

all: clu

clu: src/clu.cpp
	g++ -o $@ $<

%.o: %.cpp
	g++ -c -o $@ $<
