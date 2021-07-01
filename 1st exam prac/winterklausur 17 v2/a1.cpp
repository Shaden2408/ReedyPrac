// a1.cpp
#include <iostream>
using namespace std;
int f(int, int &);
int a, b = 2, c = 1;
int main(void)
{
    int a = 2, b = 3, c = 4, d = 5;
    cout << ++a << ' ' << --b << ' ' << (c += 76) << ' ' << d++ << endl;// 3 2 80 5
    cout << a << ' ' << b << ' ' << (char)c << ' ' << d << endl;        // 3 2 P 6
    a = d % 2;                                                          // a=0
    cout << a << ' ' << !b << ' ' << ::a << ' ' << ::b << endl;         // 0 0 0 2
    a = b = c = 1;                                                      //
    d = f(a, b);                                                        // d= 3
    cout << a << ' ' << b << ' ' << c << ' ' << d << endl;              // 1 0 1 3  //b wegen call by reference verändert
    d = f(a, b);                                                        // d= 2
    cout << a << ' ' << b << ' ' << c << ' ' << d << endl;              // 1 -1 1 2
    return 0;
}
int f(int x, int &y)
{
    x *= 3;   // x = a = 3
    int h = x - y; // h = 3
    c++; // c = 3
    y--; // y = -1
    cout << x << ' ' << y << ' ' << c << ' ' << h << endl; // 3 -1 3 3
    return (x + y);  // 2
}