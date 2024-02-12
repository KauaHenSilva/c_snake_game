#if !defined(_AUDIOCOMENDO)
#define _AUDIOCOMENDO

#include <windows.h>

void audioComendo()
{
  PlaySound(TEXT("./PouComendo.wav"), NULL, SND_FILENAME);
}

#endif // _AUDIOCOMENDO