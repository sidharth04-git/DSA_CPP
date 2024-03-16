#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    if((n%3==0 || n%5==0) && n%15!=0)
        cout<<"The Number is Divisible by 3 or 5 But Not 15 ";
    else
        cout<<"Condition Not Match ";
    
}