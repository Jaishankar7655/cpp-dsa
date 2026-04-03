#include <iostream>
using namespace std;

int main(){
   int n ;
   cout << "enter a number: ";
   cin >> n ;
   int count = 0 ;
   while(count <= n )
   {
    count++;
    cout << "hello world "<< count << endl;
   }
   return 0;
}