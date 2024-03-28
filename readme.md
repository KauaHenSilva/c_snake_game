# Snake Game in C

This is a project of a snake game implemented in the C language. The game features a snake that the player can control to get food, and the snake grows with each piece of food it eats.

## 🚀 Getting Started

Follow the instructions below to have the project running locally.

## 📋 Prerequisites

Make sure you have the GCC compiler installed on your machine. If you are using Windows, you will also need the Winmm library.

GCC --version:
```
  gcc.exe (MinGW.org GCC-6.3.0-1) 6.3.0
  Copyright (C) 2016 Free Software Foundation, Inc.
  This is free software; see the source for copying conditions.  There is NO
  warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```


## ❤️ Contribution

Contributions are welcome! To contribute, favorite the project and give your opinion about it!

## 🐬 Improve the Project.

Help improve the project! Fork it and develop your creativity!

>https://github.com/KauaHenSilva/C_SnakeGame

## 🔧 Deployment

1. **Clone this repository:**

  ```bash
  git clone https://github.com/username/project.git
  ```

2. **Navigate to the project directory:**

  ```bash
  cd project
  ```

4. **Compilation with Audio:**

> Uncomment line 13 in the main.c file to add the audio option.

  ```bash
  gcc .\main.c -o main.exe -lWinmm
  ```

5. **Compilation without Audio:**

  ```bash
  gcc .\main.c -o main.exe
  ```


### Usage

Now the project is set up. You can run it with the following command:
 
  ```bash
  ./main.exe
  ```

Use the ‘w’, ‘a’, ‘s’, and ‘d’ keys to control the snake, or use the arrow keys to control the snake. The game ends when the snake hits the wall, hits itself, or when the user presses ‘x’.
