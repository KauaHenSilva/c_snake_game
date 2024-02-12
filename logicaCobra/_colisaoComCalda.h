#if !defined(COLICAOCOMCALDA)
#define COLICAOCOMCALDA

void colisaoComCalda(stDadosCalda dadosCalda, stDadosStatusGame *dadosStatusGame, stDadosCabeca dadosCabeca)
{
  for (int i = 0; i < dadosCalda.tamanhoCauda; i++)
  {
    if (dadosCalda.caldaX[i] == dadosCabeca.cabecaX 
        && dadosCalda.caldaY[i] == dadosCabeca.cabecaY)
    {
      (*dadosStatusGame).jogoEncerrado = 2;
    }
  }
}

#endif // COLICAOCOMCALDA
