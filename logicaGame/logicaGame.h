#if !defined(LOGICAGAME)
#define LOGICAGAME

#include "_logicaVelocidade.h"
#include "_logicaFimDeJogo.h"

struct 
{
  void (*logicaVelocidade)(int velocidadeGame);
  void (*logicaFimDeJogo)();
}logicaGame = {
  (void (*) (int))logicaVelocidade,
  (void (*) (void))LogicaFimDeJogo
};


#endif // LOGICAGAME
