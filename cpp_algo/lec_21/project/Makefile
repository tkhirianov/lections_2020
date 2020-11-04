all: main.exe

main.exe: main.o mylib.o
	g++ -o main.exe main.o mylib.o

main.o: main.cpp mylib.h
	g++ -c main.cpp

mylib.o: mylib.cpp mylib.h
	g++ -c mylib.cpp

clean:
	rm *.o main.exe
