// a1.cpp

#include <iostream>
using namespace std;
int f(int &, int, int &);
int a, b = 1, c = 2;
int main(void)
{
    int a = 3, b = 2, c = 65, d = 5;
    cout << a++ << ' ' << b % 2 << ' ' << (char)c << ' ' << --d << endl;    // 3 0 A 4
    cout << a << ' ' << (b += 1) << ' ' << c << ' ' << d << endl;           // 4 3 65 4
    a = !d;                                                                 // a = 0
    cout << a << ' ' << b << ' ' << ::a << ' ' << (b > a) << endl;          // 0 3 0 1
    a = b = c = 1;                                                          
    d = f(a, b, c);                                                         // d = 6
    cout << a << ' ' << b << ' ' << c << ' ' << d << endl;                  // 2 1 0 6
    d = f(a, b, c);                                                         // (2,1,0) = 16
    cout << a << ' ' << b << ' ' << c << ' ' << d << endl;                  // 4 1 2 20
    return 0;
}
int f(int &x, int y, int &z)
{
    x *= 2;  // 4           2
    int e = x + y;  // 5            3
    c++; // 4              3
    --z; // -1              0
    cout << x << ' ' << z << ' ' << c << ' ' << e << endl;  //     2 0 3 3            4 -1 4 5
    return (x * e); // 20
}