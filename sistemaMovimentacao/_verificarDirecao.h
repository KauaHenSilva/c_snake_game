#if !defined(VERIFICARDIRECAOVALIDA)
#define VERIFICARDIRECAOVALIDA

#include "../modal/modal.h"

int verificarDirecaoValida(stDadosCabeca dadosCabeca,int novaDirecao)
{
  if ((novaDirecao == CIMA && dadosCabeca.direcaoCabecaY == 1) ||
      (novaDirecao == BAIXO && dadosCabeca.direcaoCabecaY == -1) ||
      (novaDirecao == ESQUERDA && dadosCabeca.direcaoCabecaX == 1) ||
      (novaDirecao == DIREITA && dadosCabeca.direcaoCabecaX == -1))
  {
    return 0;
  }
  return 1;
}

#endif // VERIFICARDIRECAOVALIDA
