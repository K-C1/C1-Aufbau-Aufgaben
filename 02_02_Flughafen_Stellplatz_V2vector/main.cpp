#include <iostream>
#include <string>
#include <vector>
#include "Flughafen.h"
#include "Flugzeug.h"


/* Aufgabe 2:
* Erweiteren Sie die Klasse flughafen aus Aufgabe 1 um zwei Methoden starten() und landen().
* Diese Methoden sollen als einzigen Parameter ein Objekt vom Typ einer Klasse flugzeug erwarten.
* Der Flughafen soll über diese Methoden mitverfolgen, wie viele Flugzeuge sich zu jedem beliebigen Zeitpunkt am Flughafen befinden und 
* zu welchen Fluggesellschaften sie gehören. 
* Der Einfachheit halber wird empfohlen, als Eigenschaft in der Klasse flughafen ein Array vom Typ flugzeug zu verwenden,
* das die verfügbaren Stellplätze für Flugzeuge am Flughafen symbolisiert.
* Ist für ein Flugzeug in diesem Array keine Fluggesellschaft angegeben, soll dies bedeuten, dass dieser Stellplatz frei ist.
* Über die Methoden starten() und landen() sollen Stellplätze aufgefüllt bzw. freigegeben werden.
*
* Erstellen Sie zum Test in der Funktion main() mehrere Objekte vom Typ flugzeug, die unterschiedlichen Fluggesellschaften gehören sollen.
* Lassen Sie Flugzeuge auf dem Flughafen landen und wieder starten.
* Rufen sie zu unterschiedlichen Zeitpunkten in Ihrem Programm eine Methode flugzeuge() auf,
* die Sie für die Klasse flughafen definieren sollen und die die Namen der Fluggesellschaften aller momentan am Flughafen stehender Flugzeuge ausgibt.
* Auf diese Weise können Sie Ihr Programm testen.
*
* Quelle: http://www.highscore.de/cpp/aufbau/index.html Boris Schäling
*/


/*** GLOBAL VARIABLES ***/



/*** PROGRAM STARTS HERE ***/
int main() 
{ 
  //Flughafen eroeffnen
  Flughafen MyFlughafen;

  //Flugzeuge initialisieren
  Flugzeug lFlieger01("Lufthansa");
  Flugzeug lFlieger02("Swissair");
  Flugzeug lFlieger03("British Airways");
  Flugzeug lFlieger04("Swiss Air Lines");
  Flugzeug lFlieger05("Edelweiss Air");
  Flugzeug lFlieger06("Air France");
  Flugzeug lFlieger07("Alitalia");
  Flugzeug lFlieger08("Air Austria");
  Flugzeug lFlieger09("Air Canada");
  Flugzeug lFlieger10("American Airlines");
  Flugzeug lFlieger11("AirBerlin");

  Flughafen::mStellplatz2.reserve(2);
  std::cout << "Capacity: " << Flughafen::mStellplatz2.capacity() << std::endl;
  //std::vector<Flugzeug> mStellplatz3(2);

  //Flugbewegungen und Prüfung
  MyFlughafen.landenFlugzeug(lFlieger02);
  MyFlughafen.landenFlugzeug(lFlieger04);
  MyFlughafen.landenFlugzeug(lFlieger06);
  MyFlughafen.landenFlugzeug(lFlieger08);
  MyFlughafen.landenFlugzeug(lFlieger10);  //Mehrere Flugzeuge landen

  MyFlughafen.flugzeuge();

  MyFlughafen.startenFlugzeug(lFlieger11);  //Starten eines nicht geparkten Flugzeugs (AirBerlin) -> ist es im Hangar?...
  MyFlughafen.startenFlugzeug(lFlieger04);
  MyFlughafen.startenFlugzeug(lFlieger08);  //Starten weiterer Flugzeuge in nicht direkter Reihenfolge

  MyFlughafen.flugzeuge();

  MyFlughafen.landenFlugzeug(lFlieger01);

  MyFlughafen.flugzeuge();

  MyFlughafen.landenFlugzeug(lFlieger02);
  MyFlughafen.landenFlugzeug(lFlieger11);

  MyFlughafen.flugzeuge();

  MyFlughafen.landenFlugzeug(lFlieger01); 
  MyFlughafen.landenFlugzeug(lFlieger01);
  MyFlughafen.landenFlugzeug(lFlieger01);  //Mehrere Flugzeuge der selben Fluggesellschaft (Lufthansa)

  MyFlughafen.flugzeuge();

  MyFlughafen.startenFlugzeug(lFlieger01); //Erstes von mehreren Flugzeugen der selben Fluggesellschaft startet (Lufthansa)

  MyFlughafen.flugzeuge();

  MyFlughafen.landenFlugzeug(lFlieger03);
  MyFlughafen.landenFlugzeug(lFlieger05);
  MyFlughafen.landenFlugzeug(lFlieger07); //Auffüllen bis Array zu klein (Alitalia)

  MyFlughafen.flugzeuge();

  MyFlughafen.landenFlugzeug(lFlieger09); //Array immer noch zu klein (Air Canada)

  MyFlughafen.flugzeuge();

  MyFlughafen.startenFlugzeug(lFlieger05); //Starten einiger Flugzeuge
  MyFlughafen.startenFlugzeug(lFlieger03);
  MyFlughafen.startenFlugzeug(lFlieger11);
  MyFlughafen.startenFlugzeug(lFlieger02);

  MyFlughafen.landenFlugzeug(lFlieger07);  //Landen (Aliatalia)

  MyFlughafen.flugzeuge();
}