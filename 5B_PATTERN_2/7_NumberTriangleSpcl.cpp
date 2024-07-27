// 1 
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int k=i; k>=1; k--)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
}