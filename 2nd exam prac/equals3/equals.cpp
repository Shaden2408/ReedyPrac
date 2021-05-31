#include <iostream>

int equal(int a, int b, int c) {
    int anz = 0;
    
    if(a!=b && b!=c && c!=a) anz=0;
    if(a==b || b==c || a==c) anz = 2;
    if(a==b && a==c) anz = 3;

    return anz;
}

int main(){
    int zahl;

    zahl = equal(1, 1, 1);
    std::cout << zahl << std::endl;

    zahl = equal(1, 2, 1);
    std::cout << zahl << std::endl;

    zahl = equal(1, 2, 3);
    std::cout << zahl << std::endl;

    zahl = equal(1, 3, 3);
    std::cout << zahl << std::endl;
}