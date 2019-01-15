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
    bool checkCollisions();
    void increase_length();

    snakeDirection getDirection();
    int getLength();

private:
    int length;
    snakeDirection direction;
    std::vector<std::pair<int, int>> body; //(x1, y1),....(xn, yn) .push_back(std::make_pair(1,2));
};

#endif //NIBBLER_SNAKE_HPP
