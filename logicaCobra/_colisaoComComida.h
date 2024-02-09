#if !defined(COLISAOCOMIDA)
#define COLISAOCOMIDA

static int _comidaColisaoCobra();


void colisaoComComida()
{
  if (dadosCabeca.cabecaX == dadosComida.comidaX 
      && dadosCabeca.cabecaY ==  dadosComida.comidaY)
  {
    dadosStatusGame.pontuacao += 10;
    do
    {
      dadosComida.comidaX = rand() % TAMANHO_TELA_LARGURA;
      dadosComida.comidaY = rand() % TAMANHO_TELA_ALTURA;
    } while (dadosComida.comidaX == 0 || _comidaColisaoCobra() == 1);

    dadosCalda.tamanhoCauda++;
    SistemaSom.playAudioComendo();
  }
}

static int _comidaColisaoCobra()
{
  for (int i = 0; i < dadosCalda.tamanhoCauda; i++)
  {
    if (dadosCalda.caldaX[i] == dadosComida.comidaX 
        && dadosCalda.caldaY[i] == dadosComida.comidaY)
      return 1;
  }
  if((dadosComida.comidaX == dadosCabeca.cabecaX 
        && dadosComida.comidaY == dadosCabeca.cabecaY))
        return 1;
  return 0;
}

#endif // COLISAOCOMIDA
