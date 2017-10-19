
output: main_code.o temporal.o
	g++ -o temp main_code.o temporal.o

main_code.o: main_code.cpp
	g++ -c main_code.cpp 
temporal.o: temporal.cpp temporal.h
	g++ -c temporal.cpp 
clean: 
	rm *.o temp
