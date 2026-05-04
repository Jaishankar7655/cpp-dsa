#include <iostream>
using namespace std;
int decimalToBinary(int decimalNum)
{
    int rem;
    int ans = 0;
    int power = 1;
    while (decimalNum > 0)
    {
        rem = decimalNum % 2;
        decimalNum = decimalNum / 2;
        ans = ans + (power * rem);
        power = power * 10;
    }
    return ans;
}
int main()
{
   for (int i = 0; i <=55; i++)
   {
    cout<<"binary of "<<(i)<<" = "<<decimalToBinary(i)<<endl;
   }
    return 0;
}