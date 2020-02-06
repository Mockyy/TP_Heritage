#pragma once
#include "cVect.h"

class cVectb : cVect
{
private:

	int nMin;	//Borne minimale
	int nMax;	//Borne maximale

public:

	cVectb(int nDebut, int nFin) : cVect(nFin - nDebut + 1)	//Constructeur
	{
		nMin = nDebut; 
		nMax = nFin;
	}

	int & operator [] (int index)	//Surchage
	{
		return adr[index - nMin];
	}
};

