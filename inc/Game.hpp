//
// Created by Anastasiia ORJI on 2019-01-16.
//

#ifndef NIBBLER_GAME_HPP
#define NIBBLER_GAME_HPP

#include <vector>
#include <iostream>

class Game{
public:
    Game( long screenLength );
    ~Game();
    void update(std::vector<std::pair<int, int>> snake);
    void createMap();
    void destroyMap();
    void resetMap();
    void printMap();

private:
    Game();
    long screenLength;
    char **map;

};

#endif //NIBBLER_GAME_HPP
