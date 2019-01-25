//
// Created by Anastasiia ORJI on 2019-01-22.
//

#ifndef NIBBLER_SIDEBAR_HPP
#define NIBBLER_SIDEBAR_HPP

#include <string>
#include <fstream>
#include "SFML.hpp"

#define NUMBER_OF_SIDEBAR_FIELD 8

class SideBar {

public:
    SideBar(Game & game);
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
