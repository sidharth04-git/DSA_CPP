#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number ";
    cin>>n;
    int a = n;
    int count = 0;
    while(n>0)
    {
        n = n/10;
        count++;
    }
    if(a==0)
        cout<<1<<endl;
    else
        cout<<count<<endl;
}