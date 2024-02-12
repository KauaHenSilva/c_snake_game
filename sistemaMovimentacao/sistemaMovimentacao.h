#if !defined(SISTEMAMOVIMENTACAO)
#define SISTEMAMOVIMENTACAO

#include "_moverCima.h"
#include "_moverBaixo.h"
#include "_moverEsquerda.h"
#include "_moverDireita.h"

struct 
{
  void (*moverCima)(stDadosCabeca *dadosCabeca);
  void (*moverBaixo)(stDadosCabeca *dadosCabeca);
  void (*moverEsquerda)(stDadosCabeca *dadosCabeca);
  void (*moverDireita)(stDadosCabeca *dadosCabeca);
} sistemaMovimentacao = {
  (void (*) (stDadosCabeca *))moverCima,
  (void (*) (stDadosCabeca *))moverBaixo,
  (void (*) (stDadosCabeca *))moverEsquerda,
  (void (*) (stDadosCabeca *))moverDireita
};

#endif // SISTEMAMOVIMENTACAO