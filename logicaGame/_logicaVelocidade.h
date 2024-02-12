#if !defined(LOGICAVELOCIDAD)
#define LOGICAVELOCIDAD

void logicaVelocidade(stDadosStatusGame *dadosStatusGame, stDadosConstantes dadosConstantes)
{
  int velocidade;
    if ((*dadosStatusGame).pontuacao < 50)
    {
      velocidade = 5;
    }
    else if ((*dadosStatusGame).pontuacao < 100)
    {
      velocidade = 6;
    }
    else if ((*dadosStatusGame).pontuacao < 150)
    {
      velocidade = 8;
    }
    else if ((*dadosStatusGame).pontuacao < 200)
    {
      velocidade = 10;
    }
    else if ((*dadosStatusGame).pontuacao < 200)
    {
      velocidade = 12;
    }

    if (direcao == CIMA || direcao == BAIXO)
    {
      Sleep((dadosConstantes.velocidade / velocidade) * 2);
    }
    else if (direcao == ESQUERDA || direcao == DIREITA)
    {
      Sleep(dadosConstantes.velocidade / velocidade);
    }
}

#endif // LOGICAVELOCIDAD