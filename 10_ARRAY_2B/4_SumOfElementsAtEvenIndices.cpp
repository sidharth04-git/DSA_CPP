// Sum of Elements at Even Indices
#include<iostream>
#include<vector>
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
    int sum = 0;

    for(int i=0; i<=v.size()-1; i++)
    {
        if(i%2==0 || i==0)
        {
            sum+=v[i];
        }
    }
    cout<<"Sum of Elements at Even Indices are "<<sum;
}