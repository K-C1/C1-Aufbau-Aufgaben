#include "kunde.h" 
#include "bank.h" 
#include <iostream>

/* Aufgabe 2:
* Erweitern Sie das Praxis-Beispiel aus Aufgabe 1 insofern, als dass der Kunde nach Eingabe der richtigen PIN zwischen einer Bargeldabhebung und Kontostandanzeige wählen soll.
* Egal, für welche Option er sich entscheidet, er muss sich danach am Bankautomaten neu anmelden, um eine andere Option wählen zu können.
* Zeigen Sie den aktuellen Kontostand jeweils in der vorher ausgewählten Währung an.
*
* Tip:
* Die Auswahl für eine Option ist eine neue Fähigkeit, die der Kunde besitzen muss.
* Sie benötigen wieder eine neue Methode, die Sie für die Klasse kunde definieren müssen.
* Hat sich der Kunde für die Anzeige des Kontostands entschieden, müssen Sie wiederum auf eine neu zu definierende Methode der Klasse kunde zugreifen, die den Kontostand am Bildschirm darstellt.
* Hierbei werden Sie feststellen, dass die Klasse kunde den aktuellen Kontostand gar nicht kennt - den kennt nur die Bank.
* Sie müssen daher der Klasse bank ebenfalls eine neue Methode spendieren, die den aktuellen Kontostand an die Klasse kunde zurückgeben kann.
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
