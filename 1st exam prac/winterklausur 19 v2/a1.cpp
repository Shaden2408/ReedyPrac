#include <iostream>

using namespace std;

int a = 1;
int b = 2;      //67    //132
int c = 3;

int f(char c, int &d)
{
    c = 65 + c;     //67    //70    //66    //67
    d = 65 + d;     //67    //67    //70    //132
    cout << c << " " << d << endl;      //C 67    //F 67    //B 70    //C 132
    return c + ::b;
}

int main(void)
{
    int a, b, c;

    a = ::a * ::b;      //2
    b = ::b + ::c;      //5     //70
    c = ::c - ::a;      //2     //67
    cout << ::a << " " << a << endl;    //1 2
    cout << ::b << " " << b << endl;    //2 5
    cout << ::c << " " << c << endl;    //3 2

    cout << f(a, ::b) << endl;          //134
    cout << f(b, c) << endl;            //137
    cout << f(::a, b) << endl;          //133

    f(a, ::b);      //199

    cout << a << " " << b << " " << c << endl;      //2 70 67
    cout << ::a << " " << ::b << " " << ::c << endl;//1 132 3
}