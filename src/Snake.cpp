//
// Created by Anastasiia ORJI on 2019-01-15.
//

#include "../inc/Snake.hpp"

Snake::Snake(): length(4),
                headDirection(snakeDirection(std::rand() %4 + 1)),
                tailDirection(headDirection) {}

Snake::~Snake() {}

void
Snake::moveSnake() {
    //Tail
    extendTail();
    //Head
    switch (headDirection) {
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

void
Snake::extendTail() {
    increase_length();
    switch (tailDirection) {
        case 0: //Top
            body.push_back(std::make_pair(body.at(length - 1).first, body.at(length - 1).second + 1));
        case 1: //Bottom
            body.push_back(std::make_pair(body.at(length - 1).first, body.at(length - 1).second - 1));
        case 2: //Left
            body.push_back(std::make_pair(body.at(length - 1).first + 1, body.at(length - 1).second));
        case 3: //Right
            body.push_back(std::make_pair(body.at(length - 1).first - 1, body.at(length - 1).second));
    }
}

void
Snake::increase_length() {
    this->length++;
}

bool checkCollisions() {
    // barrier with head
    // body with head
    return false;
}

//get
snakeDirection Snake::getHeadDirection() {
    return headDirection;
}

snakeDirection Snake::getTailDirection() {
    return tailDirection;
}

int
Snake::getLength() {
    return this->length;
}