#ifndef DEF_ECRAN
#define DEF_ECRAN

#define NOMBRE_PIXELS_X 64
#define NOMBRE_PIXELS_Y 32

//R�cup�ere ici la taille de l'�cran pour adapter la taille des pixels en fonction du nombre de pixel de l'�cran
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
