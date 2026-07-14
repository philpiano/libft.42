*This project has been created as part of the 42 curriculum by [@pwarda](mailto:pwarda@student.42warsaw.pl).*
# "libft" - *A Library of C Functions*
## Contents
- [Description](#description)
- [Instructions](#instructions)
- [Features](#features)
- [Usage](#usage)
- [Resources](#resources)
- [FAQ](#faq)

# Description
'libft' is a library of C functions that re-implements a set of curated C functions. Utility functions for string manipulation, output to file descriptors and linked list operations. 

libft is compiled into 'libft.a', and its functions can be linked into any C project.

There are 43 functions in a package grouped into 5 categories;

| Category | Functions |
|---|---|
| Part 1 - Character Checks | `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` |
| Part 2 - Memory Manipulation | `ft_memset` `ft_bzero` `ft_memcpy` `ft_memmove` `ft_memchr` `ft_memcmp` `ft_calloc` |
| Part 3 - String & Character Manipulation | `ft_strlen` `ft_strlcpy` `ft_strlcat` `ft_strchr` `ft_strrchr` `ft_strncmp` `ft_strnstr` `ft_strdup` `ft_substr` `ft_strjoin` `ft_strtrim` `ft_split` `ft_strmapi` `ft_striteri` `ft_toupper` `ft_tolower` `ft_atoi` `ft_itoa` |
| Part 4 - Write to File Functions | `ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd` |
| Part 5 - Linked List Operators | `ft_lstnew` `ft_lstadd_front` `ft_lstsize` `ft_lstlast` `ft_lstadd_back` `ft_lstdelone` `ft_lstclear` `ft_lstiter` `ft_lstmap` |
# Instructions
### Requirements
- **Compiler:** `cc` with flags `-Wall -Wextra -Werror`
- **Standard:** C99 or later
- **Dependencies:** Standard C library headers (`<stddef.h>`, `<stdlib.h>`, `<unistd.h>`)

### Terminal Instructions for building the library
```bash
# Compile and archive into libft.a
make

# Clean up object files after compiling
make clean

# Same as 'clean' but also removes libft.a
make fclean

# Fully recompiles everything from scratch
make re
```
### Linking libft in your project
```bash
# Place libft.a into your project folder, use #include <libft.h> in your C project, then;
cc -Wall -Wextra -Werror main.c libft.a -o <program name>

# Or, if the library is in a subdirectory:
cc -Wall -Wextra -Werror -I <path/to/libft> main.c <path/to/libft/libft.a> -o <program name>
```
### Layout of libft files
```
Libft/
├── libft.h          # Public header
├── Makefile
├── ft_*.c           # One source file per function (43 files)
└── README.md
```
# Features
What Functions does libft Contain?
The following sections explain the functions, their prototypes and what they do.

## Part 1 - Character Checks
*Libc Reimplementations*
Character check functions return 1 for True, and 0 for False.

| Prototype | Explanation | Example |
| --- | --- | --- |
|`int ft_isalpha(int c);`|takes int c, tests ASCII value = alphabetic, returns boolean 1=true 0=false|"a" = true "5" = false|
|`int ft_isdigit(int c);`|takes int c, tests ASCII value = numeric digit, returns boolean 1=true 0=false|"a" = false "5" = true|
|`int ft_isalnum(int c);`|takes int c, tests ASCII value = alphabet or numeric digit, returns boolean 1=true 0=false|"a" = true "5" = true|
|`int ft_isascii(int c);`|takes int c, tests ASCII value = 0-127; covering letters, digits + symbols. Returns boolean 1=true 0=false|"a" = true "�" = false|
|`int ft_isprint(int c);`|takes int c, tests if printable ASCII ie letter, digit or symbol, returns boolean 1=true 0=false|"&" = true "�" = false|

## Part 2 - Memory Manipulation
| Prototype | Explanation | Example | Notes |
| --- | --- | --- | --- |
|`void *ft_memset(void *s, int c, size_t n);`|takes *string, int c, int n. Sets first n bytes to c, returns * to same address|"hello, wassup!, X, 8" = "XXXXXXXXassup!"|Operates on original memory in place. Function similar to bzero.|
|`void ft_bzero(void *s, size_t n);`|takes *string and size_t n, sets first n bytes to '\0', returns nothing, operates on original string. A form of initialising memory.|"hello, wassup!, 8" = "\0\0\0\0\0\0\0\0assup!".|Operates on original memory in place. Function similar to memset.|
|`void *ft_memcpy(void *dest, const void *src, size_t n);`|takes *src *dest and size_t n, copies first n bytes from src into dest, overwrites the n chars of dest with n chars from src. Returns * to now modified dest.|"helloworld, xoxoxoxo, 6" = "xoxoxoorld".|Overlap between src and dest not handled; causes corruption. Use memmove instead.|
|`void *ft_memmove(void *dest, const void *src, size_t n);`|Takes *src *dest and size_t n. Copies first n bytes of src into dest, checks src bytes don't exceed dest bytes. Returns * to now modified dest.|"helloworld, xoxoxoxoxo, 3" = "xoxloworld"|Handles overlapping memory. If src and dest overlap, copies safely without corruption. memmove better than memcpy if overlap possible.|
|`void *ft_memchr(const void *s, int c, size_t n);`|Takes memory block, find value, and n bytes. Returns pointer to first value appearance.||Unlike strchr, works on memory instead of strings, does not stop on \0 marker.|
|`int ft_memcmp(const void *s1, const void *s2, size_t n);`|Takes 2 memory blocks, compares them across n bytes. Returns 0 if identical. +ve number if 1st val greater. -ve if 1st val smaller.||Unlike strncmp, doesn't treat \0 marker as stop.|
|`void *ft_calloc(size_t nmemb, size_t size);`|"Clear Allocation." Reserves nmemb * size number of bytes, sets every byte to 0, returns * to allocated memory address.|"5 * ((sizeof)char)" = "00000".|If allocation fails, nothing returned.|

## Part 3 - String & Character Manipulation
|Prototype|Explanation|Example|Notes|
|---|---|---|---|
|`size_t ft_strlen(const char *s);`|Take *string. Reads string until '\0'. Returns string length int.|"helloworld" = 10.||
|`size_t ft_strlcpy(char *dst, const char *src, size_t size);`|Takes *dst, *src and size_t size. Writes at most size-1 chars of src into dst, writes '\0' at index size-1. Returns total length of src.|"helloworld, xxxxx, 5" = "hellx" = returns 10.|Return value shows (if return >= size) truncation occurred.|
|`size_t ft_strlcat(char *dst, const char *src, size_t size);`|Takes *dst *src and size_t size. Writes src at end of dst, writing at most size - strlen(dst) - 1 characters, appends '\0'. Returns dst + src length.|"hello, world, 20" = "helloworld" = returns 10. OR "hello, world, 8" = "hellowo".|Return value shows (if return > size) truncation occurred.|
|`int ft_toupper(int c);`|Takes int. Checks if ASCII small case. If small converts to capital. Returns converted ASCII.|If iterated through a string: "The Quick Brown Fox" = "THE QUICK BROWN FOX"||
|`int ft_tolower(int c);`|Takes int. Checks if ASCII capital case. If capital converts to small. Returns converted ASCII.|If iterated through a string: "The Quick Brown Fox" = "the quick brown fox"||
|`char *ft_strchr(const char *s, int c);`|Takes *string and int c. Scans from start for first occurrence of c. Returns * to that position, nothing if not found.|"helloworld, 'w'" = * to "world".|'\0' is searchable; passing '\0' returns * to string end.|
|`char *ft_strrchr(const char *s, int c);`|Takes *string and int c. Scans for last occurrence of c. Returns * to that position, nothing if not found.|"helloworld, 'o'" = * to "orld".|Same as strchr but last match, not first.|
|`int ft_strncmp(const char *s1, const char *s2, size_t n);`|Takes *s1, *s2 and size_t n. Compares char by char up to n chars. Returns 0 if equal, positive if s1 greater, negative if s2 greater.|"hello, help, 3" = 0. "hello, help, 4" = negative.|n limit makes it safer than unbounded strcmp.|
|`char *ft_strnstr(const char *big, const char *little, size_t len);`|Takes *big, *little and size_t len. Searches for first occurrence of little inside big, within len chars. Returns * to match, big if little empty, nothing if no match.|"helloworld, low, 10" = * to "loworld".||
|`int ft_atoi(const char *nptr);`|Takes string. Walks through whitespace to first number, converts to int, ignores anything after the last digit. Returns int.|"'tab'\n   -2342sfgsdf" = "-2342"|Variations exist, modern implementations may calculate "-+---++" etc. Classic implementations only handle 1 single leading +/- symbol, 'undefined behaviour' if more present.|
|`char *ft_strdup(const char *s);`|String Duplicate. Takes *char. Measures string length until '\0', malloc appropriate memory, copies string. Returns *char of duplicate.|"helloworld" + "__________" = "helloworld" -> malloc(11) -> copy "helloworld" (new address)|Memory not freed after, user must free. If malloc fails, nothing is returned.|
|`char *ft_substr(char const *s, unsigned int start, size_t len);`|Takes *string, start index, size_t len. Mallocs new string of len chars copied from start index. Returns *substring.|"helloworld, 2, 5" = "llowo".|User must free. If malloc fails, nothing returned.|
|`char *ft_strjoin(char const *s1, char const *s2);`|Takes *s1 and *s2. Mallocs new string, copies s1 then s2 after it. Returns *joined string.|"hello, world" = "helloworld".|User must free. If malloc fails, nothing returned.|
|`char *ft_strtrim(char const *s1, char const *set);`|Takes *string and *set. Mallocs copy of string with all set chars removed from start and end. Returns *trimmed string.|"xxhelloxx, x" = "hello".|Only trims ends, not middle. User must free.|
|`char **ft_split(char const *s, char c);`|Takes *string and char c. Splits string into substrings using c as delimiter. Returns malloc'd NULL-terminated array of *strings.|"hello world hi, ' '" = "hello" "world" "hi".|Skips consecutive delimiters. User must free each string + array.|
|`char *ft_itoa(int n);`|Integer to ASCII. Takes int. Mallocs and converts int to string. Returns *string.|-42 = "-42".|Handles negatives and INT_MIN. User must free.|
|`char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`|Takes *string and function f. Mallocs new string, applies f to each char with its index. Returns *new string.|f = toupper: "hello" = "HELLO".|Original untouched. User must free.|
|`void ft_striteri(char *s, void (*f)(unsigned int, char*));`|Takes *string and function f. Applies f to each char in place, passing index and *char. Returns nothing.|f = toupper: "hello" = "HELLO".|Modifies original memory in place, unlike strmapi.|

## Part 4 - Write to File Functions
|Prototype|Explanation|
|---|---|
|`void ft_putchar_fd(char c, int fd);`|Takes char c and int fd. Writes c to file descriptor fd. Returns nothing.|
|`void ft_putstr_fd(char *s, int fd);`|Takes *string and int fd. Writes string to file descriptor fd. Returns nothing.|
|`void ft_putendl_fd(char *s, int fd);`|Takes *string and int fd. Writes string then '\n' to file descriptor fd. Returns nothing.|
|`void ft_putnbr_fd(int n, int fd);`|Takes int n and int fd. Writes n as text to file descriptor fd. Handles negatives and INT_MIN. Returns nothing.|

## Part 5 - Linked List Operators
*(`t_list`) - The list node type:*
```c
typedef struct s_list
{
    void          *content;   /* arbitrary payload pointer */
    struct s_list *next;      /* pointer to next node, NULL if last */
}   t_list;
```
|Prototype|Explanation|Example|Notes|
|---|---|---|---|
|`t_list *ft_lstnew(void *content);`|Takes *content. Mallocs new node, sets content, sets next = NULL. Returns *node.|"hello" = node("hello" → NULL).|If malloc fails, nothing returned.|
|`void ft_lstadd_front(t_list **lst, t_list *new);`|Takes **list and *new node. Adds node at start of list. Returns nothing.|b → c, add a = a → b → c.||
|`int ft_lstsize(t_list *lst);`|Takes *list. Counts nodes until NULL. Returns int count.|a → b → c = 3.||
|`t_list *ft_lstlast(t_list *lst);`|Takes *list. Walks to end. Returns * to last node.|a → b → c = * to c.||
|`void ft_lstadd_back(t_list **lst, t_list *new);`|Takes **list and *new node. Adds node at end of list. Returns nothing.|a → b, add c = a → b → c.||
|`void ft_lstdelone(t_list *lst, void (*del)(void *));`|Takes *node and del function. Frees node's content using del, frees node. Returns nothing.||next node not freed, list beyond survives.|
|`void ft_lstclear(t_list **lst, void (*del)(void *));`|Takes **list and del function. Deletes and frees given node and all following, sets pointer to NULL. Returns nothing.|a → b → c = NULL.||
|`void ft_lstiter(t_list *lst, void (*f)(void *));`|Takes *list and function f. Applies f to content of every node. Returns nothing.||Modifies content in place.|
|`t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`|Takes *list, function f, del function. Mallocs new list where each node's content = f applied to original's. Returns *new list.||If malloc fails mid-way, dels and frees new list, nothing returned. Original untouched.|

# Usage
### Including the library
Example:
```c
#include "libft.h"

int main(void)
{
    /* String manipulators */
    char *s = ft_strjoin("Hello, ", "World!");
    ft_putendl_fd(s, 1);
    free(s);

    /* Linked list */
    t_list *lst = NULL;
    ft_lstadd_back(&lst, ft_lstnew("first"));
    ft_lstadd_back(&lst, ft_lstnew("second"));
    ft_putendl_fd((char *)ft_lstlast(lst)->content, 1);
    ft_lstclear(&lst, free);
    return (0);
}
```
Compile with:
```bash
cc -Wall -Wextra -Werror main.c libft.a
```

# Resources
|Source|Information|
|---|---|
|man| Manual pages for libc standard functions|
|Claude AI| Claude was used as a personalised tutor to ask specific questions|
|Geeks for Geeks|Was used for explanations and definitions|
|Python Tutor|I asked to see code in action|
|GNU C Library|Referenced for all libc functions|
|42 Norminette|Coding Standard enforced at 42|
|libftTester| Used to thoroughly test edge cases|

# FAQ
**What's the point of implementing functions that already exist?**  
Cos YOLO! ... Nah but seriously, reimplementing existing functions and making them thorough enough to pass testers taught me a lot about programming in C, makefile and code writing logic etc.

**How did you test the files?**  
All functions were run through thorough edge cases; tests including libftTester and others findable online.

**Does libft pass Norminette?**  
Yes. All files pass Norminette tests.  

---
### Acknowledgements
Thanks to the 42 Warsaw community and peers who reviewed and tested this library.

### License
Educational project — part of the 42 curriculum. No formal license.

*libft is part of the 42 Common Core. Feedback and issues welcome via [email](mailto:pwarda@student.42warsaw.pl) or GitHub issues.*  
Built at [42 Warsaw](https://42warsaw.pl)

