<div align="center"><img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png"></div>


# C - Arguments to Main and Unused Variables 🧑‍💻📚

## Project Overview 🔍

In this project, you will work with **command line arguments** and **unused variables** in C programming. You'll learn how to use arguments passed to your program, how to manage unused variables, and when to apply special attributes like `__attribute__((unused))`.

## Learning Objectives 🎯

By the end of this project, you should be able to explain the following concepts to anyone without the help of Google:

- **How to use arguments passed to your program** (`argc` and `argv`). 💬
- **The two prototypes of `main`** and when to use one or the other. 📝
- **How to handle unused variables** in your functions using `__attribute__((unused))` or `(void)` to avoid compilation warnings. 🚫

## Resources 📚

### Read or Watch 📖:

- [Arguments to main](https://intranet.hbtn.io/rltoken/ro9HSskzyAhNpzdcVhdVWw)
- [argc and argv](https://intranet.hbtn.io/rltoken/zjdRHZTL-ImDCnGuMfHYfA)
- [What does argc and argv mean?](https://intranet.hbtn.io/rltoken/RT0y1HPM-AChT_JQedpdaA)
- [How to compile with unused variables](https://intranet.hbtn.io/rltoken/GvQNF9qKoUuY1t0U1AsetA)

## Requirements 📝

### General Requirements:
- **Allowed editors**: vi, vim, emacs 💻
- All your files will be compiled on **Ubuntu 20.04 LTS** using **gcc**, with the following options:  
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line. 🧾
- A **README.md** file is mandatory at the root of the project folder. 📄
- Your code should follow the **Betty style** and will be checked using `betty-style.pl` and `betty-doc.pl`. 🎨
- **Global variables** are not allowed. 🚫
- No more than **5 functions per file**. 🔢
- The prototypes of all your functions and the prototype for the function `_putchar` should be included in the header file **main.h**. Be sure to push this header file. 📂

### Compilation 🛠:
All code will be compiled with the following command:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o program_name
