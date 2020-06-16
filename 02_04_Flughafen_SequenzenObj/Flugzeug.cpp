#include <string>
#include <iostream>
#include "Flugzeug.h"

int Flugzeug::mSequenzen = 0;

Flugzeug::Flugzeug()                                            //Standardkonstruktor
{
}

Flugzeug::Flugzeug(std::string Fluggesellschaft)               //Konstruktor mit erwartetem Parameter
{
	mFluggesellschaft = Fluggesellschaft;
}

std::string Flugzeug::getFluggesellschaft()
{
	return mFluggesellschaft;
}

void Flugzeug::setFluggesellschaft(std::string Name)
{
	mFluggesellschaft = Name;
}

void Flugzeug::setSequenzen()
{
	mSequenzen = mSequenzen + 1;
}

void Flugzeug::sequenzen()
{
	std::cout << "\n******************************************\n*    Sequenzen aktuell: " << mSequenzen << "\n******************************************" << std::endl;
}