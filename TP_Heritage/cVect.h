#pragma once
class cVect
{
protected:

	int nElem;	//Nombre d'�l�ments
	int *adr;	//Zone m�moire contenant les �l�ments

public:

	cVect(int);	//Constructeur
	~cVect();	//Destructeur
	int & operator [] (int);	//Surchage d'op�rateur []
};

