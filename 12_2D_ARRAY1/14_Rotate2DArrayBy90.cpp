#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter Row/Column : "<<endl;
    cin>>m;
    int a[m][m];

    // INPUT MATRIX

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

    // 1.Transpose The Array by Swapping the row and cols
    
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

    // Reverse each row of array
    
    for(int k=0; k<=m-1; k++)
    {
        int i = 0;    // point at first idx
        int j = m-1; // point at last idx
        while(i<=j)
        {
            int temp = a[k][i];  // row constant rakh kar swap krege
            a[k][i] = a[k][j];
            a[k][j] = temp;
            i++;
            j--;
        }
    }
    cout<<endl;

    // Display The Rotated Array

    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=m-1; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

