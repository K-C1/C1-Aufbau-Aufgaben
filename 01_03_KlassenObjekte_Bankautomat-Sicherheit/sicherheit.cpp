#include "sicherheit.h"
#include <string>

void sicherheit::verschluesseln(std::string plain)
{
	container = plain;
}

std::string sicherheit::entschluesseln()
{
	return container;
}