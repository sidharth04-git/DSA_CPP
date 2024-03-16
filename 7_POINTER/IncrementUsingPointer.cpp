#include<iostream>
using namespace std;
int main()
{
    int x = 5;
    int* ptr = &x;
    cout<<*ptr<<endl; // 5
    *ptr = *ptr+1; // (*ptr)++ 
    cout<<*ptr; // 6
}