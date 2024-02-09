#include <process.h>
#if !defined(_PLAYAUDIO)
#define _PLAYAUDIO

#include "_audioComendo.h"
#include <tchar.h>
#include <process.h>

void playAudioComendo()
{
  _beginthread(audioComendo, 0, NULL);
}

#endif // _PLAYAUDIO
