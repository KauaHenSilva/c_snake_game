#if !defined(MODAL)
#define MODAL

struct  {
  int pontuacao;
  int jogoEncerrado;
  int colisaoParede;
  int colisaoCalda;
} dadosStatusGame;

enum
{
  CIMA,
  BAIXO,
  ESQUERDA,
  DIREITA
} direcao;

struct 
{
  int cabecaX;
  int cabecaY;
  int direcaoCabecaX;
  int direcaoCabecaY;
} dadosCabeca;

struct
{
  int comidaX;
  int comidaY;
} dadosComida;

struct
{
  int *caldaX;
  int *caldaY;
  int tamanhoCauda;
} dadosCalda;

#endif // MODAL
