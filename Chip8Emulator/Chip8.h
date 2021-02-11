#ifndef DEF_CHIP8
#define DEF_CHIP8


#define NOMBRE_ADRESSES_MEMOIRE 4096
#define ADRESSE_MEMOIRE_DEBUT 512
#define NOMBRE_REGISTRES 16
#define NOMBRE_ADRESSES_PILE 16

#define NOMBRE_PIXELS_X 64
#define NOMBRE_PIXELS_Y 32


typedef unsigned char uint8;
typedef unsigned short uint16;

typedef enum Couleur Couleur;//Pas obligé de mettre de typedef en C++ mais en C si !
enum Couleur
{
	NOIR = 0, BRANC = 1
};


class Chip8
{
private:
	uint8 m_memoireTab[NOMBRE_ADRESSES_MEMOIRE];
	uint8 m_memoireActuelle = ADRESSE_MEMOIRE_DEBUT;
	uint8 m_registresTab[NOMBRE_REGISTRES];
	uint16 m_pileTab[NOMBRE_ADRESSES_PILE];
	uint16 m_compteurJeu;
	uint16 m_compteurSon;
	
	uint8 m_taillePixelXY;
	Couleur m_couleurPixelsEcran[NOMBRE_PIXELS_X][NOMBRE_PIXELS_Y];

public:
	Chip8(uint16 tailleEcranX, uint16 tailleEcranY);

	void decompterCompteurs();

	void effacerEcran();
};

static int max(const int x, const int y);

#endif