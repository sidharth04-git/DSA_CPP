#include<iostream>
using namespace std;
int main()
{
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    int nfact = 1; // n!
    for(int i=2; i<=n; i++)
    {
        nfact*=i;
    }
    int rfact = 1; // r!
    for(int i=2; i<=r; i++)
    {
        rfact*=i;
    }
    int nrfact = 1; // (n-r)!
    for(int i=2; i<=(n-r); i++)
    {
        nrfact*=i;
    }
    int nCr = nfact/(nrfact*rfact);
    int nPr = nfact/nrfact;
    cout<<"nCr = "<<nCr<<endl;
    cout<<"nPr = "<<nPr<<endl;
}