//
// Created by Anastasiia ORJI on 2019-01-15.
//

#include "../inc/Snake.hpp"

Snake::Snake(): length(4), direction(snakeDirection(std::rand() %4 + 1)) {}
Snake::~Snake() {}

void
Snake::moveSnake() {
    //Tail


    //Head
    switch (direction) {
        case 0: //Top
            body.at(0) = std::make_pair(body.at(0).first, body.at(0).second - 1);
        case 1: //Bottom
            body.at(0) = std::make_pair(body.at(0).first, body.at(0).second + 1);
        case 2: //Left
            body.at(0) = std::make_pair(body.at(0).first - 1 , body.at(0).second);
        case 3: //Right
            body.at(0) = std::make_pair(body.at(0).first + 1, body.at(0).second);
    }
}

bool checkCollisions() {
    // barrier with head
    // body with head
    return false;
}

void
Snake::increase_length() { this->length++; }

snakeDirection Snake::getDirection() {
    return direction;
}

int
Snake::getLength() {
    return this->length;
}