#if !defined(SISTEMAMOVIMENTACAO)
#define SISTEMAMOVIMENTACAO

#include "_moverCima.h"
#include "_moverBaixo.h"
#include "_moverEsquerda.h"
#include "_moverDireita.h"

struct 
{
  void (*moverCima)();
  void (*moverBaixo)();
  void (*moverEsquerda)();
  void (*moverDireita)();
} sistemaMovimentacao = {
  (void (*) (void))moverCima,
  (void (*) (void))moverBaixo,
  (void (*) (void))moverEsquerda,
  (void (*) (void))moverDireita
};



#endif // SISTEMAMOVIMENTACAO
