#include "Affichage.h"

void testInitialisationSDL()
{
	if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) != 0)
		exit(EXIT_FAILURE);
}

void intialiserVideoSDL(int& resolX, int& resolY, SDL_Window*& window, SDL_Renderer*& renderer)
{
	if (SDL_CreateWindowAndRenderer(NULL, NULL, SDL_WINDOW_FULLSCREEN, &window, &renderer) != 0)
		exit(EXIT_FAILURE);

	SDL_GetRendererOutputSize(renderer, &resolX, &resolY);
}