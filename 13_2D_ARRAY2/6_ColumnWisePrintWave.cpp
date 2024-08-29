#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter Row : ";
    cin>>m;
    cout<<"Enter Column : ";
    cin>>n;
    int a[m][n];
    cout<<"Enter Elements "<<endl;
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cin>>a[i][j];
        }
    }
    // Pattern -> 1 4 7 8 5 2 3 6 9
    for(int j=0; j<=n-1; j++)
    {
        if(j%2==0)
        {
            for(int i=0; i<=m-1; i++)
            {
                cout<<a[i][j]<<" ";
            }
        }
        else
        {
            for(int i=m-1; i>=0; i--)
            {
                cout<<a[i][j]<<" ";
            }
        }
    }
}