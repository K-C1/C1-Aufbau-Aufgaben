#include <iostream>
#include <string>
#include "Flughafen.h"
#include "Flugzeug.h"


/* Aufgabe 3:
* Erweitern Sie Ihre Lösung zu Aufgabe 2 dahingehend, dass mitgezählt werden soll, wie oft am Flughafen Flugzeuge gestartet und gelandet sind.
* Fügen Sie der Klasse flughafen eine neue Methode sequenzen() hinzu, die auf die Standardausgabe die Anzahl aller Start- und Landesequenzen ausgibt.
* Sie müssen dabei Start- und Landesequenzen nicht unterscheiden. Es reicht, wenn eine Zahl für alle Start- und Landesequenzen ausgegeben wird.
* Landen zum Beispiel zwei Flugzeuge und startet eines, soll 3 ausgegeben werden.
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
  Flughafen::sequenzen();

  MyFlughafen.startenFlugzeug(lFlieger11);  //Starten eines nicht geparkten Flugzeugs (AirBerlin) -> ist es im Hangar?...
  MyFlughafen.startenFlugzeug(lFlieger04);
  MyFlughafen.startenFlugzeug(lFlieger08);  //Starten weiterer Flugzeuge in nicht direkter Reihenfolge

  MyFlughafen.flugzeuge();
  Flughafen::sequenzen();

  MyFlughafen.landenFlugzeug(lFlieger01);

  MyFlughafen.flugzeuge();
  Flughafen::sequenzen();

  MyFlughafen.landenFlugzeug(lFlieger02);
  MyFlughafen.landenFlugzeug(lFlieger11);

  MyFlughafen.flugzeuge();
  Flughafen::sequenzen();

  MyFlughafen.landenFlugzeug(lFlieger01); 
  MyFlughafen.landenFlugzeug(lFlieger01);
  MyFlughafen.landenFlugzeug(lFlieger01);  //Mehrere Flugzeuge der selben Fluggesellschaft (Lufthansa)

  MyFlughafen.flugzeuge();
  Flughafen::sequenzen();

  MyFlughafen.startenFlugzeug(lFlieger01); //Erstes von mehreren Flugzeugen der selben Fluggesellschaft startet (Lufthansa)

  MyFlughafen.flugzeuge();
  Flughafen::sequenzen();

  MyFlughafen.landenFlugzeug(lFlieger03);
  MyFlughafen.landenFlugzeug(lFlieger05);
  MyFlughafen.landenFlugzeug(lFlieger07); //Auffüllen bis Array zu klein (Alitalia)

  MyFlughafen.flugzeuge();
  Flughafen::sequenzen();

  MyFlughafen.landenFlugzeug(lFlieger09); //Array immer noch zu klein (Air Canada)

  MyFlughafen.flugzeuge();
  Flughafen::sequenzen();

  MyFlughafen.startenFlugzeug(lFlieger05); //Starten einiger Flugzeuge
  MyFlughafen.startenFlugzeug(lFlieger03);
  MyFlughafen.startenFlugzeug(lFlieger11);
  MyFlughafen.startenFlugzeug(lFlieger02);

  MyFlughafen.landenFlugzeug(lFlieger07);  //Landen (Aliatalia)

  MyFlughafen.flugzeuge();
  Flughafen::sequenzen();
}