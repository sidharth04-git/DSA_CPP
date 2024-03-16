#include<iostream>
using namespace std;
int fact(int x) // Fn. Defination
{
    int f=1;
    for(int i=2; i<=x; i++)
    {
        f*=i;
    }
    return f;
}
int main()
{
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    int nfact = fact(n); // Fn. Call 
    int rfact = fact(r);
    int nrfact = fact(n-r);
    int nCr = nfact/(rfact*nrfact);
    int nPr = nfact/nrfact;
    cout<<nCr<<endl<<nPr;
}

