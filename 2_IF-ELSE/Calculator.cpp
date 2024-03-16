#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"Enter first Number ";
    cin>>a;
    cout<<"Enter Operator ";
    cin>>op;
    cout<<"Enter Second Number ";
    cin>>b;
    if(op=='+')
        cout<<a+b<<endl;
    else if(op=='-')
        cout<<a-b<<endl;
    else if(op=='*')
        cout<<a*b<<endl;
    else
        cout<<a/b<<endl;

    
}