#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>&a)
{
    a.at(0) = 0;
    return;
}
int main()
{
    vector<int>v;
    int n;
    cout<<"Enter Size of Vector : ";
    cin>>n;
    cout<<"Enter Vector Elements : ";
    // Vector INPUT
    for(int i=0; i<=n-1; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    // Vector OUTPUT
    for(int i=0; i<=n-1; i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    change(v);          // Pass By Reference 

    for(int i=0; i<=n-1; i++)
    {
        cout<<v.at(i)<<" ";
    }
}