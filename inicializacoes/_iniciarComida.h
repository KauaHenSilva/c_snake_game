#if !defined(_INICIARCOMIDA)
#define _INICIARCOMIDA

#include "../modal/modal.h"
#include <stdlib.h>

void _iniciarComida(stDadosComida *dadosComida, stDadosCabeca dadosCabeca, stDadosConstantes dadosConstantes)
{
  do{
    (*dadosComida).comidaX = rand() % dadosConstantes.tamanhoDaTelaLargura;
    (*dadosComida).comidaY = rand() % dadosConstantes.tamanhoDaTelaAltura;
  }while ((dadosCabeca.cabecaX == (*dadosComida).comidaX && dadosCabeca.cabecaY == (*dadosComida).comidaY) );
  
}

#endif // _INICIARCOMIDA
