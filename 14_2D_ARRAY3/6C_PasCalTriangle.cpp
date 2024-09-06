#include<iostream>
#include<vector>
using namespace std;
vector<int> getRow(int rowIndex)
{
    int m = rowIndex;  // nowindex store kr liye jiska poora element nikalnna hai
    vector<vector<int>>v;
    for(int i=0; i<=m; i++)
    {
        vector<int>a(i+1);
        v.push_back(a);
    }
    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(j==0 || j==i)
                v[i][j] = 1;
            else
                v[i][j] = v[i-1][j]+v[i-1][j-1];
        }
    }
    return v[m];
}
int main()
{
    int m;
    cout<<"Enter row of Pascal Triangle Which All the Elements you want  : ";
    cin>>m;
    vector<int>ans = getRow(m);
    // Display the m row vector which all element we want to display
    for(int i=0; i<=m; i++)
    {
        cout<<ans[i]<<" ";
    }


}