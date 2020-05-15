#include "kunde.h" 
#include "bank.h" 
#include <iostream> 

bank b;
kunde::waehrung w;

void kunde::geldkarte_einschieben() 
{ 
  std::cout << "Schieben Sie bitte Ihre Karte in den Automaten: " << std::flush; 
  std::cin >> Benutzername; 
} 

bool kunde::PIN_eingeben() 
{ 
  std::cout << "Geben Sie Ihre PIN ein: " << std::flush; 
  std::cin >> PIN; 
  return b.zugriff_ueberpruefen(Benutzername, PIN); 
} 

bool kunde::betrag_waehlen() 
{ 
  int Betrag; 
  std::cout << "Geben Sie ein, wieviel Geld Sie abheben moechten: " << std::flush; 
  std::cin >> Betrag;
 
  if (w == Dollar)
  {
  	return b.geld_abheben(Betrag*2);
  }
  return b.geld_abheben(Betrag); 
} 

void kunde::waehrung_waehlen()
{
	std::cout << "Wählen Sie die gewünschte Währung: \n (E)uro\n (D)ollar \n" << std::flush;
	std::cin >> Waehrung;
	
  switch (Waehrung)
  {
    case 'D':
    {
      w = Dollar;
      break;
    }
    case 'E':
    {
      w = Euro;
      break;
    }
    default:
    {
      std::cout << "Eingabe ungueltig - alle Angaben in Euro." << std::endl;
      break;
    }
  }
}
