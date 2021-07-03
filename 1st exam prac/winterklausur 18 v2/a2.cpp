// Aufgabe 2 (10 Punkte)
// Schreiben Sie ein C++ Programm, welches von der Tastatur beliebig viele double-Zahlen
// einliest. Die Eingabe soll enden, wenn eine Zahl < 0 eingegeben wird.
// Diese Zahl < 0 soll bei der folgenden Auswertung nicht berücksichtigt werden!
// Es sollen von Ihrem Programm folgende Größen am Bildschirm ausgegeben werden:
// • Kleinste eingelesene Zahl
// • Anzahl der Zahlen, die von der Kreiszahl 𝝅𝝅 um weniger als 0.01 (nach oben oder
// unten) abweichen
// Beispiel:
// Eingabe:
// 71.224 13.22 3.149 37.6 3.135 342.1 2.1234 77.3 -12.3
// Ausgabe:
// Kleinste eingelesene Zahl: 2.1234
// Anzahl der Zahlen, die von Pi um weniger als 0.01 abweichen: 2
// Tipps:
// • Führen Sie die Kreiszahl Pi wie folgt ein:
// const double pi = 3.14159265358979323846;
// • Die C++-Syntax für die Betragsfunktion |𝑥𝑥| lautet: float fabs( float x )
// Um diese Funktion benutzen zu können, müssen Sie die Mathematik-Bibliothek
// <cmath> einbinden.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float smoll=0;
    const double pi = 3.14159265358979323846;
    int close = 0;
    float eingabe = 0;
    bool first=true;
    while(cin >> eingabe)
    {
        if(eingabe < 0) break;
        if(first)
        {
            first=false;
            smoll=eingabe;
        }
        if(eingabe < smoll) smoll=eingabe;
        if((fabs(eingabe-pi))<0.01) close++;
    }
    cout << "kleinste " << smoll << endl << "anz close pi " << close << endl; 
}