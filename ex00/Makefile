NAME := 

CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98

HEADER := includes/

SOURCES := 

SRC_DIR := sources/
SRC := $(addprefix $(SRC_DIR), $(SOURCES))

OBJ_DIR := objects/
OBJ := $(addprefix $(OBJ_DIR), $(SOURCES:.cpp=.o))

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJ_DIR) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

$(OBJ_DIR) :
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
	$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $@

clean :
	rm -rf $(OBJ)
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all
