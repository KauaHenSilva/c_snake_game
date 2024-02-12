#if !defined(INICIALIZACOES)
#define INICIALIZACOES

#include "_iniciarCabeca.h"
#include "_iniciarCalda.h"
#include "_iniciarComida.h"
#include "_iniciarDadosJogo.h"
#include "_iniciarDadosConstantes.h"

struct 
{
  void (*iniciarCabeca)(stDadosCabeca *dadosCabeca);
  void (*iniciarCalda)(stDadosCalda *dadosCalda, stDadosConstantes dadosConstantes);
  void (*iniciarComida)(stDadosComida *dadosComida, stDadosCabeca dadosCabeca, stDadosConstantes dadosConstantes);
  void (*iniciarDadosConstantes)(stDadosConstantes *dadosContantes, int tmCalda, int tmTelaAl, int tmTelaLa, int vel);
  void (*iniciarDadosJogo)(stDadosStatusGame *dadosStatusGame);
} Inicializacoes =
{
  (void(*)(stDadosCabeca*)) _iniciarCabeca,
  (void(*)(stDadosCalda*, stDadosConstantes))  _iniciarCalda,
  (void(*)(stDadosComida*, stDadosCabeca, stDadosConstantes)) _iniciarComida,
  (void(*)(stDadosConstantes *, int , int , int , int )) _iniciarDadosConstantes,
  (void(*)(stDadosStatusGame*)) _iniciarDadosJogo,
};

#endif // INICIALIZACOES
