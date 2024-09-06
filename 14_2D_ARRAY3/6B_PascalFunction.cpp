#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>pascal(int numRows)
{
    int m = numRows;
    vector<vector<int>>v;
    for(int i=0; i<=m-1; i++)
    {
        vector<int>a(i+1);
        v.push_back(a);
    } 
    // GENERATE
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
    return v;
}
int main()
{
    int m;
    cout<<"Enter Row Number of Pascal Triangle : "<<endl;
    cin>>m;
    vector<vector<int>> v = pascal(m);
    // PRINT PASCAL'S TRIANGLE
    for(int i=0; i<=m-1; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}