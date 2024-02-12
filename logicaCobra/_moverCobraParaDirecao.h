#if !defined(MOVERCOBRAPARADIRECAO)
#define MOVERCOBRAPARADIRECAO

#include "../modal/modal.h"

void moverCobraParaDirecao(stDadosCabeca *dadosCabeca)
{
  (*dadosCabeca).cabecaX += (*dadosCabeca).direcaoCabecaX;
  (*dadosCabeca).cabecaY += (*dadosCabeca).direcaoCabecaY;
}

#endif // MOVERCOBRAPARADIRECAO
