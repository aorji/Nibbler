//
// Created by Anastasiia ORJI on 2019-01-18.
//

#ifndef NIBBLER_SFML_HPP
#define NIBBLER_SFML_HPP

#include <SFML/Graphics.hpp>

class Sfml {
public:
    Sfml(int windowSize, int pixelSize);
    ~Sfml();
    void init(char **map);
//    void destroy();
//    void draw(char **map);

    sf::RenderWindow & getWindow();
private:
    int windowSize;
    int pixelSize;
    sf::RenderWindow window;
    sf::RectangleShape rectangle;
};

#endif //NIBBLER_SFML_HPP
