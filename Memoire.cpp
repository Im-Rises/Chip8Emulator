#include "Memoire.h"

Memoire::Memoire()
{
	for (int i = 0; i < NOMBRE_ADRESSES_MEMOIRE; i++)
	{
		m_memoireTab[i]=0;
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
}