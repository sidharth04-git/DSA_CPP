#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(7);// S->1 , C-> 1
    v.push_back(9);// S->2 , C-> 2
    v.push_back(1);// S->3 , C-> 4
    v.push_back(8);// S->4 , C-> 4
    v.push_back(7);// S->5 , C-> 16
    v.push_back(9);// S->6 , C-> 16
    v.push_back(1);// S->7 , C-> 16
    v.push_back(8);// S->8 , C-> 16
    v.push_back(7);// S->9 , C-> 16
    v.push_back(9);// S->10 , C-> 16
    v.push_back(1);// S->11 , C-> 16
    v.push_back(8);// S->12 , C-> 16
    v.push_back(7);// S->13 , C-> 16
    v.push_back(9);// S->14 , C-> 16
    v.push_back(1);// S->15 , C-> 16
    v.push_back(8);// S->16 , C-> 16
    v.push_back(8);// S->17 , C-> 32

    cout<<"Size is "<<v.size()<<endl;
    cout<<"Capacity is "<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    
    // AFTER POP BACK

    cout<<"Size is "<<v.size()<<endl;
    cout<<"Capacity is "<<v.capacity();
}