//
// Created by Anastasiia ORJI on 2019-01-15.
//

#include "../inc/Snake.hpp"
#include <iostream>

int main(){

    std::srand(unsigned(std::time(0)));
    Snake snake(5);

    snakeDirection sd = snake.getHeadDirection();
    switch (sd) {
        case 1: //Top
            std::cout << "Top" << std::endl;
            break;
        case -1: //Bottom
            std::cout << "Bottom" << std::endl;
            break;
        case 2: //Left
            std::cout << "Left" << std::endl;
            break;
        case -2: //Right
            std::cout << "Right" << std::endl;
            break;
    }

    snake.showBodyCoordinates();

    snake.extendTail();
    std::cout << "extended"<< std::endl;
    std::cout << "length = " << snake.getLength() << std::endl;
    snake.showBodyCoordinates();

    std::cout << "move" << std::endl;
    snake.moveSnake(UpArrow);
    snake.showBodyCoordinates();

    snake.extendTail();
    std::cout << "extended"<< std::endl;
    std::cout << "length = " << snake.getLength() << std::endl;
    snake.showBodyCoordinates();

    std::cout << "move" << std::endl;
    snake.moveSnake(LeftArrow);
    snake.showBodyCoordinates();

    std::cout <<  "headBodyCollision = " << std::boolalpha << snake.headBodyCollision() << std::endl;
    std::cout <<  "borderHeadCollision = " << std::boolalpha << snake.borderHeadCollision() << std::endl;
}
