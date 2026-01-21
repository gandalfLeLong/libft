# Libft

The first project at 42. This project involves recoding a set of standard C library functions, as well as additional utility functions that will be reused in future projects.

---

### 💡 Key Features
* **Standard Libc:** Re-implementation of functions like `strlen`, `memcpy`, `atoi`, and `strdup`.
* **String/Memory Utils:** Custom functions for string manipulation (`ft_split`, `ft_strjoin`) and memory allocation (`ft_calloc`).
* **Linked Lists:** Bonus implementation of a linked list data structure and its management functions.
* **Constraints:** No use of global variables; strictly following the 42 Norm.

---

### 🛠️ Compilation & Usage

The project includes a **Makefile** with the following rules:

| Rule | Description |
| :--- | :--- |
| `make` | Compiles the core mandatory source files into `libft.a`. |
| `make bonus` | Compiles the core functions AND the linked list utility functions. |
| `make clean` | Removes object files (`.o`). |
| `make fclean` | Removes object files and the static library file. |
| `make re` | Performs a full re-compile. |

**To use in your code:**
1. Include the header: `#include "libft.h"`
2. Compile your program with the library:
```bash
cc main.c libft.a -o my_program
