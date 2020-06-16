#ifndef Flughafen_h
#define Flughafen_h

#include "Flugzeug.h"
#include <string>
#include <vector>

class Flughafen
{
  public:
    Flughafen();                                 //Standardkonstruktor
    ~Flughafen();                                //Destruktor
    void startenFlugzeug(Flugzeug Flugzeug);
    void landenFlugzeug(Flugzeug Flugzeug);
    void flugzeuge();
    std::vector<Flugzeug> mStellplatz2();

  private:
//    Flugzeug mStellplatz[10];                    //Array repräsentiert die vorhandenen Stellplaetze am Flughafen
  	//std::vector<Flugzeug> mStellplatz2;
    
//    std::vector<std::string> mStellplatz2(2);
//    std::vector<Flugzeug> mStellplatz2(2);

};

#endif //Flughafen_h