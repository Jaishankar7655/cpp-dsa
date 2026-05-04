#include <iostream>
using namespace std;

int main()
{
    int arraySize = 5;

    int smallest = INT8_MAX;
    int arr[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        cout << "Enter a value of " << i << " index: ";
        cin >> arr[i];
    }
    for (int i = 0; i < arraySize; i++)
    {
        int small = INT8_MAX;
        if (small > arr[i])
        {
            small = arr[i];
            cout << small << endl;
        }
        cout << arr[i] << endl;
    }

    return 0;
}