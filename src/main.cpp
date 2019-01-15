//
// Created by Anastasiia ORJI on 2019-01-15.
//

#include "../inc/Snake.hpp"
#include <iostream>

int main(){
    std::srand(unsigned(std::time(0)));
    Snake snake;
    std::cout << snake.getHeadDirection();
}
