// Aufgabe 3 (10 Punkte)
// Eine dreistellige Zahl, die gleich der Summe der dritten Potenzen ihrer Ziffern ist, soll
// besondere Zahl genannt werden.
// Beispielsweise ist 153 = 13 + 53 + 33 eine besondere Zahl.
// Schreiben Sie ein Programm, das alle besonderen Zahlen ausgibt.

#include <iostream>
#include <array>
#include <cmath>

using namespace std;

int main(void)
{
  for(int count=100; count<1000; count++)
  {
    //cout << count << endl;
    int one=count/100;
    //cout << one << endl;
    int two=(count-one*100)/10;
    //cout << two << endl;
    int three=(count-one*100-two*10)/1;
    //cout << three << endl;
    int test=pow(one, 3)+pow(two, 3)+pow(three, 3);
    if(test == count) cout << test << endl;
  }
  return 0;
}
