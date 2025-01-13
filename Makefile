NAME = libft.a

CFLAGS = -Wall -Wextra -Werror
CC = cc

B_SRC = $(wildcard ft_lst*.c)
SRC := $(filter-out $(B_SRC), $(wildcard *.c))
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(B_SRC:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

debug: CFLAGS += -g -fsanitize=address -fno-omit-frame-pointer
debug: re bonus

$(NAME): $(OBJ)
	ar rcs $@ $^

bonus: $(BONUS_OBJ)
	ar rcs $(NAME) $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all