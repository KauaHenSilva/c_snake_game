#if !defined(_INICIARCABECA)
#define _INICIARCABECA

#include "../modal/modal.h"

void _iniciarCabeca(stDadosCabeca *dadosCabeca)
{
    (*dadosCabeca).cabecaX = 0;
    (*dadosCabeca).cabecaY = 0;
    (*dadosCabeca).direcaoCabecaX = 0;
    (*dadosCabeca).direcaoCabecaY = 0;
}

#endif // _INICIARCABECA
