#pragma once

#include <iostream>
#include <string>

using namespace std;

class Kickerteam
{
private:
    string name;
    int win, lose, unentschieden, tore, gegentore;

public:
    Kickerteam(string name, int win, int lose, int unentschieden, int tore, int gegentore);

    int punkte();   // Gibt die Anzahl der Punkte eines Kickerteams zurueck.
                    // Ein Sieg gibt 3 Punkte, ein Unentschieden 1 Punkt, eine Niederlage 0 Punkte.
    int tordiff();  // Gibt die Tordifferenz eines Kickerteams (goals-geg) zurück.
    void ausgabe(); // gibt ein Team wie folgt aus: Name, Punkte, Tordifferenz
    void game(Kickerteam &A, Kickerteam &B, int ta, int tb);
    // modelliert eine Spielbegegnung Kickerteam A gegen Kickerteam B mit
    // dem Spielergebnis ta:tb (z.B. 2:1) und ändert die Werte von wins,
    // losses, remis, goals, geg bei beiden Teams entsprechend.
    Kickerteam best(Kickerteam &A, Kickerteam &B);
    // Gibt das bessere der beiden Kickerteams A und B zurück. Besser heißt:
    // höhere Punktzahl und bei gleicher Punktzahl höhere Tordifferenz
};

Kickerteam::Kickerteam(string name = "JogisJungs", int win = 0, int lose = 0, int unentschieden = 0, int tore = 0, int gegentore = 0)
{
    this->name = name;
    this->win = win;
    this->lose = lose;
    this->unentschieden = unentschieden;
    this->tore = tore;
    this->gegentore = gegentore;
}

Kickerteam Kickerteam::best(Kickerteam &A, Kickerteam &B)
{
    if (A.punkte() > B.punkte() && A.tordiff() != B.tordiff())
    {
        return A;
    }
    else if (A.punkte() < B.punkte() && A.tordiff() != B.tordiff())
    {
        return B;
    }
    else if (A.punkte() == B.punkte())
    {
        if (A.tordiff() > B.tordiff())
        {
            return A;
        }
        return B;
    }
}

void Kickerteam::game(Kickerteam &A, Kickerteam &B, int ta, int tb)
{
    A.tore += ta;
    B.tore += tb;
    A.gegentore += tb;
    B.gegentore += ta;

    if (ta > tb)
    {
        A.win++;
    }
    else if (ta < tb)
    {
        B.win++;
    }
    else if (ta == tb)
    {
        A.unentschieden++;
        B.unentschieden++;
    }
}

void Kickerteam::ausgabe()
{
    cout << name << ", " << punkte() << ", " << tordiff() << endl;
}

int Kickerteam::tordiff()
{
    return (tore - gegentore);
}

int Kickerteam::punkte()
{
    return (3 * win + unentschieden + 0 * lose);
}
