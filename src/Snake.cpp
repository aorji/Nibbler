//
// Created by Anastasiia ORJI on 2019-01-15.
//

#include "../inc/Snake.hpp"

Snake::Snake(unsigned length): length(4),
                          screenLength(length),
                          headDirection(snakeDirection(std::rand() % 4)),
                          tailDirection(headDirection)
                          { createSnake(); }

Snake::Snake() = default;
Snake::~Snake() = default;

void
Snake::createSnake() {
    int i = screenLength/2; //should be more accurate
    switch (headDirection) {
        case 0: //Top
            for(int d = -1; d <= 2; ++d)
                body.emplace_back(std::make_pair(i, i + d));
            break;
        case 1: //Bottom
            for(int d = 2; d >= -1; --d)
                body.emplace_back(std::make_pair(i, i + d));
            break;
        case 2: //Left
            for(int d = -1; d <= 2; ++d)
                body.emplace_back(std::make_pair(i + d, i));
            break;
        case 3: //Right
            for(int d = 2; d >= -1; --d)
                body.emplace_back(std::make_pair(i + d, i));
            break;
    }
}

void
Snake::extendTail() {
    switch (tailDirection) {
        case 0: body.emplace_back(std::make_pair(body.at(length - 1).first, body.at(length - 1).second + 1));
            break; //Top
        case 1: body.emplace_back(std::make_pair(body.at(length - 1).first, body.at(length - 1).second - 1));
            break; //Bottom
        case 2: body.emplace_back(std::make_pair(body.at(length - 1).first + 1, body.at(length - 1).second));
            break; //Left
        case 3: body.emplace_back(std::make_pair(body.at(length - 1).first - 1, body.at(length - 1).second));
            break; //Right
    }
    this->length++;
}

void
Snake::moveSnake(turnKey key) {
    if ((int)key == (int)headDirection) {
        //Tail
        for (unsigned long i = length - 1; i > 0; --i)
            body.at(i) = std::make_pair(body.at(i - 1).first, body.at(i - 1).second);
        //Head
        switch (headDirection) {
            case 0: body.at(0) = std::make_pair(body.at(0).first, body.at(0).second - 1);
                break; //Top
            case 1: body.at(0) = std::make_pair(body.at(0).first, body.at(0).second + 1);
                break; //Bottom
            case 2: body.at(0) = std::make_pair(body.at(0).first - 1, body.at(0).second);
                break; //Left
            case 3: body.at(0) = std::make_pair(body.at(0).first + 1, body.at(0).second);
                break; //Right
        }
    }
//    else if () {
//        headDirection
//    }
}

bool
Snake::headBodyCollision() {
    std::pair<int, int> head = body.at(0);
    for(unsigned long i = 1; i < length ; ++i)
        if (head == body.at(i))
            return true;
    return false;
}

bool
Snake::borderHeadCollision() {
    for(unsigned long i = 0; i < length ; ++i)
        if (body.at(i).first == screenLength - 1 || body.at(i).second == screenLength - 1 ||
                body.at(i).first == 0 || body.at(i).second == 0)
            return true;
    return false;
}

void
Snake::showBodyCoordinates() {
    for(auto v : body)
        std::cout << v.first << "," << v.second << std::endl;
}

//get
int
Snake::getLength() {
    return this->length;
}

snakeDirection
Snake::getHeadDirection() {
    return headDirection;
}

snakeDirection
Snake::getTailDirection() {
    return tailDirection;
}

std::vector<std::pair<int, int>>
Snake::getBody() {
    return body;
}