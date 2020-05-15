#include "kunde.h" 
#include "bank.h" 
#include <iostream>

/* Aufgabe 3:
* Aus Sicherheitsgründen darf die Kommunikation zwischen Kunde und Bank nicht mehr unverschlüsselt stattfinden.
* Im Detail dürfen Benutzername und PIN nicht mehr ohne Sicherheitsvorkehrungen von der Klasse kunde an die Klasse bank weitergegeben werden.
*
* Erstellen Sie eine neue Klasse sicherheit, die die Methoden verschluesseln() und entschluesseln() implementiert. X
* Die Methode verschluesseln() besitzt keinen Rückgabewert und erwartet als einzigen Parameter eine Variable vom Typ std::string. X
* Die Methode entschluesseln() besitzt einen Rückgabewert vom Typ std::string und erwartet keinen Parameter. X
*
* Die Methode zugriff_ueberpruefen() der Klasse bank darf ab sofort nur noch Parameter vom Typ sicherheit akzeptieren.
* Bevor die Klasse kunde diese Methode der Klasse bank aufruft, muss sie Objekte vom Typ sicherheit erstellen, X
* die die an die Bank zu übermittelnden Informationen mit verschluesseln() in den Objekten speichern, und die Objekte dann als Parameter an die Methode weitergeben.
* Die Methode zugriff_ueberpruefen() der Klasse bank liest die Informationen in den als Parameter übergebenen Objekten,

* indem sie die Methode entschluesseln() aufruft und die Informationen entschlüsselt.
*
* Um die Aufgabe nicht unnötig zu verkomplizieren, ist es nicht notwendig, in der Klasse sicherheit tatsächlich Verschlüsselungsverfahren zu implementieren.
*
* Tip:
* Gehen Sie Schritt für Schritt vor: Beginnen Sie damit, die Klasse sicherheit zu erstellen. Ändern Sie dann die Methode bank::zugriff_ueberpruefen().
* Erweitern Sie abschließend die Methode kunde::passwort_eingeben() derart, dass die korrekten Parameter an die Methode bank::zugriff_ueberpruefen() übergeben werden.
*
* Quelle: http://www.highscore.de/cpp/aufbau/index.html Boris Schäling
*/


/*** GLOBAL VARIABLES ***/
extern bank b;


/*** PROGRAM STARTS HERE ***/
int main() 
{ 
  kunde k; 

  b.init("boris", "1234", 1000); 

  for (;;) 
  { 
    k.geldkarte_einschieben(); 

    if (k.PIN_eingeben() == true) 
    { 
      k.waehrung_waehlen();

      switch (k.option_waehlen())
      {
        case 'B':
        {
          if (k.betrag_waehlen() == true) 
          { 
            std::cout << "Der gewuenschte Betrag wurde abgehoben." << std::endl; 
          }
          break;
        }
        case 'K':
        {
          if (k.waehrung_ausgeben() == "Dollar")
          {
            std::cout << "Ihr aktueller Kontostand: " << k.kontostand_ausgeben()/2 << " " << k.waehrung_ausgeben() << std::endl;
          }
          else
          {
            std::cout << "Ihr aktueller Kontostand: " << k.kontostand_ausgeben() << " " << k.waehrung_ausgeben() << std::endl;
          }
          break;
        }
        default:
        {
          std::cout << "Ungueltige Eingabe." << std::endl;
          break;
        }
      }
   
    } 
    else 
    { 
      std::cout << "Die PIN ist falsch." << std::endl; 
    } 
  } 
} 
