//
// Created by Anastasiia ORJI on 2019-01-16.
//

#include "../inc/Game.hpp"

Game::Game(long screenLength) {
    srand(unsigned(std::time(0)));
    this->screenLength = screenLength;
    score = 0;
    createMap();
    snake = Snake(screenLength);
    createBarriers();
    createFood();
}

Game::Game() = default;
Game::~Game() { destroyMap(); }

void
Game::createMap() {
    map = new char *[screenLength];
    for (auto i = 0; i != screenLength; ++i)
        map[i] = new char[screenLength];
    fillMap();
}

void
Game::fillMap() {
    for (auto i = 0; i < screenLength; ++i) {
        for (auto j = 0; j < screenLength; ++j) {
            map[i][j] = '.';
        }
    }
    std::vector<std::pair<int, int>> snakeBody = snake.getBody();
    for(auto v : snakeBody)
        map[v.second][v.first] = 's';
}

void
Game::printMap() {
    for (auto i = 0; i < screenLength; ++i) {
        for (auto j = 0; j < screenLength; ++j)
            std::cout << map[i][j] << " ";
        std::cout << std::endl;
    }
}

void
Game::update(std::string c) {
    std::cout << "Score = " << score << std::endl;
    static int flag = 0;
    if (flag) {
        snake.extendTail();
        createFood();
        flag = 0;
    }
    std::vector<std::pair<int, int>> snakeBody = snake.getBody();
    for(auto v : snakeBody)
        map[v.second][v.first] = '.';
    if (c == "w")
        snake.moveSnake(UpArrow);
    else if (c == "s")
        snake.moveSnake(DownArrow);
    else if (c == "a")
        snake.moveSnake(LeftArrow);
    else if (c == "d")
        snake.moveSnake(RightArrow);
    snakeBody = snake.getBody();
    if (map[snakeBody.at(0).second][snakeBody.at(0).first] == 'f') {
        flag = 1;
        score++;
    }
    std::cout <<  "Collision = " << std::boolalpha << checkCollisions() << std::endl;
    for(auto v : snakeBody)
        map[v.second][v.first] = 's';
}

bool
Game::checkCollisions(){
    std::vector<std::pair<int, int>> snakeBody = snake.getBody();
    for(auto v : snakeBody)
        if (map[v.second][v.first] == 'b' || snake.borderHeadCollision() || snake.headBodyCollision())
            return true;
    return false;
}

void
Game::destroyMap() {
    for (auto i = 0; i != screenLength; ++i)
        delete [] map[i];
    delete [] map;
}

void
Game::createBarriers()
{
    long size = screenLength * screenLength / 30;
    long x, y;

    for (auto i = 0; i < size; ++i)
    {
        do
        {
            x = rand() % screenLength;
            y = rand() % screenLength;
        }
        while ((x >= screenLength - 1 || y >= screenLength - 1) || (map[x][y] != '.' ||
                map[x + 1][y] != '.' || map[x][y + 1] != '.' || map[x + 1][y + 1] != '.'));
        map[x][y] = 'b';
        map[x + 1][y] = 'b';
        map[x][y + 1] = 'b';
        map[x + 1][y + 1] = 'b';
    }
}

void
Game::createFood()
{
    long x, y;

    do
    {
        x = rand() % screenLength;
        y = rand() % screenLength;
    }
    while (map[x][y] != '.');

    map[x][y] = 'f';
}