/* a4_2.cpp */

#include <iostream>
using namespace std;

class MeinSpeicher
{
    struct el
    {                                                       
        int c;                                                  
        struct el *next;
    };
    el *first;

public:
    MeinSpeicher() : first(NULL){};
    int eingabe(int a);
    int ausgabe();
};

int MeinSpeicher::eingabe(int a)
{
    el *temp = new el;
    if (!temp)
        return 0;
    if (a % 2 == 1)
    {
        temp->c = a;
        temp->next = first;
        first = temp;
    }
    return 1;
};

int MeinSpeicher::ausgabe()
{
    if (!first)
        return 0;
    int a = first->c;
    el *temp = first;
    first = temp->next;
    delete temp;
    cout << a << endl;
    return 1;
}

int main()
{
    MeinSpeicher A;
    for (int i = 0; i < 10; i++)
        A.eingabe(i);
    for (int i = 0; i < 10; i++)
        A.ausgabe();
}