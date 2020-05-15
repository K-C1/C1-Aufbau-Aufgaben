#include <string> 
#include "sicherheit.h"

class bank 
{ 
  public: 
    void init(std::string benutzername, std::string pin, int kontostand); 

    bool zugriff_ueberpruefen(sicherheit& enc_benutzername, sicherheit& enc_pin); 
    bool geld_abheben(int betrag); 
    int kontostand_abfragen();

  private: 
    std::string Benutzername; 
    std::string PIN; 
    int Kontostand; 
}; 
