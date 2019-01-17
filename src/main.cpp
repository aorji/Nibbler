//
// Created by Anastasiia ORJI on 2019-01-15.
//

#include "../inc/Game.hpp"

int main(){
    Game game(11);
    game.update("ta");
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
