

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    bool test=true;
    int big=0;
    int smoll=0;
    for (int i = 0; i < argc; i++)
    {
        int x = atoi(argv[i]);
        if(x%2 == 0)
        {
            if(x>big) big=x;
        }
        else
        {
            if(test)
            {
                test=false;
                smoll=x;
            }
            if(x<smoll) smoll=x;
        }
    }
    cout << "gerade " << big << endl << "ungerade " << smoll << endl;
    return 0;
}
