#ifndef DEF_AFFICHAGE
#define DEF_AFFICHAGE

#include <iostream>

#include "SDL2/include/SDL.h"

void initialiserSDL();
void intialiserVideoSDL(int& resolX, int& resolY, SDL_Window*& window, SDL_Renderer*& renderer);

#endif
