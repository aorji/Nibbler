NAME    =   nibbler
OBJ_DIR =   ./obj/
SRC_DIR =   ./src/
INC_DIR =   ./inc/

CC      =   clang++
FLAGS   =   -Wall -Wextra -Werror
SRC     =   main.cpp Snake.cpp Game.cpp SFML.cpp
OBJ     =   $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))
HDRS    =   -I $(INC_DIR)

LIBS = -framework sfml-graphics -framework sfml-window -framework sfml-system
SFML = -F SFML/Frameworks

.SILENT:

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME) $(HDRS) $(LIBS) $(SFML)
	echo "\033[32m[ ✔ ] "$(NAME) created" \033[0m"

$(OBJ): $(OBJ_DIR)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o:	$(SRC_DIR)%.cpp
	@$(CC) -c $< -o $@ $(SFML) $(FLAGS) $(HDRS) $(INCLUDES) -std=c++11

clean:
	rm -f $(OBJ)
	echo "\033[31m[ × ] "$(OBJ) removed" \033[0m"

fclean: clean
	rm -f $(NAME)
	rm -rf $(OBJ_DIR)
	echo "\033[31m[ × ] "$(NAME) removed" \033[0m"

re: fclean all


# ➜  nibbler_ git:(master) ✗ clang++ -F SFML/Frameworks main.cpp -c
# ➜  nibbler_ git:(master) ✗ clang++ -framework sfml-graphics -framework sfml-window -framework sfml-system -F SFML/Frameworks main.o
# ➜  nibbler_ git:(master) ✗ ./a.out