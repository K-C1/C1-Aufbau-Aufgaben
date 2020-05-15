#include "kunde.h" 
#include "bank.h" 
#include <iostream> 

/* Aufgabe 1:
* Erweitern Sie das Praxis-Beispiel dahingehend, dass der Kunde nach Eingabe der richtigen PIN zwischen den Währungen Euro und Dollar wählen kann.
* Gehen Sie davon aus, dass die Bank Kontostände grundsätzlich in Euro verwaltet.
* Der Einfachheit halber können Sie mit einem Umrechnungskurs 2 zu 1 von Euro zu Dollar rechnen.
*
* Tip:
* Damit der Kunde sich für eine Währung entscheiden kann, müssen Sie ihm eine entsprechende Fähigkeit geben.
* Das heißt, Sie müssen eine neue Methode in der Klasse kunde definieren, die Sie nach Eingabe der richtigen PIN aufrufen.
* Die Währung, für die sich der Kunde entschieden hat, benötigen Sie nochmal in der Methode kunde::betrag_waehlen().
* Denn in dieser Methode übergeben Sie ja einen Euro-Betrag an die Bank - die Bank verrechnet schließlich alles in Euro.
* Sie müssen daher die Währung als Eigenschaft in der Klasse kunde speichern, damit sie auch in der Methode kunde::betrag_waehlen() auf diese Zugriff haben.
* Als Datentyp für die neue Eigenschaft bietet sich beispielsweise eine Enumeration an.
*
* Quelle: http://www.highscore.de/cpp/aufbau/index.html Boris Schäling
*/


/*** GLOBAL VARIABLES ***/
extern bank b;
//extern kunde::waehrung w;


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
      if (k.betrag_waehlen() == true) 
      { 
        std::cout << "Der gewuenschte Betrag wurde abgehoben." << std::endl; 
      } 
    } 
    else 
    { 
      std::cout << "Die PIN ist falsch." << std::endl; 
    } 
  } 
} 
