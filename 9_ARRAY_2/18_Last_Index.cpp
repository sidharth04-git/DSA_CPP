#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    cout<<"Enter Vector Elements : ";
    // INPUT
    for(int i=0; i<=n-1; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int idx = -1;
    int a;
    cout<<"Enter Element which index you want to know : ";
    cin>>a;
    // OUTPUT
    for(int i=n-1; i>=0; i--) // Ulta Loop
    {
        if(v[i]==a)
        {
            idx = i;
            break; 
        }
    }
    cout<<idx;
}
