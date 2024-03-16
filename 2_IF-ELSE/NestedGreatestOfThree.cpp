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
    if(a>b)
    {
        if(a>c)
        cout<<a<<" is Greatest ";
        else
        cout<<c<<" is Greatest ";
    }
    else
    {
        if(b>c)
        cout<<b<<" is Greatest ";
        else
        cout<<c<<" is Greatest ";
    }
}
