#if !defined(MOVERDIREITA)
#define MOVERDIREITA

#include "_verificarDirecao.h"

void moverDireita(stDadosCabeca *dadosCabeca)
{
  direcao = DIREITA;
  if (verificarDirecaoValida(*dadosCabeca, direcao))
  {
    (*dadosCabeca).direcaoCabecaX = 1;
    (*dadosCabeca).direcaoCabecaY = 0;
  }
}

#endif // MOVERDIREITA
