#pragma once
class cVect
{
protected:

	int nElem;	//Nombre d'éléments
	int *adr;	//Zone mémoire contenant les éléments

public:

	cVect(int);	//Constructeur
	~cVect();	//Destructeur
	int & operator [] (int);	//Surchage d'opérateur []
};

