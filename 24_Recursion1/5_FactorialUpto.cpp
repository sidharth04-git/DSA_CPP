#include<iostream>
using namespace std;

void factUpto(int n){
    for(int j=1; j<=n; j++)
    {
        int f = 1;
        for(int i=2; i<=j; i++)
        {
            f = f * i;
        }
        cout<<f<<endl;
    }
    
}

int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    factUpto(n);
}

// Time Complexity - o(n^2)