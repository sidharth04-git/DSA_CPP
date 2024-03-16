#include<iostream>
using namespace std;
void factorial(int n)
{
    int fact = 1;
    for(int i=1; i<=n; i++)
    {
        fact*=i;
        cout<<"Factorial of "<<i<<" is "<<fact<<endl;
    }
    if(n==0)
        cout<<1;
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    factorial(n);
}
    