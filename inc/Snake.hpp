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

class Snake {

public:
    Snake(int screenLength);
    ~Snake();

    void moveSnake();
    void extendTail();
    bool checkCollisions();
    void increase_length();
    void createSnake();

    int getLength();
    std::vector<std::pair<int, int>> getBody();
    snakeDirection getHeadDirection();
    snakeDirection getTailDirection();

private:
    int length, screenLength;
    snakeDirection headDirection;
    snakeDirection tailDirection;
    std::vector<std::pair<int, int>> body; //(x1, y1),....(xn, yn) .push_back(std::make_pair(1,2));
};

#endif //NIBBLER_SNAKE_HPP
