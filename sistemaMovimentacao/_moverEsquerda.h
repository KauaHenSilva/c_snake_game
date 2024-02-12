#if !defined(MOVERESQUERDA)
#define MOVERESQUERDA

#include "../modal/modal.h"
#include "_verificarDirecao.h"

void moverEsquerda(stDadosCabeca *dadosCabeca)
{
  direcao = ESQUERDA;
  if (verificarDirecaoValida(*dadosCabeca, direcao))
  {
    (*dadosCabeca).direcaoCabecaX = -1;
    (*dadosCabeca).direcaoCabecaY = 0;
  }
}

#endif // MOVERESQUERDA
