//
// Created by Anastasiia ORJI on 2019-01-18.
//

#include <SFML.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

Sfml::Sfml(int windowSize, int pixelSize): windowSize(windowSize),
                                            pixelSize(pixelSize),
                                            window(sf::VideoMode(windowSize, windowSize), "Nibbler"),
                                            rectangle(sf::Vector2f(pixelSize, pixelSize)){}
Sfml::~Sfml() = default;

void
Sfml::init(char **map){
////    sf::RenderWindow window(sf::VideoMode(windowSize, windowSize), "Nibbler");
//    sf::RectangleShape rectangle(sf::Vector2f(pixelSize, pixelSize));
std::cout << windowSize +pixelSize << map[0][0];
}

//void
//Sfml::destroy(){}
//
//void
//Sfml::draw(char **map){
//
//}


sf::RenderWindow &
Sfml::getWindow() { return window; }

