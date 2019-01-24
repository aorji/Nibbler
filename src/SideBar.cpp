//
// Created by Anastasiia ORJI on 2019-01-22.
//

#include "SideBar.hpp"

SideBar::SideBar(Game & game):windowSize(1500), game(game) {
    if (!font.loadFromFile("font/Spantaran.otf")) {
        //ERROR
    }
}
SideBar::~SideBar() = default;

void
SideBar::init( ){

    sideBar[0].setFont(font);
    sideBar[0].setFillColor(sf::Color(49, 149, 20));
    sideBar[0].setCharacterSize(70);
    sideBar[0].setPosition(windowSize + 37, windowSize/(NUMBER_OF_SIDEBAR_FIELD * 2));

    sideBar[1].setFont(font);
    sideBar[1].setFillColor(sf::Color(49, 145, 20));
    sideBar[1].setCharacterSize(40);
    sideBar[1].setPosition(windowSize + 80, windowSize/(NUMBER_OF_SIDEBAR_FIELD * 2) * 2);

    sideBar[2].setFont(font);
    sideBar[2].setFillColor(sf::Color(49, 145, 20));
    sideBar[2].setCharacterSize(40);
    sideBar[2].setPosition(windowSize + 80, windowSize/(NUMBER_OF_SIDEBAR_FIELD * 2) * 3);

    sideBar[3].setFont(font);
    sideBar[3].setFillColor(sf::Color(49, 145, 20));
    sideBar[3].setCharacterSize(40);
    sideBar[3].setPosition(windowSize + 80, windowSize/(NUMBER_OF_SIDEBAR_FIELD * 2) * 4);
}
void
SideBar::update( ) {
    std::string score = std::to_string(game.getScore());
    std::string level = std::to_string(game.getLevel());

    sideBar[0].setString("NIBBLER");
    sideBar[1].setString("Score " + score);
    sideBar[2].setString("Level " + level);
    sideBar[3].setString("MaxScore " + game.getMaxScore());
}

void
SideBar::draw(sf::RenderWindow & window){
    for(auto i = 0; i < NUMBER_OF_SIDEBAR_FIELD; ++i)
    	window.draw(sideBar[i]);

}

