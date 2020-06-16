#ifndef Flughafen_h
#define Flughafen_h

#include "Flugzeug.h"
#include <string>

class Flughafen
{
  public:
    Flughafen();                                 //Standardkonstruktor
    ~Flughafen();                                //Destruktor
    void startenFlugzeug(Flugzeug Flugzeug);
    void landenFlugzeug(Flugzeug Flugzeug);
    void flugzeuge();
    //static void sequenzen();

  private:
    Flugzeug mStellplatz[10];                    //Array repräsentiert die vorhandenen Stellplaetze am Flughafen
    //static int mSequenzen;
};

#endif //Flughafen_h