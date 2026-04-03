#include <iostream>
using namespace std ;
int main()
{
    int age;
    cout <<"Enter your age: ";
    cin >> age;
    if(age >= 18)
    {
        cout<<"Condiate eligible for vote: ";
    }
    else if (age < 14 ) 
    {
        cout << "you are teenager ";
    }
    else
    {
        cout << "You can not vote";
    }
    
    return 0;

}