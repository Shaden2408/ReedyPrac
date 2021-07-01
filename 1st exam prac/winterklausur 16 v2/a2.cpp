// Aufgabe 2 (10 Punkte)
// Entwickeln Sie ein C++-Programm, welches von der Tastatur beliebig viele einzelne Zeichen
// (Buchstaben und Zahlen) einliest. Die Eingabe jedes einzelnen Zeichens wird mit der ReturnTaste abgeschlossen.
// Die Zeichenfolge soll enden, wenn das Zeichen 'A' eingegeben wird. Das Zeichen 'A' soll für
// die Auswertung nicht berücksichtigt werden.
// Ihr Programm soll ausgeben:
// - die Anzahl aller eingegebenen Zeichen
// - die Anzahl aller eingegebenen Großbuchstaben (Tipp: ASCII-Tabelle).

#include <iostream>

using namespace std;

int main(void)
{   
   char input=0;
   int count=0;
   int count2=0;

   while(input!=65)
   {
       cin >> input;    //wozu nochmal?
       if(input>65 && input<91)
       {
           count2++;
           count++;
       }
       else if(input!=65) count++;   //sonst wird A mitgezählt
   }
   
   cout <<"Gesamtanzahl = "<< count << endl <<"ANZ Grossbuchstaben = " << count2 << endl;  //wurstschreibweise beste
   return 0;

}