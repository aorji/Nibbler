//
// Created by Anastasiia ORJI on 2019-01-22.
//

#include "SideBar.hpp"

SideBar::SideBar(int windowSize, Game & game):windowSize(windowSize), game(game) {
    if (!font.loadFromFile("font/Spantaran.otf")) {
        //ERROR
    }
}
SideBar::~SideBar() = default;

void
SideBar::init( ){
    if (!font.loadFromFile("font/Spantaran.otf")){
        //ERROR
    }
    sideBar[0].setFont(font);
    sideBar[0].setFillColor(sf::Color::White);
    sideBar[0].setCharacterSize(26);
    sideBar[0].setPosition(windowSize + 10,
                        windowSize/(NUMBER_OF_SIDEBAR_FIELD * 2));

    sideBar[1].setFont(font);
    sideBar[1].setFillColor(sf::Color::White);
    sideBar[1].setCharacterSize(26);
    sideBar[1].setPosition(windowSize + 10,
                        windowSize/(NUMBER_OF_SIDEBAR_FIELD * 2) * 2);

    sideBar[2].setFont(font);
    sideBar[2].setFillColor(sf::Color::White);
    sideBar[2].setCharacterSize(26);
    sideBar[2].setPosition(windowSize + 10,
                        windowSize/(NUMBER_OF_SIDEBAR_FIELD * 2) * 3);
}
void
SideBar::update( ) {
    std::string score = std::to_string(game.getScore());
    std::string level = std::to_string(game.getLevel());

    sideBar[0].setString("Score " + score);
    sideBar[1].setString("Level " + level);
    sideBar[2].setString("MaxScore " + game.getMaxScore());
}

void
SideBar::draw(sf::RenderWindow & window){
    for(auto i = 0; i < NUMBER_OF_SIDEBAR_FIELD; ++i)
    	window.draw(sideBar[i]);
}

