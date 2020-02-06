#pragma once
class cVect
{
protected:

	int nElem;
	int *adr;

public:

	cVect(int);
	~cVect();
	int & operator [] (int);
};

