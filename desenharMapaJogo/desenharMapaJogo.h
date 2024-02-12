#if !defined(DESENHARMAPA)
#define DESENHARMAPA

#include "_desenharMapa.h"

struct 
{
  void (*desenharMapaJogo)(stDadosConstantes dadosConstantes, stDadosCabeca dadosCabeca, stDadosComida dadosComida, stDadosCalda dadosCalda);
}desenharMapaJogo = {
  (void (*)(stDadosConstantes, stDadosCabeca, stDadosComida, stDadosCalda)) _desenharMapaJogo
};


#endif // DESENHARMAPA
