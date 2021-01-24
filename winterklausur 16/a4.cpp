// Aufgabe 4 (10 Punkte)
// Schreiben Sie ein C++-Programm a4.cpp mit zugehöriger ausführbarer Datei a4.exe.
// An a4.exe werden beim Aufruf vom Betriebssystem aus (z.B. Windows Eingabeaufforderung)
// beliebig viele positive int-Zahlen (jeweils als C-String) übergeben.
// Das Programm soll aus den eingegebenen Zahlen die größte durch drei ohne Rest
// teilbare Zahl herausfinden und ausgeben.
// Sie können davon ausgehen, dass mindestens eine durch drei ohne Rest teilbare Zahl
// eingegeben wird.
// Beispiel: a4.exe 5 27 1 2 12 8
// ergibt als Bildschirmausgabe
// Groesste durch 3 teilbare Zahl: 27

#include <iostream>

using namespace std;

int main(int argc, char* argv[])  // argc argumentCount, argv argumentValue // argv[0] Programmaufrufpfad
{   
    int bignumba = 0; // am besten immer "0" setzen
    for(int i = 1; i<argc; i++) // "i" muss deklariert werden
    {
        int zahl = atoi(argv[i]); // separat deklarieren
        if((zahl%3)==0)
        {
            if(zahl > bignumba)
            {
                bignumba = zahl;
            }
        }
    }
    cout << bignumba << ' ' << endl;
    return 0;
}
