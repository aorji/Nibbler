
#include "../inc/Game.hpp"
#include "../inc/IGUI.hpp"
#include <dlfcn.h>
#include "../inc/Exception.hpp"

IGUI*   chooseLib(int res, int map_size)
{
    IGUI    *(*library)(int) = nullptr;
    void    *handle = nullptr;

    if (res == 1)
        handle = dlopen("Ncurses/ncurses_lib.so", RTLD_LAZY);
    if (res == 2)
        handle = dlopen("SDL/sdl_lib.so", RTLD_LAZY);
    if (res == 3)
        handle = dlopen("SFML/sfml_lib.so", RTLD_LAZY);

    if (!handle)
        throw InvalidLibrary();
    if (( library = reinterpret_cast<IGUI* (*)(int)>(dlsym(handle, "newGUI")) ) == nullptr)
        throw InvalidLibraryFunction();

    return library(map_size);
}

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "en_US.UTF-8");
    if (argc != 2)
    {
        std::cout << "Usage: ./nibbler [map_size]" << std::endl;
        return 0;
    }
    try {

        int map_size = 0;

        try {
            map_size = std::stoi(argv[1]);
        } catch (std::exception &e) {
            throw InvalidSize();
        }

        if (map_size < 20 || map_size > 50)
            throw InvalidSize();

        Game game(map_size);
        IGUI   *lib = chooseLib(2, map_size);
        int res = 0; // 1 - ncurses, 2 - sdl, 3 - sfml

        while (1)
        {
            res = lib->execute(game);
            delete lib;
            if (res > 0)
                lib = chooseLib(res, map_size);
            else
                break;
        }
        
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return (0);
}
