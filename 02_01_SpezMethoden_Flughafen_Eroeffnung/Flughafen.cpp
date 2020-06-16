#include <iostream>
#include "Flughafen.h"

Flughafen::Flughafen()
{
	std::cout << "Flughafen eroeffnet" << std::endl;
}

Flughafen::~Flughafen()
{
	std::cout << "Flughafen geschlossen" << std::endl;
}