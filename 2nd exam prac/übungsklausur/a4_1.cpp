#include <iostream>
using namespace std;

struct l_elem
{
    int z;
    struct l_elem *n;
};

int main(void)
{
    struct l_elem *a, *b, *d;
    int t = 0, h = 0;
    a = b = new struct l_elem;
    b->z = t * t;   //bz = 0    
    t++;
    while (1)
    {
        b->n = new struct l_elem;
        if (t % 3)
            (b->n)->z = t * t;  //bnz = 1   
        else
            (b->n)->z = 0;  
        t++;
        if ((++h) < 19)     //h = 1
            b = b->n;   //b = l_elem 
        else
            break;
    }
    d = a;
    while (1)
    {
        cout << " " << d->z;
        cout << endl;
        if (d == b)
            break;
        d = d->n;
    }
}