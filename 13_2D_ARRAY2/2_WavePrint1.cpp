#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter Row : "<<endl;
    cin>>m;
    cout<<"Enter Column : "<<endl;
    cin>>n;
    cout<<"Enter Elements of Matrix : "<<endl;
    int a[m][n]; // Array  
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cin>>a[i][j];
        }
    }
    // Wave Print
    for(int i=0; i<=m-1; i++)
    {
        if(i%2==0)  // row is even
        {
            for(int j=0; j<=n-1; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        else // i%2!=0 means row is odd
        {
            for(int j=n-1; j>=0; j--)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}