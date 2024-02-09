#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

#define TAMANHO_TELA_ALTURA 10
#define VELOCIDADE 300
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

void obterEntradaUsuario()
{
  if (kbhit())
  {
    switch (getch())
    {
      case 'a':
        sistemaMovimentacao.moverEsquerda();
        break;
      case 's':
        sistemaMovimentacao.moverBaixo();
        break;
      case 'd':
        sistemaMovimentacao.moverDireita();
        break;
      case 'w':
        sistemaMovimentacao.moverCima();
        break;
      case 'x':
        dadosStatusGame.jogoEncerrado = 1;
        break;
    }
  }
}



void atualizarLogicaJogo()
{
  logicaCobra.trocarUtimaCalda();

  logicaCobra.moverCobraParaDirecao();

  logicaCobra.verificarCasoBatidaParede(TAMANHO_TELA_LARGURA, TAMANHO_TELA_ALTURA);

  logicaCobra.colisaoComComida();

  logicaCobra.colisaoComCalda();

}

int main()
{
  srand(time(NULL));

  Inicializacoes.iniciarCabeca();
  Inicializacoes.iniciarCalda(TAMANHO_CALDA_MAX);
  Inicializacoes.iniciarDadosJogo();
  Inicializacoes.iniciarComida(TAMANHO_TELA_LARGURA, TAMANHO_TELA_ALTURA);

  while (dadosStatusGame.jogoEncerrado == 0)
  {
    printf("Sua pontuacao eh: %d\n", dadosStatusGame.pontuacao);
    obterEntradaUsuario();
    atualizarLogicaJogo();
    desenharMapaJogo.desenharMapaJogo(TAMANHO_TELA_LARGURA, TAMANHO_TELA_ALTURA);
    logicaGame.logicaVelocidade(VELOCIDADE);

    system("cls");
  }

  logicaGame.logicaFimDeJogo();

  return 0;
}
