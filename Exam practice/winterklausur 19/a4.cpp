#include <iostream>
#include <array>
#include <cmath>

using namespace std;

int main()
{   
    array<int,12> rechn{};
    int sum;
    int z13;
    int zahl;
    cin >> zahl;

    for(int i=0; i<12; i++)
    {
        rechn[i]=zahl%10;
        zahl /=10;
        sum += (rechn[i] * pow(3,((i+1)%2)));
    }

    z13 = ((10-(sum%10))%10);
    return 0;
}


