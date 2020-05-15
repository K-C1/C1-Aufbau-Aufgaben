#include <string>
#include "bank.h"
#include "sicherheit.h"

void bank::init(std::string benutzername, std::string pin, int kontostand) 
{ 
  Benutzername = benutzername; 
  PIN = pin; 
  Kontostand = kontostand; 
} 

bool bank::zugriff_ueberpruefen(sicherheit& enc_benutzername, sicherheit& enc_pin) 
{ 
  std::string benutzername = enc_benutzername.entschluesseln();
  std::string pin = enc_pin.entschluesseln();
  if (Benutzername == benutzername && PIN == pin) 
  { 
    return true; 
  } 

  return false; 
} 

bool bank::geld_abheben(int betrag) 
{ 
  if (Kontostand >= betrag) 
  { 
    Kontostand -= betrag; 
    return true; 
  } 

  return false; 
} 

int bank::kontostand_abfragen()
{
  return Kontostand;
}
