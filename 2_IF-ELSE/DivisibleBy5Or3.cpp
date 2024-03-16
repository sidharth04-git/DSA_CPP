#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number ";
    cin>>n;
    if(n%3==0 || n%5==0)
        cout<<"The Number is Divisible by 5 or 3 ";
    else
        cout<<"The Number is not Divisible by 5 or 3 ";
}