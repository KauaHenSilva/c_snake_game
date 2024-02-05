#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <tchar.h>
#include <process.h>



#define TAMANHO_GRADE_ALTURA 20
#define VELOCIDADE 100
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
void reproduzirSom();
void som();

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
      if(y == 0 && x == 0)
      {
        printf(" ");
      }
      else if (y == cabecaX && x == cabecaY)
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
    switch (getch())
    {
    case 'a':
      direcao = ESQUERDA;
      if (verificarDirecao(direcao))
      {
        direcaoCabecaX = -1;
        direcaoCabecaY = 0;
      }
      break;
    case 's':
      direcao = BAIXO;
      if (verificarDirecao(direcao))
      {
        direcaoCabecaX = 0;
        direcaoCabecaY = 1;
      }
      break;
    case 'd':
      direcao = DIREITA;
      if (verificarDirecao(direcao))
      {
        direcaoCabecaX = 1;
        direcaoCabecaY = 0;
      }
      break;
    case 'w':
      direcao = CIMA;
      if (verificarDirecao(direcao))
      {
        direcaoCabecaX = 0;
        direcaoCabecaY = -1;
      }
      break;
    }
  }
}

int comidaColisaoCobra()
{
  for (int i = 0; i < tamanhoCauda; i++)
  {
    if (caldaX[i] == comidaX && caldaY[i] == comidaY)
    {
      return 1;
    }
  }
  return 0;
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
    do
    {
      comidaX = rand() % TAMANHO_GRADE_LARGURA;
      comidaY = rand() % TAMANHO_GRADE_ALTURA;
    } while (comidaX != 1 && comidaY != 1 && comidaColisaoCobra() == 1);
  

    tamanhoCauda++;
    reproduzirSom();
  }

  for (i = 0; i < tamanhoCauda; i++)
  {
    if (caldaX[i] == cabecaX && caldaY[i] == cabecaY)
    {
      jogoEncerrado = 2;
    }
  }
} 


void reproduzirSom()
{
    _beginthread(som, 0, NULL);
}

void som()
{
    PlaySound(TEXT("C:/Meus-Estudos-Global/Desktop/C/JogoDaCobra/output/PouComendo.wav"), NULL, SND_FILENAME);
}

int main()
{
  inicializarJogo();
  int velocidade;

  while (jogoEncerrado == 0)
  {
    printf("Sua pontuacao eh: %d\n", pontuacao);
    obterEntradaUsuario();
    atualizarLogicaJogo();
    desenharMapaJogo();

    if (pontuacao < 50)
    {
      velocidade = 5;
    }
    else if (pontuacao < 100)
    {
      velocidade = 6;
    }
    else if (pontuacao < 150)
    {
      velocidade = 8;
    }
    else if (pontuacao < 200)
    {
      velocidade = 10;
    }
    else if (pontuacao < 200)
    {
      velocidade = 12;
    }

    if (direcao == CIMA || direcao == BAIXO)
    {
      Sleep((VELOCIDADE * 3) / velocidade);
    }
    else if (direcao == ESQUERDA || direcao == DIREITA)
    {
      Sleep(VELOCIDADE / velocidade);
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

  printf("Pressione espaco para sair\n");
  do
    if (getch() == ' ')
    {
      break;
    }
  while (1);

  return 0;
}
