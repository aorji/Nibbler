//
// Created by Anastasiia ORJI on 2019-01-22.
//

#ifndef NIBBLER_GAMEOVER_HPP
#define NIBBLER_GAMEOVER_HPP

#include <SFML/Graphics.hpp>

class GameOver{
public:
    GameOver(int windowSize);
    ~GameOver();

    void init();
    void draw(sf::RenderWindow & window);

private:
    sf::Text text;
    sf::Font font;
    int windowSize;
};

#endif //NIBBLER_GAMEOVER_HPP
