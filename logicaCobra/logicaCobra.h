#if !defined(LOGICACOBRA)
#define LOGICACOBRA

#include "_trocarUtimaCalda.h"
#include "_verificarCasoBatidaParede.h"
#include "_moverCobraParaDirecao.h"
#include "_colisaoComComida.h"
#include "_colisaoComCalda.h"

struct 
{
  void (*trocarUtimaCalda)();
  void (*verificarCasoBatidaParede)(int tamTelaLargura, int tamTelaAltura);
  void (*moverCobraParaDirecao)();
  void (*colisaoComComida)();
  void (*colisaoComCalda)();
}logicaCobra = {
  (void (*) (void))trocarUtimaCalda,
  (void (*) (int, int))verificarBatidaParede,
  (void (*) (void))moverCobraParaDirecao,
  (void (*) (void))colisaoComComida,
  (void (*) (void))colisaoComCalda
};


#endif // LOGICACOBRA
