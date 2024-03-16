#include<iostream>
using namespace std;
int maxi(int a, int b);
int main()
{
    int a,b;
    cout<<"Enter First Number ";
    cin>>a;
    cout<<"Enter Second Number ";
    cin>>b;
    cout<<maxi(a,b);
}
int maxi(int a, int b)
{
    int x;
    if(a>b)
        x = a;
    else
        x = b;
    return x;
}