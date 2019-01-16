//
// Created by Anastasiia ORJI on 2019-01-16.
//

#include "../inc/Game.hpp"

Game::Game(long screenLength): screenLength(screenLength) { createMap(); }
Game::Game() = default;
Game::~Game() { destroyMap(); }

void
Game::createMap() {
    map = new char *[screenLength];
    for (size_t i = 0; i != screenLength; ++i)
        map[i] = new char[screenLength];
}

void
Game::resetMap() {
    for (size_t i = 0; i < screenLength; ++i) {
        for (size_t j = 0; j < screenLength; ++j) {
            map[i][j] = '.';
        }
    }
}

void
Game::printMap() {
    for (size_t i = 0; i < screenLength; ++i) {
        for (size_t j = 0; j < screenLength; ++j)
            std::cout << map[i][j] << " ";
        std::cout << std::endl;
    }
}

void
Game::update(std::vector<std::pair<int, int>> snake) {
    resetMap();
    for(auto v : snake)
        map[v.second][v.first] = 's';
}

void
Game::destroyMap() {
    for (size_t i = 0; i != screenLength; ++i)
        delete [] map[i];
    delete [] map;
}