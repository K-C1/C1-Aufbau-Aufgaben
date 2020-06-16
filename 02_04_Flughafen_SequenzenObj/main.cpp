#include <iostream>
#include <string>
#include "Flughafen.h"
#include "Flugzeug.h"


/* Aufgabe 4:
* Schreiben Sie Ihre Lösung zu Aufgabe 3 so um, dass die Anzahl der Start- und Landesequenzen nicht mehr in einer Eigenschaft der Klasse flughafen gespeichert
* und mitgezählt wird, sondern in der Klasse flugzeug. 
* Entfernen Sie die Methode sequenzen() von der Klasse flughafen und fügen Sie sie der Klasse flugzeug hinzu.
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

  //Flugbewegungen und Prüfung
  MyFlughafen.landenFlugzeug(lFlieger02);
  MyFlughafen.landenFlugzeug(lFlieger04);
  MyFlughafen.landenFlugzeug(lFlieger06);
  MyFlughafen.landenFlugzeug(lFlieger08);
  MyFlughafen.landenFlugzeug(lFlieger10);  //Mehrere Flugzeuge landen

  MyFlughafen.flugzeuge();
  Flugzeug::sequenzen();

  MyFlughafen.startenFlugzeug(lFlieger11);  //Starten eines nicht geparkten Flugzeugs (AirBerlin) -> ist es im Hangar?...
  MyFlughafen.startenFlugzeug(lFlieger04);
  MyFlughafen.startenFlugzeug(lFlieger08);  //Starten weiterer Flugzeuge in nicht direkter Reihenfolge

  MyFlughafen.flugzeuge();
  Flugzeug::sequenzen();

  MyFlughafen.landenFlugzeug(lFlieger01);

  MyFlughafen.flugzeuge();
  Flugzeug::sequenzen();

  MyFlughafen.landenFlugzeug(lFlieger02);
  MyFlughafen.landenFlugzeug(lFlieger11);

  MyFlughafen.flugzeuge();
  Flugzeug::sequenzen();

  MyFlughafen.landenFlugzeug(lFlieger01); 
  MyFlughafen.landenFlugzeug(lFlieger01);
  MyFlughafen.landenFlugzeug(lFlieger01);  //Mehrere Flugzeuge der selben Fluggesellschaft (Lufthansa)

  MyFlughafen.flugzeuge();
  Flugzeug::sequenzen();

  MyFlughafen.startenFlugzeug(lFlieger01); //Erstes von mehreren Flugzeugen der selben Fluggesellschaft startet (Lufthansa)

  MyFlughafen.flugzeuge();
  Flugzeug::sequenzen();

  MyFlughafen.landenFlugzeug(lFlieger03);
  MyFlughafen.landenFlugzeug(lFlieger05);
  MyFlughafen.landenFlugzeug(lFlieger07); //Auffüllen bis Array zu klein (Alitalia)

  MyFlughafen.flugzeuge();
  Flugzeug::sequenzen();

  MyFlughafen.landenFlugzeug(lFlieger09); //Array immer noch zu klein (Air Canada)

  MyFlughafen.flugzeuge();
  Flugzeug::sequenzen();

  MyFlughafen.startenFlugzeug(lFlieger05); //Starten einiger Flugzeuge
  MyFlughafen.startenFlugzeug(lFlieger03);
  MyFlughafen.startenFlugzeug(lFlieger11);
  MyFlughafen.startenFlugzeug(lFlieger02);

  MyFlughafen.landenFlugzeug(lFlieger07);  //Landen (Aliatalia)

  MyFlughafen.flugzeuge();
  Flugzeug::sequenzen();
}