//
// Created by Anastasiia ORJI on 2019-01-22.
//
#ifndef MENU_HPP
#define MENU_HPP

#include <SFML/Graphics.hpp>

#define NUMBER_OF_MENU_FIELD 3

class Menu{
public:
    Menu(int windowSize);
    ~Menu();

    void init();
    void draw(sf::RenderWindow & window);
    void moveUp();
    void moveDown();
    bool isOpen();
    int getSelectedField();
    void close();

private:
    sf::Text menu[NUMBER_OF_MENU_FIELD];
    sf::Font font;
    int selectedField;
    int windowSize;
    bool open;
};

#endif //NIBBLER_MENU_HPP
