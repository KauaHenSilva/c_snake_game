#if !defined(LOGICACOBRA)
#define LOGICACOBRA

#include "_trocarUtimaCalda.h"
#include "_verificarCasoBatidaParede.h"
#include "_moverCobraParaDirecao.h"
#include "_colisaoComComida.h"
#include "_colisaoComCalda.h"

struct 
{
  void (*trocarUtimaCalda)(stDadosCalda *dadosCalda, stDadosCabeca dadosCabeca);
  void (*verificarCasoBatidaParede)(stDadosCabeca dadosCabeca, stDadosConstantes dadosConstantes, stDadosStatusGame *dadosStatusGame);
  void (*moverCobraParaDirecao)(stDadosCabeca *dadosCabeca);
  void (*colisaoComComida)(stDadosCabeca dadosCabeca, stDadosComida *dadosComida, stDadosStatusGame *dadosStatusGame, stDadosCalda *dadosCalda);
  void (*colisaoComCalda)(stDadosCalda dadosCalda, stDadosStatusGame *dadosStatusGame, stDadosCabeca dadosCabeca);
}logicaCobra = {
  (void (*) (stDadosCalda *, stDadosCabeca))trocarUtimaCalda,
  (void (*) (stDadosCabeca, stDadosConstantes, stDadosStatusGame *))verificarBatidaParede,
  (void (*) (stDadosCabeca *))moverCobraParaDirecao,
  (void (*) (stDadosCabeca, stDadosComida *, stDadosStatusGame *, stDadosCalda *))colisaoComComida,
  (void (*) (stDadosCalda , stDadosStatusGame *, stDadosCabeca ))colisaoComCalda
};


#endif // LOGICACOBRA
