//
// Created by Anastasiia ORJI on 2019-01-17.
//

#ifndef NIBBLER_SFML_HPP
#define NIBBLER_SFML_HPP

class Sfml {
public:
    Sfml();
    ~Sfml();
    void init(char **map);
    void destroy();
    void draw(char **map);
private:
    int screenSize;
};

#endif //NIBBLER_SFML_HPP
