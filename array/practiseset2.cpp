#include <iostream>
using namespace std;

int linearSearch(int array[], int target, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == target)
        {
            cout << i;
        }
    }
    return -1;
}

int main()
{
    int target = 11;
    int size = 8;
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
    linearSearch(array, target, size);

    return 0;
}