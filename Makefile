NAME = libft.a

CFLAGS = -Wall -Wextra -Werror
CC = cc

SRC = ft_atoi.c \
	ft_atoi_base.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_realloc.c \
	ft_free_array.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strcmp.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c

PRINTF_SRC = ft_printf.c \
	ft_printf_utils.c \
	ft_puthex.c \

GNL_SRC = get_next_line.c \

SV_SRC = ft_strvector.c \
	ft_strvector_utils.c \

B_SRC = ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(B_SRC:.c=.o)
PRINTF_OBJ = $(PRINTF_SRC:.c=.o)
GNL_OBJ = $(GNL_SRC:.c=.o)
SV_OBJ = $(SV_SRC:.c=.o)

.PHONY: all debug bonus complete clean fclean re

all: $(NAME)

bonus: $(NAME) $(BONUS_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ)

complete: $(NAME) $(BONUS_OBJ) $(PRINTF_OBJ) $(GNL_OBJ) $(SV_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ) $(PRINTF_OBJ) $(GNL_OBJ) $(SV_OBJ)

debug: CFLAGS += -g -fsanitize=address -fno-omit-frame-pointer
debug: re bonus

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c libft.h Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BONUS_OBJ) $(PRINTF_OBJ) $(GNL_OBJ) $(SV_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
