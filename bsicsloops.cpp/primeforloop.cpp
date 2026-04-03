#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime;
    cout<<"Enter a number to check number is prime or not: ";
    cin >> n;
    int i;

    for(i=2 ; i<=n-1; i++)
    {
        if(n%i == 0 ){
            cout<<"the gievn number is no-prime: ";
            isPrime = false;
            break;
        }
        else{
             cout<<"the gievn number is non-prime: ";
             isPrime = true;
             break; 
        }
    }
}