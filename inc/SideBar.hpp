//
// Created by Anastasiia ORJI on 2019-01-22.
//

#ifndef NIBBLER_SIDEBAR_HPP
#define NIBBLER_SIDEBAR_HPP

#include <SFML/Graphics.hpp>
#include "Game.hpp"
#include <string>
#include <fstream>

#define NUMBER_OF_SIDEBAR_FIELD 3

class SideBar {

public:
    SideBar(int windowSize, Game & game);
    ~SideBar();

    void init();
    void update();
    void draw(sf::RenderWindow & window);

private:
    sf::Text sideBar[NUMBER_OF_SIDEBAR_FIELD];
    sf::Font font;
    int windowSize;
    Game & game;
};

#endif //NIBBLER_SIDEBAR_HPP
