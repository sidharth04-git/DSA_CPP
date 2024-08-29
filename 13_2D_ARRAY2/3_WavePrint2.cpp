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
    // Wave Print --> 3 2 1 4 5 6 9 8 7
    for(int i=0; i<=m-1; i++)
    {
        if(i%2!=0)
        {
            for(int j=0; j<=n-1; j++)
            {
                cout<<a[i][j]<<" ";
            }
        }
        else
        {
            for(int j=n-1; j>=0; j--)
            {
                cout<<a[i][j]<<" ";
            }
        }
    }
}