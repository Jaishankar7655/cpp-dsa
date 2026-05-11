#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    vector <int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout<<"Pushing back to last of vech: ";
    vec.push_back(11);
    cout<<"Size of the Vector: " <<vec.size() << endl;
    cout<<"Capacity of the Vector: " <<vec.capacity() << endl;
    

    cout << "Elements of the vector: ";
    for(int val: vec)
    {
        cout << val << " ";
    }
    
    return 0;
}