#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    const double pee = 3.1415926535;
    int n = 0;
    double W = 0;
    double x;
    
    while(1)
    {
        W+=(pow(-1,n))/(2*n+1); // "+=" zum aufsummieren
        x=W-(pee/4);

        if(fabs(x) < 0.001) break;
        cout << "n= " << n << ", Wert= " << W << ", Abweichung= " << fabs(x) << endl;
        n++;
    }
    return 0;
}