#if !defined(MODAL)
#define MODAL

typedef struct {
  int pontuacao;
  int jogoEncerrado;
  int colisaoParede;
  int colisaoCalda;
} stDadosStatusGame;

enum
{
  CIMA,
  BAIXO,
  ESQUERDA,
  DIREITA
} direcao;

typedef struct 
{
  int cabecaX;
  int cabecaY;
  int direcaoCabecaX;
  int direcaoCabecaY;
} stDadosCabeca;

typedef struct
{
  int comidaX;
  int comidaY;
} stDadosComida;

typedef struct
{
  int *caldaX;
  int *caldaY;
  int tamanhoCauda;
} stDadosCalda;

typedef struct 
{
  int velocidade;
  int tamanhoDaTelaAltura;
  int tamanhoDaTelaLargura;
  int tamanhoDaCaldaMax;
} stDadosConstantes;

#endif // MODAL