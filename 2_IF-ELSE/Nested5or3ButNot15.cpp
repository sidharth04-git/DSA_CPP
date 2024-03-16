#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number ";
    cin>>n;
    if(n%3==0 || n%5==0)
    {
        if(n%15!=0)
        cout<<"The Number is Divisible by 3 or 5 but not 15 ";
        else
        cout<<"The Number is Divisible by 15 ";
    }
    else
    {
        cout<<"Not Matching Condition ";
    }
}