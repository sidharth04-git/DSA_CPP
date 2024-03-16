#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int last_digit,reverse;
    reverse = 0;
    while(n>0)
    {
        reverse = reverse*10;
        last_digit = n%10;
        reverse = reverse + last_digit;
        n = n/10;
    }
    cout<<reverse;
}
