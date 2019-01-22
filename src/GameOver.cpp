//
// Created by Anastasiia ORJI on 2019-01-22.
//

#include "GameOver.hpp"

GameOver::GameOver(int windowSize):windowSize(windowSize){}
GameOver::~GameOver() = default;

void
GameOver::init(){
    if (!font.loadFromFile("font/Spantaran (DEMO).otf")){
        //EXEPTION
    }
    text.setFont(font);
    text.setFillColor(sf::Color(49, 149, 20));
    text.setString("Game is Over");
    text.setCharacterSize(windowSize/strlen("Game is Over"));
//center text
    sf::FloatRect textRect = text.getLocalBounds();
    text.setOrigin(textRect.left + textRect.width/2.0f,
                      textRect.top + textRect.height/2.0f);
    text.setPosition(windowSize/2.0f, windowSize/2);

}
//
//void
//GameOver::drawBg(int i, int j){
//    sf::RectangleShape rectangle.setPosition(j * squareSize, i * squareSize);
//    if ((i % 2 && j % 2) || (!(i % 2) && !(j % 2)))
//        rectangle.setFillColor(sf::Color(49, 149, 20));
//    else
//        rectangle.setFillColor(sf::Color(49, 145, 20));
//    window.draw(rectangle);
//}

void
GameOver::draw(sf::RenderWindow & window){
    window.clear();
    window.draw(text);
    window.display();
}
