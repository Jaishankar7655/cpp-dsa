#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int target)
{
    int num = 0;
    for (int i = 0; i < size; i++)
    {
        arr[i] = num;
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 5;
    int target = 2;
    cout << linearSearch(arr, size, target);
    return 0;
}