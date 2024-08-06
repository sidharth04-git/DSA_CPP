// Reverse without using extra Array
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a)
{
    for(int i=0; i<a.size(); i++)
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
    cout<<"Enter Array Element : ";
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);

    // int i=0; 
    // int j= v.size()-1;
    // while(i<=j)
    // {
    //     int temp = v[j];
    //     v[i] = v[j];
    //     v[j] = temp;
    //     i++;
    //     j++;
    // }

    // SWAP or Reverse Array Code

    for(int i=0 , j=v.size()-1; i<=j; i++,j--)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }

    display(v);

}