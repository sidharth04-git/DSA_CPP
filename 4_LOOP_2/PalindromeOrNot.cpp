#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int a = n;
    //bool flag = true; // Is Palindrome
    int last_digit;
    int reverse = 0;
    // Condition
    while(n>0)
    {
        reverse*=10;
        last_digit = n%10;
        reverse+=last_digit;
        n = n/10;
    }
    if(a==reverse)
        cout<<"The Given Number "<<a<<" is Palindrome ";
    else
         cout<<"The Given Number "<<a<<" is not Palindrome ";
}
