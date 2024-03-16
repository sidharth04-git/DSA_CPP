#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a and b respectively : ";
    cin>>a>>b;
    int* x = &a;
    int* y = &b;
    cout<<"Product of a and b is "<<(*x)*(*y);
}