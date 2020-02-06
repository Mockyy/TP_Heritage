#include "cVect.h"
#include <stdlib.h>

cVect::cVect(int nElem)
{
	adr = new int;
	for (int i = 0; i < nElem; i++)
	{
		*adr = i;
	}
}

cVect::~cVect()
{
	free(adr);
}

int & cVect::operator[](int index)
{
	return adr[index];
}
