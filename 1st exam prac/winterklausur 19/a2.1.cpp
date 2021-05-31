#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> vec;
    const int MAX_NUM = 10;
    double avg;
    int anz, min, max, even, odd, sum;

    while (1)
    {
        int eingabe;
        cin >> eingabe;

        if (eingabe == -42 || vec.size() == MAX_NUM)
            break;

        vec.push_back(eingabe);
        if (eingabe % 2)
            odd++;
        else
            even++;

        
        if(vec.size() == 1) min = max = eingabe;
        if(eingabe > max) max = eingabe;
        if(eingabe < min) min = eingabe;

        sum += eingabe;    

       anz++;
    }

    avg = sum / vec.size();

    return 0;
}