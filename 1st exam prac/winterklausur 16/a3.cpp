// Aufgabe 3 (10 Punkte)
// Eine dreistellige Zahl, die gleich der Summe der dritten Potenzen ihrer Ziffern ist, soll
// besondere Zahl genannt werden.
// Beispielsweise ist 153 = 13 + 53 + 33 eine besondere Zahl.
// Schreiben Sie ein Programm, das alle besonderen Zahlen ausgibt.

#include <iostream>
#include <array>
#include <cmath>

using namespace std;

int main(void)
{
    int startZahl = 100;

    while (startZahl < 1000)
    {
        array<int, 3> ziffer{};
        int zahl = startZahl;
        int potenzSum;

        for (int i = 2; i >= 0; i--)
        {
            ziffer[i] = zahl % 10;
            zahl /= 10;
        }

        potenzSum = pow(ziffer[0], 3) + pow(ziffer[1], 3) + pow(ziffer[2], 3);

        if (startZahl == potenzSum)
        {
            cout << startZahl << endl;
        }
        startZahl++;
    }
    return 0;
}
