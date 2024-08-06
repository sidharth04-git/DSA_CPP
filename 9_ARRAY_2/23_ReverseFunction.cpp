// Reverse Function to Reverse an Array
#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>&v)
{
    int i = 0;
    int j = v.size() - 1;
    for(i=0,j=v.size()-1; i<=j; i++,j--)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    cout<<endl;
}
void display(vector<int>&a)
{
    for(int i=0; i<=a.size()-1; i++)
    {
        cout<<a[i]<<" ";  // a.at(i)<<" "
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
    display(v); // this function used to display the array

    reverse(v);

    display(v);               
}


