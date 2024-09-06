#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Biary Number Size : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter Binary Number "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        cin>>a[i];
    }
    cout<<endl;

    // Binary To Decimal
    
    int sum = 0;
    int fact = 1;  // power of 2 i.e 2^0-->1
    
    for(int i=n-1; i>=0; i--)  // ulta loop
    {
        sum+= a[i]*fact;
        fact = fact*2;
    }
    cout<<"Binary is "<<sum;
}