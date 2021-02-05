#ifndef DEF_ECRAN
#define DEF_ECRAN

#define NOMBRE_PIXELS_X 64
#define NOMBRE_PIXELS_Y 32

//Récupéere ici la taille de l'écran pour adapter la taille des pixels en fonction du nombre de pixel de l'écran
#define NOMBRE_PIXEL_PC_X
#define NOMBRE_PIXEL_PC_Y

typedef struct Pixel Pixel;
struct Pixel
{
	int x;
	int y;
	bool couleur;
};


class Ecran 
{
private:

public:
	Ecran();

};

#endif
