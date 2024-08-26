#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter Row / Column : ";
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

    // TRANSPOSE
    for(int i=0; i<=m-1; i++)
    {
        for(int j=i+1; j<=m-1; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    // DISPLAY TRANSPOSED ARRAY
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=m-1; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    // Anti-Clock Rotate
    for(int k=0; k<=m-1; k++)
    {
        int i = 0; 
        int j = m-1;
        while(i<j)
        {
            int temp = a[i][k];
            a[i][k] = a[j][k];
            a[j][k] = temp;
            i++;
            j--;
        }
    }
        // DISPLAY Rotated Array
        for(int i=0; i<=m-1; i++)
        {
            for(int j=0; j<=m-1; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
}
    