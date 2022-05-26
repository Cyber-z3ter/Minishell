CC = gcc 

FLAGS = -Wall -Wextra -Werror 

SRC  = 

OBJ = $(SRC=:%.c=%.o)

%.o = /includes/minishell.h
	$(CC) $(FLAGS) -c $< -o $@

NAME = minishell

all  :$(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME) 

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)
re		: clean all


.PHONY all clean fclean re