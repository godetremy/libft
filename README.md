<p align="center"><img src=".github/assets/badge.png" alt="libft badge" /></p>
<h1 align="center">Libft</h1>

## Description
This project is a library of functions that we will be using in the future projects. There are some functions which are part of standard C library and some functions which is a demand for the future 42 school projects.

## Compilation
To compile the library, run the following commands:
```bash
make
```

## Usage
You can use the library by including the `libft.h` header file in your source files and by linking the library with your program. Like this:
```C
#include "libft.h"

int main(void)
{
    ft_putstr("Hello, World!\n");
    return (0);
}
```

```bash
gcc -o example example.c -L. -lft
```

Here, `-L.` tells the compiler to look for the library in the current directory and `-lft` tells the compiler to link the program with the `libft.a` library. If you want to learn more about static libraries, you can read the following article: [All you need to know about C Static libraries](https://dev.to/iamkhalil42/all-you-need-to-know-about-c-static-libraries-1o0b).

## Functions
Here is a list of all the functions in the library:

### Part 1 - Libc functions
#### ft_isalpha
```C
int ft_isalpha(int c);
```
The `ft_isalpha` function checks if the passed character is an alphabetic character.
#### ft_isdigit
```C
int ft_isdigit(int c);
```
The `ft_isdigit` function checks if the passed character is a digit.
#### ft_isalnum
```C
int ft_isalnum(int c);
```
The `ft_isalnum` function checks if the passed character is an alphanumeric character.
#### ft_isascii
```C
int ft_isascii(int c);
```
The `ft_isascii` function checks if the passed character is an ASCII character.
#### ft_isprint
```C
int ft_isprint(int c);
```
The `ft_isprint` function checks if the passed character is a printable character.
#### ft_strlen
```C
size_t ft_strlen(const char *s);
```
The `ft_strlen` function calculates the length of the string.
#### ft_memset
```C
void *ft_memset(void *b, int c, size_t len);
```
The `ft_memset` function fills the first `len` bytes of the memory area pointed to by `b` with the constant byte `c`.
#### ft_bzero
```C
void ft_bzero(void *s, size_t n);
```
The `ft_bzero` function writes `n` zeroed bytes to the string `s`.
#### ft_memcpy
```C
void *ft_memcpy(void *dst, const void *src, size_t n);
```
The `ft_memcpy` function copies `n` bytes from memory area `src` to memory area `dst`.
#### ft_memmove
```C
void *ft_memmove(void *dst, const void *src, size_t len);
```
The `ft_memmove` function copies `len` bytes from string `src` to string `dst`.
#### ft_strlcpy
```C
size_t ft_strlcpy(char *dst, const char *src, size_t size);
```
The `ft_strlcpy` function copies up to `size - 1` characters from the string `src` to `dst`.
#### ft_strlcat
```C
size_t ft_strlcat(char *dst, const char *src, size_t size);
```
The `ft_strlcat` function appends the string `src` to the end of `dst`.
#### ft_toupper
```C
int ft_toupper(int c);
```
The `ft_toupper` function converts a lowercase letter to a corresponding uppercase letter.
#### ft_tolower
```C
int ft_tolower(int c);
```
The `ft_tolower` function converts an uppercase letter to a corresponding lowercase letter.
#### ft_strchr
```C
char *ft_strchr(const char *s, int c);
```
The `ft_strchr` function locates the first occurrence of character `c` in the string `s`.
#### ft_strrchr
```C
char *ft_strrchr(const char *s, int c);
```
The `ft_strrchr` function locates the last occurrence of character `c` in the string `s`.
#### ft_strncmp
```C
int ft_strncmp(const char *s1, const char *s2, size_t n);
```
The `ft_strncmp` function compares the two strings `s1` and `s2` up to `n` characters.
#### ft_memchr
```C
void *ft_memchr(const void *s, int c, size_t n);
```
The `ft_memchr` function locates the first occurrence of character `c` in the first `n` bytes of the string `s`.
#### ft_memcmp
```C
int ft_memcmp(const void *s1, const void *s2, size_t n);
```
The `ft_memcmp` function compares the first `n` bytes of the memory areas `s1` and `s2`.
#### ft_strnstr
```C
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
```
The `ft_strnstr` function locates the first occurrence of the null-terminated string `needle` in the string `haystack`, where not more than `len` characters are searched.
#### ft_atoi
```C
int ft_atoi(const char *str);
```
The `ft_atoi` function converts the initial portion of the string `str` to an integer.
#### ft_calloc
```C
void *ft_calloc(size_t count, size_t size);
```
The `ft_calloc` function allocates memory for an array of `count` elements of `size` bytes each and set the memory to zero.
#### ft_strdup
```C
char *ft_strdup(const char *s1);
```
The `ft_strdup` function returns a pointer to a new string which is a duplicate of the string `s1`.

### Part 2 - Additional functions
#### ft_substr
```C
char *ft_substr(char const *s, unsigned int start, size_t len);
```
The `ft_substr` function returns a substring of the string `s` starting from index `start` and with a length of `len`.
#### ft_strjoin
```C
char *ft_strjoin(char const *s1, char const *s2);
```
The `ft_strjoin` function concatenates the strings `s1` and `s2`.
#### ft_strtrim
```C
char *ft_strtrim(char const *s1, char const *set);
```
The `ft_strtrim` function trims the string `s1` with the characters in `set` from the beginning and the end of the string.
#### ft_split
```C
char **ft_split(char const *s, char c);
```
The `ft_split` function splits the string `s` using the character `c` as a delimiter and returns an array of strings.
#### ft_itoa
```C
char *ft_itoa(int n);
```
The `ft_itoa` function converts an integer `n` to a string.
#### ft_strmapi
```C
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
```
The `ft_strmapi` function applies the function `f` to each character of the string `s` to create a new string.
#### ft_putchar_fd
```C
void ft_putchar_fd(char c, int fd);
```
The `ft_putchar_fd` function outputs the character `c` to the given file descriptor `fd`.
#### ft_putstr_fd
```C
void ft_putstr_fd(char *s, int fd);
```
The `ft_putstr_fd` function outputs the string `s` to the given file descriptor `fd`.
#### ft_putendl_fd
```C
void ft_putendl_fd(char *s, int fd);
```
The `ft_putendl_fd` function outputs the string `s` to the given file descriptor `fd`, followed by a newline.
#### ft_putnbr_fd
```C
void ft_putnbr_fd(int n, int fd);
```
The `ft_putnbr_fd` function outputs the integer `n` to the given file descriptor `fd`.

### Bonus functions

The bonus part learns us how to use linked lists. You can learn more about linked lists [here](https://en.wikipedia.org/wiki/Linked_list).
The structure of the linked list is defined as follows:
```C
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```

#### ft_lstnew
```C
t_list *ft_lstnew(void *content);
```
The `ft_lstnew` function allocates and returns a new element with the content `content`.
#### ft_lstadd_front
```C
void ft_lstadd_front(t_list **lst, t_list *new);
```
The `ft_lstadd_front` function adds the element `new` at the beginning of the list.
#### ft_lstsize
```C
int ft_lstsize(t_list *lst);
```
The `ft_lstsize` function counts the number of elements in a list.
#### ft_lstlast
```C
t_list *ft_lstlast(t_list *lst);
```
The `ft_lstlast` function returns the last element of the list.
#### ft_lstadd_back
```C
void ft_lstadd_back(t_list **lst, t_list *new);
```
The `ft_lstadd_back` function adds the element `new` at the end of the list.
#### ft_lstdelone
```C
void ft_lstdelone(t_list *lst, void (*del)(void *));
```
The `ft_lstdelone` function frees the memory of the element `lst` using the function `del`.
#### ft_lstclear
```C
void ft_lstclear(t_list **lst, void (*del)(void *));
```
The `ft_lstclear` function deletes and frees the given element and every successor of that element, using the function `del` and free.
#### ft_lstiter
```C
void ft_lstiter(t_list *lst, void (*f)(void *));
```
The `ft_lstiter` function iterates the list `lst` and applies the function `f` to the content of each element.
#### ft_lstmap
```C
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
``` 
The `ft_lstmap` function iterates the list `lst` and applies the function `f` to the content of each element. It creates a new list resulting from the successive applications of `f`.

### Extra functions (not part of the 42 curriculum)

#### get_next_line
```C
char	*get_next_line(int fd);
```
The `get_next_line` function reads a line from a file descriptor.
> [!NOTE]
> The `get_next_line` function need to read all the lines from the file descriptor before it can read the next line and **avoid memory leaks**.

#### ft_rand
```C
unsigned int	ft_rand(unsigned int min, unsigned int max);
```
The `ft_rand` function generates a random number between `min` and `max`.

#### ft_isspace
```C
int	ft_isspace(int c);
```
The `ft_isspace` function checks if the passed character is a white-space character.

#### ft_splitf
```C
char	**ft_splitf(char const *str, int (is_chr)(int));
```
The `ft_splitf` function splits the string `str` using the function `is_chr` as a delimiter and returns an array of strings.

#### ft_straddchr
```C
char	*ft_straddchr(char *str, char c);
```
The `ft_straddchr` function adds the character `c` at the end of the string `str`.