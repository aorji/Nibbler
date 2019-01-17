//
// Created by Anastasiia ORJI on 2019-01-15.
//

#include "../inc/Game.hpp"
//#include "../inc/SFML.hpp"

int main(){
    Game game(11);
    game.update("t");
    game.printMap();

    while(1){
        std::string myInput;
        std::getline (std::cin,myInput);
        if (!game.update(myInput))
            break;
        game.printMap();
        if (myInput == "q")
            break;
    }
}
//
//#include <SFML/SFML/Graphics.hpp"
//
//
//
//
//
//int main() {
//
//
//
//    sf::RenderWindow window(sf::VideoMode(640,480,32),"Hello SFML");
//
//
//
//    sf::Font font;
//
//    font.loadFromFile("OpenSans-Bold.ttf");
//
//
//
//    sf::Text text("Hello World",font,11);
//
//    text.setCharacterSize(32);
//
//    text.setPosition(window.getSize().x/2 - text.getGlobalBounds().width/2,
//
//                     window.getSize().y/2 - text.getGlobalBounds().height/2);
//
//
//
//
//
//    while(window.isOpen()){
//
//
//
//        sf::Event event;
//
//        while(window.pollEvent(event)) {
//
//            if(event.type == sf::Event::Closed){
//
//                window.close();
//
//            }
//
//
//
//            window.clear(sf::Color::Black);
//
//            window.draw(text);
//
//            window.display();
//
//        }
//
//    }
//
//    return 0;
//
//}