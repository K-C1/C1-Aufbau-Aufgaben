#ifndef Flugzeug_h
#define Flugzeug_h

#include <string>

class Flugzeug
{
  public:
  	Flugzeug();                                  //Standardkonstruktor
  	Flugzeug(std::string Fluggesellschaft);      //Konstruktor mit erwartetem Parameter
  	std::string getFluggesellschaft();
  	void setFluggesellschaft(std::string Fluggesellschaft);

  private:
  	std::string mFluggesellschaft;
};

#endif // Flugzeug_h