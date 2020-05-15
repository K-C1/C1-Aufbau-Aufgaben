#ifndef SICHERHEIT_H
#define SICHERHEIT_H

#include <string>

class sicherheit
{
  public:	
	void verschluesseln(std::string plain);
	std::string entschluesseln();

  private:	
	std::string container;
};


#endif
