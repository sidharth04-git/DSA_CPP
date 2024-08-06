// To Reverse an Array We have a built in function i.e
// reverse(v.begin(),v.end());
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&a)
{
    for(int i=0; i<=a.size()-1; i++)
    {
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>v;
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    cout<<"Enter Array Elements : ";
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    reverse(v.begin(), v.end());
    display(v);
     
}