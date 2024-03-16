#include<iostream>
using namespace std;
int main()
{
    float n1,n2;
    char op;
    cout<<"Enter First Number ";
    cin>>n1;
    cout<<"Enter Operator ";
    cin>>op;
    cout<<"Enter Second Number ";
    cin>>n2;
    switch(op)
    {
        case '+':
            cout<<n1+n2;
            break;
        case '-':
            cout<<n1-n2;
            break;
        case '*':
            cout<<n1*n2;
            break;
        case '/':
            cout<<n1/n2;
            break;
        default:
            cout<<"Invalid Operator ";       
    }
}