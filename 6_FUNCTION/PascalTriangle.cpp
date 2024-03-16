#include<iostream>
using namespace std;
int fact(int x)  // factorial ka function
{
    int f = 1;
    for(int i=2; i<=x; i++)
    {
        f = f * i;
    }
    return f;
}
int combination(int n , int r)  // ncr ka function
{
    int nCr = fact(n)/(fact(r)*fact(n-r));
    return nCr;
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0; i<=n-1; i++)  // n se ek kam loop chalayege
    {
        for(int j=0; j<=i; j++)
        {
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}