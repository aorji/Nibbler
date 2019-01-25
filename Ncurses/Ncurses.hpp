#ifndef NCURSES_HPP
#define NCURSES_HPP

#include "../inc/IGUI.hpp"
#include <ncurses.h>

class NCURSES : public IGUI
{
	int				blocksize;
public:
	NCURSES(int screensize);
	~NCURSES();

	void draw(Game &game);
	int execute(Game &game);

	void drawBlock(int i, int j);
	void drawInfo(Game &game);
	int drawBeginWindow();
	void drawEndWindow();
};

#endif