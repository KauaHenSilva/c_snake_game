#if !defined(LOGICAFIMDEJOGO)
#define LOGICAFIMDEJOGO

#include <stdio.h>
#include <conio.h>
#include "../modal/modal.h"

void LogicaFimDeJogo()
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
}

#endif // LOGICAFIMDEJOGO
