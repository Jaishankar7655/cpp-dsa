//  print a number between 1 tp 10  using for loop 

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a number "<<endl;
    cin >> n;
    int sum = 0 ;
    for(int i = 0; i<=n; i++)
    {
        sum = sum +i ; 
    }
    cout<<sum<<endl;
    return 0;
}