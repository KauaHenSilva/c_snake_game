#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

#define TAMANHO_GRADE_ALTURA 20
#define TAMANHO_GRADE_LARGURA (TAMANHO_GRADE_ALTURA * 2)
#define TAMANHO_CALDA_MAX (TAMANHO_GRADE_ALTURA * TAMANHO_GRADE_LARGURA)

enum
{
  CIMA,
  BAIXO,
  ESQUERDA,
  DIREITA
} direcao;

void inicializarJogo();
void desenharMapaJogo();
int verificarDirecao(int novaDirecao);
void obterEntradaUsuario();
void atualizarLogicaJogo();

int jogoEncerrado = 0;
int cabecaX, cabecaY;
int pontuacao;
int direcaoCabecaX, direcaoCabecaY;
int comidaX, comidaY;
int caldaX[TAMANHO_CALDA_MAX], caldaY[TAMANHO_CALDA_MAX], tamanhoCauda;
int colisaoParede;

void inicializarJogo()
{
  srand(time(NULL));
  cabecaX = TAMANHO_GRADE_LARGURA / 2;
  cabecaY = TAMANHO_GRADE_ALTURA / 2;
  direcaoCabecaX = 0;
  direcaoCabecaY = 0;
  comidaX = rand() % TAMANHO_GRADE_LARGURA;
  comidaY = rand() % TAMANHO_GRADE_ALTURA;
  pontuacao = 0;
  tamanhoCauda = 0;
  colisaoParede = 0;
}

void desenharMapaJogo()
{
  for (int x = 0; x < TAMANHO_GRADE_LARGURA + 2; x++)
  {
    printf("%c", 219);
  }
  printf("\n");
  for (int x = 0; x < TAMANHO_GRADE_ALTURA; x++)
  {
    for (int y = 0; y < TAMANHO_GRADE_LARGURA; y++)
    {
      if (y == 0)
      {
        printf("%c", 219);
      }
      if (y == cabecaX && x == cabecaY)
      {
        printf("O");
      }
      else if (y == comidaX && x == comidaY)
      {
        printf("%c", 235);
      }
      else
      {
        int renderizarEspaco = 0;
        for (int k = 0; k < tamanhoCauda; k++)
        {
          if (caldaX[k] == y && caldaY[k] == x)
          {
            printf("o");
            renderizarEspaco = 1;
          }
        }
        if (renderizarEspaco != 1)
        {
          printf(" ");
        }
      }
      if (y == TAMANHO_GRADE_LARGURA - 1)
      {
        printf("%c", 219);
      }
    }
    printf("\n");
  }
  for (int x = 0; x < TAMANHO_GRADE_LARGURA + 2; x++)
  {
    printf("%c", 219);
  }
}

int verificarDirecao(int novaDirecao)
{
  if ((novaDirecao == CIMA && direcaoCabecaY == 1) ||
      (novaDirecao == BAIXO && direcaoCabecaY == -1) ||
      (novaDirecao == ESQUERDA && direcaoCabecaX == 1) ||
      (novaDirecao == DIREITA && direcaoCabecaX == -1))
  {
    return 0;
  }
  return 1;
}

void obterEntradaUsuario()
{
  if (kbhit())
  {
    int novaDirecao;
    switch (getch())
    {
    case 'a':
      novaDirecao = ESQUERDA;
      if (verificarDirecao(novaDirecao))
      {
        direcaoCabecaX = -1;
        direcaoCabecaY = 0;
      }
      break;
    case 's':
      novaDirecao = BAIXO;
      if (verificarDirecao(novaDirecao))
      {
        direcaoCabecaX = 0;
        direcaoCabecaY = 1;
      }
      break;
    case 'd':
      novaDirecao = DIREITA;
      if (verificarDirecao(novaDirecao))
      {
        direcaoCabecaX = 1;
        direcaoCabecaY = 0;
      }
      break;
    case 'w':
      novaDirecao = CIMA;
      if (verificarDirecao(novaDirecao))
      {
        direcaoCabecaX = 0;
        direcaoCabecaY = -1;
      }
      break;
    }
  }
}

void atualizarLogicaJogo()
{
  int i;
  int caldaAnteriorX, caldaAnteriorY;
  caldaAnteriorX = cabecaX;
  caldaAnteriorY = cabecaY;
  for (i = 0; i < tamanhoCauda; i++)
  {
    int caldaAnteriorSegX, caldaAnteriorSegY;
    caldaAnteriorSegX = caldaAnteriorX;
    caldaAnteriorSegY = caldaAnteriorY;
    caldaAnteriorX = caldaX[i];
    caldaAnteriorY = caldaY[i];
    caldaX[i] = caldaAnteriorSegX;
    caldaY[i] = caldaAnteriorSegY;
  }

  cabecaX += direcaoCabecaX;
  cabecaY += direcaoCabecaY;

  if (cabecaX < 0 || cabecaX >= TAMANHO_GRADE_LARGURA || cabecaY < 0 || cabecaY >= TAMANHO_GRADE_ALTURA)
  {
    colisaoParede = 1;
    jogoEncerrado = 1;
  }


  if (cabecaX == comidaX && cabecaY == comidaY)
  {
    pontuacao += 10;
    comidaX = rand() % TAMANHO_GRADE_LARGURA;
    comidaY = rand() % TAMANHO_GRADE_ALTURA;
    tamanhoCauda++;
  }

  for (i = 0; i < tamanhoCauda; i++)
  {
    if (caldaX[i] == cabecaX && caldaY[i] == cabecaY)
    {
      jogoEncerrado = 2;
    }
  }
}

int main()
{
  inicializarJogo();

  while (jogoEncerrado == 0)
  {
    obterEntradaUsuario();
    atualizarLogicaJogo();
    desenharMapaJogo();

    if (direcaoCabecaY == 1 || direcaoCabecaY == -1)
    {
      Sleep(100);
    }
    else
    {
      Sleep(50);
    }

    system("cls");
  }

  printf("\n\nFim de jogo!\n");
  if (jogoEncerrado == 1)
  {
    printf("Voce bateu na parede!\n");
  }
  else if (jogoEncerrado == 2)
  {
    printf("Voce bateu em si mesmo!\n");
  }
  printf("Sua pontuacao foi: %d\n", pontuacao);
  return 0;
}
