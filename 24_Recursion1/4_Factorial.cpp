#include<iostream>
using namespace std;
int fact(int n){  // formal arguments
    int f = 1;
    for(int i=2; i<=n; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    cout<<fact(n); // actual parameter
}