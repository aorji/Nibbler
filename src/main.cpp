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
        case 0: //Top
            std::cout << "Top" << std::endl;
            break;
        case 1: //Bottom
            std::cout << "Bottom" << std::endl;
            break;
        case 2: //Left
            std::cout << "Left" << std::endl;
            break;
        case 3: //Right
            std::cout << "Right" << std::endl;
            break;
    }
//    std::cout <<"head = " <<snake.getHeadDirection() << std::endl;

    std::vector<std::pair<int, int>> body = snake.getBody();
    for(auto it = body.rbegin(); it != body.rend(); ++it)
        std::cout << (*it).first << "," << (*it).second << std::endl;
}
