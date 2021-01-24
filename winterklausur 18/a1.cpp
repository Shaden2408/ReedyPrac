// a1.cpp

#include <iostream>
using namespace std;
int f(int &, int, int &);
int a, b = 1, c = 2;
int main(void)
{
    int a = 3, b = 2, c = 65, d = 5;
    cout << a++ << ' ' << b % 2 << ' ' << (char)c << ' ' << --d << endl;
    cout << a << ' ' << (b += 1) << ' ' << c << ' ' << d << endl;
    a = !d;
    cout << a << ' ' << b << ' ' << ::a << ' ' << (b > a) << endl;
    a = b = c = 1;
    d = f(a, b, c);
    cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
    d = f(a, b, c);
    cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
    return 0;
}
int f(int &x, int y, int &z)
{
    x *= 2;
    int e = x + y;
    c++;
    --z;
    cout << x << ' ' << z << ' ' << c << ' ' << e << endl;
    return (x * e);
}