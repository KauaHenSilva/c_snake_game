#if !defined(INICIARTELA)
#define INICIARTELA

void iniciarTela(int ***tela, stDadosConstantes dadosConstantes)
{
  *tela = (int **)malloc(dadosConstantes.tamanhoDaTelaAltura * sizeof(int *));
  for (int i = 0; i < dadosConstantes.tamanhoDaTelaAltura; i++)
  {
    (*tela)[i] = (int *)malloc(dadosConstantes.tamanhoDaTelaLargura * sizeof(int));
  }
}

#endif // INICIARTELA
