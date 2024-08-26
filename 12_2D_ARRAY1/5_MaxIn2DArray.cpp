#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter Number of Rows : ";
    cin>>m;
    cout<<"Enter Number of Columns : ";
    cin>>n;
    int arr[m][n];

    // INPUT
    cout<<"Enter Elements : "<<endl;
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    // TRAVERSE
    int max = INT_MIN;
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            if(arr[i][j]>max)
            {
                max = arr[i][j];
            }
        }
    }
    cout<<"Maximum Element in the Given 2D Array is "<<max<<endl;
} 