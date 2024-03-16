#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number of Term : ";
    cin>>n;
    int a = 1, b = 1 , sum = 0;
    for(int i=1; i<=n; i++)
    {
        cout<<a<<" "; // by this line we print the series of fibonacc
        sum = a+b;
        a = b;
        b = sum;
    }
}