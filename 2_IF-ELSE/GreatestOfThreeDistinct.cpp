#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
    cout<<"Enter Third Number : ";
    cin>>c;
    // Condition using Logical AND
    if(a>b && a>c)
    cout<<a<<" is Greatest ";
    if(b>a && b>c)
    cout<<b<<" is Greatest ";
    if(c>a && c>b)
    cout<<c<<" is Greatest ";
}