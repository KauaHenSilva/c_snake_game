#if !defined(_INICIARCORPO)
#define _INICIARCORPO

#include "../modal/modal.h"
#include <stdlib.h>

void _iniciarCalda(int tamCalda)
{
  dadosCalda.tamanhoCauda = 0;
  dadosCalda.caldaX = (int *)malloc(tamCalda * sizeof(int));
  dadosCalda.caldaY = (int *)malloc(tamCalda * sizeof(int));
}

#endif // _INICIARCORPO
