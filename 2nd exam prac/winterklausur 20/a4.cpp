//nach Schema "a4.exe '..' '..' '..' " strings eingeben (wörter)
//ausgegeben werden soll ein wort, das eine gerade anzahl an buchstaben hat, sowie mit dem buchstaben "r" endet
//wenn dies auf mehrere wörter zutrifft, so muss das im alphabet letztere ausgegeben werden

#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

int main(int argc, char* argv[])
{
    bool test=true;
    char* word1;

    for(int i=1; i<argc; i++)
    {
        int length = strlen(argv[i]);
        
        char last = argv[i][length-1];
        if(length%2 == 0 && last == 'r')
        {
            if(test)
            {
                word1=argv[i];
                test=false;
            }
            if(strcmp(argv[i],word1) > 0)
            {
                word1=argv[i];
            }   
        }
    }
    cout << word1 << endl; 
    return 0;
}