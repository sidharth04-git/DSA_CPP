#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m;
    cout<<"Enter Row of Pascal's Triangle ";
    cin>>m;
    vector< vector<int> >v;  // 2D Vector 

    // 1. Create Vector Like stair case

    for(int i=0; i<=m-1; i++)
    {
        vector<int>a(i+1); // vector pushback hoga 
        v.push_back(a);
    }

    // 2. Generate Pascal Triangle

    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(j==0 || j==i)
                v[i][j] = 1;
            else
                v[i][j] = v[i-1][j]+v[i-1][j-1];
        }
    }

    // Printing Pascal Triangle

    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}