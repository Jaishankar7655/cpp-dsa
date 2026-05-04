#include <iostream>
using namespace std;

int sum(int a)
{
    int sum = 1;
    for (int i = 1; i <= a; i++)
    {
        sum = sum * i;
    }
    return sum;
}

int main()
{

    int count = sum(10);
    cout << count;

    return 0;
}