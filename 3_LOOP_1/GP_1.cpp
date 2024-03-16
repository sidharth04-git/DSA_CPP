// GP - 1,2,4,8,16,32 upto n terms
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n ";
    cin>>n;
    int a = 1;
    for(int i=1; i<=n; i++)
    {
        cout<<a<<" ";
        a*=2;
    }
}