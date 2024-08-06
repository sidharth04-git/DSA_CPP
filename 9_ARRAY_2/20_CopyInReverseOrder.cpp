#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v) // pass by reference
{
    for(int i=0; i<v.size(); i++)  // v.size()-1
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>v1;
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    cout<<"Enter Array Elements : ";
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        v1.push_back(q);
    }

    display(v1);  // fn to display the vector

    vector<int>v2(v1.size());

    for(int i=0; i<=v1.size()-1; i++)
    {
        v2[i] = v1[v1.size()-1-i];  // Formula
    }

    display(v2);  
}