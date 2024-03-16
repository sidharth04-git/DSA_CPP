#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int product = 1;
    for(int i=2; i<=n; i++)
    {
        product = product*i;  // factorial condition
    }
    cout<<"Factorial is "<<product;
}