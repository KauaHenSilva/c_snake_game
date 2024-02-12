#if !defined(EXIBIRTELA)
#define EXIBIRTELA

#include <stdio.h>
#include "../modal/modal.h"

static void _desenharLinha(int tamTelaLargura)
{
  for (int x = 0; x < tamTelaLargura + 2; x++)
  {
    printf("%c", 219);
  }
  printf("\n");
}

void exibirTela(stDadosConstantes dadosConstantes,int **tela)
{
  _desenharLinha(dadosConstantes.tamanhoDaTelaLargura);

  for (int x = 0; x < dadosConstantes.tamanhoDaTelaAltura; x++)
  {
    printf("%c", 219);
    for (int y = 0; y < dadosConstantes.tamanhoDaTelaLargura; y++)
      printf("%c", tela[x][y]);
    printf("%c\n", 219);
  }

  _desenharLinha(dadosConstantes.tamanhoDaTelaLargura);
}

#endif // EXIBIRTELA
