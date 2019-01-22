//
// Created by Anastasiia ORJI on 2019-01-18.
//

#include <SFML.hpp>
#include <iostream>

Sfml::Sfml(int windowSize, int squareSize): windowSize(windowSize),
                                            squareSize(squareSize),
                                            window(sf::VideoMode(windowSize, windowSize), "Nibbler"),
                                            rectangle(sf::Vector2f(squareSize, squareSize)){}
Sfml::~Sfml() = default;

// void
// Sfml::init(char **map){
// 	window
// std::cout << windowSize +squareSize << map[0][0];
// }

//void
//Sfml::destroy(){}
//

void
Sfml::drawSnake(int i, int j){
	sf::Texture texture;
    texture.loadFromFile("img/snake.png", sf::IntRect(0, 0, squareSize, squareSize));

    sf::Sprite sprite;
    sprite.setTexture(texture);
    sprite.setPosition(j * squareSize, i * squareSize);
    window.draw(sprite);
}

void
Sfml::drawBarriers(int i, int j){
	sf::Texture texture;
    texture.loadFromFile("img/stone.jpg");
    sf::Sprite sprite;
    sprite.setTexture(texture);
    sprite.scale(0.5f, 0.5f);
    sprite.setPosition(j * squareSize, i * squareSize);
    window.draw(sprite);
}

void
Sfml::drawFood(int i, int j) {
	float scale = squareSize/772.0;
    sf::Texture texture;
    texture.loadFromFile("img/donut.png");

    sf::Sprite sprite;
    sprite.setTexture(texture);
    sprite.setScale(scale, scale);
    sprite.setPosition(j * squareSize, i * squareSize);
    window.draw(sprite);
}

void Sfml::drawBg(int i, int j){
	rectangle.setPosition(j * squareSize, i * squareSize);
    if ((i % 2 && j % 2) || (!(i % 2) && !(j % 2)))
        rectangle.setFillColor(sf::Color(49, 149, 20));
    else
        rectangle.setFillColor(sf::Color(49, 145, 20));
    window.draw(rectangle);
}

void Sfml::draw(char **map){
    window.clear();
	for (auto i = 0; i < gameAreaSize; ++i) {
        for (auto j = 0; j < gameAreaSize; ++j) {
            drawBg(i, j);
            if (map[i][j] == 's')
            	drawSnake(i, j);
            if (map[i][j] == 'f')
                drawFood(i, j);
            if (map[i][j] == 'b')
            	drawBarriers(i, j);
        }
    }
    window.display();
}

void Sfml::execute(Game &game){
	char c = 123;
    Menu menu(windowSize);
    GameOver gameOver(windowSize);
    menu.init();

    sf::Time gameOverTime = sf::seconds(1);
    while (window.isOpen()) {
        sf::Time delayTime = sf::microseconds(300000 / game.getLevel());
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.key.code == sf::Keyboard::Enter){
                if (menu.isOpen() || menu.getSelectedField() == 1)
                    menu.close();
                if (menu.isOpen() || menu.getSelectedField() == 2) {
                    gameOver.init();
                    gameOver.draw(window);
                    sf::sleep(gameOverTime);
                    window.close();
                }
            }
            if (event.key.code == sf::Keyboard::Up){
                if (menu.isOpen()){
                    menu.moveUp();
                    menu.draw(window);
                }
                c = 126;
            }
            if (event.key.code == sf::Keyboard::Down){
                if (menu.isOpen()) {
                    menu.moveDown();
                    menu.draw(window);
                }
                c = 125;
            }
            if (event.key.code == sf::Keyboard::Left)
                c = 123;
            if (event.key.code == sf::Keyboard::Right)
                c = 124;
        }
        if (menu.isOpen())
            menu.draw(window);
        else {
            if (!game.update(c)){
                gameOver.init();
                gameOver.draw(window);
                sf::sleep(gameOverTime);
                window.close();
            }
            draw(game.getMap());
        }
        sf::sleep(delayTime);
    }
}

