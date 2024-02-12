#if !defined(_INICIARCABECA)
#define _INICIARCABECA

void _iniciarCabeca(stDadosCabeca *dadosCabeca)
{
    (*dadosCabeca).cabecaX = 0;
    (*dadosCabeca).cabecaY = 0;
    (*dadosCabeca).direcaoCabecaX = 0;
    (*dadosCabeca).direcaoCabecaY = 0;
}

#endif // _INICIARCABECA
