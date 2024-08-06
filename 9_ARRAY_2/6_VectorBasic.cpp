#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;  // vector<data type>vector_name
    // you need not mention size then do not use [] for input
    v.push_back(4); // inserting
    v.push_back(2);
    v.push_back(1);
    v.push_back(7);
    // if you want to access or update then use []
    v[0] = 88;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";

}