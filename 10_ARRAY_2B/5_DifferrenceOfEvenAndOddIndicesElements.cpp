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
    cout<<"Enter Size : ";
    cin>>n;
    cout<<"Enter Array Elements : ";
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }

    display(v);

    // Differene B/w Sum of Element at even indices and element at odd indices

    int even_sum = 0;
    int odd_sum = 0;
    for(int i=0; i<=v.size()-1; i++)
    {
        if(i%2==0)
        {
            even_sum+=v[i];
        }
        else
        {
            odd_sum+=v[i];
        }
    }
    // int difference;

    cout<<even_sum-odd_sum<<endl;
}










