#include <iostream>
#include <cmath>

using namespace std;

bool isPythagoreanTriple(int a, int b, int c)
{
    int test=pow(a,2)+pow(b,2);
    if(test == pow(c,2)) return true;
    else return false;
}

void findPythagoreanTriple(int upperBound)
{
    for (int i = 100; i < upperBound; i++)
    {
        int a=i/100;
        int b=(i-a*100)/10;
        int c=i%10;
        if(isPythagoreanTriple(a,b,c))
        {
            cout << a << " " << b << " " << c << endl;
        }
    }
}

int main()
{
    int input=0;
    cin >> input;
    findPythagoreanTriple(input);

    return 0;
}