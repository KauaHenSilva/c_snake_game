#if !defined(_AUDIOCOMENDO)
#define _AUDIOCOMENDO

#include <windows.h>

void audioComendo()
{
  PlaySound(TEXT("C:/Meus-Estudos-Global/Desktop/C/JogoDaCobra/output/PouComendo.wav"), NULL, SND_FILENAME);
}

#endif // _AUDIOCOMENDO
