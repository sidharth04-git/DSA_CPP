// v.push.back() , v.pop.back() , v.size() , v.capacity()
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(7);
    v.push_back(1);
    v.push_back(8);
    v.push_back(6);
    v.push_back(3);
    v.push_back(0);
    v.push_back(14);
    // print using for loop and use i=0 to i<size() fn. in conditon
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" "; // use [] as same as array
    }
    cout<<endl;     // next line
    v.pop_back();  // delete element from end
    v.pop_back(); // only size will update capacity remains same
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" "; // use [] as same as array
    }
}