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
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cin>>a[i][j];
        }
    }
    int x1,x2,y1,y2;
    cout<<"Enter First Co-Ordinates";
    cin>>x1>>y1;
    cout<<"Enter Second Co-Ordinates";
    cin>>x2>>y2;
    int sum = 0;
    for(int i=x1; i<=x2; i++)
    {
        for(int j=y1; j<=y2; j++)
        {
            sum+=a[i][j];
        }
    }
    cout<<sum;


}