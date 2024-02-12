#if !defined(_MOVERBAIXO)
#define _MOVERBAIXO

#include "./_verificarDirecao.h"

void moverBaixo(stDadosCabeca *dadosCabeca)
{
  direcao = BAIXO;
  if (verificarDirecaoValida(*dadosCabeca, direcao))
  {
    (*dadosCabeca).direcaoCabecaX = 0;
    (*dadosCabeca).direcaoCabecaY = 1;
  }
}

#endif // _MOVERBAIXO
