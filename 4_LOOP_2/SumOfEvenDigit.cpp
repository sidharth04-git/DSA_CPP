#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int last_digit;
    int sum = 0;
    while(n>0)
    {
        if(n%2==0)
        {
            last_digit = n%10;
            sum = sum + last_digit;
        }
        n = n/10;
    }
    cout<<"Sum of Even Digit of the Given Number is "<<sum;
}