// Aufgabe 5 ( 10 Punkte )
// Die untenstehende Datei a5.dat ist ein Auszug aus einer Datenbank des Prüfungsamts
// der Hochschule Wirzberg-Scheinfeld.
// Die Datei enthält - in dieser Reihenfolge -
// Nachname des Studierenden und dessen Durchschnittsnote:
// Mueller 2.37
// Stark 2.11
// Hartmann 1.45
// Schlaufuchs 2.11
// Berger 1.78
// Schmitt 3.14
// Meier 2.09
// Ribery 3.23
// Rosenfeld 1.26
// Entwickeln Sie für das untenstehende Programm a5.cpp (siehe nächste Seite) die
// Sortierfunktion vergleich , die obige Daten aufsteigend nach der Durchschnittsnote
// sortiert.
// Haben zwei Studierende die gleiche Durchschnittsnote, sollen deren Namen alphabetisch
// sortiert werden.
// Tipp: Für zwei Strings s1 und s2 gilt: s1 < s2, falls s1 im Alphabet vor s2 kommt.
// Nach Ablauf von a5.exe soll die Datei also wie folgt sortiert am Bildschirm erscheinen:
// Rosenfeld 1.26
// Hartmann 1.45
// Berger 1.78
// Meier 2.09
// Schlaufuchs 2.11
// Stark 2.11
// Mueller 2.37
// Schmitt 3.14
// Ribery 3.23
// (Programm a5.cpp siehe nächste Seite)11
// zu Aufgabe 5
/* a5.cpp */
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
struct datenbank
{
    string name;
    double note;
} student[9];
int vergleich(const void *av, const void *bv);
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
    while (eingabe_datei >> student[n].name >> student[n].note)
        n++;
    qsort(student, n, sizeof(struct datenbank), vergleich);
    for (int i = 0; i < n; i++)
        cout << student[i].name << " " << student[i].note << endl;
    return 0;
}
int vergleich(const void *av, const void *bv)
{
    // Diese Funktion sollen Sie implementieren.
}