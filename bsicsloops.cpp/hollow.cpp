#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                cout << "*";
            }
            else
            
            {
                cout << " ";
            }
        }
        for (int j = 0; j < i - 1 + 1; j++)
        {
            if (j==0)
            {
                cout<<"*";
            }
            else
            {
                cout<<"/";
            }
            
        }
        cout << endl;
    }

    return 0;
};