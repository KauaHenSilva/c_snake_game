#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

#define TAMANHO_TELA_ALTURA 10
#define VELOCIDADE 400
#define TAMANHO_TELA_LARGURA (TAMANHO_TELA_ALTURA * 2)
#define TAMANHO_CALDA_MAX (TAMANHO_TELA_ALTURA * TAMANHO_TELA_LARGURA)

#include "./modal/modal.h"
#include "./sistemaSom/sistemaSom.h"
#include "./inicializacoes/inicializacoes.h"
#include "./desenharMapaJogo/desenharMapaJogo.h"
#include "./sistemaMovimentacao/sistemaMovimentacao.h"
#include "./logicaGame/logicaGame.h"
#include "./logicaCobra/logicaCobra.h"

void obterEntradaUsuario();
void atualizarLogicaJogo();

void obterEntradaUsuario(stDadosStatusGame *dadosStatusGame, stDadosCabeca *dadosCabeca)
{
  if (kbhit())
  {
    switch (getch())
    {
      case 'a':
        sistemaMovimentacao.moverEsquerda(dadosCabeca);
        break;
      case 's':
        sistemaMovimentacao.moverBaixo(dadosCabeca);
        break;
      case 'd':
        sistemaMovimentacao.moverDireita(dadosCabeca);
        break;
      case 'w':
        sistemaMovimentacao.moverCima(dadosCabeca);
        break;
      case 'x':
        (*dadosStatusGame).jogoEncerrado = 1;
        break;
    }
  }
}



void atualizarLogicaJogo(stDadosCalda *dadosCalda, stDadosStatusGame *dadosStatusGame, stDadosCabeca *dadosCabeca, stDadosConstantes *dadosConstantes, stDadosComida *dadosComida)
{
  logicaCobra.trocarUtimaCalda(dadosCalda, *dadosCabeca);

  logicaCobra.moverCobraParaDirecao(dadosCabeca);

  logicaCobra.verificarCasoBatidaParede(*dadosCabeca, *dadosConstantes, dadosStatusGame);

  logicaCobra.colisaoComComida(*dadosCabeca, dadosComida, dadosStatusGame, dadosCalda);

  logicaCobra.colisaoComCalda(*dadosCalda, dadosStatusGame, *dadosCabeca);

}

int main()
{
  stDadosConstantes dadosConstantes;
  stDadosStatusGame dadosStatusGame;
  stDadosCabeca dadosCabeca;
  stDadosComida dadosComida;
  stDadosCalda dadosCalda;

  srand(time(NULL));

  Inicializacoes.iniciarDadosConstantes(&dadosConstantes, TAMANHO_CALDA_MAX, TAMANHO_TELA_ALTURA, TAMANHO_TELA_LARGURA, VELOCIDADE);
  Inicializacoes.iniciarCabeca(&dadosCabeca);
  Inicializacoes.iniciarCalda(&dadosCalda, dadosConstantes);
  Inicializacoes.iniciarDadosJogo(&dadosStatusGame);
  Inicializacoes.iniciarComida(&dadosComida, dadosCabeca, dadosConstantes);

  while (dadosStatusGame.jogoEncerrado == 0)
  {
    printf("Sua pontuacao eh: %d\n", dadosStatusGame.pontuacao);
    obterEntradaUsuario(&dadosStatusGame, &dadosCabeca);
    atualizarLogicaJogo(&dadosCalda, &dadosStatusGame, &dadosCabeca, &dadosConstantes, &dadosComida);
    desenharMapaJogo.desenharMapaJogo(dadosConstantes, dadosCabeca, dadosComida, dadosCalda);
    logicaGame.logicaVelocidade(&dadosStatusGame, dadosConstantes);

    system("cls");
  }

  logicaGame.logicaFimDeJogo(dadosStatusGame, &dadosCalda);

  return 0;
}
