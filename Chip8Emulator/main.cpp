#include <iostream>
#include <string>

#include "Chip8.h"
#include "Affichage.h"
#include "SDL2/include/SDL.h"

using namespace std;

int main(int argc, char* argv[])
{
	int resolX, resolY;
	SDL_Window* window;
	SDL_Renderer* renderer;

	initialiserSDL();
	intialiserVideoSDL(resolX, resolY, window, renderer);

	/*
	* Décclaration Chip8 ici et gestion de son cycle avec affichage SDL
	*/
	//Memoire chip8Memoire;
	//Ecran chip8Ecran(resolX, resolY);



	SDL_Quit();

	return EXIT_SUCCESS;
}
