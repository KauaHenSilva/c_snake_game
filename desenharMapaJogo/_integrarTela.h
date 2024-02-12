#if !defined(_DESENHARPARTESUPERIOR)
#define _DESENHARPARTESUPERIOR

#include "../modal/modal.h"
#include <stdio.h>
#include <stdlib.h>


void integrarTela(int ***tela, stDadosConstantes dadosConstantes, stDadosCabeca dadosCabeca, stDadosComida dadosComida, stDadosCalda dadosCalda)
{
  
  for (int x = 0; x < dadosConstantes.tamanhoDaTelaAltura; x++)
  {
    for (int y = 0; y < dadosConstantes.tamanhoDaTelaLargura; y++)
    {
      // desenhar a cabeça
      if (y == dadosCabeca.cabecaX && x == dadosCabeca.cabecaY)
      {
        (*tela)[x][y] = 'O';
      }
      // desenhar a comida
      else if (y == dadosComida.comidaX && x == dadosComida.comidaY)
      {
        (*tela)[x][y] = 208;
      }
      // desenhar a calda
      else
      {
        int possuiCalda = 0;
        for (int k = 0; k < dadosCalda.tamanhoCauda; k++)
        {
          if (dadosCalda.caldaX[k] == y && dadosCalda.caldaY[k] == x)
          {
            (*tela)[x][y] = 'o';
            possuiCalda = 1;
          }
        }
        if (possuiCalda != 1)
        {
          (*tela)[x][y] = ' ';
        }
      }
    }
  }


}

#endif // _DESENHARPARTESUPERIOR
