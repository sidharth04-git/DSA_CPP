#include<iostream>
using namespace std;
int fact(int x)
{
    int f = 1;
    for(int i=2; i<=x; i++)
    {
        f*=i;
    }
    return f;
}
int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int a = n;
    int last_digit;
    int sum = 0;
    int factorial;
    while(n>0)
    {
        last_digit = n%10;
        factorial=fact(last_digit);
        sum = factorial+sum;
        n = n/10;
    }
    if(a==sum)
        cout<<a<< " is a Strong Number ";
    else
        cout<<a<<" is not a Strong Number ";
}