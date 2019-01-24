//
// Created by Anastasiia ORJI on 2019-01-18.
//

#ifndef NIBBLER_SFML_HPP
#define NIBBLER_SFML_HPP

#include <SFML/Graphics.hpp>
#include "Menu.hpp"
#include "Game.hpp"
#include "GameOver.hpp"
#include "SideBar.hpp"

class Sfml {
public:
    Sfml(int windowSize, int squareSize);
    ~Sfml();
    void draw(char **map);
    void execute(Game &game);

    void drawSnake(int i, int j);
    void drawSnakeHead(int i, int j);
    void drawBarriers(int i, int j);
    void drawFood(int i, int j);
    void drawBg(int i, int j);

private:
    int windowSize;
    int squareSize;
    int gameAreaSize = 20;
    sf::RenderWindow window;
    sf::RectangleShape rectangle;
};

#endif //NIBBLER_SFML_HPP
