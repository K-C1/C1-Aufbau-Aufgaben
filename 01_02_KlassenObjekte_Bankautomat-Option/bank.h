#include <string> 

class bank 
{ 
  public: 
    void init(std::string benutzername, std::string pin, int kontostand); 
    bool zugriff_ueberpruefen(std::string benutzername, std::string pin); 
    bool geld_abheben(int betrag); 
    int kontostand_abfragen();

  private: 
    std::string Benutzername; 
    std::string PIN; 
    int Kontostand; 
}; 
