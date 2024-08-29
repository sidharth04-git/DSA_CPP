// 7 4 1 2 5 8 9 6 3
#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter Row / Column : "<<endl;
    cin>>m;
    int a[m][m];
    cout<<"Enter Elements : "<<endl;
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=m-1; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int j=0; j<=m-1; j++)
    {
        if(j%2==0)
        {
            for(int i=m-1; i>=0; i--)
            {
                cout<<a[i][j]<<" ";
            }
        }
        else
        {
            for(int i=0; i<=m-1; i++)
            {
                cout<<a[i][j]<<" ";
            }
        }
    }

}