// Selection sort zum aufsteigenden sortieren
//
#include <iostream>

using namespace std;

void aufgabe_3(size_t size, int array[], char order)
{
    for (size_t i = 0; i < size; i++) // | 4 | 2 | 1 | 3 |
    {
        for (size_t j = i + 1; j < size; j++)
        {
            if (order == 'a')
            {
                if (array[i] > array[j])
                {
                    int temp = array[j];
                    array[j] = array[i];
                    array[i] = temp;
                    // | 1 | 2 | 3 | 4 |
                }
            }
            else if (order == 'd')
            {
                if (array[i] < array[j])
                {
                    int temp = array[j];
                    array[j] = array[i];
                    array[i] = temp;
                    // | 4 | 3 | 2 | 1 |
                }
            }
        }
    }
}

int main()
{
    int *p1;
    int *p2;
    int i;

    i=p1-p2;

//    i=p1+p2;
    p2=p1+i;


    int array[] = {2, 3, 1, 4};
    aufgabe_3(4, array, 'a');
    for (int i = 0; i < 4; i++)
        cout << "a " << array[i] << endl;

        aufgabe_3(4, array, 'd');
    for (int i = 0; i < 4; i++)
        cout << "d " << array[i] << endl;
}