// Initally agar kisi vector me size de dege at the time of declaration
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(5);
    cout<<"Size is "<<v.size()<<endl;
    cout<<"Capacity is "<<v.capacity()<<endl;
    cout<<v[0]<<endl;  // 0 default value
    cout<<v[4]<<endl;       // 0 default value

    vector<int>v1(5,7);
    cout<<"Size is "<<v1.size()<<endl;
    cout<<"Capacity is "<<v1.capacity()<<endl;
    cout<<v1[0]<<endl;  // 7
    cout<<v1[4]<<endl; //  7

    
}