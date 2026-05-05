#include <iostream>
using namespace std;
int linearSearch(int array[], int target, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == target)
        {

            return i;
        }
    }
    return -1;
}
int main()
{
    int target = 12;
    int size = 8;
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int index = linearSearch(array, target, size);
    if (index == -1)
    {
        cout << "Element not found in the array";
    }
    else
    {
        cout << "Element found at index : " << index;
    }

    return 0;
}