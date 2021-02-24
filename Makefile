compile:
	g++ -std=c++20 templates.cpp -c
	g++ -std=c++20 TextHandler.cpp -c

all: compile
	g++ -std=c++20 main.cpp *.o && ./a.exe