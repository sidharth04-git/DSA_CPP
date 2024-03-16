// 1 3 5 7 9 ........
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n ";
    cin>>n;
    for(int i=1; i<=(2*n-1); i+=2)
    {
        cout<<i<<" ";
    }
}