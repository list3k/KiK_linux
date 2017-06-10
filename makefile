all: KolkoIKrzyzyk

KolkoIKrzyzyk: main.o MyGame.o
	g++ main.o MyGame.o -o KolkoIKrzyzyk -lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

MyGame.o: MyGame.cpp MyGame.h
	g++ -std=c++11 -c MyGame.cpp MyGame.h

clean: 
	rm -rf *.o *.gch KolkoIKrzyzyk
