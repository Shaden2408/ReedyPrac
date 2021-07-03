// Aufgabe 4 (10 Punkte)
// Schreiben Sie ein C++-Programm a4.cpp mit zugehöriger ausführbarer Datei a4.exe.
// An a4.exe werden beim Aufruf vom Betriebssystem aus (z.B. Windows Eingabeaufforderung)
// beliebig viele Worte (jeweils als C-String) übergeben.
// Das Programm soll aus den eingegebenen Worten das längste Wort finden (Sie können
// davon ausgehen, dass nicht mehrere Worte die gleiche Länge haben).
// Beispiel: a4.exe FHWS Elektrotechnik Banane Informatik Super
// ergibt als Bildschirmausgabe
// Laengstes Wort: Elektrotechnik
// Hinweis:
// • Die Funktion int strlen(char* s)gibt die Anzahl der Zeichen des C-Strings s
// zurück.

#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

int main(int argc, char* argv[])
{
    int schlong=0;
    string wort;
    for(int i=1; i<argc; i++)
    {
        int length=strlen(argv[i]);
        if(length>schlong)
        {
        schlong=length;
        wort=argv[i];
        }
    }
    cout << "beste laengste " << wort << endl;
    // sizeof(int);
    // double max=pow(2, sizeof(int)*8);
    // cout << sizeof(int) << endl;
    // cout << INT16_MAX << "  " << INT16_MIN;

 }