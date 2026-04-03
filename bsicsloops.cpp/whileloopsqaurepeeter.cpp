#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number of rows and columns: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        i++;
        int j = 1;
        while (j <= n)
        {
            j++;
            cout << "j ";
        }
        cout << endl;
    }
    return 0;
}