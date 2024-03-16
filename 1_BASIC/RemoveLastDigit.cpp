#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int last_digit = n/10;
    cout<<"After Removing the Last Digit the New Number will be "<<last_digit;
}