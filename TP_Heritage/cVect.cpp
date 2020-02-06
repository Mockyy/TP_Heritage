#include "cVect.h"
#include <stdlib.h>

cVect::cVect(int)
{
	adr = new int;
}

cVect::~cVect()
{
	free(adr);
}

int & cVect::operator[](int index)
{
	return adr[index];
}
