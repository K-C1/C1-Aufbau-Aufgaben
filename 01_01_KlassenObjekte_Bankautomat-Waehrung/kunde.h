#include <string> 


class kunde 
{ 
  public:
    enum waehrung { Euro, Dollar };

    void geldkarte_einschieben(); 
    bool PIN_eingeben(); 
    bool betrag_waehlen(); 
    void waehrung_waehlen();

  private: 
    std::string Benutzername; 
    std::string PIN; 
    char Waehrung;
}; 
