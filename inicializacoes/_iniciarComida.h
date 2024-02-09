#if !defined(_INICIARCOMIDA)
#define _INICIARCOMIDA

#include "../modal/modal.h"
#include <stdlib.h>

void _iniciarComida(int tamanhoTelaLargura, int tamanhoTelaAltura)
{
  do{
    dadosComida.comidaX = rand() % tamanhoTelaLargura;
    dadosComida.comidaY = rand() % tamanhoTelaAltura;
  }while (dadosComida.comidaX == 0 || (dadosCabeca.cabecaX == dadosComida.comidaX && dadosCabeca.cabecaY == dadosComida.comidaY) );
  
}

#endif // _INICIARCOMIDA
