#include "entry.h"

#include <stdint.h>

#include "../library/SDL/include/SDL_events.h"
#include "../library/minivmac/src/STRCNENG.h"
#include "../library/minivmac/cfg/CNFGGLOB.h"

typedef char SDL_keysym;
typedef uint32_t Uint32;
typedef uint8_t Uint8;
typedef uint16_t Uint16;

typedef struct SDL_SurfaceData SDL_SurfaceData;

#define AUDIO_U8 0x0008
#define SDL_KEYUP 0x00
#define SDL_KEYDOWN 0x01
#define SDL_MOUSEBUTTONUP 0x02
#define SDL_MOUSEBUTTONDOWN 0x03
#define SDL_MOUSEMOTION 0x04
#define SDL_APPMOUSEFOCUS 0x05
#define SDL_APPINPUTFOCUS 0x06
#define SDL_ACTIVEEVENT 0x07
#define SDL_QUIT 0x08

#define SDL_INIT_AUDIO 0x00
#define SDL_INIT_VIDEO 0x01
#define SDL_INIT_TIMER 0x02
#define SDL_GRAB_ON 1
#define SDL_GRAB_OFF 0
#define SDL_FULLSCREEN 1
#define SDL_DISABLE 0
#define SDL_ENABLE 1

int entry()
{
  return 1;
}

char SDL_Init(char features)
{
}

void SDL_Quit()
{
}

// void HandleTheEvent(SDL_Event *event)
// {
// }

const char *SDL_GetError()
{
  return "Who knows!\0";
}

ui3r SDLKey2MacKeyCode(char sym){

}

int SDL_GetTicks() {
  return 0;
}

void SDL_Delay(int delay) {
  return;
}

// void DoKeyCode(SDL_Keysym *keysym, ui3r trueblnr) {

// };

SDL_Surface *SDL_SetVideoMode(int NewWindowWidth, int NewWindowHeight, Uint8 depth, Uint32 flag)
{
}

// char SDL_MUSTLOCK(SDL_Surface *my_surface)
// {
// }

// char SDL_LockSurface(SDL_Surface *my_surface)
// {
// }

// char SDL_UnlockSurface(SDL_Surface *my_surface)
// {
// }

void SDL_UpdateRect(SDL_Surface *my_surface, ui5r left2, ui5r top2,
                    ui5r a, ui5r b) {
  // right2 - left2, bottom2 - top2) {

};

void SDL_PauseAudio(int yes){

}

void SDL_CloseAudio(){
  
}

void SDL_WarpMouse(int h, int v) {
  
}

// SDL_PixelFormat SDL_MapRGB(SDL_PixelFormat pixelFormat, int r, int g, int b)
// {
//   return pixelFormat;
// }

// char SDL_WaitEvent(SDL_Event *event)
// {
// }

// char SDL_PollEvent(SDL_Event *event)
// {
// }

#include "../library/minivmac/src/OSGLUGBA.c"
