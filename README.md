# Libft

A custom implementation of the C standard library, created as part of the 42 school curriculum. This library provides essential C functions along with additional utility functions for linked lists, string manipulation, formatted output, and more.

## Table of Contents

- [About](#about)
- [Features](#features)
- [Compilation](#compilation)
- [Usage](#usage)
- [Function Reference](#function-reference)
  - [Character Functions](#character-functions)
  - [String Functions](#string-functions)
  - [Memory Functions](#memory-functions)
  - [Conversion Functions](#conversion-functions)
  - [Output Functions](#output-functions)
  - [Linked List Functions](#linked-list-functions)
  - [Printf Functions](#printf-functions)
  - [Get Next Line](#get-next-line)
  - [String Vector](#string-vector)
  - [Array Utilities](#array-utilities)
- [Author](#author)

## About

Libft is a foundational project that recreates many of the standard C library functions from scratch. It serves as a personal library that can be used and expanded throughout subsequent projects at 42 school and beyond.

This implementation includes over 50 functions covering string manipulation, memory management, character checking, linked lists, and additional utilities like a custom printf implementation and get_next_line function.

## Features

- ✅ Standard C library function reimplementations
- ✅ Linked list manipulation functions
- ✅ Custom `ft_printf` implementation
- ✅ `get_next_line` for reading files line by line
- ✅ String vector (dynamic string array) implementation
- ✅ Additional utility functions (ft_atoi_base, ft_strcmp, etc.)
- ✅ Compiled with strict flags: `-Wall -Wextra -Werror`

## Compilation

The library uses a Makefile with the following targets:

```bash
# Compile the standard library
make

# Compile with bonus functions (linked lists)
make bonus

# Compile everything including printf, get_next_line, and string vector
make complete

# Clean object files
make clean

# Clean object files and library
make fclean

# Recompile from scratch
make re

# Compile with debug flags and address sanitizer
make debug
```

The compilation produces `libft.a`, a static library that can be linked to your C projects.

## Usage

1. Clone the repository:
```bash
git clone https://github.com/MikAghumyan/libft.git
cd libft
```

2. Compile the library:
```bash
make complete
```

3. Include the header in your C files:
```c
#include "libft.h"
```

4. Compile your project with the library:
```bash
gcc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program
```

### Example

```c
#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello, libft!");
    ft_putendl_fd(str, 1);
    free(str);
    
    int num = ft_atoi("42");
    ft_putnbr_fd(num, 1);
    ft_putchar_fd('\n', 1);
    
    return (0);
}
```

## Function Reference

### Character Functions

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if character is alphabetic |
| `ft_isdigit` | Checks if character is a digit |
| `ft_isalnum` | Checks if character is alphanumeric |
| `ft_isascii` | Checks if character is ASCII |
| `ft_isprint` | Checks if character is printable |
| `ft_toupper` | Converts character to uppercase |
| `ft_tolower` | Converts character to lowercase |

### String Functions

| Function | Description |
|----------|-------------|
| `ft_strlen` | Calculates string length |
| `ft_strchr` | Locates first occurrence of character in string |
| `ft_strrchr` | Locates last occurrence of character in string |
| `ft_strcmp` | Compares two strings |
| `ft_strncmp` | Compares n bytes of two strings |
| `ft_strnstr` | Locates substring in string |
| `ft_strdup` | Duplicates a string |
| `ft_strlcpy` | Size-bounded string copy |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_substr` | Extracts substring from string |
| `ft_strjoin` | Concatenates two strings |
| `ft_strtrim` | Trims characters from string |
| `ft_split` | Splits string by delimiter |
| `ft_strmapi` | Applies function to each character |
| `ft_striteri` | Applies function to each character with index |

### Memory Functions

| Function | Description |
|----------|-------------|
| `ft_memset` | Fills memory with constant byte |
| `ft_bzero` | Zeros memory |
| `ft_memcpy` | Copies memory area |
| `ft_memmove` | Copies memory area (handles overlap) |
| `ft_memchr` | Scans memory for character |
| `ft_memcmp` | Compares memory areas |
| `ft_calloc` | Allocates and zeros memory |
| `ft_realloc` | Reallocates memory block |

### Conversion Functions

| Function | Description |
|----------|-------------|
| `ft_atoi` | Converts string to integer |
| `ft_atoi_base` | Converts string to integer with specified base |
| `ft_itoa` | Converts integer to string |

### Output Functions

| Function | Description |
|----------|-------------|
| `ft_putchar_fd` | Outputs character to file descriptor |
| `ft_putstr_fd` | Outputs string to file descriptor |
| `ft_putendl_fd` | Outputs string with newline to file descriptor |
| `ft_putnbr_fd` | Outputs integer to file descriptor |

### Linked List Functions

All linked list functions work with the `t_list` structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates new list element |
| `ft_lstadd_front` | Adds element at beginning of list |
| `ft_lstadd_back` | Adds element at end of list |
| `ft_lstsize` | Counts elements in list |
| `ft_lstlast` | Returns last element of list |
| `ft_lstdelone` | Deletes single element |
| `ft_lstclear` | Deletes and frees list |
| `ft_lstiter` | Iterates list and applies function |
| `ft_lstmap` | Iterates list and applies function, creating new list |

### Printf Functions

| Function | Description |
|----------|-------------|
| `ft_printf` | Formatted output to stdout |
| `ft_fprintf` | Formatted output to file descriptor |

Supported conversions: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`

### Get Next Line

| Function | Description |
|----------|-------------|
| `get_next_line` | Reads a line from file descriptor |

Configurable buffer size via `BUFFER_SIZE` macro (default: 32).

### String Vector

Dynamic string array implementation using the `t_strvector` structure:

```c
typedef struct s_strvector
{
    char    **data;
    size_t  size;
    size_t  capacity;
}   t_strvector;
```

| Function | Description |
|----------|-------------|
| `ft_sv_init` | Initializes string vector |
| `ft_sv_free` | Frees string vector |
| `ft_sv_reserve` | Reserves capacity |
| `ft_sv_push_back` | Adds string to end |
| `ft_sv_push_back_dup` | Adds duplicated string to end |
| `ft_sv_pop_back` | Removes last string |
| `ft_sv_pop_back_free` | Removes and frees last string |
| `ft_sv_insert` | Inserts string at specified index |

### Array Utilities

| Function | Description |
|----------|-------------|
| `ft_free_array` | Frees NULL-terminated array |
| `ft_free_array_len` | Frees array with specified length |

## Author

**Mik Aghumyan** (maghumya@student.42yerevan.am)

Created as part of the 42 school curriculum.

## License

This project is part of the 42 school curriculum and is provided for educational purposes.
