//
// Created by Anastasiia ORJI on 2019-01-16.
//

#include "../inc/Game.hpp"

Game::Game(long screenLength) {
    this->screenLength = screenLength;
    createMap();
    snake = Snake(screenLength);
}

Game::Game() = default;
Game::~Game() { destroyMap(); }

void
Game::createMap() {
    map = new char *[screenLength];
    for (auto i = 0; i != screenLength; ++i)
        map[i] = new char[screenLength];
    resetMap();
}

void
Game::resetMap() {
    for (auto i = 0; i < screenLength; ++i) {
        for (auto j = 0; j < screenLength; ++j) {
            map[i][j] = '.';
        }
    }
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
    resetMap();
    if (c == "w")
        snake.moveSnake(UpArrow);
    else if (c == "s")
        snake.moveSnake(DownArrow);
    else if (c == "a")
        snake.moveSnake(LeftArrow);
    else if (c == "d")
        snake.moveSnake(RightArrow);
    std::vector<std::pair<int, int>> snakeBody = snake.getBody();
    for(auto v : snakeBody)
        map[v.second][v.first] = 's';
    std::cout <<  "headBodyCollision = " << std::boolalpha << snake.headBodyCollision() << std::endl;
    std::cout <<  "borderHeadCollision = " << std::boolalpha << snake.borderHeadCollision() << std::endl;

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
    int size = screenLength * screenLength / 30;
    int x, y;

    for (auto i = 0; i < size; ++i)
    {
        do
        {
            x = rand() % screenLength;
            y = rand() % screenLength;
        }
        while ((x >= screenLength - 1 || y >= screenLength - 1) || (map[x][y] != '.' || map[x + 1][y] != '.' || map[x][y + 1] != '.' || map[x + 1][y + 1] != '.'));

        // barriers.push_back(Barrier(x, y));
        map[x][y] = 'b';
        map[x + 1][y] = 'b';
        map[x][y + 1] = 'b';
        map[x + 1][y + 1] = 'b';
    }

    // for (auto i = 0; i < size; ++i)
    // {
    //     map[barriers[i].get_place().first][barriers[i].get_place().second] = 'b';
    //     map[barriers[i].get_place().first + 1][barriers[i].get_place().second] = 'b';
    //     map[barriers[i].get_place().first][barriers[i].get_place().second + 1] = 'b';
    //     map[barriers[i].get_place().first + 1][barriers[i].get_place().second + 1] = 'b';
    // }
}

void
Game::createFood()
{
    int x, y;

    do
    {
        x = rand() % screenLength;
        y = rand() % screenLength;
    }
    while (map[x][y] != '.');

    map[x][y] = 'f';
}