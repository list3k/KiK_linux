all: KolkoIKrzyzyk runTest

KolkoIKrzyzyk: main.o MyGame.o
	g++ main.o MyGame.o -o KolkoIKrzyzyk -lsfml-graphics -lsfml-window -lsfml-system

runTest: main_test.o MyGame.o
	g++ main_test.o MyGame.o -o runTest -L/usr/local/include/gtest -lgtest -lgtest_main -lpthread -lsfml-graphics -lsfml-window -lsfml-system

main_test.o: main_test.cpp
	g++ -std=c++11 -c main_test.cpp

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

MyGame.o: MyGame.cpp MyGame.h
	g++ -std=c++11 -c MyGame.cpp MyGame.h

clean: 
	rm -rf *.o *.gch KolkoIKrzyzyk runTest




