#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number n : ";
    cin>>n;
    int product = 1;
    int last_digit;
    while(n>0)
    {
        if(n%2==0)
        {
            last_digit = n%10;
            product = product*last_digit;
        }
        n =  n/10;
    }
    cout<<"Product of Even Digit of the Given Number is "<<product;
}