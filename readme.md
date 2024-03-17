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

### ❤️ Contribuição

Contribuições são bem-vindas! Para contribuir, siga estes passos:

1. Favorito projeto!

>https://github.com/KauaHenSilva/C_SnakeGame

2. Aprikore o projeto! Faça um fork.

>https://github.com/KauaHenSilva/C_SnakeGame


### 🔧 Implantação

1. **Clone este repositório:**

  ```bash
  git clone https://github.com/usuario/projeto.git
  ```

2. **Navegue até o diretório do projeto:**

  ```bash
  cd projeto
  ```


4. **Compilação com Audio:**

 > Descomente a linha 13 no arquivo `main.c` para adicionar a opção de áudio.

  ```bash
  gcc .\main.c -o main.exe -lWinmm
  ```

5. **Compilação sem Audio:**

  ```bash
  gcc .\main.c -o main.exe
  ```


### Uso

Agora o projeto está configurado. Você pode executá-lo com o seguinte comando:
 
  ```bash
  ./main.exe
  ```

Use as teclas 'w' , 'a', 's' e 'd' para controlar a cobra, ou usar as setas do teclado para controlar a cobra. O jogo termina quando a cobra bate na parede, bate em si mesma ou quando o usuario aperta 'x'.
