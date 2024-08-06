#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int>&v)
{
    for(int i=0; i<=v.size()-1; i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter Array Size : "<<endl;
    cin>>n;
    vector<int>v;
    cout<<"Enter Array Elements : ";
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);

    // Sort Function
    
    sort(v.begin(), v.end());

    display(v);




}