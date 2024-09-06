#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter Row of Matrix : ";
    cin>>m;
    cout<<"Enter Column of Matrix : ";
    cin>>n;
    int a[m][n];
    cout<<"Enter Elements of Matrix : "<<endl;
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cin>>a[i][j];
        }
    }
    // 0th Column of Evey Row --> 1
    for(int i=0; i<=m-1; i++)
    {
        if(a[i][0]==0)
        {
            for(int j=0; j<=n-1; j++)
            {
                if(a[i][j]==0)
                    a[i][j] = 1;
                else
                    a[i][j] = 0;
            }
        }
    }
    // Check Column
    
    for(int j=0; j<=n-1; j++)
    {
        int noz = 0;
        int noo = 0;
        for(int i=0; i<=m-1; i++)
        {
            if(a[i][j]==0)
                noz++;
            else
                noo++;
        }
        if(noz>noo) // Flip
        for(int i=0; i<=m-1; i++)
        {
            if(a[i][j]==1)
                a[i][j] = 0;
            else
                a[i][j] = 1;
        }
    }
    // Binary Sum of each individual row
    int sum = 0;
    for(int i=0; i<=m-1; i++)
    {
        int product = 1;
        for(int j=n-1; j>=0; j--)
        {
            sum+=a[i][j]*product;
            product*=2;
        }
    }
    cout<<sum;

}