#include<iostream>
#include<algorithm>
using namespace std;
int mini(int a , int b)
{
    int x;
    if(a>b)
        x = a;
    else
        x = b;
    return x;
}
int main()
{
    int a,b;
    cout<<"Enter First Number ";
    cin>>a;
    cout<<"Enter Second Number ";
    cin>>b;
    cout<<mini(a,b);
}