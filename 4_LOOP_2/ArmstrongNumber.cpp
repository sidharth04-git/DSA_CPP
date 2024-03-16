#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int original = n;
    int last_digit;
    int armstrong;
    while(n>0)
    {
        last_digit = n%10;
        armstrong += (last_digit)*(last_digit)*(last_digit);
        n = n/10;
    }
    if(original==armstrong)
        cout<<"The Given Number is Armstrong Number ";
    else
        cout<<"The Given Number is not Armstrong Number ";
}