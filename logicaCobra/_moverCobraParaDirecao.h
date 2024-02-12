#if !defined(MOVERCOBRAPARADIRECAO)
#define MOVERCOBRAPARADIRECAO

void moverCobraParaDirecao(stDadosCabeca *dadosCabeca)
{
  (*dadosCabeca).cabecaX += (*dadosCabeca).direcaoCabecaX;
  (*dadosCabeca).cabecaY += (*dadosCabeca).direcaoCabecaY;
}

#endif // MOVERCOBRAPARADIRECAO