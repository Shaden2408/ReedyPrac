// Aufgabe 4 (10 Punkte)
// Schreiben Sie ein C++-Programm a4.cpp mit zugehöriger ausführbarer Datei a4.exe.
// An a4.exe werden beim Aufruf vom Betriebssystem aus (z.B. Windows Eingabeaufforderung)
// beliebig viele zweistellige int-Zahlen (jeweils als C-String) übergeben.
// Das Programm soll aus den eingegebenen Zahlen die Anzahl der geraden Zahlen, sowie
// die Anzahl aller Zahlen, die mit der Ziffer 5 enden herausfinden und ausgeben.
// Beispiel: a4.exe 17 95 15 12 40 35 77
// ergibt als Bildschirmausgabe
// Anzahl der geraden Zahlen: 2
// Anzahl der Zahlen mit Endziffer 5: 3
// Hinweis: Sie können die Funktion int atoi (char* s) verwenden.
// Diese liefert als Rückgabewert die dem C-String s entsprechende Zahl.

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int gerade=0;
    int five=0;
    
    for(int i=1; i<argc; i++)
    {
        int zahl=atoi(argv[i]);
        if(zahl%2 == 0) gerade++;
        else if(zahl%5 == 0) five++;    //Endziffer "5" via gerade & ungerade, sonst %10 -> endziffer
    }
    cout << "gerade: " << gerade << endl << "5 end: " << five << endl;
}