#include<iostream>
using namespace std;
int main()
{
    bool flag = false;
    bool* ptr = &flag;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
    // int x = 5;
    // int* ptr = &x;
    // ptr++;
    // cout<<*ptr;  // Print Garbage Value
}