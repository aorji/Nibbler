//
// Created by Anastasiia ORJI on 2019-01-15.
//

#include "../inc/Snake.hpp"

Snake::Snake(int length): length(4),
                          screenLength(length),
                          headDirection(snakeDirection(std::rand() % 4)),
                          tailDirection(headDirection)
                          { createSnake(); }

Snake::~Snake() {}

void
Snake::createSnake() {
    int i = screenLength/2; //should be more accurate
    switch (headDirection) {
        case 0: //Top
        case 1: //Bottom
            body.push_back(std::make_pair(i, i + 2));
            body.push_back(std::make_pair(i, i + 1));
            body.push_back(std::make_pair(i, i));
            body.push_back(std::make_pair(i, i - 1));
            break;
        case 2: //Left
        case 3: //Right
            body.push_back(std::make_pair(i + 2, i));
            body.push_back(std::make_pair(i + 1, i));
            body.push_back(std::make_pair(i, i));
            body.push_back(std::make_pair(i-1, i));
            break;
    }
}

void
Snake::moveSnake() {
    //Tail
    for (int i = length - 1; i > 0 ; --i) {
        body.at(i) = std::make_pair(body.at(i - 1).first, body.at(i - 1).second);
    }
    //Head
    switch (headDirection) {
        case 0: //Top
            body.at(0) = std::make_pair(body.at(0).first, body.at(0).second - 1);
            break;
        case 1: //Bottom
            body.at(0) = std::make_pair(body.at(0).first, body.at(0).second + 1);
            break;
        case 2: //Left
            body.at(0) = std::make_pair(body.at(0).first - 1 , body.at(0).second);
            break;
        case 3: //Right
            body.at(0) = std::make_pair(body.at(0).first + 1, body.at(0).second);
            break;
    }
}

void
Snake::extendTail() {
    increase_length();
    switch (tailDirection) {
        case 0: //Top
            body.push_back(std::make_pair(body.at(length - 1).first, body.at(length - 1).second + 1));
            break;
        case 1: //Bottom
            body.push_back(std::make_pair(body.at(length - 1).first, body.at(length - 1).second - 1));
            break;
        case 2: //Left
            body.push_back(std::make_pair(body.at(length - 1).first + 1, body.at(length - 1).second));
            break;
        case 3: //Right
            body.push_back(std::make_pair(body.at(length - 1).first - 1, body.at(length - 1).second));
            break;
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
int
Snake::getLength() {
    return this->length;
}

snakeDirection Snake::getHeadDirection() {
    return headDirection;
}

snakeDirection Snake::getTailDirection() {
    return tailDirection;
}

std::vector<std::pair<int, int>>
Snake::getBody() {
    return body;
}