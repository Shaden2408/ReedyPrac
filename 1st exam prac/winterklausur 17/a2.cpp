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
    float eingabe = 0.0f;
    float bigboi = 0.0f;
    int anzahl = 0;
    bool ersteEingabe = true;

    while (cin >> eingabe) // Schema bei Eingabe aller Werte in eine Zeile 
    {
        if (eingabe > 1000.0)
        {
            break;
        }
        else if (eingabe>bigboi)
        {
            bigboi = eingabe;
        }
        else if (ersteEingabe && eingabe < 0)
        {
            bigboi = eingabe;
            ersteEingabe = false;
        }

        if (eingabe >= 0 && eingabe <= 100)
        {
            anzahl++;
        }
    }
    cout << "anz " << anzahl << endl;
    cout << "biggest of the bois " << bigboi << endl;
    return 0;
}