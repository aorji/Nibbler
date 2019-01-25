NAME 		=	sfml_lib.so      

FLAGS  		=	-std=c++11 -Wall -Wextra -Werror -O3

SFML_DIR 	=	SFML/
SFML_INC 	=	$(SFML_DIR)/SFML-2.5.0-macOS-clang/include
SFML_FRM	=	$(SFML_DIR)/SFML-2.5.0-macOS-clang/Frameworks
SFML_LINK 	=	-F$(SFML_FRM) -framework SFML -framework sfml-graphics -framework sfml-window -framework sfml-system

PWD 		=	$(shell pwd)
LIB_FLAG	=	-shared -rpath $(PWD)/$(SFML_FRM) -nostartfiles -dynamiclib					#.

SRC_FILES	=	../src/Snake.cpp ../src/Game.cpp  \
				GameOver.cpp Menu.cpp\
				SideBar.cpp SFML.cpp

INC_DIR		=	../inc/

OBJ_FILES 	=	$(SRC_FILES:.cpp=.o) 												

.SILENT:

all: sfml $(NAME)

$(NAME): $(OBJ_FILES)
	clang++ $(FLAGS) -o $@ $(OBJ_FILES) $(SFML_LINK) $(LIB_FLAG) -I $(SFML_INC)

%.o:%.cpp
	clang++ $(FLAGS) -c -o $@ $< -I $(INC_DIR) -I $(SFML_INC)

sfml_download:
	curl -OL http://www.sfml-dev.org/files/SFML-2.5.0-macOS-clang.tar.gz
	tar zxvfC 'SFML-2.5.0-macOS-clang.tar.gz' $(SFML_DIR)
	rm -rf 'SFML-2.5.0-macOS-clang.tar.gz'
	# cd $(SFML_FRM) && ln -s ../extlibs/freetype.framework								#.
	echo "\033[32m[ ✔ ] "SFML downloaded" \033[0m"

sfml:
	mkdir -p $(SFML_DIR)																	
	test -d SFML/SFML-2.5.0-macOS-clang && echo "\033[31m[ × ] "SFML already exist" \033[0m" || make sfml_download


clean:
	rm -rf $(OBJ_FILES)
	rm -rf $(SFML_DIR)
	echo "\033[31m[ × ] "$(OBJ_FILES) $(SFML_DIR) removed" \033[0m"

fclean: clean
	rm -rf $(NAME)
	echo "\033[31m[ × ] "$(NAME) removed" \033[0m"

re: fclean all

.PHONY: all sfml sfml_download clean fclean re
