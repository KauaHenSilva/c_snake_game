#if !defined(INICIARDADOSCONSTANTES)
#define INICIARDADOSCONSTANTES

void _iniciarDadosConstantes(stDadosConstantes *dadosContantes, int tmCalda, int tmTelaAl, int tmTelaLa, int vel)
{
  (*dadosContantes).tamanhoDaCaldaMax = tmCalda;
  (*dadosContantes).tamanhoDaTelaAltura = tmTelaAl;
  (*dadosContantes).tamanhoDaTelaLargura = tmTelaLa;
  (*dadosContantes).velocidade = vel;
}

#endif // INICIARDADOSCONSTANTES
