#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter Row : ";
    cin>>m;
    cout<<"Enter Cols ";
    cin>>n;
    int a[m][n];
    // INPUT 2D ARRAY
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cin>>a[i][j];
        }
    }
    // CONDITION FOR MAX SUM IN ROW
    
    int rowMax = INT_MIN;
    for(int i=0; i<=m-1; i++)
    {
        int sum = 0;
        for(int j=0; j<=n-1; j++)
        {
            sum+=a[i][j];
        }
        if(sum>rowMax)
                rowMax = sum;
    }
    cout<<rowMax;
}