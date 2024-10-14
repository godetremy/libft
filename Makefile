GCC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
OBJ = ft_isalnum.o ft_memchr.o ft_putendl_fd.o ft_striteri.o ft_strmapi.o ft_toupper.o ft_isalpha.o ft_memcmp.o ft_putnbr_fd.o ft_strjoin.o ft_strncmp.o ft_isascii.o ft_memcpy.o ft_putstr_fd.o ft_strlcat.o ft_strnstr.o ft_atoi.o ft_isdigit.o ft_memmove.o ft_split.o ft_strlcpy.o ft_strtrim.o ft_bzero.o ft_isprint.o ft_memset.o ft_strchr.o ft_strlen.o ft_substr.o ft_calloc.o ft_itoa.o ft_putchar_fd.o ft_strdup.o ft_tolower.o ft_strrchr.o

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(GCC) -c $^ -o $@ $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all