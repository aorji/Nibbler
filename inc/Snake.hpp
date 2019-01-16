//
// Created by Anastasiia ORJI on 2019-01-15.
//

#ifndef NIBBLER_SNAKE_HPP
#define NIBBLER_SNAKE_HPP
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iostream>

enum snakeDirection {
    Top,
    Bottom,
    Left,
    Right
};

enum turnKey {
    UpArrow, //38
    DownArrow, //40
    LeftArrow, //37
    RightArrow //39
};

class Snake {

public:
    explicit Snake(unsigned screenLength);
    ~Snake();

    void createSnake();
    void extendTail();
    void moveSnake(turnKey key);
    bool headBodyCollision();
    bool borderHeadCollision();

    void showBodyCoordinates();

    int getLength();
    snakeDirection getHeadDirection();
    snakeDirection getTailDirection();
    std::vector<std::pair<int, int>> getBody();

private:
    Snake();
    unsigned length;
    int screenLength;
    snakeDirection headDirection;
    snakeDirection tailDirection;
    std::vector<std::pair<int, int>> body; //(x1, y1),....(xn, yn) .push_back(std::make_pair(1,2));
};

#endif //NIBBLER_SNAKE_HPP
