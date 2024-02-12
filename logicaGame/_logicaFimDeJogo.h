#if !defined(LOGICAFIMDEJOGO)
#define LOGICAFIMDEJOGO

#include <stdio.h>
#include <conio.h>
#include "../modal/modal.h"

void LogicaFimDeJogo(int ***tela, stDadosStatusGame dadosStatusGame, stDadosCalda *dadosCalda)
{
  printf("\n\nFim de jogo!\n");
  if (dadosStatusGame.jogoEncerrado == 1)
  {
    printf("Voce bateu na parede!\n");
  }
  else if (dadosStatusGame.jogoEncerrado == 2)
  {
    printf("Voce bateu em si mesmo!\n");
  }
  printf("Sua pontuacao foi: %d\n", dadosStatusGame.pontuacao);

  printf("Pressione espaco para sair\n");
  do
    if (getch() == ' ')
    {
      break;
    }
  while (1);
  
  free((*dadosCalda).caldaX);
  free((*dadosCalda).caldaY);
  for (int x = 0; x < 20; x++)
  {
    free((*tela)[x]);
  }
  free(*tela);

}

#endif // LOGICAFIMDEJOGO
