// In Vector We use v.capacity() to know the capacity of vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(4);
    cout<<v.capacity()<<endl;
    v.push_back(7);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;

// Real Capacity Batata hai aur size equal ho jane pr 2x badh jayega 
}