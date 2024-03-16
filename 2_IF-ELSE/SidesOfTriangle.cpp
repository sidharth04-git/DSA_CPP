#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter First Side a : ";
    cin>>a;
    cout<<"Enter Second Side b : ";
    cin>>b;
    cout<<"Enter Third Side c : ";
    cin>>c;
    if((a+b>c) && (b+c>a) && (c+a>b))
    cout<<"Valid Triangle ";
    else
    cout<<"Invalid Triangle " ;
}