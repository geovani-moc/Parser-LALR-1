all:
	g++ main.cpp tools.cpp -std=c++11 -static -Wall -pedantic -O3

teste:
	./a.out < in 1> out 2> err