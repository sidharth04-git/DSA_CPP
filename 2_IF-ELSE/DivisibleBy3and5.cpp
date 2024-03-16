#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number ";
    cin>>n;
    if(n%3==0 && n%5==0)
    cout<<"The Number is Divisible By 3 and 5 ";
    else
    cout<<"The Number is not Divisible By 3 and 5 ";
}