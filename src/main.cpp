//
// Created by Anastasiia ORJI on 2019-01-15.
//

#include "../inc/Snake.hpp"
#include "../inc/Game.hpp"
#include <iostream>

int main(){
Game game(11);


    Snake snake(11);

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
    game.update(snake.getBody());
    game.printMap();
//    snake.showBodyCoordinates();

    snake.extendTail();
    std::cout << "extended"<< std::endl;
    std::cout << "length = " << snake.getLength() << std::endl;
    game.update(snake.getBody());
    game.printMap();
//    snake.showBodyCoordinates();

    std::cout << "move Up" << std::endl;
    snake.moveSnake(UpArrow);
    std::cout << "length = " << snake.getLength() << std::endl;
    game.update(snake.getBody());
    game.printMap();
//    snake.showBodyCoordinates();

    snake.extendTail();
    std::cout << "extended"<< std::endl;
    std::cout << "length = " << snake.getLength() << std::endl;
    game.update(snake.getBody());
    game.printMap();
//    snake.showBodyCoordinates();

    std::cout << "moveLeft" << std::endl;
    snake.moveSnake(LeftArrow);
    std::cout << "length = " << snake.getLength() << std::endl;
    game.update(snake.getBody());
    game.printMap();


    std::cout << "moveLeft" << std::endl;
    snake.moveSnake(LeftArrow);
    std::cout << "length = " << snake.getLength() << std::endl;
    game.update(snake.getBody());
    game.printMap();
//    snake.showBodyCoordinates();

    std::cout <<  "headBodyCollision = " << std::boolalpha << snake.headBodyCollision() << std::endl;
    std::cout <<  "borderHeadCollision = " << std::boolalpha << snake.borderHeadCollision() << std::endl;

}
