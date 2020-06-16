#include <iostream>
#include <string>
#include "Flughafen.h"
#include "Flugzeug.h"
#include "smart_pointer.h"


/* Aufgabe 5:
* Entwickeln Sie eine Klasse smart_pointer, die als einzigen Parameter im Konstruktor einen Zeiger auf eine Variable vom Typ int erhält, die Sie mit new erstellen.
* Definieren Sie die Klasse smart_pointer derart, dass sichergestellt ist, dass der mit new reservierte Speicher freigegeben wird, wenn das Objekt zerstört wird.
* Testen Sie Ihre Klasse dann in der Funktion main(), indem Sie mit new eine Variable vom Typ int erstellen und ein Objekt Ihrer Klasse smart_pointer instantiieren.
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

  //Test fuer smart_pointer
  smart_pointer Test_Pointer(new int);
}