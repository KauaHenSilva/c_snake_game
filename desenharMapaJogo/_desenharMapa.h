#if !defined(_DESENHARPARTESUPERIOR)
#define _DESENHARPARTESUPERIOR

#include "../modal/modal.h"
#include <stdio.h>
#include <stdlib.h>

static void _desenharLinha(int tamTelaLargura)
{
  for (int x = 0; x < tamTelaLargura + 2; x++)
  {
    printf("%c", 219);
  }
  printf("\n");
}

void _desenharMapaJogo(int tamTelaLargura, int tamTelaAltura)
{
  _desenharLinha(tamTelaLargura);
  
  for (int x = 0; x < tamTelaAltura; x++)
  {
    for (int y = 0; y < tamTelaLargura; y++)
    {
      // desenhar a borda da esquerda
      if (y == 0)
      {
         printf("%c", 219);
      }
      // desenhar a cabeça
      if (y == dadosCabeca.cabecaX && x == dadosCabeca.cabecaY)
      {
        printf("O");
      }
      // desenhar a comida
      else if (y == dadosComida.comidaX && x == dadosComida.comidaY)
      {
        printf("%c", 235);
      }
      // desenhar a calda
      else
      {
        int possuiCalda = 0;
        for (int k = 0; k < dadosCalda.tamanhoCauda; k++)
        {
          if (dadosCalda.caldaX[k] == y && dadosCalda.caldaY[k] == x)
          {
            printf("o");
            possuiCalda = 1;
          }
        }
        if (possuiCalda != 1)
        {
          printf(" ");
        }
      }
      // desenhar a borda da direita
      if (y == tamTelaLargura - 1)
      {
        printf("%c", 219);
      }
    }
    printf("\n");
  }

  _desenharLinha(tamTelaLargura);

}

#endif // _DESENHARPARTESUPERIOR
