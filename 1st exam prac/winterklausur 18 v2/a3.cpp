// Aufgabe 3 (10 Punkte)
// Die sog. Collatz-Zahlenfolge wird folgendermaßen gebildet:
// • Starte mit irgendeiner natürlichen Zahl 𝑛𝑛.
// • Ist 𝑛𝑛 gerade, so ist die nächste Zahl der Folge 𝑛𝑛/2.
// • Ist 𝑛𝑛 ungerade, so ist die nächste Zahl der Folge 3𝑛𝑛 + 1.
// • Wiederhole die obige Vorgehensweise mit der erhaltenen Zahl.
// So erhält man z.B. für die Startzahl 𝑛𝑛 = 10 die Folge
// 10, 5, 16, 8, 4, 2, 1, 4, 2, 1, 4, 2, 1, …
// Die Collatz Vermutung, die ein berühmtes unbewiesenes Problem der modernen Mathematik
// ist, lautet: Jede so konstruierte Zahlenfolge mündet in den Zyklus 4, 2, 1, egal, mit welcher
// natürlichen Zahl 𝑛𝑛 man beginnt.
// Schreiben Sie ein C++Programm, das vom Benutzer eine natürliche Zahl 𝒏𝒏 > 1 einliest
// und die zugehörige Collatz- Zahlenfolge ausrechnet und auf dem Bildschirm ausgibt
// (Ausgabe der Folge bis zum ersten Mal die Zahl 1 als Folgeglied auftritt).
// Weiterhin soll auf dem Bildschirm ausgegeben werden, ob die Collatz-Vermutung für
// diese Zahl 𝒏𝒏 zutrifft.
// Tipp:
// Es reicht, wenn Sie prüfen, ob irgendwann im Laufe der Erstellung der Zahlenfolge die Zahl 1
// als Mitglied der Folge auftritt. Denn genau dann mündet die Folge in den Zyklus
// 1, 4,2,1, 4,2,1, 4,2,1 , …

#include <iostream>

using namespace std;

int main(void)
{
    int n=0;
    cin >> n;
    while(1)
    {
        if(n%2 == 0) n/=2;
        else n=3*n+1;
        cout << n << ", ";
        if(n == 1) break;
    }
    cout << "trifft zu";
}