GCC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
OBJ = ft_isalnum.o ft_memchr.o ft_putendl_fd.o ft_striteri.o ft_strmapi.o ft_toupper.o ft_isalpha.o ft_memcmp.o ft_putnbr_fd.o ft_strjoin.o ft_strncmp.o ft_isascii.o ft_memcpy.o ft_putstr_fd.o ft_strlcat.o ft_strnstr.o ft_atoi.o ft_isdigit.o ft_memmove.o ft_split.o ft_strlcpy.o ft_strtrim.o ft_bzero.o ft_isprint.o ft_memset.o ft_strchr.o ft_strlen.o ft_substr.o ft_calloc.o ft_itoa.o ft_putchar_fd.o ft_strdup.o ft_tolower.o ft_strrchr.o
OBJ_BONUS = ft_lstnew_bonus.o ft_lstadd_front_bonus.o ft_lstsize_bonus.o ft_lstlast_bonus.o ft_lstadd_back_bonus.o ft_lstdelone_bonus.o ft_lstclear_bonus.o ft_lstiter_bonus.o ft_lstmap_bonus.o

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(OBJ_BONUS)
	ar -rcs $(NAME) $(OBJ) $(OBJ_BONUS)

%.o: %.c
	$(GCC) -c $^ -o $@ $(CFLAGS)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all