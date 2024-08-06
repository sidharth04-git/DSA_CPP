#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Array size : "<<endl;
    cin>>n;
    vector<int>height;
    cout<<"Enter Elements : "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        int q;
        cin>>q;
        height.push_back(q);
    }
    vector<int>v(n);
    v[0] = -1;
    int max = height[0];
    for(int i=1; i<=n-1; i++)
    {
        v[i] = max;
        if(max<height[i])
            max = height[i];
    }
    // Display or Print
    cout<<"Previous Greatest Elements in Array are : "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        cout<<v[i]<<" ";
    }
}