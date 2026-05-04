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

    int large = INT8_MIN;
    int largeIndex = 0;

    for (int i = 0; i < arraySize; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
            largeIndex = i;
        }
         cout << "index of largest value = " << largeIndex << endl;
       
    } 
    cout << "largest value = " << large;
    
    return 0;
}