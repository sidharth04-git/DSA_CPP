// 7 4 1 2 5 8 9 6 3
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
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cin>>a[i][j];
        }
    }
    // Wave Pattern 7 4 1 2 5 8 9 6 3
    for(int j=n-1; j>=0; j++)
    {
        if(j%2!=0)
        {
            for(int i=m-1; i>=0; i--)
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