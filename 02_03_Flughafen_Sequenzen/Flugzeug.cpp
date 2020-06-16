#include <string>
#include <iostream>
#include "Flugzeug.h"

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