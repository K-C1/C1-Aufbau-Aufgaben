#include <iostream>
#include "Flughafen.h"
#include "Flugzeug.h"

Flughafen::Flughafen()                                    //Konstruktor
{
	std::cout << "\nFlughafen eroeffnet." << std::endl;
}

Flughafen::~Flughafen()                                  //Destruktor
{
	std::cout << "\nFlughafen geschlossen.\n" << std::endl;
}

void Flughafen::startenFlugzeug(Flugzeug Flugzeug)
{
	bool isParked = false;
	
	for (int j = 0; j < 10; ++j)
	{
		if ( mStellplatz[j].getFluggesellschaft() == Flugzeug.getFluggesellschaft() )
		{
			isParked = true;
			mStellplatz[j].setFluggesellschaft("");
			std::cout << "\nFlugzeug der " << Flugzeug.getFluggesellschaft() << " gestartet." << std::endl;
			break;
		}
	}
	if (!isParked)
	{
		std::cout << "\nFlugzeug der " << Flugzeug.getFluggesellschaft() << " konnte nicht starten." << std::endl;
	}
}


void Flughafen::landenFlugzeug(Flugzeug Flugzeug)
{
	bool isAvailable = false;
	for (int j = 0; j < 10; ++j)
	{
		if (mStellplatz[j].getFluggesellschaft() == "")
		{
			isAvailable = true;
			mStellplatz[j] = Flugzeug.getFluggesellschaft();
			std::cout << "\nFlugzeug der " << Flugzeug.getFluggesellschaft() << " gelandet." << std::endl;
			break;
		}
	}
	if (!isAvailable)
	{
		std::cout << "\nFlugzeug der " << Flugzeug.getFluggesellschaft() << " kann nicht landen, da alle Stellplaetze belegt sind." << std::endl;
	}
}

void Flughafen::flugzeuge()                              //Anzahl und Liste der Flugzeuge am Flughafen                
{
	int lPlaneCnt = 0;
	std::cout << "\n******************************************\n*  Es stehen folgende Flugzeuge am Flughafen: " << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		std::cout << "*    Stellplatz " << i << " : " << mStellplatz[i].getFluggesellschaft() << std::endl;
		if (mStellplatz[i].getFluggesellschaft() != "")
		{
			++lPlaneCnt;
		}
	}                
	std::cout << "------------------------------------------\n*    Total Flugzeuge: " << lPlaneCnt << " \n******************************************" << std::endl;
}