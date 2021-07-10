#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char *argv[])
{
    char* x = argv[1];
    int l=strlen(argv[1]);

    for(int i=1; i < argc; i++)
    {
        if(strlen(argv[i])>l)
        {
            l=strlen(argv[i]);
            x=argv[i];
        }
        if(strlen(argv[i])==l)
        {
            int test=strcmp(argv[i], x);
            if(test>0) 
            {
                l=strlen(argv[i]);
                x=argv[i];
            }
        }
    }

    cout << x << endl;
    return 0;
}
