#include<iostream>
#include<vector>
using namespace std;
// Sort Fn.
void sort_negativeAndPostive(vector<int>&v)
{
    int n = v.size();
    int i = 0;
    int j = n-1;
    while(i<=j)
    {
        if(v[i]>=0)
            i++;
        else if(v[j]<0)
            j--;
        else if(v[i]<0 && v[j]>=0)
        {
            // Swap Code
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}

// Display Fn.
void display(vector<int>&v)
{
    for(int i=0; i<=v.size()-1; i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
// Main Fn.
int main()
{
    int n;
    vector<int>v;
    cout<<"Enter Size : ";
    cin>>n;
    cout<<"Enter Elements : ";
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    sort_negativeAndPostive(v);
    display(v);
}