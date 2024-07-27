// Using nsp and nst variable 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int nsp = n-1;
    int nst = 1;
    for(int i=1; i<=n; i++)
    {
        // Spaces
        for(int j=1; j<=nsp; j++)
        {
            cout<<"  ";
        }
        nsp--;
        // Star
        for(int k=1; k<=nst; k++)
        {
            cout<<"* ";
        }
        nst+=2;
        cout<<endl;
    }
}