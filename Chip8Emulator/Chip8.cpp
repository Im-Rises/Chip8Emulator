#include "Chip8.h"

Chip8::Chip8(uint16 tailleEcranX, uint16 tailleEcranY)
{
	for (int i = 0; i < NOMBRE_ADRESSES_MEMOIRE; i++)
	{
		m_memoireTab[i] = 0;
	}

	for (int i = 0; i < NOMBRE_REGISTRES; i++)
	{
		m_registresTab[i] = 0;
	}

	for (int i = 0; i < NOMBRE_ADRESSES_PILE; i++)
	{
		m_pileTab[i] = 0;
	}

	m_compteurJeu = 0;

	m_compteurSon = 0;



	m_taillePixelXY = max(tailleEcranX, tailleEcranY) / NOMBRE_PIXELS_X;//Défini la taille des pixels en fonction de x ou y de l'écran utilisateur et du nombre de pixel en x de la Chip8.

	for (uint8 i = 0; i < NOMBRE_PIXELS_X; i++)
	{
		for (uint8 j = 0; j < NOMBRE_PIXELS_Y; j++)
		{
			m_couleurPixelsEcran[i][j] = NOIR;
		}
	}
}

/*------------------------------------------------Fonction mémoire-------------------------------------------------*/

void Chip8::decompterCompteurs()
{
	if (m_compteurJeu > 0)
		m_compteurJeu--;

	if (m_compteurSon > 0)
		m_compteurSon--;
}



/*------------------------------------------------Fonction ecran-------------------------------------------------*/

void Chip8::effacerEcran()
{
	for (uint8 i = 0; i < NOMBRE_PIXELS_X; i++)
	{
		for (uint8 j = 0; j < NOMBRE_PIXELS_Y; j++)
		{
			m_couleurPixelsEcran[i][j] = NOIR;
		}
	}
}



/*------------------------------------------------Fonction autres-------------------------------------------------*/

static int max(const int x, const int y)
{
	if (x >= y)
		return x;
	else
		return y;
}