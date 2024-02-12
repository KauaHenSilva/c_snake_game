#if !defined(MOVERDIREITA)
#define MOVERDIREITA

void moverDireita(stDadosCabeca *dadosCabeca)
{
  direcao = DIREITA;
  if (verificarDirecaoValida(*dadosCabeca, direcao))
  {
    (*dadosCabeca).direcaoCabecaX = 1;
    (*dadosCabeca).direcaoCabecaY = 0;
  }
}

#endif // MOVERDIREITA
