#if !defined(DESENHARMAPA)
#define DESENHARMAPA

#include "_desenharMapa.h"

struct 
{
  void (*desenharMapaJogo)(int tamTelaLargura, int tamTelaAltura);
}desenharMapaJogo = {
  (void (*)(int, int)) _desenharMapaJogo
};


#endif // DESENHARMAPA
