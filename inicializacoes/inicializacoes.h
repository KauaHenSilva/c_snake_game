#if !defined(INICIALIZACOES)
#define INICIALIZACOES

#include "_iniciarCabeca.h"
#include "_iniciarCalda.h"
#include "_iniciarComida.h"
#include "_iniciarDadosJogo.h"

struct 
{
  void (*iniciarCabeca)(void);
  void (*iniciarCalda)(int tamanhoCauda);
  void (*iniciarComida)(int tamanhoTelaLargura, int tamanhoTelaAltura);
  void (*iniciarDadosJogo)(void);
} Inicializacoes =
{
  (void(*)(void)) _iniciarCabeca,
  (void(*)(int))  _iniciarCalda,
  (void(*)(int, int)) _iniciarComida,
  (void(*)(void)) _iniciarDadosJogo,
};

#endif // INICIALIZACOES
