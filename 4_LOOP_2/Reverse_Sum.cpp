#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number n = ";
    cin>>n;
    int original = n;
    int last_digit;
    int reverse;
    while(n>0)
    
    { 
        reverse = reverse * 10;
        last_digit = n%10;
        reverse = reverse + last_digit;
        n = n/10;
    }
    int sum = original+reverse;
    cout<<"Original Number = "<<original<<endl;
    cout<<"Reversed Number = "<<reverse<<endl;
    cout<<"Sum of Reverse and Original is "<<sum;


}