// Aufgabe 2 (10 Punkte)
// Entwickeln Sie ein C++-Programm, welches von der Tastatur beliebig viele einzelne Zeichen
// (Buchstaben und Zahlen) einliest. Die Eingabe jedes einzelnen Zeichens wird mit der ReturnTaste abgeschlossen.
// Die Zeichenfolge soll enden, wenn das Zeichen 'A' eingegeben wird. Das Zeichen 'A' soll für
// die Auswertung nicht berücksichtigt werden.
// Ihr Programm soll ausgeben:
// - die Anzahl aller eingegebenen Zeichen
// - die Anzahl aller eingegebenen Großbuchstaben (Tipp: ASCII-Tabelle).

#include <iostream>

using namespace std;

int main(void)
{   
    char input = 0;
    int callg = 0;
    int cbig = 0;
    while(input!=65)     // Hier beachten: Eingabe mit jedem Betätigen von Enter
    {
        cin >> input;
        if(input!=65) callg++;
        if(input>'A' && input<='Z')
            {
                cbig++;
            }
    }
    
    cout << "Alle: " << callg << endl;
    cout << "Big: " << cbig << endl;
    return 0;
}