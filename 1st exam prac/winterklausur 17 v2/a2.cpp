// Aufgabe 2 (10 Punkte)
// Schreiben Sie ein C++ Programm, welches von der Tastatur beliebig viele float-Zahlen
// einliest. Die Eingabe soll enden, wenn eine Zahl > 1000.0 eingegeben wird.
// Diese Zahl > 1000.0 soll bei der folgenden Auswertung nicht berücksichtigt werden!
// Es sollen von Ihrem Programm folgende Größen am Bildschirm ausgegeben werden:
// • Größte eingelesene Zahl
// • Anzahl der Zahlen, die im Intervall [0,100] liegen
// Sie können davon ausgehen, dass mindestens eine Zahl ≤ 1000.0 eingelesen wird.
// Beispiel:
// Eingabe:
// 151.1 13.2 -99.5 37.6 -2.5 -75.0 299.4 45.3 1003
// Ausgabe:
// Groesste eingelesene Zahl: 299.4
// Anzahl der Zahlen im Bereich 0…100: 3

#include <iostream>

using namespace std;

int main(void)
{
    float input=0.0f;
    int bereich=0;
    int test=1;
    float big;

    while(cin >> input)
    {
        if(input>1000.0f) break;
        if(input<=0 && input <=100) bereich++;
        if(test == 1) test=2; big=input;
        if(input>big) big=input;
    }

    cout << "Biggest: " << big << endl << "anz zwischen 0 und 100: " << bereich << endl;

}