#if !defined(_MOVERBAIXO)
#define _MOVERBAIXO

#include "./_verificarDirecao.h"

void moverBaixo()
{
  direcao = BAIXO;
  if (verificarDirecaoValida(direcao))
  {
    dadosCabeca.direcaoCabecaX = 0;
    dadosCabeca.direcaoCabecaY = 1;
  }
}

#endif // _MOVERBAIXO
