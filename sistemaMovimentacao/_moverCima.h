#if !defined(MOVERCIMA)
#define MOVERCIMA

#include "_verificarDirecao.h"

void moverCima(stDadosCabeca *dadosCabeca)
{
  direcao = CIMA;
  if (verificarDirecaoValida(*dadosCabeca, direcao))
  {
    (*dadosCabeca).direcaoCabecaX = 0;
    (*dadosCabeca).direcaoCabecaY = -1;
  }
}

#endif // MOVERCIMA