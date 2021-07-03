#include <iostream>
#include <array>
#include <cmath>

using namespace std;

int main()
{
    long long isbn = 0;
    cin >> isbn;
    int sum = 0;
    for (long long i = 0; i < 12; i++)
    {
        int z = isbn % 10;
        isbn /= 10;
        int temp = z * pow(3, (i + 1) % 2);
        sum += temp;
    }
    int pruef = (10 - sum % 10) % 10;
    cout << pruef << endl;
    return 0;
}
