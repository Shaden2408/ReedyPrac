// Aufgabe 5 ( 10 Punkte )
// Die untenstehende Datei a5.dat listet einige US-Präsidenten auf.
// Die Datei enthält - in dieser Reihenfolge - :
// Name, Jahre des Amtsantritts, Jahr des Ausscheidens aus dem Amt
// Washington 1789 1797
// Roosevelt 1933 1945
// Obama 2009 2017
// Kennedy 1961 1963
// Taylor 1849 1850
// Clinton 1993 2001
// Fillmore 1850 1853
// Nixon 1969 1974
// Lincoln 1861 1865
// Entwickeln Sie für das untenstehende Programm a5.cpp (siehe nächste Seite) die
// Sortierfunktion vergleich, die diese Daten aufsteigend nach der Amtszeit (=EndjahrAnfangsjahr der Präsidentschaft) sortiert.
// Haben zwei Präsidenten die gleiche Amtszeit, so sollen diese Präsidenten alphabetisch
// geordnet werden.
// Nach Ablauf von a5.exe soll also die Datei also wie folgt sortiert am Bildschirm erscheinen:
// Taylor 1849 1850
// Kennedy 1961 1963
// Fillmore 1850 1853
// Lincoln 1861 1865
// Nixon 1969 1974
// Clinton 1993 2001
// Obama 2009 2017
// Washington 1789 1797
// Roosevelt 1933 1945
// Tipp: Zwei Strings s1 und s2 sind dann alphabetisch sortiert, wenn
// gilt s1 < s2.

/* a5.cpp */
#include <iostream> // ein- und ausgabe auf die console
#include <fstream> // ein- und auslesen von datein
#include <string> // arbeiten mit strings
#include <algorithm> // qsort

using namespace std;

struct president
{
    string name;
    int first;
    int last;
}usa[9];

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
    }
    while (eingabe_datei >> usa[n].name >> usa[n].first >>
           usa[n].last)
        n++;
    qsort(usa, n, sizeof(struct president), vergleich);
    for (int i = 0; i < n; i++)
        cout << usa[i].name << " " << usa[i].first << " " << usa[i].last << endl;

    return 0;
}

int vergleich(const void *av, const void *bv)
{
    struct president* p1 = (struct president*)av;
    struct president* p2 = (struct president*)bv;

    int zeit1 = p1->last -p1->first;
    int zeit2 = p2->last -p2->first;

    if (zeit1 == zeit2)
    {
        return p1->name.compare(p2->name);
    }

    return zeit1 - zeit2;
}