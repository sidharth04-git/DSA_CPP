// We use extra variable and then push_back it into the vector 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v; // vector size not given --> 0 size
    int n;  // use n for size
    cout<<"Enter Vector Size : ";
    cin>>n;
    cout<<"Enter Vector Elements : ";
    for(int i=0; i<=n-1; i++)
    {
        int x; // x ke through vector me push_back krege
        cin>>x;
        v.push_back(x);  // to take input from user
    }
    // Output
    for(int i=0; i<=n-1; i++)
    {
        cout<<v[i]<<" ";  // to print output
    }
}