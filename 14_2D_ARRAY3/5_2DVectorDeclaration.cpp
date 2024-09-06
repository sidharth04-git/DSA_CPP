#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector< vector<int> >v(3,vector<int>(4,5));
    cout<<v.size()<<endl;  // Size of row  i.e -> 3
    cout<<v[0].size()<<endl; // Column ka size bata dega i.e -> 4
    cout<<v[2][2]<<endl;
    for(int i=0; i<=v.size()-1; i++)
    {
        for(int j=0; j<v[0].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
