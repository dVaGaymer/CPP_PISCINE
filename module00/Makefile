SRC	=	$(SRC_DIR)/main.c
OBJ	=	${SRC:.c=.o}
SRC_DIR	=	.

$(addprefix $(SRC_DIR)/, %.o):	$(addprefix $(SRC_DIR)/, %.c) $(H)
	gcc -Wall -Werror -Wextra -c $< -o ${<:.c=.o}
all: $(OBJ)
	gcc main.o -o lol
	echo $(SRC)
	echo $(OBJ)
clean:
	rm main.o
re: clean all

.PHONY:		all clean fclean re bonus
