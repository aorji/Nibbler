//
// Created by Anastasiia ORJI on 2019-01-22.
//

#include "Menu.hpp"

Menu::Menu(int windowSize):windowSize(windowSize){}
Menu::~Menu() = default;

void
Menu::init(){
    if (!font.loadFromFile("SFML/font/Spantaran.otf"))
        throw Sfml::BadFontAccess();
    menu[0].setFont(font);
    menu[0].setFillColor(sf::Color(49, 149, 20));
    menu[0].setString("NIBBLER");
    menu[0].setCharacterSize(windowSize/(NUMBER_OF_MENU_FIELD * 2));
//center text
    sf::FloatRect textRect = menu[0].getLocalBounds();
    menu[0].setOrigin(textRect.left + textRect.width/2.0f,
                   textRect.top);
    menu[0].setPosition((windowSize + windowSize/3)/2.0f,
                        windowSize/(NUMBER_OF_MENU_FIELD * 2));

    menu[1].setFont(font);
    menu[1].setFillColor(sf::Color(49, 145, 20));
    menu[1].setString("Play");
    menu[1].setCharacterSize(windowSize/(NUMBER_OF_MENU_FIELD * 4));
    //center text
    textRect = menu[1].getLocalBounds();
    menu[1].setOrigin(textRect.left + textRect.width/2.0f,
                      textRect.top);
    menu[1].setPosition((windowSize + windowSize/3)/2.0f,
                        windowSize/(NUMBER_OF_MENU_FIELD * 2) + windowSize/NUMBER_OF_MENU_FIELD);

    menu[2].setFont(font);
    menu[2].setFillColor(sf::Color::White);
    menu[2].setString("Exit");
    menu[2].setCharacterSize(windowSize/(NUMBER_OF_MENU_FIELD * 4));
    //center text
    textRect = menu[2].getLocalBounds();
    menu[2].setOrigin(textRect.left + textRect.width/2.0f,
                      textRect.top);
    menu[2].setPosition((windowSize + windowSize/3)/2.0f,
                        windowSize/(NUMBER_OF_MENU_FIELD * 2) + windowSize/NUMBER_OF_MENU_FIELD * 1.5);
    selectedField = 1;
    open = true;
}

void
Menu::draw(sf::RenderWindow & window){
    window.clear();
    for(auto i = 0; i < NUMBER_OF_MENU_FIELD; ++i)
    window.draw(menu[i]);
    window.display();
}

void
Menu::moveUp(){
    menu[1].setFillColor(sf::Color(49, 145, 20));
    menu[2].setFillColor(sf::Color::White);
    selectedField = 1;
}

void
Menu::moveDown(){
    menu[2].setFillColor(sf::Color(49, 145, 20));
    menu[1].setFillColor(sf::Color::White);
    selectedField = 2;
}

bool
Menu::isOpen(){
    return open;
}

int
Menu::getSelectedField(){
    return selectedField;
}

void
Menu::close(){
    open = false;
}
