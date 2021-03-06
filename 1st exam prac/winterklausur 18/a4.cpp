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

using namespace std;

int main(int argc, char* argv[])
{
    string word;
    int length;
    int longboi = 0;
    for(int i=1; i<argc; i++)
    {
        length=strlen(argv[i]);
        if(length>longboi)
        {
            longboi = length;
            word = argv[i];
        }
    }

    word.length();
    cout << "Laengstes Wort: " << word << endl;
    return 0;
}