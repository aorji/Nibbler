NAME 		=	ncurses_lib.so

CC			=	clang++
FLAGS		=	-std=c++11 -Wall -Wextra -Werror

LIB_FLAG	=	-lncurses -shared -nostartfiles -dynamiclib

SRC_FILES	=	../src/Game.cpp \
				../src/Snake.cpp  \
				../src/Exception.cpp \
				Ncurses.cpp

OBJ_FILES	= 	$(SRC_FILES:.cpp=.o)

.SILENT:

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(FLAGS) $(LIB_FLAG) $(OBJ_FILES) -o $(NAME)

%.o:%.cpp
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJ_FILES)
	echo "\033[31m[ × ] cleaned (Ncurses)\033[39m"

fclean:	clean
	rm -rf $(NAME)
	echo "\033[31m[ × ] mcleaned all (Ncurses)\033[39m"
	
re:	fclean all

.PHONY: all sdl clean fclean re