//
// Created by Anastasiia ORJI on 2019-01-18.
//

#ifndef NIBBLER_SFML_HPP
#define NIBBLER_SFML_HPP

#include <SFML/Graphics.hpp>

class Sfml {
public:
    Sfml();
    ~Sfml();
    void init(char **map);
    void destroy();
    void draw(char **map);
private:
    int screenSize;
};

#endif //NIBBLER_SFML_HPP
