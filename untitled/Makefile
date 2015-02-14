all: list
list: main.o back.o
	g++ -std=c++11 main.o back.o -o list
main.o: main.cpp
	g++ -std=c++11 -c main.cpp
back.o: back.cpp
	g++ -std=c++11 -c back.cpp