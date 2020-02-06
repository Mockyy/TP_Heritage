#pragma once
#include "cVect.h"

class cVectb : cVect
{
private:

	int nMin;
	int nMax;

public:

	cVectb(int nDebut, int nFin) : cVect(nFin - nDebut + 1)
	{
		nMin = nDebut; 
		nMax = nFin;
	}

	int & operator [] (int index)
	{
		return adr[index - nMin];
	}
};

