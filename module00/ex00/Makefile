NAME		=	megaphone

#----- HEADER -----
H_DIR	=	include
H		=
H_NODIR	=	$(notdir $(H))

#----- SRC ----
SRC_DIR	=	src
SRC		=	megaphone.cpp

#----- OBJ -----
OBJ		=	$(SRC:.c=.o)

#----- FLAGS -----
CC			=	c++
H_FLAGS		=	-I$(H_DIR)
C_FLAGS		=	-std=c++98 -Wall -Wextra -Werror
LIB_FLAGS	=

#----- RULES
all: $(OBJ_DIR) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(LIB_FLAGS) $(OBJ) -o $@

clean:
	$(RM) -rf $(OBJ_DIR)

fclean: clean
	$(RM) -rf $(OBJ_DIR)
	$(RM) $(NAME)

re: fclean all

n:
	norminette

#----- IMPICIT RULES -----
$(addprefix $(OBJ_DIR)/, %.o):	$(addprefix $(SRC_DIR)/, %.c) $(H)
	@$(CC) $(H_FLAGS) $(C_FLAGS) $< -o $@
.PHONY: clean fclean re all

#----- UTILS -----
RED				=	\033[0;31m
CYAN			=	\033[0;36m
GREEN 			=	\033[1;32m
YELLOW 			=	\033[1;33m
NC 				=	\033[0m
