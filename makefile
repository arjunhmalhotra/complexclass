all: main1 main2 main3 main4

main1: project7.o Complex.o
	g++ -std=c++11 -Wall -o main1 Complextests.o Complex.o

main2: terminal1.o Complex.o
	g++ -std=c++11 -Wall -o main2 terminal1.o Complex.o

main3: terminal2.o Complex.o
	g++ -std=c++11 -Wall -o main3 terminal2.o Complex.o

main4: terminal3.o Complex.o
	g++ -std=c++11 -Wall -o main4 terminal3.o Complex.o

project7.o: project7.cpp Complex.h
	g++ -std=c++11 -Wall -c Complextests.cpp

terminal1.o: terminal1.cpp Complex.h
	g++ -std=c++11 -Wall -c terminal1.cpp

terminal2.o: terminal2.cpp Complex.h
	g++ -std=c++11 -Wall -c terminal2.cpp

terminal3.o: terminal2.cpp Complex.h
	g++ -std=c++11 -Wall -c terminal3.cpp

Complex.o: Complex.cpp Complex.h
	g++ -std=c++11 -Wall -c Complex.cpp

