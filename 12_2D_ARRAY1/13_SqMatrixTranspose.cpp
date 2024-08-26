#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter Row/Column : "<<endl;
    cin>>m;
    int a[m][m];
    // INPUT
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=m-1; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;
    // Display
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=m-1; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // Transpose in the same Square Matrix
    for(int i=0; i<=m-1; i++)
    {
        for(int j=i+1; j<=m-1; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    cout<<endl;
    // Print
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=m-1; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}