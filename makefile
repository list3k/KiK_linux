all: KolkoIKrzyzyk

KolkoIKrzyzyk: main.o MyGame.o
	g++ main.o MyGame.o -o KolkoIKrzyzyk -lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp
	g++ -c main.cpp

MyGame.o: MyGame.cpp MyGame.h
	g++ -c MyGame.cpp MyGame.h

clean: rm -rf *o KolkoIKrzyzyk
