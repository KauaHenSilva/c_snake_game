#if !defined(LOGICAGAME)
#define LOGICAGAME

#include "_logicaVelocidade.h"
#include "_logicaFimDeJogo.h"

struct 
{
  void (*logicaVelocidade)(stDadosStatusGame *dadosStatusGame, stDadosConstantes dadosConstantes);
  void (*logicaFimDeJogo)(int ***tela, stDadosStatusGame dadosStatusGame, stDadosCalda *dadosCalda);
}logicaGame = {
  (void (*) (stDadosStatusGame*, stDadosConstantes))logicaVelocidade,
  (void (*) (int ***, stDadosStatusGame, stDadosCalda *))LogicaFimDeJogo
};


#endif // LOGICAGAME
