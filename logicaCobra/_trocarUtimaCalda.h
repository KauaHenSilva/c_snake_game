#if !defined(TROCARUTIMACALDA)
#define TROCARUTIMACALDA

#include "../modal/modal.h"

void trocarUtimaCalda()
{
  int caldaAnteriorX, caldaAnteriorY;
  caldaAnteriorX = dadosCabeca.cabecaX;
  caldaAnteriorY = dadosCabeca.cabecaY;

  for (int i = 0; i < dadosCalda.tamanhoCauda; i++)
  {
    int caldaAnteriorSegX, caldaAnteriorSegY;
    caldaAnteriorSegX = caldaAnteriorX;
    caldaAnteriorSegY = caldaAnteriorY;

    caldaAnteriorX = dadosCalda.caldaX[i];
    caldaAnteriorY = dadosCalda.caldaY[i];

    dadosCalda.caldaX[i] = caldaAnteriorSegX;
    dadosCalda.caldaY[i] = caldaAnteriorSegY;
  }
}

#endif // TROCARUTIMACALDA
