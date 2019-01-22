//
// Created by Anastasiia ORJI on 2019-01-15.
//

#include "../inc/Game.hpp"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML.hpp>

int main() {
    int squareSize = (sf::VideoMode::getDesktopMode().height / 2) * 0.05;
    int windowSize = squareSize * 20;
    int gameAreaSize = 20;

    Game game(gameAreaSize);

    Sfml sfml(windowSize, squareSize);
    sfml.execute(game);
}