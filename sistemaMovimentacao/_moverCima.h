#if !defined(MOVERCIMA)
#define MOVERCIMA

#include "_verificarDirecao.h"

void moverCima()
{
  direcao = CIMA;
  if (verificarDirecaoValida(direcao))
  {
    dadosCabeca.direcaoCabecaX = 0;
    dadosCabeca.direcaoCabecaY = -1;
  }
}

#endif // MOVERCIMA
