
#ifndef GAME_HPP
#define GAME_HPP

#include "Snake.hpp"
#include <string>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include "Exception.hpp"

class Game{
public:
    Game( int screenLength );
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
    bool checkCoordsForBarriers(int x, int y);
    bool checkCollisions();

    void changeLevel();

    char **getMap() const;
    int getLevel() const;
    int getScore() const;
    int getScreenLength() const;
    std::string getMaxScore() const;
    Snake const & getSnake() const;

    void updateMaxScore();
    void saveMaxScore();

private:
    Game();
    char **map;
    int level;
    int score;
    int screenLength;
    Snake snake;
    std::string maxScore;
};

#endif
