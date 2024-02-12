#if !defined(VERIFICARBATIDAPAREDE)
#define VERIFICARBATIDAPAREDE

#include "../modal/modal.h"

void verificarBatidaParede(stDadosCabeca dadosCabeca, stDadosConstantes dadosConstantes, stDadosStatusGame *dadosStatusGame)
{
    if (dadosCabeca.cabecaX < 0 
      || dadosCabeca.cabecaX >= dadosConstantes.tamanhoDaTelaLargura 
      || dadosCabeca.cabecaY < 0 
      || dadosCabeca.cabecaY >= dadosConstantes.tamanhoDaTelaAltura)
  {
    (*dadosStatusGame).colisaoParede = 1;
    (*dadosStatusGame).jogoEncerrado = 1;
  }
}

#endif // VERIFICARBATIDAPAREDE
