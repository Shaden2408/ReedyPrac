#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    double pi = 3.1415926535;
    double W;
    double diff;
    int i=0;
    while(1)
    {
        W+=(pow(-1, i))/(2*i+1);            //W+=  entspricht W = W +  (summe hier)
        diff=abs(W-pi/4);
        cout << i << ", " << W << ", " << diff << endl;
        i++;
        if(diff < 0.001) break;
    }
    
}