#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Row ";
    cin>>n;
    int mid = n/2 + 1; // Formula
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==mid || j==mid)
                cout<<"* ";
            else    
                cout<<"  ";
        }
        cout<<endl;
    }
}