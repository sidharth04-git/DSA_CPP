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
    // INPUT
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cin>>a[i][j];
        }
    }
    // SPIRAL PRINTING

    int minr = 0 , minc = 0;
    int maxr = m-1, maxc = n-1;
    while(minr<=maxr && minc<=maxc)  //  Outer Condition
    {
        // Right
        for(int j = minc; j<=maxc; j++)
        {
            cout<<a[minr][j]<<" ";
        }
        if(minr>=maxr || minc>=maxc)
            break;
        minr++;

        // Down
        for(int i = minr; i<=maxr; i++)
        {
            cout<<a[i][maxc]<<" ";
        }
        if(minr>=maxr || minc>=maxc)
            break;
        maxc--;

        // Left
        for(int j=maxc; j>=minc; j--)
        {
            cout<<a[maxr][j]<<" ";
        }
        if(minr>=maxr || minc>=maxc)
            break;
        maxr--;

        // Top
        for(int i=maxr; i>=minr; i--)
        {
            cout<<a[i][minc]<<" ";
        }
        if(minr>=maxr || minc>=maxc)
            break;
        minc++;
    }
}