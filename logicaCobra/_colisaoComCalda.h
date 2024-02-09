#if !defined(COLICAOCOMCALDA)
#define COLICAOCOMCALDA

#include "../modal/modal.h"

void colisaoComCalda()
{
  for (int i = 0; i < dadosCalda.tamanhoCauda; i++)
  {
    if (dadosCalda.caldaX[i] == dadosCabeca.cabecaX 
        && dadosCalda.caldaY[i] == dadosCabeca.cabecaY)
    {
      dadosStatusGame.jogoEncerrado = 2;
    }
  }
}

#endif // COLICAOCOMCALDA
