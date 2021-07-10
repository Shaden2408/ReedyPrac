#include <iostream>

using namespace std;
const int n=5;

float main(float x[n] [n])
{
    float max = x[0] [0];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(max<x[i] [j])
            {
                max = x[i] [j];
            }
        }
    }
    cout << max;
    return max;
}