#include<iostream>
using namespace std;
int main()
{
    int x = 100;
    int* p = &x;
    cout<<*p<<endl;
    *p = 80;  // Update Value of x using Deference Operator a
    cout<<x;
}