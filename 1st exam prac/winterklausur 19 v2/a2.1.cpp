#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int input;
    vector<int> list{};
    int sum=0;
    int smoll=0;
    int big=0;
    int MAX_NUM=5;
    int mittel=0;
    int count1=0;
    while(list.size() < MAX_NUM)
    {
        cin >> input;
        if(input == -42) break;   
        list.push_back(input);
        sum+=input;
        if(list.size() == 1) big=smoll=input;
        if(big<input) big=input;
        if(smoll>input) smoll=input;
        mittel = sum/list.size();
        if(input%2 == 0) count1++;
    }
    cout << "small: " << smoll << endl 
    << "big: " << big << endl 
    << "mittel: " << mittel << endl 
    << "gerade: " << count1 << endl 
    << "ungerade: " << list.size()-count1 << endl 
    << "gesamt: " << list.size() << endl;
}