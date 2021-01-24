// Aufgabe 5 ( 10 Punkte )
// Die untenstehende Datei a5.dat listet einige Staaten der Erde auf.
// Die Datei enthält - in dieser Reihenfolge -
// Name des Staates, Einwohnerzahl und Fläche in km².
// Deutschland 81100000 357121
// USA 321200000 9826675
// Spanien 46400000 505370
// Island 330000 103000
// Belgien 1120000 30528
// Australien 23900000 7741220
// Indien 1314100000 3287263
// Frankreich 6430000 551500
// Entwickeln Sie für das untenstehende Programm a5.cpp (siehe nächste Seite) die
// Sortierfunktion vergleich , die obige Daten absteigend nach der Bevölkerungsdichte
// sortiert.
// Nach Ablauf von a5.exe soll also die Datei also wie folgt sortiert am Bildschirm
// erscheinen:
// Indien 1314100000 3287263
// Deutschland 81100000 357121
// Spanien 46400000 505370
// Belgien 1120000 30528
// USA 321200000 9826675
// Frankreich 6430000 551500
// Island 330000 103000
// Australien 23900000 7741220

/* a5.cpp */
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
struct staat
{
    string name;
    int einwohnerzahl;
    float flaeche;
} land[8];
int vergleich(const void *a, const void *b);
int main(void)
{
    int n = 0;
    ifstream eingabe_datei;
    eingabe_datei.open("a5.dat");
    if (!eingabe_datei)
    {
        cout << "Fehler beim Oeffnen der Datei !";
        exit(-1);
    };
    while (eingabe_datei >> land[n].name >> land[n].einwohnerzahl >> land[n].flaeche)
        n++;
    qsort(land, n, sizeof(struct staat), vergleich);
    for (int i = 0; i < n; i++)
        cout << land[i].name << " " << land[i].einwohnerzahl << " "
             << land[i].flaeche << endl;
    return 0;
}
int vergleich(const void *a, const void *b)
{
    // Diese Funktion sollen Sie implementieren.
}