//
// Created by Anastasiia ORJI on 2019-01-15.
//

#ifndef NIBBLER_SNAKE_HPP
#define NIBBLER_SNAKE_HPP
#include <vector>
#include <cstdlib>
#include <ctime>

enum snakeDirection {
    Top,
    Bottom,
    Left,
    Right
};

class Snake {

public:
    Snake();
    ~Snake();

    void moveSnake();
    void extendTail();
    bool checkCollisions();
    void increase_length();
    void createSnake();

    snakeDirection getHeadDirection();
    snakeDirection getTailDirection();
    int getLength();

private:
    int length;
    snakeDirection headDirection;
    snakeDirection tailDirection;
    std::vector<std::pair<int, int>> body; //(x1, y1),....(xn, yn) .push_back(std::make_pair(1,2));
};

#endif //NIBBLER_SNAKE_HPP
