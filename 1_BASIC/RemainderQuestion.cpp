#include<iostream>
using namespace std;
int main()
{
    int a,b,q,r;
    cout<<"Enter Dividend ";
    cin>>a;
    cout<<"Enter Divisor ";
    cin>>b;
    q = a/b;
    // Dividend  = Divisor * Quotient + Remainder
    r = a - (b*q);
    cout<<"Remainder is "<<r<<endl;
}


