#include<iostream>
#include<vector>
using namespace std;
void sort0and1(vector<int>&v)
{
    int zero = 0;
    int one = 0;
    for(int i=0; i<=v.size()-1; i++)
    {
        if(v[i]==0)
            zero++;
        else
            one++;
    }

    // Elements Filling

    for(int i=0; i<=v.size()-1; i++)
    {
        if(i<zero)
            v[i] = 0;
        else
            v[i] = 1;
    }
}

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
    cout<<"Enter Array Elements : "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    sort0and1(v); 
    display(v);
} 


