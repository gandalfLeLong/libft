# libft
📚 Libft

Libft is the first project of the 42 School curriculum.
The goal is to re-create a personal C standard library by implementing a set of essential functions for memory management, strings, linked lists, and more.
This library becomes a base for all future 42 projects and reinforces C fundamentals: pointers, memory usage, data manipulation, and clean code.

🚀 Features
🔧 Part 1 — Standard C Functions

Re-implementation of key libc functions:

memset, bzero, memcpy, memmove, memchr, memcmp

strlen, strlcpy, strlcat

strchr, strrchr, strnstr, strncmp

toupper, tolower

atoi

calloc, strdup

🛠️ Part 2 — Additional Utility Functions

Useful high-level helpers:

ft_substr

ft_strjoin

ft_strtrim

ft_split

ft_itoa

ft_strmapi, ft_striteri

ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

🌿 Bonus — Linked List Utilities (t_list)

ft_lstnew

ft_lstadd_front, ft_lstadd_back

ft_lstsize, ft_lstlast

ft_lstdelone, ft_lstclear

ft_lstiter, ft_lstmap

📦 Installation

Clone the repository and compile the library:

git clone https://github.com/<your-username>/libft.git
cd libft
make


This will create libft.a.

🧩 Usage

Include the library in your C project:

#include "libft.h"


Compile with:

gcc your_file.c -L. -lft


Or in a Makefile:

LIBFT = ./libft/libft.a

$(NAME): $(OBJ)
	CC $(OBJ) $(LIBFT) -o $(NAME)

🧪 Testing

You can test with your own main files or with community testers:

libft-unit-test

libft-war-machine

Francinette (42 tester)

🏗️ Project Structure
libft/
├── Makefile
├── libft.h
├── ft_*.c
└── bonus/

🏁 Status

✔️ Completed
📍 Norminette compliant
📼 Used as base for all following 42 projects

👤 Author

Charlie Mathot
42 Belgium
GitHub: @gandalfLeLong
