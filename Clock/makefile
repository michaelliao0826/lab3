main: clock.o main.o
	g++ -o clock main.o clock.o

BMI.o: clock.cpp clock.h
	g++ -c clock.cpp

main.o: main.cpp clock.h
	g++ -c main.cpp

clean:
	rm clock *.o
