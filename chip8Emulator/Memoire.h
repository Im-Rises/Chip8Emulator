#ifndef DEF_MEMOIRE
#define DEF_MEMOIRE

#define NOMBRE_ADRESSES_MEMOIRE 4096
#define ADRESSE_MEMOIRE_DEBUT 512
#define NOMBRE_REGISTRES 16
#define NOMBRE_ADRESSES_PILE 16

typedef unsigned char uint8;
typedef unsigned short uint16;


class Memoire 
{
private:
	uint8 m_memoireTab[NOMBRE_ADRESSES_MEMOIRE];
	uint8 m_memoireActuelle = ADRESSE_MEMOIRE_DEBUT;
	uint8 m_registresTab[NOMBRE_REGISTRES];
	uint16 m_pileTab[NOMBRE_ADRESSES_PILE];
	uint16 m_compteurJeu;
	uint16 m_compteurSon;

public:
	Memoire();

};

#endif