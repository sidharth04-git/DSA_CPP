// 0--> Red , 1--> White , 2--> Blue      
#include<iostream>
#include<vector>
using namespace std;

void colorSort(vector<int>&v)
{
    int n = v.size();
    int noz = 0;
    int noo = 0;
    int notwo = 0;
    for(int i=0; i<=n-1; i++)
    {
        if(v[i]==0)
            noz++;
        else if(v[i]==1)
            noo++;
        else
            notwo++;
    }
    // Fill in Array 
    for(int i=0; i<=n-1; i++)
    {
        if(i<(noz))
            v[i] = 0;
        else if(i<(noz+noo))
            v[i] = 1;
        else
            v[i] = 2;
    }
}

void display(vector<int>&a)
{
    for(int i=0; i<=a.size()-1; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter Array Size : ";
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
    colorSort(v);
    display(v);
}









