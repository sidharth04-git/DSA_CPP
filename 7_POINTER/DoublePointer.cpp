// Used to Store Address of Pointer 
#include<iostream>
using namespace std;
int main()
{
    int x = 5;
    int* ptr = &x;
    int** p = &ptr;
    cout<<&x<<endl;    // 0x9fd45ff7c4
    cout<<ptr<<endl;  //  0x9fd45ff7c4
    cout<<*p<<endl;  //   0x9fd45ff7c4  
    cout<<x<<endl;      // 5
    cout<<*ptr<<endl;  //  5
    cout<<**p<<endl;  //   5
}