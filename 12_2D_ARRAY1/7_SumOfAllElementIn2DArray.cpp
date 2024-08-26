#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter Row Number : ";
    cin>>m;
    cout<<"Enter Columns Number : ";
    cin>>n;
    int arr[m][n];
    // INPUT
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cin>>arr[i][j];
        }
    }
    // SUM OF ALL ELEMENTS OF ARRAY
    int sum = 0;
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            sum+= arr[i][j];
        }
    }
    cout<<sum<<endl;
}