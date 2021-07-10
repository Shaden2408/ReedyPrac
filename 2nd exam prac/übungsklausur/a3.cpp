#include <iostream>
#include <fstream>
using namespace std;
struct daten
{
    int anzahl;
    float wert;
} alles[20];

int vgl(const void *av, const void *bv);

int main(void)
{
    ifstream eingabe_datei;
    eingabe_datei.open("a1.dat");
    int n = 0, i;
    while (eingabe_datei >> alles[n].anzahl >> alles[n].wert)
        n++;
    qsort(alles, n, sizeof(struct daten), vgl);
    for (i = 0; i < n; i++)
        cout << alles[i].anzahl << " " << alles[i].wert << " "
             << alles[i].wert * alles[i].anzahl << endl;
}

int vgl(const void *av, const void *bv)
{
    struct daten *p1 = (struct daten *)av;
    struct daten *p2 = (struct daten *)bv;
    int a1 = p1->anzahl;
    float a2 = p1->wert;
    float produkt_a = a1*a2;
    int b1 = p2->anzahl;
    float b2 = p2->wert;
    float produkt_b = b1*b2;

    return produkt_a - produkt_b;
    
}