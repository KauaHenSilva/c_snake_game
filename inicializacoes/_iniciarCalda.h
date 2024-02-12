#if !defined(_INICIARCORPO)
#define _INICIARCORPO

#include "../modal/modal.h"
#include <stdlib.h>

void _iniciarCalda(stDadosCalda *dadosCalda, stDadosConstantes dadosConstantes)
{
  (*dadosCalda).tamanhoCauda = 0;
  (*dadosCalda).caldaX = (int *)malloc(dadosConstantes.tamanhoDaTelaLargura * dadosConstantes.tamanhoDaTelaAltura * sizeof(int));
  (*dadosCalda).caldaY = (int *)malloc(dadosConstantes.tamanhoDaTelaLargura * dadosConstantes.tamanhoDaTelaAltura * sizeof(int));
}

#endif // _INICIARCORPO
