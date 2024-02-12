#if !defined(INICIARDADOSCONSTANTES)
#define INICIARDADOSCONSTANTES

#include "../modal/modal.h"

void _iniciarDadosConstantes(stDadosConstantes *dadosContantes, int tmCalda, int tmTelaAl, int tmTelaLa, int vel)
{
  (*dadosContantes).tamanhoDaCaldaMax = tmCalda;
  (*dadosContantes).tamanhoDaTelaAltura = tmTelaAl;
  (*dadosContantes).tamanhoDaTelaLargura = tmTelaLa;
  (*dadosContantes).velocidade = vel;
}

#endif // INICIARDADOSCONSTANTES
