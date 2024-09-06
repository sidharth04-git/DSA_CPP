#include<iostream>
using namespace std;
#include<vector>
int main()
{
    int m,n;
    cout<<"Enter Row : ";
    cin>>m;
    cout<<"Enter Column : ";
    cin>>n;
    int matrix[m][n];
    cout<<"Enter Elements in 2D Matrix "<<endl;
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            cin>>matrix[i][j];
        }
    }
    int target;
    cout<<"Enter Target Element : ";
    cin>>target;
    bool flag = false;  // not prsent target
    int i = 0;     // first row pr point kr rha hai
    int j = n-1;  // last cols pr point kr rha hai
    while(i<=m-1 && j>=0)  // i row se bahar nhi jana chaiyea aur j 0 se kam rhena chaiyea
    {
        if(matrix[i][j]==target)
            flag = true;
        else if(matrix[i][j]>target)
            j--;
        else
            i++;
    }
    if(flag==true)
        cout<<"Target is Present ";
    else
        cout<<"Target is not Present ";
}