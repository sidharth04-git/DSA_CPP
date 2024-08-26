#include<iostream>
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
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cin>>arr[i][j];  // i -> Row , j -> cols
        }
    }
    // OUTPUT
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}