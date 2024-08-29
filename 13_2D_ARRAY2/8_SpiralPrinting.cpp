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
    cout<<"Enter Elements : ";
    // INPUT in 2D Array
    for(int i=0; i<=m-1; i++)  // For Row
    {
        for(int j=0; j<=n-1; j++)  // For Column
        {
            cin>>a[i][j];
        }
    }
    // SPIRAL PRINTING FORMAT
    int minr = 0 , minc = 0;
    int maxr = m-1, maxc = n-1;
    int tne = n*m;
    int count = 0;
    while(minr<=maxr && minc<=maxc) 
    {
        // right
        for(int j = minc; j<=maxc && count<tne; j++)
        {
            cout<<a[minr][j]<<" ";
            count++;
        }
        minr++;
        // Down
        for(int i = minr; i<=maxr && count<tne; i++)
        {
            cout<<a[i][maxc]<<" ";
            count++;
        }
        maxc--;
        // Left
        for(int j=maxc; j>=minc && count<tne; j--)
        {
            cout<<a[maxr][j]<<" ";
            count++;
        }
        maxr--;
        // Top
        for(int i=maxr; i>=minr && count<tne; i--)
        {
            cout<<a[i][minc]<<" ";
            count++;
        }
        minc++;
    }
}