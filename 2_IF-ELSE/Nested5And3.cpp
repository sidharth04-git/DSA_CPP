#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number ";
    cin>>n;
    if(n%5==0)
    {
        if(n%3==0)
            cout<<"The Number is Divisible by 5 and 3 ";
        else
            cout<<"The Number is Divisible by 5 but not 3 ";
    }
    else
        cout<<"Not Matching Conditon";
}