
#ifndef GAME_HPP
#define GAME_HPP

#include "Snake.hpp"
#include <string>

class Game{
public:
    Game( long screenLength );
    ~Game();

    bool update(char c);
    void createMap();
    void destroyMap();
    void fillMap();
    void printMap();
    void pushSnake(char c);

    void createFood();
    void createBarriers(long size);

    bool checkCollisions();

    void changeLevel();

    char **getMap();
    int getLevel();

private:
    Game();
    long screenLength;
    int score;
    int level;
    char **map;
    Snake snake;

};

#endif //NIBBLER_GAME_HPP
