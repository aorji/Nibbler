//
// Created by Anastasiia ORJI on 2019-01-18.
//

#ifndef NIBBLER_SFML_HPP
#define NIBBLER_SFML_HPP

#include "SFML/SFML-2.5.0-macOS-clang/include/SFML/Graphics.hpp"
#include "../inc/Game.hpp"
#include "../inc/IGUI.hpp"
#include "Menu.hpp"
#include "GameOver.hpp"
#include "SideBar.hpp"

class Sfml : public IGUI {
public:
    Sfml(int screensize);
    ~Sfml();
    void draw(Game &game);
    int  execute(Game &game);

    void drawSnake(int i, int j);
    void drawSnakeHead(int i, int j);
    void drawBarriers(int i, int j);
    void drawFood(int i, int j);
    void drawBg(int i, int j);

    class BadImgAccess: public std::exception {
    public:
        const char* what() const throw();
    };
    
    class BadFontAccess: public std::exception {
    public:
        const char* what() const throw();
    };

private:
    int windowSize;   //FROM IGUI?
    int squareSize;
    int gameAreaSize;
    sf::RenderWindow window;
    sf::RectangleShape rectangle;
};

#endif //NIBBLER_SFML_HPP
