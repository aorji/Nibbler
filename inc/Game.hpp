
#ifndef GAME_HPP
#define GAME_HPP

#include "Snake.hpp"
#include <string>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <sstream>

class Game{
public:
    Game( long screenLength );
    ~Game();

    bool update(char c);
    void createMap();
    void destroyMap();
    void fillMap();
    void printMap();
    void fillSnakeWith(char c);
    void moveSnake(char c);

    void createFood();
    void createBarriers(long size);

    bool checkCollisions();

    void changeLevel();

    char **getMap();
    int getLevel();
    int getScore();
    std::string getMaxScore();

    void updateMaxScore();
    void saveMaxScore();

private:
    Game();
    long screenLength;
    int score;
    int level;
    char **map;
    Snake snake;
    std::string maxScore;

};

#endif //NIBBLER_GAME_HPP
