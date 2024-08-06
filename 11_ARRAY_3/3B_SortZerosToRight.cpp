#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a)
{
    for(int i=0; i<=a.size()-1; i++)
    {
        cout<<a[i]<<" ";
    }
}
void sort0(vector<int>&v)
{
    int n = v.size();
    int nonzero = 0;
    for(int i=0; i<=n-1; i++)
    {
        if(v[i]!=0)    // non zero hai swap kar do
        {
            int temp = v[nonzero];
            v[nonzero] = v[i];
            v[i] = temp;
            nonzero++;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    vector<int>v;
    cout<<"Enter Array Elements : "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    sort0(v);
    display(v);
}

