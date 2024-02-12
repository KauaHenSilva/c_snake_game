#if !defined(SISTEMASOM)
#define SISTEMASOM

#include "_playAudioComendo.h"

struct 
{
  void (*playAudioComendo)(void);
} SistemaSom =
{
  (void (*)(void))playAudioComendo,
};

#endif // SISTEMASOM