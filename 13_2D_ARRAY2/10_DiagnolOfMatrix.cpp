#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter Row/Column : ";
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
    cout<<endl;

    // Display Diagonal and Anti-Diagnol Elements
    
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=m-1; j++)
        {
            if((i==j) || (i+j==m-1))
                cout<<a[i][j]<<" ";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}