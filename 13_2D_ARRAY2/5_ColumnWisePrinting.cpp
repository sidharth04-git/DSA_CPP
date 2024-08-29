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
    cout<<"Enter Elements : "<<endl;
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int j=0; j<=n-1; j++)
    {
        for(int i=0; i<=m-1; i++)
        {
            cout<<a[i][j]<<" ";
        }
    }
}