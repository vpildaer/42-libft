*This project has been created as part of the 42 curriculum by vpildaer.*

# Libft - 42 Belgium
My very first own library of functions, based on some of the Standard C library functions, as well as some additional ones, aiming at dealing with strings, files  and linked lists.

## Table of Contents

* [What is Libft ? - Description](#what-is-libft-description)
* [What is in Libft ?](#what-is-in-libft)
* [How to use Libft ? - Instructions](#how-to-use-libft-instructions)
* [Resources](#resources)
* [AI use](#ai-use)
* [List of all the functions of Libft](#list-of-all-the-functions-of-libft)

## What is Libft ? - Description

**Libft** is the very first project of the 42 Common Core. While it is a global refresher of the *Piscine*, some new material can also be learned throughout the project (see **Part 3 - Linked Lists**).

The main goal of **Libft** is to create a static library called **libft.a** that can be (sometimes) reused in further 42 projects. 

### What is a static library ?

> A **static library** is a file containing a collection of object files (.o) that are linked into the program during the linking phase of compilation and are not relevant during runtime.

Basically, **static libraries** are just a collection of object files that are merged by the linker with another object file to form a final executable.

### What are the main benefits of a static library ? 

* Reusability
Once created, the static library **libft.a** can be reused by just linking it.

* Portability
The executable works anywhere, the library file is no longer needed to run the program.

* Organisation
Keeps a project clean, without multiple .c files.

## What is **in** Libft ?

There are 3 distinct parts to this project : Libc functions, Additional functions and Linked Lists.

### Part 1 - Libc functions

This part contains reimplementations of a set of functions from the Libc. They have the same prototypes and behaviors as the originals, and they do not rely on any external functions.

### Part 2 - Additional functions

This part contains reimplementations of functions that either not included in the Libc, or exist in a different form.

### Part 3 - Linked lists

This part contains functions using the following structure to manipulate linked lists : 
```
typedef struct s_list
{
void              *content;
struct s_list     *next;
}                  t_list;
```

## How to use Libft ? - Instructions

As said before, a **static library** is a collection of precompiled code that gets bundled directly into an executable at compile time.

Creating the **libft.a** file is done through the Makefile, by running `make` to obtain **libft.a**, or `make clean` to also remove all the object files (.o).

Our static library is now created ! To use it with a main.c file, the command is : 

```
gcc main.c -L. -lft -o program
```

The `-L` flag tells the linker where to look for libraries, adding `.` right after means "in the current directory".

The `-lft` flag tells the linker which library to link, the *lib* prefix being implied in the `-l` flag.

Basically, once **libft.a** is created, all the functions are packaged into one file and there is no need to list and/or (re)compile each and everyone of them.

## Resources

* [How to Create a Static Library in C?](https://www.geeksforgeeks.org/c/how-to-create-a-static-library-in-c/)

* [Static Libraries in C : all you need to know](https://medium.com/all-you-need-to-know-about-c-static-librairies/static-libraries-in-c-all-you-need-to-know-6f620a8370f7)

* [All you need to know about C Static libraries](https://dev.to/iamkhalil42/all-you-need-to-know-about-c-static-libraries-1o0b)

## AI use

AI was used as a helper to code some of the tests for Libft (mostly for **Part 3 - Linked Lists**) and to better understand some errors throughout the process. 

## List of all the functions of Libft

### Part 1 - Libc functions

#### ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint

Return a binary number (0 or 1) depending on whether or not the character matches the tested class

#### ft_toupper, ft_tolower

Converts uppercase to lowercase and vice versa.

#### ft_memset

Fills memory with a constant byte.

#### ft_bzero

Erases data by writing zeros to an area of memory.

#### ft_calloc

Allocates memory and sets it to zero.

#### ft_memcpy

Copies memory from one area to another. The memory areas must not overlap.

#### ft_memmove

Copies memory from one area to another, as though the copied bytes are temporarily stored. The memory areas may then overlap.

#### ft_memchr

Scans a memory area for the first instance of a character passed as argument.

#### ft_memcmp

Compares two memory areas byte per byte. Returns the difference of the first non-matching couple of bytes.

#### ft_strlen

Returns the length (= the amount of bytes in use) of the string. 

#### ft_strdup

Duplicates a string by allocating memory for the new string before filling it with the a copy of the data of the initial string.

#### ft_strlcpy

Copies a string to another. Takes the size (= the amount of memory reserved for the entire data structure) of the buffer into consideration and guarantees to NUL-terminate the result, making it a safer version of str(n)cpy.

#### ft_strlcat

Concatenates two strings. Takes the size (= the amount of memory reserved for the entire data structure) of the destination into consideration and guarantees to NUL-terminate the result, making it a safer version of str(n)cat.

#### ft_strchr, ft_strrchr

Locates the first/last occurence of a character in a string.

#### ft_strnstr

Locates a substring within n characters of a string.

#### ft_strncmp

Compares two strings character per character. Returns the difference of the ascii indexes of the first non-matching couple of characters within n characters.

#### ft_atoi

Converts a string to an integer.

### Part 2 - Additional functions

#### ft_itoa

Allocates memory and returns a string representing the integer received as an argument.

#### ft_substr

Allocates memory and returns a substring from a string.

#### ft_strjoin

Concatenates two strings after allocating memory for the resulting string.

#### ft_strtrim

Allocates memory and returns a copy of a string without set characters, removed from the beginning and the end.

#### ft_split

Allocates memory and returns an array of strings obtained by splitting the initial string each time a character sent as parameter is encountered.

#### ft_strmapi

Applies the function f to each character of a string, storing the result in a new string.

#### ft_striteri

Applies the function f to each character of a string, modifying the initial string.

#### ft_putchar_fd

Outputs a character to a specified file descriptor.

#### ft_putstr_fd

Outputs a string to a specified file descriptor.

#### ft_putendl_fd

Outputs a string to a specified file descriptor, followed by a new line.

#### ft_putnbr_fd

Outputs an integer to a specified file descriptor.

### Part 3 - Linked lists

#### ft_lstnew

Allocates memory and returns a new node.

#### ft_lstadd_front

Adds a node at the beginning of the list.

#### ft_lstsize

Counts the number of nodes in the list.

#### ft_lstlast

Returns the last node of the list.

#### ft_lstadd_back

Adds a node at the end of the list.

#### ft_lstdelone

Takes a node as parameter and frees its content using a function passed as parameter.

#### ft_lstclear

Deletes and frees a given node and all of the next ones using a function passed as parameter and the function **free**.

#### ft_lstiter

Iterates through a list and applies a function to the content of each node.

#### ft_lstmap

Iterates through a list, applies a function to each node’s content, and creates a new list resulting of the successive applications of the function.
