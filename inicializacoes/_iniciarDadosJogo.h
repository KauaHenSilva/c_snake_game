#if !defined(_INICIARDADOSJOGO)
#define _INICIARDADOSJOGO

#include "../modal/modal.h"

void _iniciarDadosJogo(stDadosStatusGame *dadosStatusGame)
{
  (*dadosStatusGame).pontuacao = 0;
  (*dadosStatusGame).colisaoParede = 0;
  (*dadosStatusGame).colisaoCalda = 0;
  (*dadosStatusGame).jogoEncerrado = 0;
}
#endif // _INICIARDADOSJOGO
