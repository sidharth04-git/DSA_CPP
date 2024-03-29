// Sort is used to arrange vector in ascending form
#include<iostream>
#include<vector>
#include<algorithm>  // must be include to use sort fn.
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(8);
    v.push_back(14);
    v.push_back(2);
    v.push_back(4);
    // Print vector
    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";  // cout<<v[i]<<" ";
    }
    cout<<endl; // next line

    sort(v.begin(),v.end());  // sort the vector in ascending order

    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" "; // cout<<v[i]<<" ";
    }
}
