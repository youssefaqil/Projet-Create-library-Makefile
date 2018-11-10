##
## ETNA PROJECT, 22/10/2018 by aqil_y
## MakeFile
## File description:
##      makefile
##

CC		= gcc
CFLAFS	= -Wall -Wextra -Wextra -Werror

NAME	= libmy.a
RM		= -rm -f
SRC	 	= 				\
	 	my_putstr.c		\
	 	my_putchar.c	\
		my_strlen.c		\
		my_getnbr.c		\
		my_putnbr.c		\
		my_is_neg.c		\
		my_is_even.c	\
		my_is_odd.c		\
		my_swap.c		\	
		my_strcpy.c		\
		my_strncpy.c	\
		my_strcmp.c		\
		my_strncmp.c	\
		my_strcat.c		\
		my_strncat.c	\
		my_strstr.c		\
		my_strupcase.c	\
		my_strlowcase.c	\
		my_nbrlen.c		\
		my_strdup.c		\

OBJ		=$(SRC: .c=.o)

all: $(NAME)

$(NAME):$(OBJ)
	gcc $(CFLAGS) $(CFLAGS) $(OBJ) -o $(NAME)

clean:	$(RM) $(NAME)

re:	fclean all

.PHONY	: all $(NAME) clean fclean re