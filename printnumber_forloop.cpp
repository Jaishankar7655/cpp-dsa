#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    int j = 1;
    int count = 1;
    for (i; i <= n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << count <<" ";
            count = count + 1;
        }
        cout << endl;
    }
    

    return 0;
}