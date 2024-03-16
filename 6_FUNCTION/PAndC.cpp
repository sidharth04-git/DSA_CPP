#include<iostream>
using namespace std;
int fact(int x)
{
    int f = 1;
    for(int i=2; i<=x; i++)
    {
        f = f * i;
    }
    return f;
}
int combination(int n , int r)
{
    int nCr = fact(n)/(fact(r)*fact(n-r));
    return nCr;
}
int permutation(int n , int r)
{
    int nPr = fact(n)/fact(n-r);
    return nPr;
}
int main()
{
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    int nCr = combination(n,r);
    int nPr = permutation(n,r);
    cout<<nCr<<endl<<nPr;
}