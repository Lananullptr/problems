all: list
list: main.o back.o
	g++ main.o back.o -o list
main.o: main.cpp
	g++ -c main.cpp
back.o: back.cpp
	g++ -c back.cpp