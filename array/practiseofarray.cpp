#include <iostream>
using namespace std;
int main()
{
    int small = INT8_MAX;
    int small_index = -1;
    int largest = INT8_MIN;
    int large_index = -1;
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, -1, 8, 9};
    for (int i = 0; i < 10; i++)
    {
        // small = max(nums[i], small);
        // largest = max(nums[i], largest);

        if (nums[i] < small)
        {
            small = nums[i];
            small_index = i;
                }
        if (nums[i] > largest)
        {
            largest = nums[i];
            large_index = i;
        }
    }

    cout << "Largest value : " << largest;
    cout << endl;
    cout << "Index of largest value : " << large_index;
    cout << endl;

    cout << "Smallest value : " << small;
    cout << endl;
    cout << "Index of smallest value : " << small_index;

    return 0;
}