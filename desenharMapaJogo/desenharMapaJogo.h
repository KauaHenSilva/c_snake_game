#if !defined(DESENHARMAPA)
#define DESENHARMAPA

#include "_exibirTela.h"
#include "_integrarTela.h"

struct 
{
  void (*exibirTela)(stDadosConstantes dadosConstantes,int **tela);
  void (*integrarTela)(int ***tela, stDadosConstantes dadosConstantes, stDadosCabeca dadosCabeca, stDadosComida dadosComida, stDadosCalda dadosCalda);
}desenharMapaJogo = {
  (void (*)(stDadosConstantes ,int **)) exibirTela,
  (void (*)(int ***, stDadosConstantes, stDadosCabeca, stDadosComida, stDadosCalda)) integrarTela,
};

#endif // DESENHARMAPA
