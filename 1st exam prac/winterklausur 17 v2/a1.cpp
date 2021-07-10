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
    d = f(a, b);                                                        // d=3
    cout << a << ' ' << b << ' ' << c << ' ' << d << endl;              // 1 0 1 3
    d = f(a, b);                                                        // d=2
    cout << a << ' ' << b << ' ' << c << ' ' << d << endl;              // 1 -1 1 2
    return 0;
}
int f(int x, int &y)
{
    x *= 3;   //3   3
    int h = x - y; //2  3
    c++; //2    3
    y--; //0    -1
    cout << x << ' ' << y << ' ' << c << ' ' << h << endl; // 3 0 2 2   3 -1 3 3
    return (x + y);  //3    2
}