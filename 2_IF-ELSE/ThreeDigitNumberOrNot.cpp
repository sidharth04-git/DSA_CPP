#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number ";
    cin>>n;
    if(n>=100 && n<=999)
    {
        cout<<"The Number is Three Digit Number ";
    }
    else
    {
        cout<<"The Number is Not a Three Digit Number ";
    }
}