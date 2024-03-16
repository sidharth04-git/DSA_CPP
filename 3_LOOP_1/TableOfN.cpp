#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number which Table You Want ";
    cin>>n;
    for(int i=1; i<=10; i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
}