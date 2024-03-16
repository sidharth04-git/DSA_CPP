#include<iostream>
using namespace std;
int hcf(int a, int b)
{
    int gcd;
    for(int i=min(a,b); i>1; i--)
    {
        if(a%i==0 && b%i==0)
        {
            gcd = i;
            break;
        }
    }
    return gcd;
}
int main()
{
    int a,b;
    cout<<"Enter 1st Number : ";
    cin>>a;
    cout<<"Enter 2nd Number : ";
    cin>>b;
    cout<<hcf(a,b); 
}