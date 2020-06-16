#include <iostream>
#include "smart_pointer.h"


smart_pointer::smart_pointer(int* pZeiger)    //Konstruktor mit erwartetem Parameter
    : mpPointer(pZeiger)                      //Parameterliste
{
	std::cout << "\nsmart_pointer Objekt erstellen mit " << pZeiger << "." << std::endl;
}



smart_pointer::~smart_pointer()               //Destruktor
{
	std::cout << "smart_pointer Objekt löschen (" << mpPointer <<")." << std::endl;
	delete mpPointer;                     //delete ohne [], da kein Array
}
