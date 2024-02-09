# Jogo da Cobra em C

Este é um projeto de um jogo da cobra implementado na linguagem C. O jogo apresenta uma cobra que o jogador pode controlar para pegar comida, e a cobra cresce a cada pedaço de comida que come.

### 🚀 Inicializando

Siga as instruções abaixo para ter o projeto em execução localmente.

### 📋 Pré-requisitos

Certifique-se de ter o compilador GCC instalado em sua máquina. Se você estiver usando o Windows, também precisará da biblioteca Winmm.

GCC --version:
```
  gcc.exe (MinGW.org GCC-6.3.0-1) 6.3.0
  Copyright (C) 2016 Free Software Foundation, Inc.
  This is free software; see the source for copying conditions.  There is NO
  warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

### 🔧 Implantação

1. **Clone este repositório:**

  ```bash
  https://github.com/KauaHenSilva/C_SnakeGame
  ```

2. **Navegue até o diretório do projeto:**

  ```bash
  cd C_SnakeGame
  ```

3. **Compile o projeto:**

  ```bash
  gcc .\main.c -o main.exe -lWinmm
  ```

### Uso

Agora o projeto está configurado. Você pode executá-lo com o seguinte comando:

  ./main.exe

Use as teclas 'w', 'a', 's' e 'd' para controlar a cobra. O jogo termina quando a cobra bate na parede ou em si mesma.