#if !defined(VERIFICARBATIDAPAREDE)
#define VERIFICARBATIDAPAREDE

#include "../modal/modal.h"

void verificarBatidaParede(int tamTelaLargura, int tamTelaAltura)
{
    if (dadosCabeca.cabecaX < 1 
      || dadosCabeca.cabecaX >= tamTelaLargura 
      || dadosCabeca.cabecaY < 0 
      || dadosCabeca.cabecaY >= tamTelaAltura)
  {
    dadosStatusGame.colisaoParede = 1;
    dadosStatusGame.jogoEncerrado = 1;
  }
}

#endif // VERIFICARBATIDAPAREDE
