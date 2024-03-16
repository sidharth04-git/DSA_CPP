#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int last_digit = n%10;
    cout<<"Last Digit of the Given Number is "<<last_digit;
}