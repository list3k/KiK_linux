#ifndef MYGAME_H
#define MYGAME_H

#include "SFML/Graphics.hpp"
#include <vector>
#include <iostream>
#include <algorithm>

class MyGame
{
public:
	MyGame();
	void play();
	
	void drawBoard(sf::RenderWindow &gameWindow);
	void drawSlot(sf::RenderWindow &gameWindow, int symbol, int x_pos, int y_pos);
	void drawWinScene(sf::RenderWindow &gameWindow, int side);
	bool isWinner(std::vector<std::vector<int> > &gameBoard, int side);
	bool handleClick(std::vector<std::vector<int> > &gameBoard, int side, int x_axis, int y_axis);
//	bool isDraw(std::vector<std::vector<int> > &gameBoard, int side);

private:
	sf::RenderWindow gameWindow;
	std::vector<std::vector<int> > gameBoard;
	
};

#endif
