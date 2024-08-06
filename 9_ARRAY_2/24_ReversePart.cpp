// In this Program we reverse specific part of Array
#include<iostream>
#include<vector>
using namespace std;
void reversePart(int i , int j , vector<int>&v)
{
    while(i<=j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    cout<<endl;
}

void display(vector<int>&a)
{
    for(int i=0; i<=a.size()-1; i++)
    {
        cout<<a.at(i)<<" ";  // cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>v;
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    cout<<"Enter Array Element : ";
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    // Display
    display(v);
    int s,p;
    cout<<"Enter index from where you want to reverse the Array ";
    cin>>s>>p;
    reversePart(1,3,v);
    display(v);
}