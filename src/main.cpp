//
// Created by Anastasiia ORJI on 2019-01-15.
//

#include "../inc/Game.hpp"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML.hpp>

int main() {
    int pixelSize = ((sf::VideoMode::getDesktopMode().height / 2) * 4) / 100;
    int windowSize = pixelSize * 25;
    int gameAreaSize = 25;

    Sfml sfml(windowSize, pixelSize);
//    sf::RenderWindow sfml.getWindow()(sf::VideoMode(sfml.getWindow()Size, sfml.getWindow()Size), "Nibbler");
    sf::RectangleShape rectangle(sf::Vector2f(pixelSize, pixelSize));
    Game game(gameAreaSize);

    char c = 123;
    while (sfml.getWindow().isOpen()) {
        sf::Time delayTime = sf::microseconds(300000 / game.getLevel());
        sf::Event event;
        while (sfml.getWindow().pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                sfml.getWindow().close();
            }
            if (event.key.code == sf::Keyboard::Up)
                c = 126;
            if (event.key.code == sf::Keyboard::Down)
                c = 125;
            if (event.key.code == sf::Keyboard::Left)
                c = 123;
            if (event.key.code == sf::Keyboard::Right)
                c = 124;
        }
        if (!game.update(c))
            break;
        char **map = game.getMap();
        sfml.getWindow().clear();
        for (auto i = 0; i < gameAreaSize; ++i) {
            for (auto j = 0; j < gameAreaSize; ++j) {
                rectangle.setPosition(j * pixelSize, i * pixelSize);
                if ((i % 2 && j % 2) || (!(i % 2) && !(j % 2)))
                    rectangle.setFillColor(sf::Color(49, 149, 20));
                else
                    rectangle.setFillColor(sf::Color(49, 145, 20));
                sfml.getWindow().draw(rectangle);
                if (map[i][j] == 's') {
                    sf::Texture texture;
                    texture.loadFromFile("img/snake.png", sf::IntRect(0, 0, pixelSize, pixelSize));

                    sf::Sprite sprite;
                    sprite.setTexture(texture);
                    sprite.setPosition(j * pixelSize, i * pixelSize);
                    sfml.getWindow().draw(sprite);
                }
                if (map[i][j] == 'f') {
                    float scale = pixelSize/772.0;
                    sf::Texture texture;
                    texture.loadFromFile("img/donut.png");

                    sf::Sprite sprite;
                    sprite.setTexture(texture);
                    sprite.setScale(scale, scale);
                    sprite.setPosition(j * pixelSize, i * pixelSize);
                    sfml.getWindow().draw(sprite);
                }
                if (map[i][j] == 'b') {
                    sf::Texture texture;
                    texture.loadFromFile("img/stone.jpg");
                    sf::Sprite sprite;
                    sprite.setTexture(texture);
                    sprite.scale(0.5f, 0.5f);
                    sprite.setPosition(j * pixelSize, i * pixelSize);
                    sfml.getWindow().draw(sprite);
                }
            }
        }
        sfml.getWindow().display();
        sf::sleep(delayTime);
    }
}