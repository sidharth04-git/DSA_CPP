// v.at() operation is used to print or update value at specific index 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(7);
    v.push_back(2);
    v.push_back(1);
    v.push_back(6);
    cout<<v.at(1)<<endl;
    v.at(1) = 8;  // update
    cout<<v.at(1)<<endl;  // access value of specific index
}