#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number  : ";
    cin>>n;
    int a = n;
    int sum = 0;
    int last_digit;
    while(n>0)
    {
        last_digit = n%10;
        sum = sum + last_digit;
        n = n/10;
    }  
    if(a%sum==0)
        cout<<a<<" is Niven Number ";
    else
        cout<<a<<" is not Niven Number ";
}
