#include <iostream>
#include <cmath>

using namespace std;

bool isPythagoreanTriple(int a, int b, int c)
{
    if((pow(a,2)+pow(b,2))==(pow(c,2)))
        return true;

    return false;

}

void findPythagoreanTriple(int upperBound)
{
    for(int a=0; a<upperBound; a++)
    {
        for (int b = 0; b < upperBound; b++)
        {
            for (int c = 0; c < upperBound; c++)
            {
                if(isPythagoreanTriple(a,b,c)) cout << a << " " << b << " " << c << endl;
            }            
        }        
    }
}

int main(int argc, char *argv[])
{   
    int upperBound;
    cin >> upperBound;

    findPythagoreanTriple(upperBound);

    return 0;
}


