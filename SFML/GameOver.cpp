//
// Created by Anastasiia ORJI on 2019-01-22.
//

#include "GameOver.hpp"
// #include "../inc/Exception.hpp"

GameOver::GameOver(int windowSize):windowSize(windowSize){}
GameOver::~GameOver() = default;

void
GameOver::init(){
    font.loadFromFile("SFML/font/Spantaran.otf");
    // if (!font.loadFromFile("font/Spantaran.otf"))
        // throw FontIsNotFound();
    text.setFont(font);
    text.setFillColor(sf::Color(49, 149, 20));
    text.setString("Game is Over");
    text.setCharacterSize(windowSize/strlen("Game is Over"));
//center text
    sf::FloatRect textRect = text.getLocalBounds();
    text.setOrigin(textRect.left + textRect.width/2.0f,
                      textRect.top + textRect.height/2.0f);
    text.setPosition((windowSize + windowSize/3)/2.0f, windowSize/2);

}

void
GameOver::draw(sf::RenderWindow & window){
    window.clear();
    window.draw(text);
    window.display();
}
