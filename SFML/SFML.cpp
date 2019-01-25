//
// Created by Anastasiia ORJI on 2019-01-18.
//

#include "SFML.hpp"

extern "C" IGUI* newGUI(int screensize)
{
    return new Sfml(screensize);
}

Sfml::Sfml(int screensize): IGUI(screensize)
{
    windowSize = sf::VideoMode::getDesktopMode().height / 2;
    squareSize = windowSize / screensize;
    window.create(sf::VideoMode(windowSize + windowSize / 3, windowSize), "Nibbler");
    rectangle = sf::RectangleShape(sf::Vector2f(squareSize, squareSize));
}

Sfml::~Sfml(){
    window.clear();
    window.close();
}

void
Sfml::drawSnake(int i, int j){
	sf::Texture texture;
    if (!texture.loadFromFile("SFML/img/snake.png", sf::IntRect(0, 0, squareSize, squareSize)))
        throw BadImgAccess();
    sf::Sprite sprite;
    sprite.setTexture(texture);
    sprite.setPosition(j * squareSize, i * squareSize);
    window.draw(sprite);
}

void
Sfml::drawSnakeHead(int i, int j){
    float scale = squareSize/600.0;
    sf::Texture texture;
    if (!texture.loadFromFile("SFML/img/nastushka.jpg"))
        throw BadImgAccess();
    sf::Sprite sprite;
    sprite.setTexture(texture);
    sprite.setScale(scale, scale);
    sprite.setPosition(j * squareSize, i * squareSize);
    window.draw(sprite);
}

void
Sfml::drawBarriers(int i, int j){
	sf::Texture texture;
    if (!texture.loadFromFile("SFML/img/stone.jpg"))
        throw BadImgAccess();
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
    if (!texture.loadFromFile("SFML/img/donut.png"))
        throw BadImgAccess();
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

void Sfml::draw(Game &game){
    char** map = game.getMap();

    for (auto i = 0; i < screensize; ++i) {
        for (auto j = 0; j < screensize; ++j) {
            drawBg(i, j);
            if (map[i][j] == 's')
                drawSnake(i, j);
            if (map[i][j] == 'o')
                drawSnakeHead(i, j);
            if (map[i][j] == 'f')
                drawFood(i, j);
            if (map[i][j] == 'b')
                drawBarriers(i, j);
        }
        for (auto j = screensize; j < screensize * 2; ++j) {
            rectangle.setPosition(j * squareSize, i * squareSize);
            rectangle.setFillColor(sf::Color::Black);
            window.draw(rectangle);
        }
    }
}

int Sfml::execute(Game &game){
    Menu menu(windowSize);
    menu.init();
    GameOver gameOver(windowSize);
    gameOver.init();
    SideBar sideBar(game);
    sideBar.init();

	char c = 0;
    switch (game.getSnake().getHeadDirection())
    {
        case Top:
            c = 126;
            break;
        case Bottom:
            c = 125;
            break;
        case Left:
            c = 123;
            break;
        case Right:
            c = 124;
            break;
    }

    sf::Time gameOverTime = sf::seconds(1.1f);
    
    while (window.isOpen()) {
        sf::Time delayTime = sf::microseconds(300000 / game.getLevel()); //WHAT!!
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.key.code == sf::Keyboard::Enter){
                if (menu.isOpen() || menu.getSelectedField() == 1)
                    menu.close();
                if (menu.isOpen() || menu.getSelectedField() == 2) {
                    gameOver.draw(window);
                    sf::sleep(gameOverTime);
                    return 0;
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
            if (event.key.code == sf::Keyboard::Num1)
                return 1;
            if (event.key.code == sf::Keyboard::Num2)
                return 2;
        }
        if (menu.isOpen()) {
            menu.draw(window);
        }
        else {
            if (!game.update(c)){
                gameOver.draw(window);
                sf::sleep(gameOverTime);
                return 0;
            }
            window.clear();
            draw(game);
            sideBar.update();
            sideBar.draw(window);
            window.display();
        }
        sf::sleep(delayTime);
    }
    return (0);
}

const char *
Sfml::BadImgAccess::what() const throw() {
    return "Bad file access to images";
}

const char *
Sfml::BadFontAccess::what() const throw() {
    return "Bad file access to fonts";
}
