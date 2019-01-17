//
// Created by Anastasiia ORJI on 2019-01-16.
//

#ifndef NIBBLER_GAME_HPP
#define NIBBLER_GAME_HPP

#include "Snake.hpp"
#include <string>

class Game{
public:
    Game( long screenLength );
    ~Game();
    void update(std::string c);
    void createMap();
    void destroyMap();
    void resetMap();
    void printMap();

    void createFood();
    void createBarriers();

private:
    Game();
    long screenLength;
    char **map;
    Snake snake;

};

#endif //NIBBLER_GAME_HPP
