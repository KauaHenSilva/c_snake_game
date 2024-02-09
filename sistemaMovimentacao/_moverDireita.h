#if !defined(MOVERDIREITA)
#define MOVERDIREITA

void moverDireita()
{
  direcao = DIREITA;
  if (verificarDirecaoValida(direcao))
  {
    dadosCabeca.direcaoCabecaX = 1;
    dadosCabeca.direcaoCabecaY = 0;
  }
}

#endif // MOVERDIREITA
