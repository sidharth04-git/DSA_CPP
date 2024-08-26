// Store Transpose in Array Trans
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
    // INPUT
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;

    // PRINT
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    // Store Transpose in Array t

    int t[n][m];
    for(int i=0; i<=n-1; i++)  // FOR ROW
    {
        for(int j=0; j<=m-1; j++)  // FOR COLUMN
        {
            t[i][j] = a[j][i];  // ulte element store krege t matrix me
        }
        cout<<endl;
    }
    cout<<endl;

    // PRINT TRANSPOSE ARRAY

    for(int i=0; i<=n-1; i++)
    {
        for(int j=0; j<=m-1; j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}